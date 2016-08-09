/* PANDABEGINCOMMENT
 *
 * Authors:
 *  Tim Leek               tleek@ll.mit.edu
 *  Ryan Whelan            rwhelan@ll.mit.edu
 *  Joshua Hodosh          josh.hodosh@ll.mit.edu
 *  Michael Zhivich        mzhivich@ll.mit.edu
 *  Brendan Dolan-Gavitt   brendandg@gatech.edu
 *
 * This work is licensed under the terms of the GNU GPL, version 2.
 * See the COPYING file in the top-level directory.
 *
PANDAENDCOMMENT */

extern "C" {
#define __STDC_FORMAT_MACROS
#include "config.h"
#include "qemu-common.h"
#include "cpu.h"

#include "panda_common.h"
#include "panda_plugin.h"
#include "panda_plugin_plugin.h"
#include <stdio.h>
#include <stdlib.h>
}

#include <cassert>
#include <functional>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <memory>
#include <vector>

#include "syscalls2.h"

bool translate_callback(CPUState *env, target_ulong pc);
int exec_callback(CPUState *env, target_ulong pc);

extern "C" {
bool init_plugin(void *);
void uninit_plugin(void *);

void registerExecPreCallback(void (*callback)(CPUState*, target_ulong));

// PPP code
#include "gen_syscalls_ext_typedefs.h"
#include "gen_syscall_ppp_boilerplate_enter.cpp"
#include "gen_syscall_ppp_boilerplate_return.cpp"
#include "gen_syscall_ppp_register_enter.cpp"
#include "gen_syscall_ppp_register_return.cpp"

}
// Used to confirm that entry into syscalls2 exec callback is from the sycalls2 translate callback
std::set<std::pair <target_ulong, target_ulong>> syscallPCpoints; 
//std::set<target_ulong> syscallPCpoints; 

// Forward declarations
int32_t get_s32_generic(CPUState *env, uint32_t argnum);
int64_t get_s64_generic(CPUState *env, uint32_t argnum);
int32_t get_return_s32_generic(CPUState *env, uint32_t argnum);
int64_t get_return_s64_generic(CPUState *env, uint32_t argnum);

// Reinterpret the ulong as a long. Arch and host specific.
target_long get_return_val_x86(CPUState *env){
#if defined(TARGET_I386)
    return static_cast<target_long>(env->regs[R_EAX]);
#endif
    return 0;
}

target_long get_return_val_arm(CPUState *env){
#if defined(TARGET_ARM)
    return static_cast<target_long>(env->regs[0]);
#endif
    return 0;
}

target_ulong mask_retaddr_to_pc(target_ulong retaddr){
    target_ulong mask = std::numeric_limits<target_ulong>::max() -1;
    return retaddr & mask;
}

// Return address calculations
target_ulong calc_retaddr_windows_x86(CPUState* env, target_ulong pc) {
#if defined(TARGET_I386)
    target_ulong retaddr = 0;
    panda_virtual_memory_rw(env, EDX, (uint8_t *) &retaddr, 4, false);
    return retaddr;
#else
    // shouldn't happen
    assert (1==0);
#endif
}

target_ulong calc_retaddr_linux_x86(CPUState* env, target_ulong pc) {
#if defined(TARGET_I386)
    unsigned char buf[2] = {};
    panda_virtual_memory_rw(env, pc, buf, 2, 0);
    // Check if the instruction is syscall (0F 05) or  sysenter (0F 34)
    if ((buf[0]== 0x0F && buf[1] == 0x05) || (buf[0]== 0x0F && buf[1] == 0x34)) {
        return pc+11;
    }
    // Check if the instruction is int 0x80 (CD 80)
    else if (buf[0]== 0xCD && buf[1] == 0x80) {
        return pc+2;
    }
    // shouldn't happen
    else {
        assert(1==0);
    }
#else
    // shouldn't happen
    assert (1==0);
#endif
}

target_ulong calc_retaddr_linux_arm(CPUState* env, target_ulong pc) {
#if defined(TARGET_ARM)
    // Normal syscalls: return addr is stored in LR
    // Except that we haven't run the SWI instruction yet! LR is where libc will return to!
    //return mask_retaddr_to_pc(env->regs[14]);

    // Fork, exec
    uint8_t offset = 0;
    if(env->thumb == 0){
        offset = 4;
    } else {
        offset = 2;
    }
    return mask_retaddr_to_pc(pc + offset);
#else
    // shouldnt happen
    assert (1==0);
#endif
}

// Argument getting (at syscall entry)
uint32_t get_linux_x86_argnum(CPUState *env, uint32_t argnum) {
#if defined(TARGET_I386)
    switch (argnum) {
    case 0: 
        return env->regs[R_EBX];
        break;
    case 1:
        return env->regs[R_ECX];
        break;
    case 2:
        return env->regs[R_EDX];
        break;
    case 3:
        return env->regs[R_ESI];
        break;
    case 4:
        return env->regs[R_EDI];
        break;
    case 5:
        return env->regs[R_EBP];
        break;
    }
    assert (1==0);
#endif
    return 0;
}

static uint32_t get_win_syscall_arg(CPUState* env, int nr) {
#if defined(TARGET_I386)
    // At sysenter on Windows7, args start at EDX+8
    uint32_t arg = 0;
    panda_virtual_memory_rw(env, env->regs[R_EDX] + 8 + (4*nr),
                            (uint8_t *) &arg, 4, false);
    return arg;
#endif
    return 0;
}

uint32_t get_32_linux_x86 (CPUState *env, uint32_t argnum) {
    assert (argnum < 6);
    return (uint32_t) get_linux_x86_argnum(env, argnum);
}
uint32_t get_32_linux_arm (CPUState *env, uint32_t argnum) {
    assert (argnum < 7);
    return (uint32_t) env->regs[argnum];
}
uint32_t get_32_windows_x86 (CPUState *env, uint32_t argnum) {
    return (uint32_t) get_win_syscall_arg(env, argnum);
}

uint64_t get_64_linux_x86(CPUState *env, uint32_t argnum) {
    assert (argnum < 6);
    return (((uint64_t) get_linux_x86_argnum(env, argnum)) << 32) | (get_linux_x86_argnum(env, argnum));
}

uint64_t get_64_linux_arm(CPUState *env, uint32_t argnum) {
    assert (argnum < 7);
    return (((uint64_t) env->regs[argnum]) << 32) | (env->regs[argnum+1]);
}

uint64_t get_64_windows_x86(CPUState *env, uint32_t argnum) {
    assert (false && "64-bit arguments not supported on Windows 7 x86");
    return 0;
}

// Argument getting (at syscall return)
static uint32_t get_win_syscall_return_arg(CPUState* env, int nr) {
#if defined(TARGET_I386)
    // At sysenter on Windows7, args start at EDX+8
    uint32_t arg = 0;
    panda_virtual_memory_rw(env, ESP + 4 + (4*nr),
                            (uint8_t *) &arg, 4, false);
    return arg;
#else
    return 0;
#endif
}

uint32_t get_return_32_windows_x86 (CPUState *env, uint32_t argnum) {
    return get_win_syscall_return_arg(env, argnum);
}

uint64_t get_return_64_windows_x86(CPUState *env, uint32_t argnum) {
    assert (false && "64-bit arguments not supported on Windows 7 x86");
}

enum ProfileType {
    PROFILE_LINUX_X86,
    PROFILE_LINUX_ARM,
    PROFILE_WINDOWSXP_SP2_X86,
    PROFILE_WINDOWSXP_SP3_X86,
    PROFILE_WINDOWS7_X86,
    PROFILE_LAST
};

struct Profile {
    void         (*enter_switch)(CPUState *, target_ulong);
    void         (*return_switch)(CPUState *, target_ulong, target_ulong, ReturnPoint &);
    target_long  (*get_return_val )(CPUState *);
    target_ulong (*calc_retaddr )(CPUState *, target_ulong);
    uint32_t     (*get_32 )(CPUState *, uint32_t);
    int32_t      (*get_s32)(CPUState *, uint32_t);
    uint64_t     (*get_64)(CPUState *, uint32_t);
    int64_t      (*get_s64)(CPUState *, uint32_t);
    uint32_t     (*get_return_32 )(CPUState *, uint32_t);
    int32_t      (*get_return_s32)(CPUState *, uint32_t);
    uint64_t     (*get_return_64)(CPUState *, uint32_t);
    int64_t      (*get_return_s64)(CPUState *, uint32_t);
};

Profile profiles[PROFILE_LAST] = {
    {
        .enter_switch = syscall_enter_switch_linux_x86,
        .return_switch = syscall_return_switch_linux_x86,
        .get_return_val = get_return_val_x86,
        .calc_retaddr = calc_retaddr_linux_x86,
        .get_32 = get_32_linux_x86,
        .get_s32 = get_s32_generic,
        .get_64 = get_64_linux_x86,
        .get_s64 = get_s64_generic,
        .get_return_32 = get_32_linux_x86,
        .get_return_s32 = get_return_s32_generic,
        .get_return_64 = get_64_linux_x86,
        .get_return_s64 = get_return_s64_generic,
    },
    {
        .enter_switch = syscall_enter_switch_linux_arm,
        .return_switch = syscall_return_switch_linux_arm,
        .get_return_val = get_return_val_arm,
        .calc_retaddr = calc_retaddr_linux_arm,
        .get_32 = get_32_linux_arm,
        .get_s32 = get_s32_generic,
        .get_64 = get_64_linux_arm,
        .get_s64 = get_s64_generic,
        .get_return_32 = get_32_linux_arm,
        .get_return_s32 = get_return_s32_generic,
        .get_return_64 = get_64_linux_arm,
        .get_return_s64 = get_return_s64_generic,
    },
    {
        .enter_switch = syscall_enter_switch_windowsxp_sp2_x86,
        .return_switch = syscall_return_switch_windowsxp_sp2_x86,
        .get_return_val = get_return_val_x86,
        .calc_retaddr = calc_retaddr_windows_x86,
        .get_32 = get_32_windows_x86,
        .get_s32 = get_s32_generic,
        .get_64 = get_64_windows_x86,
        .get_s64 = get_s64_generic,
        .get_return_32 = get_return_32_windows_x86,
        .get_return_s32 = get_return_s32_generic,
        .get_return_64 = get_return_64_windows_x86,
        .get_return_s64 = get_return_s64_generic,
    },
    {
        .enter_switch = syscall_enter_switch_windowsxp_sp3_x86,
        .return_switch = syscall_return_switch_windowsxp_sp3_x86,
        .get_return_val = get_return_val_x86,
        .calc_retaddr = calc_retaddr_windows_x86,
        .get_32 = get_32_windows_x86,
        .get_s32 = get_s32_generic,
        .get_64 = get_64_windows_x86,
        .get_s64 = get_s64_generic,
        .get_return_32 = get_return_32_windows_x86,
        .get_return_s32 = get_return_s32_generic,
        .get_return_64 = get_return_64_windows_x86,
        .get_return_s64 = get_return_s64_generic,
    },
    {
        .enter_switch = syscall_enter_switch_windows7_x86,
        .return_switch = syscall_return_switch_windows7_x86,
        .get_return_val = get_return_val_x86,
        .calc_retaddr = calc_retaddr_windows_x86,
        .get_32 = get_32_windows_x86,
        .get_s32 = get_s32_generic,
        .get_64 = get_64_windows_x86,
        .get_s64 = get_s64_generic,
        .get_return_32 = get_return_32_windows_x86,
        .get_return_s32 = get_return_s32_generic,
        .get_return_64 = get_return_64_windows_x86,
        .get_return_s64 = get_return_s64_generic,
    }
};

Profile *syscalls_profile;

// Wrappers
target_long  get_return_val (CPUState *env) {
    return syscalls_profile->get_return_val(env);
}
target_ulong calc_retaddr (CPUState *env, target_ulong pc) {
    return syscalls_profile->calc_retaddr(env, pc);
}
uint32_t get_32(CPUState *env, uint32_t argnum) {
    return syscalls_profile->get_32(env, argnum);
}
int32_t get_s32(CPUState *env, uint32_t argnum) {
    return syscalls_profile->get_s32(env, argnum);
}
uint64_t get_64(CPUState *env, uint32_t argnum) {
    return syscalls_profile->get_64(env, argnum);
}
int64_t get_s64(CPUState *env, uint32_t argnum) {
    return syscalls_profile->get_s64(env, argnum);
}
uint32_t get_return_32 (CPUState *env, uint32_t argnum) {
    return syscalls_profile->get_return_32(env, argnum);
}
int32_t get_return_s32(CPUState *env, uint32_t argnum) {
    return syscalls_profile->get_return_s32(env, argnum);
}
uint64_t get_return_64(CPUState *env, uint32_t argnum) {
    return syscalls_profile->get_return_64(env, argnum);
}
int64_t get_return_s64(CPUState *env, uint32_t argnum) {
    return syscalls_profile->get_return_s64(env, argnum);
}

int32_t get_s32_generic(CPUState *env, uint32_t argnum) {
    return (int32_t) get_32(env, argnum);
}

int64_t get_s64_generic(CPUState *env, uint32_t argnum) {
    return (int64_t) get_64(env, argnum);
}

int32_t get_return_s32_generic(CPUState *env, uint32_t argnum) {
    return (int32_t) get_return_32(env, argnum);
}

int64_t get_return_s64_generic(CPUState *env, uint32_t argnum) {
    return (int64_t) get_return_64(env, argnum);
}

std::vector<void (*)(CPUState*, target_ulong)> preExecCallbacks;

void registerExecPreCallback(void (*callback)(CPUState*, target_ulong)){
    preExecCallbacks.push_back(callback);
}

// always return to same process
static std::map < std::pair < target_ulong, target_ulong >, ReturnPoint > returns; 

void appendReturnPoint(ReturnPoint &rp){
    returns[std::make_pair(rp.retaddr,rp.proc_id)] = rp;
}


static int returned_check_callback(CPUState *env, TranslationBlock* tb){
    // check if any of the internally tracked syscalls has returned
    // only one should be at its return point for any given basic block
    std::pair < target_ulong, target_ulong > ret_key = std::make_pair(tb->pc, panda_current_asid(env));
    if (returns.count(ret_key) != 0) {
        ReturnPoint &retVal = returns[ret_key];
        syscalls_profile->return_switch(env, tb->pc, retVal.ordinal, retVal);
        // used by remove_if to delete from returns list those values
        // that have been processed
        //        retVal.retaddr = retVal.proc_id = 0;
        returns.erase(ret_key);
    }
    
    return false;
}


// This will only be called for instructions where the
// translate_callback returned true
int exec_callback(CPUState *env, target_ulong pc) {
    // check if pc, asid pair was for a valid syscall translation point
    // if so run exec_callback
    if (syscallPCpoints.end() != syscallPCpoints.find(std::make_pair(pc, panda_current_asid(env)))){
        // run any code we need to update our state
        for(const auto callback : preExecCallbacks){
            callback(env, pc);
        }
        syscalls_profile->enter_switch(env, pc);
    }
    return 0;
}

// Check if the instruction is sysenter (0F 34),
// syscall (0F 05) or int 0x80 (CD 80)
bool translate_callback(CPUState *env, target_ulong pc) {
#if defined(TARGET_I386)
    unsigned char buf[2] = {};
    panda_virtual_memory_rw(env, pc, buf, 2, 0);
    // Check if the instruction is syscall (0F 05)
    if (buf[0]== 0x0F && buf[1] == 0x05) {
        syscallPCpoints.insert(std::make_pair(pc, panda_current_asid(env)));
        return true;
    }
    // Check if the instruction is int 0x80 (CD 80)
    else if (buf[0]== 0xCD && buf[1] == 0x80) {
        syscallPCpoints.insert(std::make_pair(pc, panda_current_asid(env)));
        return true;
    }
    // Check if the instruction is sysenter (0F 34)
    else if (buf[0]== 0x0F && buf[1] == 0x34) {
        syscallPCpoints.insert(std::make_pair(pc, panda_current_asid(env)));
        return true;
    }
    else {
        return false;
    }
#elif defined(TARGET_ARM)
    unsigned char buf[4] = {};

    // Check for ARM mode syscall
    if(env->thumb == 0) {
        panda_virtual_memory_rw(env, pc, buf, 4, 0);
        // EABI
        if ( ((buf[3] & 0x0F) ==  0x0F)  && (buf[2] == 0) && (buf[1] == 0) && (buf[0] == 0) ) {
            syscallPCpoints.insert(std::make_pair(pc, panda_current_asid(env)));
            return true;
        }
#if defined(CAPTURE_ARM_OABI)
        else if (((buf[3] & 0x0F) == 0x0F)  && (buf[2] == 0x90)) {  // old ABI
            syscallPCpoints.insert(std::make_pair(pc, panda_current_asid(env)));
            return true;
        }
#endif
    }
    else {
        panda_virtual_memory_rw(env, pc, buf, 2, 0);
        // check for Thumb mode syscall
        if (buf[1] == 0xDF && buf[0] == 0){
            syscallPCpoints.insert(std::make_pair(pc, panda_current_asid(env)));
            return true;
        }
    }
    return false;
#endif
}


extern "C" {

panda_arg_list *args;

bool init_plugin(void *self) {

    printf("Initializing plugin syscalls2\n");

// Don't bother if we're not on a supported target
#if defined(TARGET_I386) || defined(TARGET_ARM)
    
    assert (!(panda_os_type == OST_UNKNOWN));
    if (panda_os_type == OST_LINUX) {
#if defined(TARGET_I386) 
        if (panda_os_bits != 32) {
            printf ("syscalls2: no support for 64-bit linux\n");
            return false;
        }
        printf ("syscalls2: using profile for linux x86 32-bit\n");
        syscalls_profile = &profiles[PROFILE_LINUX_X86];
#endif        
#if defined(TARGET_ARM) 
        printf ("syscalls2: using profile for linux arm\n");
        syscalls_profile = &profiles[PROFILE_LINUX_ARM];
#endif
    }
    if (panda_os_type == OST_WINDOWS) {   
#if defined(TARGET_I386) 
        if (panda_os_bits != 32) {
            printf ("syscalls2: no support for 64-bit windows\n");
            return false;
        }        
        if (0 == strcmp(panda_os_details, "xpsp2")) {
            printf ("syscalls2: using profile for windows sp2 x86 32-bit\n");
            syscalls_profile = &profiles[PROFILE_WINDOWSXP_SP2_X86];
        }    
        if (0 == strcmp(panda_os_details, "xpsp3")) {
            printf ("syscalls2: using profile for windows sp3 x86 32-bit\n");
            syscalls_profile = &profiles[PROFILE_WINDOWSXP_SP3_X86];
        }    
        if (0 == strcmp(panda_os_details, "7")) {
            printf ("syscalls2: using profile for windows 7 x86 32-bit\n");
            syscalls_profile = &profiles[PROFILE_WINDOWS7_X86];
        }            
#endif       
    }
    assert (syscalls_profile);

    // not longer necessary!
#if 0
    args = panda_get_args("syscalls");
    const char *profile_name = panda_parse_string(args, "profile", "linux_x86");
    if (0 == strncmp(profile_name, "linux_x86", 8)) {
        syscalls_profile = &profiles[PROFILE_LINUX_X86];
    }
    else if (0 == strncmp(profile_name, "linux_arm", 8)) {
        syscalls_profile = &profiles[PROFILE_LINUX_ARM];
    }
    else if (0 == strncmp(profile_name, "windowsxp_sp2_x86", 13)) {
        syscalls_profile = &profiles[PROFILE_WINDOWSXP_SP2_X86];
    }
    else if (0 == strncmp(profile_name, "windowsxp_sp3_x86", 13)) {
        syscalls_profile = &profiles[PROFILE_WINDOWSXP_SP3_X86];
    }
    else if (0 == strncmp(profile_name, "windows7_x86", 8)) {
        syscalls_profile = &profiles[PROFILE_WINDOWS7_X86];
    }
    else {
        printf ("Unrecognized profile %s\n", profile_name);
        assert (1==0);
    }
#endif


// Don't bother if we're not on a supported target
    // #if defined(TARGET_I386) || defined(TARGET_ARM)
    panda_cb pcb;
    pcb.insn_translate = translate_callback;
    panda_register_callback(self, PANDA_CB_INSN_TRANSLATE, pcb);
    pcb.insn_exec = exec_callback;
    panda_register_callback(self, PANDA_CB_INSN_EXEC, pcb);
    //    pcb.before_block_exec_invalidate_opt = returned_check_callback;
    //   panda_register_callback(self, PANDA_CB_BEFORE_BLOCK_EXEC_INVALIDATE_OPT, pcb);
    pcb.before_block_exec = returned_check_callback;
    panda_register_callback(self, PANDA_CB_BEFORE_BLOCK_EXEC, pcb);
#else

    fwrite(stderr,"The syscalls plugin is not currently supported on this platform.\n");
    return false;
#endif
    return true;
}

void uninit_plugin(void *self) {
}

}
