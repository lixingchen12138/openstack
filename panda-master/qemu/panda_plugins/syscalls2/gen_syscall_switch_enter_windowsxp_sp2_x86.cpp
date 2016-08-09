

extern "C" {
#include "panda_plugin.h" 
}

#include "syscalls2.h" 
#include "panda_common.h"
#include "panda_plugin_plugin.h"

extern "C" {
#include "gen_syscalls_ext_typedefs.h"
#include "gen_syscall_ppp_extern_enter.h"
#include "gen_syscall_ppp_extern_return.h"
}

void syscall_enter_switch_windowsxp_sp2_x86 ( CPUState *env, target_ulong pc ) {  // osarch
#ifdef TARGET_I386                                          // GUARD
    ReturnPoint rp;
    rp.ordinal = EAX;                        // CALLNO
    rp.proc_id = panda_current_asid(env);
    rp.retaddr = calc_retaddr(env, pc);
    switch( EAX ) {                          // CALLNO
// 0 NTSTATUS NtAcceptConnectPort ['PHANDLE PortHandle', ' PVOID PortContext', ' PPORT_MESSAGE ConnectionRequest', ' BOOLEAN AcceptConnection', ' PPORT_VIEW ServerView', ' PREMOTE_PORT_VIEW ClientView']
case 0: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtAcceptConnectPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAcceptConnectPort_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 1 NTSTATUS NtAccessCheck ['PSECURITY_DESCRIPTOR SecurityDescriptor', ' HANDLE ClientToken', ' ACCESS_MASK DesiredAccess', ' PGENERIC_MAPPING GenericMapping', ' PPRIVILEGE_SET PrivilegeSet', ' PULONG PrivilegeSetLength', ' PACCESS_MASK GrantedAccess', ' PNTSTATUS AccessStatus']
case 1: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
if (PPP_CHECK_CB(on_NtAccessCheck_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAccessCheck_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) ; 
}; break;
// 2 NTSTATUS NtAccessCheckAndAuditAlarm ['PUNICODE_STRING SubsystemName', ' PVOID HandleId', ' PUNICODE_STRING ObjectTypeName', ' PUNICODE_STRING ObjectName', ' PSECURITY_DESCRIPTOR SecurityDescriptor', ' ACCESS_MASK DesiredAccess', ' PGENERIC_MAPPING GenericMapping', ' BOOLEAN ObjectCreation', ' PACCESS_MASK GrantedAccess', ' PNTSTATUS AccessStatus', ' PBOOLEAN GenerateOnClose']
case 2: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
if (PPP_CHECK_CB(on_NtAccessCheckAndAuditAlarm_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAccessCheckAndAuditAlarm_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10) ; 
}; break;
// 3 NTSTATUS NtAccessCheckByType ['PSECURITY_DESCRIPTOR SecurityDescriptor', ' PSID PrincipalSelfSid', ' HANDLE ClientToken', ' ACCESS_MASK DesiredAccess', ' POBJECT_TYPE_LIST ObjectTypeList', ' ULONG ObjectTypeListLength', ' PGENERIC_MAPPING GenericMapping', ' PPRIVILEGE_SET PrivilegeSet', ' PULONG PrivilegeSetLength', ' PACCESS_MASK GrantedAccess', ' PNTSTATUS AccessStatus']
case 3: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
if (PPP_CHECK_CB(on_NtAccessCheckByType_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAccessCheckByType_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10) ; 
}; break;
// 4 NTSTATUS NtAccessCheckByTypeAndAuditAlarm ['PUNICODE_STRING SubsystemName', ' PVOID HandleId', ' PUNICODE_STRING ObjectTypeName', ' PUNICODE_STRING ObjectName', ' PSECURITY_DESCRIPTOR SecurityDescriptor', ' PSID PrincipalSelfSid', ' ACCESS_MASK DesiredAccess', ' AUDIT_EVENT_TYPE AuditType', ' ULONG Flags', ' POBJECT_TYPE_LIST ObjectTypeList', ' ULONG ObjectTypeListLength', ' PGENERIC_MAPPING GenericMapping', ' BOOLEAN ObjectCreation', ' PACCESS_MASK GrantedAccess', ' PNTSTATUS AccessStatus', ' PBOOLEAN GenerateOnClose']
case 4: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
uint32_t arg11 = get_32(env, 11);
uint32_t arg12 = get_32(env, 12);
uint32_t arg13 = get_32(env, 13);
uint32_t arg14 = get_32(env, 14);
uint32_t arg15 = get_32(env, 15);
if (PPP_CHECK_CB(on_NtAccessCheckByTypeAndAuditAlarm_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
memcpy(rp.params[11], &arg11, sizeof(uint32_t));
memcpy(rp.params[12], &arg12, sizeof(uint32_t));
memcpy(rp.params[13], &arg13, sizeof(uint32_t));
memcpy(rp.params[14], &arg14, sizeof(uint32_t));
memcpy(rp.params[15], &arg15, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAccessCheckByTypeAndAuditAlarm_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15) ; 
}; break;
// 5 NTSTATUS NtAccessCheckByTypeResultList ['PSECURITY_DESCRIPTOR SecurityDescriptor', ' PSID PrincipalSelfSid', ' HANDLE ClientToken', ' ACCESS_MASK DesiredAccess', ' POBJECT_TYPE_LIST ObjectTypeList', ' ULONG ObjectTypeListLength', ' PGENERIC_MAPPING GenericMapping', ' PPRIVILEGE_SET PrivilegeSet', ' PULONG PrivilegeSetLength', ' PACCESS_MASK GrantedAccess', ' PNTSTATUS AccessStatus']
case 5: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
if (PPP_CHECK_CB(on_NtAccessCheckByTypeResultList_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAccessCheckByTypeResultList_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10) ; 
}; break;
// 6 NTSTATUS NtAccessCheckByTypeResultListAndAuditAlarm ['PUNICODE_STRING SubsystemName', ' PVOID HandleId', ' PUNICODE_STRING ObjectTypeName', ' PUNICODE_STRING ObjectName', ' PSECURITY_DESCRIPTOR SecurityDescriptor', ' PSID PrincipalSelfSid', ' ACCESS_MASK DesiredAccess', ' AUDIT_EVENT_TYPE AuditType', ' ULONG Flags', ' POBJECT_TYPE_LIST ObjectTypeList', ' ULONG ObjectTypeListLength', ' PGENERIC_MAPPING GenericMapping', ' BOOLEAN ObjectCreation', ' PACCESS_MASK GrantedAccess', ' PNTSTATUS AccessStatus', ' PBOOLEAN GenerateOnClose']
case 6: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
uint32_t arg11 = get_32(env, 11);
uint32_t arg12 = get_32(env, 12);
uint32_t arg13 = get_32(env, 13);
uint32_t arg14 = get_32(env, 14);
uint32_t arg15 = get_32(env, 15);
if (PPP_CHECK_CB(on_NtAccessCheckByTypeResultListAndAuditAlarm_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
memcpy(rp.params[11], &arg11, sizeof(uint32_t));
memcpy(rp.params[12], &arg12, sizeof(uint32_t));
memcpy(rp.params[13], &arg13, sizeof(uint32_t));
memcpy(rp.params[14], &arg14, sizeof(uint32_t));
memcpy(rp.params[15], &arg15, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAccessCheckByTypeResultListAndAuditAlarm_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15) ; 
}; break;
// 7 NTSTATUS NtAccessCheckByTypeResultListAndAuditAlarmByHandle ['PUNICODE_STRING SubsystemName', ' PVOID HandleId', ' HANDLE ClientToken', ' PUNICODE_STRING ObjectTypeName', ' PUNICODE_STRING ObjectName', ' PSECURITY_DESCRIPTOR SecurityDescriptor', ' PSID PrincipalSelfSid', ' ACCESS_MASK DesiredAccess', ' AUDIT_EVENT_TYPE AuditType', ' ULONG Flags', ' POBJECT_TYPE_LIST ObjectTypeList', ' ULONG ObjectTypeListLength', ' PGENERIC_MAPPING GenericMapping', ' BOOLEAN ObjectCreation', ' PACCESS_MASK GrantedAccess', ' PNTSTATUS AccessStatus', ' PBOOLEAN GenerateOnClose']
case 7: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
uint32_t arg11 = get_32(env, 11);
uint32_t arg12 = get_32(env, 12);
uint32_t arg13 = get_32(env, 13);
uint32_t arg14 = get_32(env, 14);
uint32_t arg15 = get_32(env, 15);
uint32_t arg16 = get_32(env, 16);
if (PPP_CHECK_CB(on_NtAccessCheckByTypeResultListAndAuditAlarmByHandle_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
memcpy(rp.params[11], &arg11, sizeof(uint32_t));
memcpy(rp.params[12], &arg12, sizeof(uint32_t));
memcpy(rp.params[13], &arg13, sizeof(uint32_t));
memcpy(rp.params[14], &arg14, sizeof(uint32_t));
memcpy(rp.params[15], &arg15, sizeof(uint32_t));
memcpy(rp.params[16], &arg16, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAccessCheckByTypeResultListAndAuditAlarmByHandle_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16) ; 
}; break;
// 8 NTSTATUS NtAddAtom ['PWSTR AtomName', ' ULONG Length', ' PRTL_ATOM Atom']
case 8: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtAddAtom_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAddAtom_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 9 NTSTATUS NtAddBootEntry ['PBOOT_ENTRY BootEntry', ' PULONG Id']
case 9: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtAddBootEntry_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAddBootEntry_enter, env,pc,arg0,arg1) ; 
}; break;
// 10 NTSTATUS NtAdjustGroupsToken ['HANDLE TokenHandle', ' BOOLEAN ResetToDefault', ' PTOKEN_GROUPS NewState', ' ULONG BufferLength', ' PTOKEN_GROUPS PreviousState', ' PULONG ReturnLength']
case 10: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtAdjustGroupsToken_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAdjustGroupsToken_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 11 NTSTATUS NtAdjustPrivilegesToken ['HANDLE TokenHandle', ' BOOLEAN DisableAllPrivileges', ' PTOKEN_PRIVILEGES NewState', ' ULONG BufferLength', ' PTOKEN_PRIVILEGES PreviousState', ' PULONG ReturnLength']
case 11: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtAdjustPrivilegesToken_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAdjustPrivilegesToken_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 12 NTSTATUS NtAlertResumeThread ['HANDLE ThreadHandle', ' PULONG PreviousSuspendCount']
case 12: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtAlertResumeThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAlertResumeThread_enter, env,pc,arg0,arg1) ; 
}; break;
// 13 NTSTATUS NtAlertThread ['HANDLE ThreadHandle']
case 13: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtAlertThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAlertThread_enter, env,pc,arg0) ; 
}; break;
// 14 NTSTATUS NtAllocateLocallyUniqueId ['PLUID Luid']
case 14: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtAllocateLocallyUniqueId_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAllocateLocallyUniqueId_enter, env,pc,arg0) ; 
}; break;
// 15 NTSTATUS NtAllocateUserPhysicalPages ['HANDLE ProcessHandle', ' PULONG_PTR NumberOfPages', ' PULONG_PTR UserPfnArray']
case 15: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtAllocateUserPhysicalPages_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAllocateUserPhysicalPages_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 16 NTSTATUS NtAllocateUuids ['PULARGE_INTEGER Time', ' PULONG Range', ' PULONG Sequence', ' PCHAR Seed']
case 16: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtAllocateUuids_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAllocateUuids_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 17 NTSTATUS NtAllocateVirtualMemory ['HANDLE ProcessHandle', ' PVOID *BaseAddress', ' ULONG_PTR ZeroBits', ' PSIZE_T RegionSize', ' ULONG AllocationType', ' ULONG Protect']
case 17: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtAllocateVirtualMemory_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAllocateVirtualMemory_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 18 NTSTATUS NtAreMappedFilesTheSame ['PVOID File1MappedAsAnImage', ' PVOID File2MappedAsFile']
case 18: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtAreMappedFilesTheSame_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAreMappedFilesTheSame_enter, env,pc,arg0,arg1) ; 
}; break;
// 19 NTSTATUS NtAssignProcessToJobObject ['HANDLE JobHandle', ' HANDLE ProcessHandle']
case 19: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtAssignProcessToJobObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtAssignProcessToJobObject_enter, env,pc,arg0,arg1) ; 
}; break;
// 20 NTSTATUS NtCallbackReturn ['PVOID OutputBuffer', ' ULONG OutputLength', ' NTSTATUS Status']
case 20: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtCallbackReturn_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCallbackReturn_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 22 NTSTATUS NtCancelIoFile ['HANDLE FileHandle', ' PIO_STATUS_BLOCK IoStatusBlock']
case 22: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtCancelIoFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCancelIoFile_enter, env,pc,arg0,arg1) ; 
}; break;
// 23 NTSTATUS NtCancelTimer ['HANDLE TimerHandle', ' PBOOLEAN CurrentState']
case 23: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtCancelTimer_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCancelTimer_enter, env,pc,arg0,arg1) ; 
}; break;
// 24 NTSTATUS NtClearEvent ['HANDLE EventHandle']
case 24: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtClearEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtClearEvent_enter, env,pc,arg0) ; 
}; break;
// 25 NTSTATUS NtClose ['HANDLE Handle']
case 25: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtClose_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtClose_enter, env,pc,arg0) ; 
}; break;
// 26 NTSTATUS NtCloseObjectAuditAlarm ['PUNICODE_STRING SubsystemName', ' PVOID HandleId', ' BOOLEAN GenerateOnClose']
case 26: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtCloseObjectAuditAlarm_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCloseObjectAuditAlarm_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 27 NTSTATUS NtCompactKeys ['ULONG Count', ' HANDLE KeyArray[]']
case 27: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtCompactKeys_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCompactKeys_enter, env,pc,arg0,arg1) ; 
}; break;
// 28 NTSTATUS NtCompareTokens ['HANDLE FirstTokenHandle', ' HANDLE SecondTokenHandle', ' PBOOLEAN Equal']
case 28: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtCompareTokens_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCompareTokens_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 29 NTSTATUS NtCompleteConnectPort ['HANDLE PortHandle']
case 29: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtCompleteConnectPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCompleteConnectPort_enter, env,pc,arg0) ; 
}; break;
// 30 NTSTATUS NtCompressKey ['HANDLE Key']
case 30: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtCompressKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCompressKey_enter, env,pc,arg0) ; 
}; break;
// 31 NTSTATUS NtConnectPort ['PHANDLE PortHandle', ' PUNICODE_STRING PortName', ' PSECURITY_QUALITY_OF_SERVICE SecurityQos', ' PPORT_VIEW ClientView', ' PREMOTE_PORT_VIEW ServerView', ' PULONG MaxMessageLength', ' PVOID ConnectionInformation', ' PULONG ConnectionInformationLength']
case 31: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
if (PPP_CHECK_CB(on_NtConnectPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtConnectPort_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) ; 
}; break;
// 32 NTSTATUS NtContinue ['PCONTEXT ContextRecord', ' BOOLEAN TestAlert']
case 32: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtContinue_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtContinue_enter, env,pc,arg0,arg1) ; 
}; break;
// 33 NTSTATUS NtCreateDebugObject ['PHANDLE DebugObjectHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' ULONG Flags']
case 33: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtCreateDebugObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateDebugObject_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 34 NTSTATUS NtCreateDirectoryObject ['PHANDLE DirectoryHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 34: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtCreateDirectoryObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateDirectoryObject_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 35 NTSTATUS NtCreateEvent ['PHANDLE EventHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' EVENT_TYPE EventType', ' BOOLEAN InitialState']
case 35: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtCreateEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateEvent_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 36 NTSTATUS NtCreateEventPair ['PHANDLE EventPairHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 36: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtCreateEventPair_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateEventPair_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 37 NTSTATUS NtCreateFile ['PHANDLE FileHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' PIO_STATUS_BLOCK IoStatusBlock', ' PLARGE_INTEGER AllocationSize', ' ULONG FileAttributes', ' ULONG ShareAccess', ' ULONG CreateDisposition', ' ULONG CreateOptions', ' PVOID EaBuffer', ' ULONG EaLength']
case 37: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
if (PPP_CHECK_CB(on_NtCreateFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10) ; 
}; break;
// 38 NTSTATUS NtCreateIoCompletion ['PHANDLE IoCompletionHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' ULONG Count']
case 38: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtCreateIoCompletion_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateIoCompletion_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 39 NTSTATUS NtCreateJobObject ['PHANDLE JobHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 39: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtCreateJobObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateJobObject_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 40 NTSTATUS NtCreateJobSet ['ULONG NumJob', ' PJOB_SET_ARRAY UserJobSet', ' ULONG Flags']
case 40: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtCreateJobSet_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateJobSet_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 41 NTSTATUS NtCreateKey ['PHANDLE KeyHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' ULONG TitleIndex', ' PUNICODE_STRING Class', ' ULONG CreateOptions', ' PULONG Disposition']
case 41: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
if (PPP_CHECK_CB(on_NtCreateKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateKey_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6) ; 
}; break;
// 42 NTSTATUS NtCreateMailslotFile ['PHANDLE FileHandle', ' ULONG DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' PIO_STATUS_BLOCK IoStatusBlock', ' ULONG CreateOptions', ' ULONG MailslotQuota', ' ULONG MaximumMessageSize', ' PLARGE_INTEGER ReadTimeout']
case 42: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
if (PPP_CHECK_CB(on_NtCreateMailslotFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateMailslotFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) ; 
}; break;
// 43 NTSTATUS NtCreateMutant ['PHANDLE MutantHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' BOOLEAN InitialOwner']
case 43: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtCreateMutant_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateMutant_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 44 NTSTATUS NtCreateNamedPipeFile ['PHANDLE FileHandle', ' ULONG DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' PIO_STATUS_BLOCK IoStatusBlock', ' ULONG ShareAccess', ' ULONG CreateDisposition', ' ULONG CreateOptions', ' ULONG NamedPipeType', ' ULONG ReadMode', ' ULONG CompletionMode', ' ULONG MaximumInstances', ' ULONG InboundQuota', ' ULONG OutboundQuota', ' PLARGE_INTEGER DefaultTimeout']
case 44: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
uint32_t arg11 = get_32(env, 11);
uint32_t arg12 = get_32(env, 12);
uint32_t arg13 = get_32(env, 13);
if (PPP_CHECK_CB(on_NtCreateNamedPipeFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
memcpy(rp.params[11], &arg11, sizeof(uint32_t));
memcpy(rp.params[12], &arg12, sizeof(uint32_t));
memcpy(rp.params[13], &arg13, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateNamedPipeFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13) ; 
}; break;
// 45 NTSTATUS NtCreatePagingFile ['PUNICODE_STRING PageFileName', ' PLARGE_INTEGER MinimumSize', ' PLARGE_INTEGER MaximumSize', ' ULONG Priority']
case 45: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtCreatePagingFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreatePagingFile_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 46 NTSTATUS NtCreatePort ['PHANDLE PortHandle', ' POBJECT_ATTRIBUTES ObjectAttributes', ' ULONG MaxConnectionInfoLength', ' ULONG MaxMessageLength', ' ULONG MaxPoolUsage']
case 46: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtCreatePort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreatePort_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 47 NTSTATUS NtCreateProcess ['PHANDLE ProcessHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' HANDLE ParentProcess', ' BOOLEAN InheritObjectTable', ' HANDLE SectionHandle', ' HANDLE DebugPort', ' HANDLE ExceptionPort']
case 47: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
if (PPP_CHECK_CB(on_NtCreateProcess_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateProcess_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) ; 
}; break;
// 48 NTSTATUS NtCreateProcessEx ['PHANDLE ProcessHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' HANDLE ParentProcess', ' ULONG Flags', ' HANDLE SectionHandle', ' HANDLE DebugPort', ' HANDLE ExceptionPort', ' ULONG JobMemberLevel']
case 48: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
if (PPP_CHECK_CB(on_NtCreateProcessEx_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateProcessEx_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) ; 
}; break;
// 49 NTSTATUS NtCreateProfile ['PHANDLE ProfileHandle', ' HANDLE Process', ' PVOID RangeBase', ' SIZE_T RangeSize', ' ULONG BucketSize', ' PULONG Buffer', ' ULONG BufferSize', ' KPROFILE_SOURCE ProfileSource', ' KAFFINITY Affinity']
case 49: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
if (PPP_CHECK_CB(on_NtCreateProfile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateProfile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) ; 
}; break;
// 50 NTSTATUS NtCreateSection ['PHANDLE SectionHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' PLARGE_INTEGER MaximumSize', ' ULONG SectionPageProtection', ' ULONG AllocationAttributes', ' HANDLE FileHandle']
case 50: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
if (PPP_CHECK_CB(on_NtCreateSection_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateSection_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6) ; 
}; break;
// 51 NTSTATUS NtCreateSemaphore ['PHANDLE SemaphoreHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' LONG InitialCount', ' LONG MaximumCount']
case 51: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
int32_t arg3 = get_s32(env, 3);
int32_t arg4 = get_s32(env, 4);
if (PPP_CHECK_CB(on_NtCreateSemaphore_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(int32_t));
memcpy(rp.params[4], &arg4, sizeof(int32_t));
}
PPP_RUN_CB(on_NtCreateSemaphore_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 52 NTSTATUS NtCreateSymbolicLinkObject ['PHANDLE LinkHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' PUNICODE_STRING LinkTarget']
case 52: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtCreateSymbolicLinkObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateSymbolicLinkObject_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 53 NTSTATUS NtCreateThread ['PHANDLE ThreadHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' HANDLE ProcessHandle', ' PCLIENT_ID ClientId', ' PCONTEXT ThreadContext', ' PINITIAL_TEB InitialTeb', ' BOOLEAN CreateSuspended']
case 53: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
if (PPP_CHECK_CB(on_NtCreateThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateThread_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) ; 
}; break;
// 54 NTSTATUS NtCreateTimer ['PHANDLE TimerHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' TIMER_TYPE TimerType']
case 54: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtCreateTimer_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateTimer_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 55 NTSTATUS NtCreateToken ['PHANDLE TokenHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' TOKEN_TYPE TokenType', ' PLUID AuthenticationId', ' PLARGE_INTEGER ExpirationTime', ' PTOKEN_USER User', ' PTOKEN_GROUPS Groups', ' PTOKEN_PRIVILEGES Privileges', ' PTOKEN_OWNER Owner', ' PTOKEN_PRIMARY_GROUP PrimaryGroup', ' PTOKEN_DEFAULT_DACL DefaultDacl', ' PTOKEN_SOURCE TokenSource']
case 55: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
uint32_t arg11 = get_32(env, 11);
uint32_t arg12 = get_32(env, 12);
if (PPP_CHECK_CB(on_NtCreateToken_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
memcpy(rp.params[11], &arg11, sizeof(uint32_t));
memcpy(rp.params[12], &arg12, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateToken_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12) ; 
}; break;
// 56 NTSTATUS NtCreateWaitablePort ['PHANDLE PortHandle', ' POBJECT_ATTRIBUTES ObjectAttributes', ' ULONG MaxConnectionInfoLength', ' ULONG MaxMessageLength', ' ULONG MaxPoolUsage']
case 56: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtCreateWaitablePort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateWaitablePort_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 57 NTSTATUS NtDebugActiveProcess ['HANDLE ProcessHandle', ' HANDLE DebugObjectHandle']
case 57: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtDebugActiveProcess_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDebugActiveProcess_enter, env,pc,arg0,arg1) ; 
}; break;
// 58 NTSTATUS NtDebugContinue ['HANDLE DebugObjectHandle', ' PCLIENT_ID ClientId', ' NTSTATUS ContinueStatus']
case 58: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtDebugContinue_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDebugContinue_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 59 NTSTATUS NtDelayExecution ['BOOLEAN Alertable', ' PLARGE_INTEGER DelayInterval']
case 59: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtDelayExecution_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDelayExecution_enter, env,pc,arg0,arg1) ; 
}; break;
// 60 NTSTATUS NtDeleteAtom ['RTL_ATOM Atom']
case 60: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtDeleteAtom_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDeleteAtom_enter, env,pc,arg0) ; 
}; break;
// 61 NTSTATUS NtDeleteBootEntry ['ULONG Id']
case 61: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtDeleteBootEntry_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDeleteBootEntry_enter, env,pc,arg0) ; 
}; break;
// 62 NTSTATUS NtDeleteFile ['POBJECT_ATTRIBUTES ObjectAttributes']
case 62: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtDeleteFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDeleteFile_enter, env,pc,arg0) ; 
}; break;
// 63 NTSTATUS NtDeleteKey ['HANDLE KeyHandle']
case 63: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtDeleteKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDeleteKey_enter, env,pc,arg0) ; 
}; break;
// 64 NTSTATUS NtDeleteObjectAuditAlarm ['PUNICODE_STRING SubsystemName', ' PVOID HandleId', ' BOOLEAN GenerateOnClose']
case 64: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtDeleteObjectAuditAlarm_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDeleteObjectAuditAlarm_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 65 NTSTATUS NtDeleteValueKey ['HANDLE KeyHandle', ' PUNICODE_STRING ValueName']
case 65: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtDeleteValueKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDeleteValueKey_enter, env,pc,arg0,arg1) ; 
}; break;
// 66 NTSTATUS NtDeviceIoControlFile ['HANDLE FileHandle', ' HANDLE Event', ' PIO_APC_ROUTINE ApcRoutine', ' PVOID ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' ULONG IoControlCode', ' PVOID InputBuffer', ' ULONG InputBufferLength', ' PVOID OutputBuffer', ' ULONG OutputBufferLength']
case 66: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
if (PPP_CHECK_CB(on_NtDeviceIoControlFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDeviceIoControlFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) ; 
}; break;
// 67 NTSTATUS NtDisplayString ['PUNICODE_STRING String']
case 67: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtDisplayString_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDisplayString_enter, env,pc,arg0) ; 
}; break;
// 68 NTSTATUS NtDuplicateObject ['HANDLE SourceProcessHandle', ' HANDLE SourceHandle', ' HANDLE TargetProcessHandle', ' PHANDLE TargetHandle', ' ACCESS_MASK DesiredAccess', ' ULONG HandleAttributes', ' ULONG Options']
case 68: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
if (PPP_CHECK_CB(on_NtDuplicateObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDuplicateObject_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6) ; 
}; break;
// 69 NTSTATUS NtDuplicateToken ['HANDLE ExistingTokenHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' BOOLEAN EffectiveOnly', ' TOKEN_TYPE TokenType', ' PHANDLE NewTokenHandle']
case 69: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtDuplicateToken_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtDuplicateToken_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 70 NTSTATUS NtEnumerateBootEntries ['PVOID Buffer', ' PULONG BufferLength']
case 70: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtEnumerateBootEntries_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtEnumerateBootEntries_enter, env,pc,arg0,arg1) ; 
}; break;
// 71 NTSTATUS NtEnumerateKey ['HANDLE KeyHandle', ' ULONG Index', ' KEY_INFORMATION_CLASS KeyInformationClass', ' PVOID KeyInformation', ' ULONG Length', ' PULONG ResultLength']
case 71: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtEnumerateKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtEnumerateKey_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 72 NTSTATUS NtEnumerateSystemEnvironmentValuesEx ['ULONG InformationClass', ' PVOID Buffer', ' PULONG BufferLength']
case 72: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtEnumerateSystemEnvironmentValuesEx_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtEnumerateSystemEnvironmentValuesEx_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 73 NTSTATUS NtEnumerateValueKey ['HANDLE KeyHandle', ' ULONG Index', ' KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass', ' PVOID KeyValueInformation', ' ULONG Length', ' PULONG ResultLength']
case 73: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtEnumerateValueKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtEnumerateValueKey_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 74 NTSTATUS NtExtendSection ['HANDLE SectionHandle', ' PLARGE_INTEGER NewSectionSize']
case 74: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtExtendSection_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtExtendSection_enter, env,pc,arg0,arg1) ; 
}; break;
// 75 NTSTATUS NtFilterToken ['HANDLE ExistingTokenHandle', ' ULONG Flags', ' PTOKEN_GROUPS SidsToDisable', ' PTOKEN_PRIVILEGES PrivilegesToDelete', ' PTOKEN_GROUPS RestrictedSids', ' PHANDLE NewTokenHandle']
case 75: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtFilterToken_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtFilterToken_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 76 NTSTATUS NtFindAtom ['PWSTR AtomName', ' ULONG Length', ' PRTL_ATOM Atom']
case 76: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtFindAtom_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtFindAtom_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 77 NTSTATUS NtFlushBuffersFile ['HANDLE FileHandle', ' PIO_STATUS_BLOCK IoStatusBlock']
case 77: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtFlushBuffersFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtFlushBuffersFile_enter, env,pc,arg0,arg1) ; 
}; break;
// 78 NTSTATUS NtFlushInstructionCache ['HANDLE ProcessHandle', ' PVOID BaseAddress', ' SIZE_T Length']
case 78: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtFlushInstructionCache_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtFlushInstructionCache_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 79 NTSTATUS NtFlushKey ['HANDLE KeyHandle']
case 79: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtFlushKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtFlushKey_enter, env,pc,arg0) ; 
}; break;
// 80 NTSTATUS NtFlushVirtualMemory ['HANDLE ProcessHandle', ' PVOID *BaseAddress', ' PSIZE_T RegionSize', ' PIO_STATUS_BLOCK IoStatus']
case 80: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtFlushVirtualMemory_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtFlushVirtualMemory_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 81 NTSTATUS NtFlushWriteBuffer ['']
case 81: {
if (PPP_CHECK_CB(on_NtFlushWriteBuffer_return)) {
}
PPP_RUN_CB(on_NtFlushWriteBuffer_enter, env,pc) ; 
}; break;
// 82 NTSTATUS NtFreeUserPhysicalPages ['HANDLE ProcessHandle', ' PULONG_PTR NumberOfPages', ' PULONG_PTR UserPfnArray']
case 82: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtFreeUserPhysicalPages_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtFreeUserPhysicalPages_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 83 NTSTATUS NtFreeVirtualMemory ['HANDLE ProcessHandle', ' PVOID *BaseAddress', ' PSIZE_T RegionSize', ' ULONG FreeType']
case 83: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtFreeVirtualMemory_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtFreeVirtualMemory_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 84 NTSTATUS NtFsControlFile ['HANDLE FileHandle', ' HANDLE Event', ' PIO_APC_ROUTINE ApcRoutine', ' PVOID ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' ULONG IoControlCode', ' PVOID InputBuffer', ' ULONG InputBufferLength', ' PVOID OutputBuffer', ' ULONG OutputBufferLength']
case 84: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
if (PPP_CHECK_CB(on_NtFsControlFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtFsControlFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) ; 
}; break;
// 85 NTSTATUS NtGetContextThread ['HANDLE ThreadHandle', ' PCONTEXT ThreadContext']
case 85: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtGetContextThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtGetContextThread_enter, env,pc,arg0,arg1) ; 
}; break;
// 86 NTSTATUS NtGetDevicePowerState ['HANDLE Device', ' DEVICE_POWER_STATE *State']
case 86: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtGetDevicePowerState_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtGetDevicePowerState_enter, env,pc,arg0,arg1) ; 
}; break;
// 87 NTSTATUS NtGetPlugPlayEvent ['HANDLE EventHandle', ' PVOID Context', ' PPLUGPLAY_EVENT_BLOCK EventBlock', ' ULONG EventBufferSize']
case 87: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtGetPlugPlayEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtGetPlugPlayEvent_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 88 NTSTATUS NtGetWriteWatch ['HANDLE ProcessHandle', ' ULONG Flags', ' PVOID BaseAddress', ' SIZE_T RegionSize', ' PVOID *UserAddressArray', ' PULONG_PTR EntriesInUserAddressArray', ' PULONG Granularity']
case 88: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
if (PPP_CHECK_CB(on_NtGetWriteWatch_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtGetWriteWatch_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6) ; 
}; break;
// 89 NTSTATUS NtImpersonateAnonymousToken ['HANDLE ThreadHandle']
case 89: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtImpersonateAnonymousToken_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtImpersonateAnonymousToken_enter, env,pc,arg0) ; 
}; break;
// 90 NTSTATUS NtImpersonateClientOfPort ['HANDLE PortHandle', ' PPORT_MESSAGE Message']
case 90: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtImpersonateClientOfPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtImpersonateClientOfPort_enter, env,pc,arg0,arg1) ; 
}; break;
// 91 NTSTATUS NtImpersonateThread ['HANDLE ServerThreadHandle', ' HANDLE ClientThreadHandle', ' PSECURITY_QUALITY_OF_SERVICE SecurityQos']
case 91: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtImpersonateThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtImpersonateThread_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 92 NTSTATUS NtInitializeRegistry ['USHORT BootCondition']
case 92: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtInitializeRegistry_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtInitializeRegistry_enter, env,pc,arg0) ; 
}; break;
// 93 NTSTATUS NtInitiatePowerAction ['POWER_ACTION SystemAction', ' SYSTEM_POWER_STATE MinSystemState', ' ULONG Flags', ' BOOLEAN Asynchronous']
case 93: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtInitiatePowerAction_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtInitiatePowerAction_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 94 NTSTATUS NtIsProcessInJob ['HANDLE ProcessHandle', ' HANDLE JobHandle']
case 94: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtIsProcessInJob_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtIsProcessInJob_enter, env,pc,arg0,arg1) ; 
}; break;
// 95 BOOLEAN NtIsSystemResumeAutomatic ['']
case 95: {
if (PPP_CHECK_CB(on_NtIsSystemResumeAutomatic_return)) {
}
PPP_RUN_CB(on_NtIsSystemResumeAutomatic_enter, env,pc) ; 
}; break;
// 96 NTSTATUS NtListenPort ['HANDLE PortHandle', ' PPORT_MESSAGE ConnectionRequest']
case 96: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtListenPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtListenPort_enter, env,pc,arg0,arg1) ; 
}; break;
// 97 NTSTATUS NtLoadDriver ['PUNICODE_STRING DriverServiceName']
case 97: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtLoadDriver_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtLoadDriver_enter, env,pc,arg0) ; 
}; break;
// 98 NTSTATUS NtLoadKey ['POBJECT_ATTRIBUTES TargetKey', ' POBJECT_ATTRIBUTES SourceFile']
case 98: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtLoadKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtLoadKey_enter, env,pc,arg0,arg1) ; 
}; break;
// 99 NTSTATUS NtLoadKey2 ['POBJECT_ATTRIBUTES TargetKey', ' POBJECT_ATTRIBUTES SourceFile', ' ULONG Flags']
case 99: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtLoadKey2_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtLoadKey2_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 100 NTSTATUS NtLockFile ['HANDLE FileHandle', ' HANDLE Event', ' PIO_APC_ROUTINE ApcRoutine', ' PVOID ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' PLARGE_INTEGER ByteOffset', ' PLARGE_INTEGER Length', ' ULONG Key', ' BOOLEAN FailImmediately', ' BOOLEAN ExclusiveLock']
case 100: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
if (PPP_CHECK_CB(on_NtLockFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtLockFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) ; 
}; break;
// 101 NTSTATUS NtLockProductActivationKeys ['ULONG *pPrivateVer', ' ULONG *pSafeMode']
case 101: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtLockProductActivationKeys_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtLockProductActivationKeys_enter, env,pc,arg0,arg1) ; 
}; break;
// 102 NTSTATUS NtLockRegistryKey ['HANDLE KeyHandle']
case 102: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtLockRegistryKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtLockRegistryKey_enter, env,pc,arg0) ; 
}; break;
// 103 NTSTATUS NtLockVirtualMemory ['HANDLE ProcessHandle', ' PVOID *BaseAddress', ' PSIZE_T RegionSize', ' ULONG MapType']
case 103: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtLockVirtualMemory_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtLockVirtualMemory_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 104 NTSTATUS NtMakePermanentObject ['HANDLE Handle']
case 104: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtMakePermanentObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtMakePermanentObject_enter, env,pc,arg0) ; 
}; break;
// 105 NTSTATUS NtMakeTemporaryObject ['HANDLE Handle']
case 105: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtMakeTemporaryObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtMakeTemporaryObject_enter, env,pc,arg0) ; 
}; break;
// 106 NTSTATUS NtMapUserPhysicalPages ['PVOID VirtualAddress', ' ULONG_PTR NumberOfPages', ' PULONG_PTR UserPfnArray']
case 106: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtMapUserPhysicalPages_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtMapUserPhysicalPages_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 107 NTSTATUS NtMapUserPhysicalPagesScatter ['PVOID *VirtualAddresses', ' ULONG_PTR NumberOfPages', ' PULONG_PTR UserPfnArray']
case 107: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtMapUserPhysicalPagesScatter_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtMapUserPhysicalPagesScatter_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 108 NTSTATUS NtMapViewOfSection ['HANDLE SectionHandle', ' HANDLE ProcessHandle', ' PVOID *BaseAddress', ' ULONG_PTR ZeroBits', ' SIZE_T CommitSize', ' PLARGE_INTEGER SectionOffset', ' PSIZE_T ViewSize', ' SECTION_INHERIT InheritDisposition', ' ULONG AllocationType', ' WIN32_PROTECTION_MASK Win32Protect']
case 108: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
if (PPP_CHECK_CB(on_NtMapViewOfSection_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtMapViewOfSection_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) ; 
}; break;
// 109 NTSTATUS NtModifyBootEntry ['PBOOT_ENTRY BootEntry']
case 109: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtModifyBootEntry_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtModifyBootEntry_enter, env,pc,arg0) ; 
}; break;
// 110 NTSTATUS NtNotifyChangeDirectoryFile ['HANDLE FileHandle', ' HANDLE Event', ' PIO_APC_ROUTINE ApcRoutine', ' PVOID ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID Buffer', ' ULONG Length', ' ULONG CompletionFilter', ' BOOLEAN WatchTree']
case 110: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
if (PPP_CHECK_CB(on_NtNotifyChangeDirectoryFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtNotifyChangeDirectoryFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) ; 
}; break;
// 111 NTSTATUS NtNotifyChangeKey ['HANDLE KeyHandle', ' HANDLE Event', ' PIO_APC_ROUTINE ApcRoutine', ' PVOID ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' ULONG CompletionFilter', ' BOOLEAN WatchTree', ' PVOID Buffer', ' ULONG BufferSize', ' BOOLEAN Asynchronous']
case 111: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
if (PPP_CHECK_CB(on_NtNotifyChangeKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtNotifyChangeKey_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) ; 
}; break;
// 112 NTSTATUS NtNotifyChangeMultipleKeys ['HANDLE MasterKeyHandle', ' ULONG Count', ' OBJECT_ATTRIBUTES SlaveObjects[]', ' HANDLE Event', ' PIO_APC_ROUTINE ApcRoutine', ' PVOID ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' ULONG CompletionFilter', ' BOOLEAN WatchTree', ' PVOID Buffer', ' ULONG BufferSize', ' BOOLEAN Asynchronous']
case 112: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
uint32_t arg11 = get_32(env, 11);
if (PPP_CHECK_CB(on_NtNotifyChangeMultipleKeys_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
memcpy(rp.params[11], &arg11, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtNotifyChangeMultipleKeys_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11) ; 
}; break;
// 113 NTSTATUS NtOpenDirectoryObject ['PHANDLE DirectoryHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 113: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenDirectoryObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenDirectoryObject_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 114 NTSTATUS NtOpenEvent ['PHANDLE EventHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 114: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenEvent_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 115 NTSTATUS NtOpenEventPair ['PHANDLE EventPairHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 115: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenEventPair_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenEventPair_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 116 NTSTATUS NtOpenFile ['PHANDLE FileHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' PIO_STATUS_BLOCK IoStatusBlock', ' ULONG ShareAccess', ' ULONG OpenOptions']
case 116: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtOpenFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 117 NTSTATUS NtOpenIoCompletion ['PHANDLE IoCompletionHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 117: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenIoCompletion_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenIoCompletion_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 118 NTSTATUS NtOpenJobObject ['PHANDLE JobHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 118: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenJobObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenJobObject_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 119 NTSTATUS NtOpenKey ['PHANDLE KeyHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 119: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenKey_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 120 NTSTATUS NtOpenMutant ['PHANDLE MutantHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 120: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenMutant_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenMutant_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 121 NTSTATUS NtOpenObjectAuditAlarm ['PUNICODE_STRING SubsystemName', ' PVOID HandleId', ' PUNICODE_STRING ObjectTypeName', ' PUNICODE_STRING ObjectName', ' PSECURITY_DESCRIPTOR SecurityDescriptor', ' HANDLE ClientToken', ' ACCESS_MASK DesiredAccess', ' ACCESS_MASK GrantedAccess', ' PPRIVILEGE_SET Privileges', ' BOOLEAN ObjectCreation', ' BOOLEAN AccessGranted', ' PBOOLEAN GenerateOnClose']
case 121: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
uint32_t arg11 = get_32(env, 11);
if (PPP_CHECK_CB(on_NtOpenObjectAuditAlarm_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
memcpy(rp.params[11], &arg11, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenObjectAuditAlarm_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11) ; 
}; break;
// 122 NTSTATUS NtOpenProcess ['PHANDLE ProcessHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' PCLIENT_ID ClientId']
case 122: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtOpenProcess_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenProcess_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 123 NTSTATUS NtOpenProcessToken ['HANDLE ProcessHandle', ' ACCESS_MASK DesiredAccess', ' PHANDLE TokenHandle']
case 123: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenProcessToken_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenProcessToken_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 124 NTSTATUS NtOpenProcessTokenEx ['HANDLE ProcessHandle', ' ACCESS_MASK DesiredAccess', ' ULONG HandleAttributes', ' PHANDLE TokenHandle']
case 124: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtOpenProcessTokenEx_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenProcessTokenEx_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 125 NTSTATUS NtOpenSection ['PHANDLE SectionHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 125: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenSection_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenSection_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 126 NTSTATUS NtOpenSemaphore ['PHANDLE SemaphoreHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 126: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenSemaphore_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenSemaphore_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 127 NTSTATUS NtOpenSymbolicLinkObject ['PHANDLE LinkHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 127: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenSymbolicLinkObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenSymbolicLinkObject_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 128 NTSTATUS NtOpenThread ['PHANDLE ThreadHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' PCLIENT_ID ClientId']
case 128: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtOpenThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenThread_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 129 NTSTATUS NtOpenThreadToken ['HANDLE ThreadHandle', ' ACCESS_MASK DesiredAccess', ' BOOLEAN OpenAsSelf', ' PHANDLE TokenHandle']
case 129: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtOpenThreadToken_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenThreadToken_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 130 NTSTATUS NtOpenThreadTokenEx ['HANDLE ThreadHandle', ' ACCESS_MASK DesiredAccess', ' BOOLEAN OpenAsSelf', ' ULONG HandleAttributes', ' PHANDLE TokenHandle']
case 130: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtOpenThreadTokenEx_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenThreadTokenEx_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 131 NTSTATUS NtOpenTimer ['PHANDLE TimerHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 131: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenTimer_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenTimer_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 132 NTSTATUS NtPlugPlayControl ['PLUGPLAY_CONTROL_CLASS PnPControlClass', ' PVOID PnPControlData', ' ULONG PnPControlDataLength']
case 132: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtPlugPlayControl_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtPlugPlayControl_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 133 NTSTATUS NtPowerInformation ['POWER_INFORMATION_LEVEL InformationLevel', ' PVOID InputBuffer', ' ULONG InputBufferLength', ' PVOID OutputBuffer', ' ULONG OutputBufferLength']
case 133: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtPowerInformation_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtPowerInformation_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 134 NTSTATUS NtPrivilegeCheck ['HANDLE ClientToken', ' PPRIVILEGE_SET RequiredPrivileges', ' PBOOLEAN Result']
case 134: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtPrivilegeCheck_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtPrivilegeCheck_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 135 NTSTATUS NtPrivilegeObjectAuditAlarm ['PUNICODE_STRING SubsystemName', ' PVOID HandleId', ' HANDLE ClientToken', ' ACCESS_MASK DesiredAccess', ' PPRIVILEGE_SET Privileges', ' BOOLEAN AccessGranted']
case 135: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtPrivilegeObjectAuditAlarm_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtPrivilegeObjectAuditAlarm_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 136 NTSTATUS NtPrivilegedServiceAuditAlarm ['PUNICODE_STRING SubsystemName', ' PUNICODE_STRING ServiceName', ' HANDLE ClientToken', ' PPRIVILEGE_SET Privileges', ' BOOLEAN AccessGranted']
case 136: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtPrivilegedServiceAuditAlarm_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtPrivilegedServiceAuditAlarm_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 137 NTSTATUS NtProtectVirtualMemory ['HANDLE ProcessHandle', ' PVOID *BaseAddress', ' PSIZE_T RegionSize', ' WIN32_PROTECTION_MASK NewProtectWin32', ' PULONG OldProtect']
case 137: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtProtectVirtualMemory_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtProtectVirtualMemory_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 138 NTSTATUS NtPulseEvent ['HANDLE EventHandle', ' PLONG PreviousState']
case 138: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtPulseEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtPulseEvent_enter, env,pc,arg0,arg1) ; 
}; break;
// 139 NTSTATUS NtQueryAttributesFile ['POBJECT_ATTRIBUTES ObjectAttributes', ' PFILE_BASIC_INFORMATION FileInformation']
case 139: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtQueryAttributesFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryAttributesFile_enter, env,pc,arg0,arg1) ; 
}; break;
// 140 NTSTATUS NtQueryBootEntryOrder ['PULONG Ids', ' PULONG Count']
case 140: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtQueryBootEntryOrder_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryBootEntryOrder_enter, env,pc,arg0,arg1) ; 
}; break;
// 141 NTSTATUS NtQueryBootOptions ['PBOOT_OPTIONS BootOptions', ' PULONG BootOptionsLength']
case 141: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtQueryBootOptions_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryBootOptions_enter, env,pc,arg0,arg1) ; 
}; break;
// 142 NTSTATUS NtQueryDebugFilterState ['ULONG ComponentId', ' ULONG Level']
case 142: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtQueryDebugFilterState_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryDebugFilterState_enter, env,pc,arg0,arg1) ; 
}; break;
// 143 NTSTATUS NtQueryDefaultLocale ['BOOLEAN UserProfile', ' PLCID DefaultLocaleId']
case 143: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtQueryDefaultLocale_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryDefaultLocale_enter, env,pc,arg0,arg1) ; 
}; break;
// 144 NTSTATUS NtQueryDefaultUILanguage ['LANGID *DefaultUILanguageId']
case 144: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtQueryDefaultUILanguage_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryDefaultUILanguage_enter, env,pc,arg0) ; 
}; break;
// 145 NTSTATUS NtQueryDirectoryFile ['HANDLE FileHandle', ' HANDLE Event', ' PIO_APC_ROUTINE ApcRoutine', ' PVOID ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID FileInformation', ' ULONG Length', ' FILE_INFORMATION_CLASS FileInformationClass', ' BOOLEAN ReturnSingleEntry', ' PUNICODE_STRING FileName', ' BOOLEAN RestartScan']
case 145: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
uint32_t arg9 = get_32(env, 9);
uint32_t arg10 = get_32(env, 10);
if (PPP_CHECK_CB(on_NtQueryDirectoryFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
memcpy(rp.params[9], &arg9, sizeof(uint32_t));
memcpy(rp.params[10], &arg10, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryDirectoryFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10) ; 
}; break;
// 146 NTSTATUS NtQueryDirectoryObject ['HANDLE DirectoryHandle', ' PVOID Buffer', ' ULONG Length', ' BOOLEAN ReturnSingleEntry', ' BOOLEAN RestartScan', ' PULONG Context', ' PULONG ReturnLength']
case 146: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
if (PPP_CHECK_CB(on_NtQueryDirectoryObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryDirectoryObject_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6) ; 
}; break;
// 147 NTSTATUS NtQueryEaFile ['HANDLE FileHandle', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID Buffer', ' ULONG Length', ' BOOLEAN ReturnSingleEntry', ' PVOID EaList', ' ULONG EaListLength', ' PULONG EaIndex', ' BOOLEAN RestartScan']
case 147: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
if (PPP_CHECK_CB(on_NtQueryEaFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryEaFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) ; 
}; break;
// 148 NTSTATUS NtQueryEvent ['HANDLE EventHandle', ' EVENT_INFORMATION_CLASS EventInformationClass', ' PVOID EventInformation', ' ULONG EventInformationLength', ' PULONG ReturnLength']
case 148: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryEvent_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 149 NTSTATUS NtQueryFullAttributesFile ['POBJECT_ATTRIBUTES ObjectAttributes', ' PFILE_NETWORK_OPEN_INFORMATION FileInformation']
case 149: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtQueryFullAttributesFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryFullAttributesFile_enter, env,pc,arg0,arg1) ; 
}; break;
// 150 NTSTATUS NtQueryInformationAtom ['RTL_ATOM Atom', ' ATOM_INFORMATION_CLASS InformationClass', ' PVOID AtomInformation', ' ULONG AtomInformationLength', ' PULONG ReturnLength']
case 150: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryInformationAtom_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryInformationAtom_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 151 NTSTATUS NtQueryInformationFile ['HANDLE FileHandle', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID FileInformation', ' ULONG Length', ' FILE_INFORMATION_CLASS FileInformationClass']
case 151: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryInformationFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryInformationFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 152 NTSTATUS NtQueryInformationJobObject ['HANDLE JobHandle', ' JOBOBJECTINFOCLASS JobObjectInformationClass', ' PVOID JobObjectInformation', ' ULONG JobObjectInformationLength', ' PULONG ReturnLength']
case 152: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryInformationJobObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryInformationJobObject_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 153 NTSTATUS NtQueryInformationPort ['HANDLE PortHandle', ' PORT_INFORMATION_CLASS PortInformationClass', ' PVOID PortInformation', ' ULONG Length', ' PULONG ReturnLength']
case 153: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryInformationPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryInformationPort_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 154 NTSTATUS NtQueryInformationProcess ['HANDLE ProcessHandle', ' PROCESSINFOCLASS ProcessInformationClass', ' PVOID ProcessInformation', ' ULONG ProcessInformationLength', ' PULONG ReturnLength']
case 154: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryInformationProcess_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryInformationProcess_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 155 NTSTATUS NtQueryInformationThread ['HANDLE ThreadHandle', ' THREADINFOCLASS ThreadInformationClass', ' PVOID ThreadInformation', ' ULONG ThreadInformationLength', ' PULONG ReturnLength']
case 155: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryInformationThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryInformationThread_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 156 NTSTATUS NtQueryInformationToken ['HANDLE TokenHandle', ' TOKEN_INFORMATION_CLASS TokenInformationClass', ' PVOID TokenInformation', ' ULONG TokenInformationLength', ' PULONG ReturnLength']
case 156: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryInformationToken_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryInformationToken_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 157 NTSTATUS NtQueryInstallUILanguage ['LANGID *InstallUILanguageId']
case 157: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtQueryInstallUILanguage_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryInstallUILanguage_enter, env,pc,arg0) ; 
}; break;
// 158 NTSTATUS NtQueryIntervalProfile ['KPROFILE_SOURCE ProfileSource', ' PULONG Interval']
case 158: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtQueryIntervalProfile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryIntervalProfile_enter, env,pc,arg0,arg1) ; 
}; break;
// 159 NTSTATUS NtQueryIoCompletion ['HANDLE IoCompletionHandle', ' IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass', ' PVOID IoCompletionInformation', ' ULONG IoCompletionInformationLength', ' PULONG ReturnLength']
case 159: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryIoCompletion_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryIoCompletion_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 160 NTSTATUS NtQueryKey ['HANDLE KeyHandle', ' KEY_INFORMATION_CLASS KeyInformationClass', ' PVOID KeyInformation', ' ULONG Length', ' PULONG ResultLength']
case 160: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryKey_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 161 NTSTATUS NtQueryMultipleValueKey ['HANDLE KeyHandle', ' PKEY_VALUE_ENTRY ValueEntries', ' ULONG EntryCount', ' PVOID ValueBuffer', ' PULONG BufferLength', ' PULONG RequiredBufferLength']
case 161: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtQueryMultipleValueKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryMultipleValueKey_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 162 NTSTATUS NtQueryMutant ['HANDLE MutantHandle', ' MUTANT_INFORMATION_CLASS MutantInformationClass', ' PVOID MutantInformation', ' ULONG MutantInformationLength', ' PULONG ReturnLength']
case 162: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryMutant_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryMutant_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 163 NTSTATUS NtQueryObject ['HANDLE Handle', ' OBJECT_INFORMATION_CLASS ObjectInformationClass', ' PVOID ObjectInformation', ' ULONG ObjectInformationLength', ' PULONG ReturnLength']
case 163: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryObject_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 164 NTSTATUS NtQueryOpenSubKeys ['POBJECT_ATTRIBUTES TargetKey', ' PULONG HandleCount']
case 164: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtQueryOpenSubKeys_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryOpenSubKeys_enter, env,pc,arg0,arg1) ; 
}; break;
// 165 NTSTATUS NtQueryPerformanceCounter ['PLARGE_INTEGER PerformanceCounter', ' PLARGE_INTEGER PerformanceFrequency']
case 165: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtQueryPerformanceCounter_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryPerformanceCounter_enter, env,pc,arg0,arg1) ; 
}; break;
// 166 NTSTATUS NtQueryQuotaInformationFile ['HANDLE FileHandle', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID Buffer', ' ULONG Length', ' BOOLEAN ReturnSingleEntry', ' PVOID SidList', ' ULONG SidListLength', ' PULONG StartSid', ' BOOLEAN RestartScan']
case 166: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
if (PPP_CHECK_CB(on_NtQueryQuotaInformationFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryQuotaInformationFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) ; 
}; break;
// 167 NTSTATUS NtQuerySection ['HANDLE SectionHandle', ' SECTION_INFORMATION_CLASS SectionInformationClass', ' PVOID SectionInformation', ' SIZE_T SectionInformationLength', ' PSIZE_T ReturnLength']
case 167: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQuerySection_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQuerySection_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 168 NTSTATUS NtQuerySecurityObject ['HANDLE Handle', ' SECURITY_INFORMATION SecurityInformation', ' PSECURITY_DESCRIPTOR SecurityDescriptor', ' ULONG Length', ' PULONG LengthNeeded']
case 168: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQuerySecurityObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQuerySecurityObject_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 169 NTSTATUS NtQuerySemaphore ['HANDLE SemaphoreHandle', ' SEMAPHORE_INFORMATION_CLASS SemaphoreInformationClass', ' PVOID SemaphoreInformation', ' ULONG SemaphoreInformationLength', ' PULONG ReturnLength']
case 169: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQuerySemaphore_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQuerySemaphore_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 170 NTSTATUS NtQuerySymbolicLinkObject ['HANDLE LinkHandle', ' PUNICODE_STRING LinkTarget', ' PULONG ReturnedLength']
case 170: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtQuerySymbolicLinkObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQuerySymbolicLinkObject_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 171 NTSTATUS NtQuerySystemEnvironmentValue ['PUNICODE_STRING VariableName', ' PWSTR VariableValue', ' USHORT ValueLength', ' PUSHORT ReturnLength']
case 171: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtQuerySystemEnvironmentValue_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQuerySystemEnvironmentValue_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 172 NTSTATUS NtQuerySystemEnvironmentValueEx ['PUNICODE_STRING VariableName', ' LPGUID VendorGuid', ' PVOID Value', ' PULONG ValueLength', ' PULONG Attributes']
case 172: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQuerySystemEnvironmentValueEx_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQuerySystemEnvironmentValueEx_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 173 NTSTATUS NtQuerySystemInformation ['SYSTEM_INFORMATION_CLASS SystemInformationClass', ' PVOID SystemInformation', ' ULONG SystemInformationLength', ' PULONG ReturnLength']
case 173: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtQuerySystemInformation_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQuerySystemInformation_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 174 NTSTATUS NtQuerySystemTime ['PLARGE_INTEGER SystemTime']
case 174: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtQuerySystemTime_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQuerySystemTime_enter, env,pc,arg0) ; 
}; break;
// 175 NTSTATUS NtQueryTimer ['HANDLE TimerHandle', ' TIMER_INFORMATION_CLASS TimerInformationClass', ' PVOID TimerInformation', ' ULONG TimerInformationLength', ' PULONG ReturnLength']
case 175: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryTimer_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryTimer_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 176 NTSTATUS NtQueryTimerResolution ['PULONG MaximumTime', ' PULONG MinimumTime', ' PULONG CurrentTime']
case 176: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtQueryTimerResolution_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryTimerResolution_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 177 NTSTATUS NtQueryValueKey ['HANDLE KeyHandle', ' PUNICODE_STRING ValueName', ' KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass', ' PVOID KeyValueInformation', ' ULONG Length', ' PULONG ResultLength']
case 177: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtQueryValueKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryValueKey_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 178 NTSTATUS NtQueryVirtualMemory ['HANDLE ProcessHandle', ' PVOID BaseAddress', ' MEMORY_INFORMATION_CLASS MemoryInformationClass', ' PVOID MemoryInformation', ' SIZE_T MemoryInformationLength', ' PSIZE_T ReturnLength']
case 178: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtQueryVirtualMemory_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryVirtualMemory_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 179 NTSTATUS NtQueryVolumeInformationFile ['HANDLE FileHandle', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID FsInformation', ' ULONG Length', ' FS_INFORMATION_CLASS FsInformationClass']
case 179: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueryVolumeInformationFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueryVolumeInformationFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 180 NTSTATUS NtQueueApcThread ['HANDLE ThreadHandle', ' PPS_APC_ROUTINE ApcRoutine', ' PVOID ApcArgument1', ' PVOID ApcArgument2', ' PVOID ApcArgument3']
case 180: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtQueueApcThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtQueueApcThread_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 181 NTSTATUS NtRaiseException ['PEXCEPTION_RECORD ExceptionRecord', ' PCONTEXT ContextRecord', ' BOOLEAN FirstChance']
case 181: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtRaiseException_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtRaiseException_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 182 NTSTATUS NtRaiseHardError ['NTSTATUS ErrorStatus', ' ULONG NumberOfParameters', ' ULONG UnicodeStringParameterMask', ' PULONG_PTR Parameters', ' ULONG ValidResponseOptions', ' PULONG Response']
case 182: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtRaiseHardError_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtRaiseHardError_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 183 NTSTATUS NtReadFile ['HANDLE FileHandle', ' HANDLE Event', ' PIO_APC_ROUTINE ApcRoutine', ' PVOID ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID Buffer', ' ULONG Length', ' PLARGE_INTEGER ByteOffset', ' PULONG Key']
case 183: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
if (PPP_CHECK_CB(on_NtReadFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReadFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) ; 
}; break;
// 184 NTSTATUS NtReadFileScatter ['HANDLE FileHandle', ' HANDLE Event', ' PIO_APC_ROUTINE ApcRoutine', ' PVOID ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' PFILE_SEGMENT_ELEMENT SegmentArray', ' ULONG Length', ' PLARGE_INTEGER ByteOffset', ' PULONG Key']
case 184: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
if (PPP_CHECK_CB(on_NtReadFileScatter_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReadFileScatter_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) ; 
}; break;
// 185 NTSTATUS NtReadRequestData ['HANDLE PortHandle', ' PPORT_MESSAGE Message', ' ULONG DataEntryIndex', ' PVOID Buffer', ' SIZE_T BufferSize', ' PSIZE_T NumberOfBytesRead']
case 185: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtReadRequestData_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReadRequestData_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 186 NTSTATUS NtReadVirtualMemory ['HANDLE ProcessHandle', ' PVOID BaseAddress', ' PVOID Buffer', ' SIZE_T BufferSize', ' PSIZE_T NumberOfBytesRead']
case 186: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtReadVirtualMemory_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReadVirtualMemory_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 187 NTSTATUS NtRegisterThreadTerminatePort ['HANDLE PortHandle']
case 187: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtRegisterThreadTerminatePort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtRegisterThreadTerminatePort_enter, env,pc,arg0) ; 
}; break;
// 188 NTSTATUS NtReleaseMutant ['HANDLE MutantHandle', ' PLONG PreviousCount']
case 188: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtReleaseMutant_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReleaseMutant_enter, env,pc,arg0,arg1) ; 
}; break;
// 189 NTSTATUS NtReleaseSemaphore ['HANDLE SemaphoreHandle', ' LONG ReleaseCount', ' PLONG PreviousCount']
case 189: {
uint32_t arg0 = get_32(env, 0);
int32_t arg1 = get_s32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtReleaseSemaphore_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(int32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReleaseSemaphore_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 190 NTSTATUS NtRemoveIoCompletion ['HANDLE IoCompletionHandle', ' PVOID *KeyContext', ' PVOID *ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' PLARGE_INTEGER Timeout']
case 190: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtRemoveIoCompletion_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtRemoveIoCompletion_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 191 NTSTATUS NtRemoveProcessDebug ['HANDLE ProcessHandle', ' HANDLE DebugObjectHandle']
case 191: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtRemoveProcessDebug_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtRemoveProcessDebug_enter, env,pc,arg0,arg1) ; 
}; break;
// 192 NTSTATUS NtRenameKey ['HANDLE KeyHandle', ' PUNICODE_STRING NewName']
case 192: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtRenameKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtRenameKey_enter, env,pc,arg0,arg1) ; 
}; break;
// 193 NTSTATUS NtReplaceKey ['POBJECT_ATTRIBUTES NewFile', ' HANDLE TargetHandle', ' POBJECT_ATTRIBUTES OldFile']
case 193: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtReplaceKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReplaceKey_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 194 NTSTATUS NtReplyPort ['HANDLE PortHandle', ' PPORT_MESSAGE ReplyMessage']
case 194: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtReplyPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReplyPort_enter, env,pc,arg0,arg1) ; 
}; break;
// 195 NTSTATUS NtReplyWaitReceivePort ['HANDLE PortHandle', ' PVOID *PortContext ', ' PPORT_MESSAGE ReplyMessage', ' PPORT_MESSAGE ReceiveMessage']
case 195: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtReplyWaitReceivePort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReplyWaitReceivePort_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 196 NTSTATUS NtReplyWaitReceivePortEx ['HANDLE PortHandle', ' PVOID *PortContext', ' PPORT_MESSAGE ReplyMessage', ' PPORT_MESSAGE ReceiveMessage', ' PLARGE_INTEGER Timeout']
case 196: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtReplyWaitReceivePortEx_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReplyWaitReceivePortEx_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 197 NTSTATUS NtReplyWaitReplyPort ['HANDLE PortHandle', ' PPORT_MESSAGE ReplyMessage']
case 197: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtReplyWaitReplyPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReplyWaitReplyPort_enter, env,pc,arg0,arg1) ; 
}; break;
// 199 NTSTATUS NtRequestPort ['HANDLE PortHandle', ' PPORT_MESSAGE RequestMessage']
case 199: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtRequestPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtRequestPort_enter, env,pc,arg0,arg1) ; 
}; break;
// 200 NTSTATUS NtRequestWaitReplyPort ['HANDLE PortHandle', ' PPORT_MESSAGE RequestMessage', ' PPORT_MESSAGE ReplyMessage']
case 200: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtRequestWaitReplyPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtRequestWaitReplyPort_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 202 NTSTATUS NtResetEvent ['HANDLE EventHandle', ' PLONG PreviousState']
case 202: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtResetEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtResetEvent_enter, env,pc,arg0,arg1) ; 
}; break;
// 203 NTSTATUS NtResetWriteWatch ['HANDLE ProcessHandle', ' PVOID BaseAddress', ' SIZE_T RegionSize']
case 203: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtResetWriteWatch_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtResetWriteWatch_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 204 NTSTATUS NtRestoreKey ['HANDLE KeyHandle', ' HANDLE FileHandle', ' ULONG Flags']
case 204: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtRestoreKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtRestoreKey_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 205 NTSTATUS NtResumeProcess ['HANDLE ProcessHandle']
case 205: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtResumeProcess_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtResumeProcess_enter, env,pc,arg0) ; 
}; break;
// 206 NTSTATUS NtResumeThread ['HANDLE ThreadHandle', ' PULONG PreviousSuspendCount']
case 206: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtResumeThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtResumeThread_enter, env,pc,arg0,arg1) ; 
}; break;
// 207 NTSTATUS NtSaveKey ['HANDLE KeyHandle', ' HANDLE FileHandle']
case 207: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtSaveKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSaveKey_enter, env,pc,arg0,arg1) ; 
}; break;
// 208 NTSTATUS NtSaveKeyEx ['HANDLE KeyHandle', ' HANDLE FileHandle', ' ULONG Format']
case 208: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtSaveKeyEx_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSaveKeyEx_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 209 NTSTATUS NtSaveMergedKeys ['HANDLE HighPrecedenceKeyHandle', ' HANDLE LowPrecedenceKeyHandle', ' HANDLE FileHandle']
case 209: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtSaveMergedKeys_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSaveMergedKeys_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 210 NTSTATUS NtSecureConnectPort ['PHANDLE PortHandle', ' PUNICODE_STRING PortName', ' PSECURITY_QUALITY_OF_SERVICE SecurityQos', ' PPORT_VIEW ClientView', ' PSID RequiredServerSid', ' PREMOTE_PORT_VIEW ServerView', ' PULONG MaxMessageLength', ' PVOID ConnectionInformation', ' PULONG ConnectionInformationLength']
case 210: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
if (PPP_CHECK_CB(on_NtSecureConnectPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSecureConnectPort_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) ; 
}; break;
// 211 NTSTATUS NtSetBootEntryOrder ['PULONG Ids', ' ULONG Count']
case 211: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtSetBootEntryOrder_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetBootEntryOrder_enter, env,pc,arg0,arg1) ; 
}; break;
// 212 NTSTATUS NtSetBootOptions ['PBOOT_OPTIONS BootOptions', ' ULONG FieldsToChange']
case 212: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtSetBootOptions_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetBootOptions_enter, env,pc,arg0,arg1) ; 
}; break;
// 213 NTSTATUS NtSetContextThread ['HANDLE ThreadHandle', ' PCONTEXT ThreadContext']
case 213: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtSetContextThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetContextThread_enter, env,pc,arg0,arg1) ; 
}; break;
// 214 NTSTATUS NtSetDebugFilterState ['ULONG ComponentId', ' ULONG Level', ' BOOLEAN State']
case 214: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtSetDebugFilterState_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetDebugFilterState_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 215 NTSTATUS NtSetDefaultHardErrorPort ['HANDLE DefaultHardErrorPort']
case 215: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtSetDefaultHardErrorPort_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetDefaultHardErrorPort_enter, env,pc,arg0) ; 
}; break;
// 216 NTSTATUS NtSetDefaultLocale ['BOOLEAN UserProfile', ' LCID DefaultLocaleId']
case 216: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtSetDefaultLocale_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetDefaultLocale_enter, env,pc,arg0,arg1) ; 
}; break;
// 217 NTSTATUS NtSetDefaultUILanguage ['LANGID DefaultUILanguageId']
case 217: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtSetDefaultUILanguage_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetDefaultUILanguage_enter, env,pc,arg0) ; 
}; break;
// 218 NTSTATUS NtSetEaFile ['HANDLE FileHandle', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID Buffer', ' ULONG Length']
case 218: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtSetEaFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetEaFile_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 219 NTSTATUS NtSetEvent ['HANDLE EventHandle', ' PLONG PreviousState']
case 219: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtSetEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetEvent_enter, env,pc,arg0,arg1) ; 
}; break;
// 220 NTSTATUS NtSetEventBoostPriority ['HANDLE EventHandle']
case 220: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtSetEventBoostPriority_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetEventBoostPriority_enter, env,pc,arg0) ; 
}; break;
// 221 NTSTATUS NtSetHighEventPair ['HANDLE EventPairHandle']
case 221: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtSetHighEventPair_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetHighEventPair_enter, env,pc,arg0) ; 
}; break;
// 222 NTSTATUS NtSetHighWaitLowEventPair ['HANDLE EventPairHandle']
case 222: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtSetHighWaitLowEventPair_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetHighWaitLowEventPair_enter, env,pc,arg0) ; 
}; break;
// 223 NTSTATUS NtSetInformationDebugObject ['HANDLE DebugObjectHandle', ' DEBUGOBJECTINFOCLASS DebugObjectInformationClass', ' PVOID DebugInformation', ' ULONG DebugInformationLength', ' PULONG ReturnLength']
case 223: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtSetInformationDebugObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetInformationDebugObject_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 224 NTSTATUS NtSetInformationFile ['HANDLE FileHandle', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID FileInformation', ' ULONG Length', ' FILE_INFORMATION_CLASS FileInformationClass']
case 224: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtSetInformationFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetInformationFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 225 NTSTATUS NtSetInformationJobObject ['HANDLE JobHandle', ' JOBOBJECTINFOCLASS JobObjectInformationClass', ' PVOID JobObjectInformation', ' ULONG JobObjectInformationLength']
case 225: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtSetInformationJobObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetInformationJobObject_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 226 NTSTATUS NtSetInformationKey ['HANDLE KeyHandle', ' KEY_SET_INFORMATION_CLASS KeySetInformationClass', ' PVOID KeySetInformation', ' ULONG KeySetInformationLength']
case 226: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtSetInformationKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetInformationKey_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 227 NTSTATUS NtSetInformationObject ['HANDLE Handle', ' OBJECT_INFORMATION_CLASS ObjectInformationClass', ' PVOID ObjectInformation', ' ULONG ObjectInformationLength']
case 227: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtSetInformationObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetInformationObject_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 228 NTSTATUS NtSetInformationProcess ['HANDLE ProcessHandle', ' PROCESSINFOCLASS ProcessInformationClass', ' PVOID ProcessInformation', ' ULONG ProcessInformationLength']
case 228: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtSetInformationProcess_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetInformationProcess_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 229 NTSTATUS NtSetInformationThread ['HANDLE ThreadHandle', ' THREADINFOCLASS ThreadInformationClass', ' PVOID ThreadInformation', ' ULONG ThreadInformationLength']
case 229: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtSetInformationThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetInformationThread_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 230 NTSTATUS NtSetInformationToken ['HANDLE TokenHandle', ' TOKEN_INFORMATION_CLASS TokenInformationClass', ' PVOID TokenInformation', ' ULONG TokenInformationLength']
case 230: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtSetInformationToken_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetInformationToken_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 231 NTSTATUS NtSetIntervalProfile ['ULONG Interval', ' KPROFILE_SOURCE Source']
case 231: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtSetIntervalProfile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetIntervalProfile_enter, env,pc,arg0,arg1) ; 
}; break;
// 232 NTSTATUS NtSetIoCompletion ['HANDLE IoCompletionHandle', ' PVOID KeyContext', ' PVOID ApcContext', ' NTSTATUS IoStatus', ' ULONG_PTR IoStatusInformation']
case 232: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtSetIoCompletion_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetIoCompletion_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 233 NTSTATUS NtSetLdtEntries ['ULONG Selector0', ' ULONG Entry0Low', ' ULONG Entry0Hi', ' ULONG Selector1', ' ULONG Entry1Low', ' ULONG Entry1Hi']
case 233: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtSetLdtEntries_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetLdtEntries_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 234 NTSTATUS NtSetLowEventPair ['HANDLE EventPairHandle']
case 234: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtSetLowEventPair_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetLowEventPair_enter, env,pc,arg0) ; 
}; break;
// 235 NTSTATUS NtSetLowWaitHighEventPair ['HANDLE EventPairHandle']
case 235: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtSetLowWaitHighEventPair_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetLowWaitHighEventPair_enter, env,pc,arg0) ; 
}; break;
// 236 NTSTATUS NtSetQuotaInformationFile ['HANDLE FileHandle', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID Buffer', ' ULONG Length']
case 236: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtSetQuotaInformationFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetQuotaInformationFile_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 237 NTSTATUS NtSetSecurityObject ['HANDLE Handle', ' SECURITY_INFORMATION SecurityInformation', ' PSECURITY_DESCRIPTOR SecurityDescriptor']
case 237: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtSetSecurityObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetSecurityObject_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 238 NTSTATUS NtSetSystemEnvironmentValue ['PUNICODE_STRING VariableName', ' PUNICODE_STRING VariableValue']
case 238: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtSetSystemEnvironmentValue_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetSystemEnvironmentValue_enter, env,pc,arg0,arg1) ; 
}; break;
// 239 NTSTATUS NtSetSystemEnvironmentValueEx ['PUNICODE_STRING VariableName', ' LPGUID VendorGuid', ' PVOID Value', ' ULONG ValueLength', ' ULONG Attributes']
case 239: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtSetSystemEnvironmentValueEx_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetSystemEnvironmentValueEx_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 240 NTSTATUS NtSetSystemInformation ['SYSTEM_INFORMATION_CLASS SystemInformationClass', ' PVOID SystemInformation', ' ULONG SystemInformationLength']
case 240: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtSetSystemInformation_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetSystemInformation_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 241 NTSTATUS NtSetSystemPowerState ['POWER_ACTION SystemAction', ' SYSTEM_POWER_STATE MinSystemState', ' ULONG Flags']
case 241: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtSetSystemPowerState_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetSystemPowerState_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 242 NTSTATUS NtSetSystemTime ['PLARGE_INTEGER SystemTime', ' PLARGE_INTEGER PreviousTime']
case 242: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtSetSystemTime_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetSystemTime_enter, env,pc,arg0,arg1) ; 
}; break;
// 243 NTSTATUS NtSetThreadExecutionState ['EXECUTION_STATE esFlags', ' PEXECUTION_STATE PreviousFlags']
case 243: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtSetThreadExecutionState_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetThreadExecutionState_enter, env,pc,arg0,arg1) ; 
}; break;
// 244 NTSTATUS NtSetTimer ['HANDLE TimerHandle', ' PLARGE_INTEGER DueTime', ' PTIMER_APC_ROUTINE TimerApcRoutine', ' PVOID TimerContext', ' BOOLEAN WakeTimer', ' LONG Period', ' PBOOLEAN PreviousState']
case 244: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
int32_t arg5 = get_s32(env, 5);
uint32_t arg6 = get_32(env, 6);
if (PPP_CHECK_CB(on_NtSetTimer_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(int32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetTimer_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6) ; 
}; break;
// 245 NTSTATUS NtSetTimerResolution ['ULONG DesiredTime', ' BOOLEAN SetResolution', ' PULONG ActualTime']
case 245: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtSetTimerResolution_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetTimerResolution_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 246 NTSTATUS NtSetUuidSeed ['PCHAR Seed']
case 246: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtSetUuidSeed_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetUuidSeed_enter, env,pc,arg0) ; 
}; break;
// 247 NTSTATUS NtSetValueKey ['HANDLE KeyHandle', ' PUNICODE_STRING ValueName', ' ULONG TitleIndex', ' ULONG Type', ' PVOID Data', ' ULONG DataSize']
case 247: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtSetValueKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetValueKey_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 248 NTSTATUS NtSetVolumeInformationFile ['HANDLE FileHandle', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID FsInformation', ' ULONG Length', ' FS_INFORMATION_CLASS FsInformationClass']
case 248: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtSetVolumeInformationFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSetVolumeInformationFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 249 NTSTATUS NtShutdownSystem ['SHUTDOWN_ACTION Action']
case 249: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtShutdownSystem_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtShutdownSystem_enter, env,pc,arg0) ; 
}; break;
// 250 NTSTATUS NtSignalAndWaitForSingleObject ['HANDLE SignalHandle', ' HANDLE WaitHandle', ' BOOLEAN Alertable', ' PLARGE_INTEGER Timeout']
case 250: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtSignalAndWaitForSingleObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSignalAndWaitForSingleObject_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 251 NTSTATUS NtStartProfile ['HANDLE ProfileHandle']
case 251: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtStartProfile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtStartProfile_enter, env,pc,arg0) ; 
}; break;
// 252 NTSTATUS NtStopProfile ['HANDLE ProfileHandle']
case 252: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtStopProfile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtStopProfile_enter, env,pc,arg0) ; 
}; break;
// 253 NTSTATUS NtSuspendProcess ['HANDLE ProcessHandle']
case 253: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtSuspendProcess_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSuspendProcess_enter, env,pc,arg0) ; 
}; break;
// 254 NTSTATUS NtSuspendThread ['HANDLE ThreadHandle', ' PULONG PreviousSuspendCount']
case 254: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtSuspendThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSuspendThread_enter, env,pc,arg0,arg1) ; 
}; break;
// 255 NTSTATUS NtSystemDebugControl ['SYSDBG_COMMAND Command', ' PVOID InputBuffer', ' ULONG InputBufferLength', ' PVOID OutputBuffer', ' ULONG OutputBufferLength', ' PULONG ReturnLength']
case 255: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtSystemDebugControl_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtSystemDebugControl_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 256 NTSTATUS NtTerminateJobObject ['HANDLE JobHandle', ' NTSTATUS ExitStatus']
case 256: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtTerminateJobObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtTerminateJobObject_enter, env,pc,arg0,arg1) ; 
}; break;
// 257 NTSTATUS NtTerminateProcess ['HANDLE ProcessHandle', ' NTSTATUS ExitStatus']
case 257: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtTerminateProcess_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtTerminateProcess_enter, env,pc,arg0,arg1) ; 
}; break;
// 258 NTSTATUS NtTerminateThread ['HANDLE ThreadHandle', ' NTSTATUS ExitStatus']
case 258: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtTerminateThread_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtTerminateThread_enter, env,pc,arg0,arg1) ; 
}; break;
// 259 NTSTATUS NtTestAlert ['']
case 259: {
if (PPP_CHECK_CB(on_NtTestAlert_return)) {
}
PPP_RUN_CB(on_NtTestAlert_enter, env,pc) ; 
}; break;
// 260 NTSTATUS NtTraceEvent ['HANDLE TraceHandle', ' ULONG Flags', ' ULONG FieldSize', ' PVOID Fields']
case 260: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtTraceEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtTraceEvent_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 261 NTSTATUS NtTranslateFilePath ['PFILE_PATH InputFilePath', ' ULONG OutputType', ' PFILE_PATH OutputFilePath', ' PULONG OutputFilePathLength']
case 261: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtTranslateFilePath_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtTranslateFilePath_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 262 NTSTATUS NtUnloadDriver ['PUNICODE_STRING DriverServiceName']
case 262: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtUnloadDriver_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtUnloadDriver_enter, env,pc,arg0) ; 
}; break;
// 263 NTSTATUS NtUnloadKey ['POBJECT_ATTRIBUTES TargetKey']
case 263: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtUnloadKey_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtUnloadKey_enter, env,pc,arg0) ; 
}; break;
// 264 NTSTATUS NtUnloadKeyEx ['POBJECT_ATTRIBUTES TargetKey', ' HANDLE Event']
case 264: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtUnloadKeyEx_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtUnloadKeyEx_enter, env,pc,arg0,arg1) ; 
}; break;
// 265 NTSTATUS NtUnlockFile ['HANDLE FileHandle', ' PIO_STATUS_BLOCK IoStatusBlock', ' PLARGE_INTEGER ByteOffset', ' PLARGE_INTEGER Length', ' ULONG Key']
case 265: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtUnlockFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtUnlockFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 266 NTSTATUS NtUnlockVirtualMemory ['HANDLE ProcessHandle', ' PVOID *BaseAddress', ' PSIZE_T RegionSize', ' ULONG MapType']
case 266: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtUnlockVirtualMemory_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtUnlockVirtualMemory_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 267 NTSTATUS NtUnmapViewOfSection ['HANDLE ProcessHandle', ' PVOID BaseAddress']
case 267: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtUnmapViewOfSection_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtUnmapViewOfSection_enter, env,pc,arg0,arg1) ; 
}; break;
// 268 NTSTATUS NtVdmControl ['VDMSERVICECLASS Service', ' PVOID ServiceData']
case 268: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
if (PPP_CHECK_CB(on_NtVdmControl_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtVdmControl_enter, env,pc,arg0,arg1) ; 
}; break;
// 269 NTSTATUS NtWaitForDebugEvent ['HANDLE DebugObjectHandle', ' BOOLEAN Alertable', ' PLARGE_INTEGER Timeout', ' PDBGUI_WAIT_STATE_CHANGE WaitStateChange']
case 269: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtWaitForDebugEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtWaitForDebugEvent_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 270 NTSTATUS NtWaitForMultipleObjects ['ULONG Count', ' HANDLE Handles[]', ' WAIT_TYPE WaitType', ' BOOLEAN Alertable', ' PLARGE_INTEGER Timeout']
case 270: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtWaitForMultipleObjects_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtWaitForMultipleObjects_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 271 NTSTATUS NtWaitForSingleObject ['HANDLE Handle', ' BOOLEAN Alertable', ' PLARGE_INTEGER Timeout']
case 271: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtWaitForSingleObject_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtWaitForSingleObject_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 272 NTSTATUS NtWaitHighEventPair ['HANDLE EventPairHandle']
case 272: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtWaitHighEventPair_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtWaitHighEventPair_enter, env,pc,arg0) ; 
}; break;
// 273 NTSTATUS NtWaitLowEventPair ['HANDLE EventPairHandle']
case 273: {
uint32_t arg0 = get_32(env, 0);
if (PPP_CHECK_CB(on_NtWaitLowEventPair_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtWaitLowEventPair_enter, env,pc,arg0) ; 
}; break;
// 274 NTSTATUS NtWriteFile ['HANDLE FileHandle', ' HANDLE Event', ' PIO_APC_ROUTINE ApcRoutine', ' PVOID ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' PVOID Buffer', ' ULONG Length', ' PLARGE_INTEGER ByteOffset', ' PULONG Key']
case 274: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
if (PPP_CHECK_CB(on_NtWriteFile_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtWriteFile_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) ; 
}; break;
// 275 NTSTATUS NtWriteFileGather ['HANDLE FileHandle', ' HANDLE Event', ' PIO_APC_ROUTINE ApcRoutine', ' PVOID ApcContext', ' PIO_STATUS_BLOCK IoStatusBlock', ' PFILE_SEGMENT_ELEMENT SegmentArray', ' ULONG Length', ' PLARGE_INTEGER ByteOffset', ' PULONG Key']
case 275: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
uint32_t arg6 = get_32(env, 6);
uint32_t arg7 = get_32(env, 7);
uint32_t arg8 = get_32(env, 8);
if (PPP_CHECK_CB(on_NtWriteFileGather_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
memcpy(rp.params[6], &arg6, sizeof(uint32_t));
memcpy(rp.params[7], &arg7, sizeof(uint32_t));
memcpy(rp.params[8], &arg8, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtWriteFileGather_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) ; 
}; break;
// 276 NTSTATUS NtWriteRequestData ['HANDLE PortHandle', ' PPORT_MESSAGE Message', ' ULONG DataEntryIndex', ' PVOID Buffer', ' SIZE_T BufferSize', ' PSIZE_T NumberOfBytesWritten']
case 276: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
uint32_t arg5 = get_32(env, 5);
if (PPP_CHECK_CB(on_NtWriteRequestData_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
memcpy(rp.params[5], &arg5, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtWriteRequestData_enter, env,pc,arg0,arg1,arg2,arg3,arg4,arg5) ; 
}; break;
// 277 NTSTATUS NtWriteVirtualMemory ['HANDLE ProcessHandle', ' PVOID BaseAddress', ' PVOID Buffer', ' SIZE_T BufferSize', ' PSIZE_T NumberOfBytesWritten']
case 277: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
uint32_t arg4 = get_32(env, 4);
if (PPP_CHECK_CB(on_NtWriteVirtualMemory_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
memcpy(rp.params[4], &arg4, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtWriteVirtualMemory_enter, env,pc,arg0,arg1,arg2,arg3,arg4) ; 
}; break;
// 278 NTSTATUS NtYieldExecution ['']
case 278: {
if (PPP_CHECK_CB(on_NtYieldExecution_return)) {
}
PPP_RUN_CB(on_NtYieldExecution_enter, env,pc) ; 
}; break;
// 279 NTSTATUS NtCreateKeyedEvent ['PHANDLE KeyedEventHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes', ' ULONG Flags']
case 279: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtCreateKeyedEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtCreateKeyedEvent_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 280 NTSTATUS NtOpenKeyedEvent ['PHANDLE KeyedEventHandle', ' ACCESS_MASK DesiredAccess', ' POBJECT_ATTRIBUTES ObjectAttributes']
case 280: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
if (PPP_CHECK_CB(on_NtOpenKeyedEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtOpenKeyedEvent_enter, env,pc,arg0,arg1,arg2) ; 
}; break;
// 281 NTSTATUS NtReleaseKeyedEvent ['HANDLE KeyedEventHandle', ' PVOID KeyValue', ' BOOLEAN Alertable', ' PLARGE_INTEGER Timeout']
case 281: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtReleaseKeyedEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtReleaseKeyedEvent_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 282 NTSTATUS NtWaitForKeyedEvent ['HANDLE KeyedEventHandle', ' PVOID KeyValue', ' BOOLEAN Alertable', ' PLARGE_INTEGER Timeout']
case 282: {
uint32_t arg0 = get_32(env, 0);
uint32_t arg1 = get_32(env, 1);
uint32_t arg2 = get_32(env, 2);
uint32_t arg3 = get_32(env, 3);
if (PPP_CHECK_CB(on_NtWaitForKeyedEvent_return)) {
memcpy(rp.params[0], &arg0, sizeof(uint32_t));
memcpy(rp.params[1], &arg1, sizeof(uint32_t));
memcpy(rp.params[2], &arg2, sizeof(uint32_t));
memcpy(rp.params[3], &arg3, sizeof(uint32_t));
}
PPP_RUN_CB(on_NtWaitForKeyedEvent_enter, env,pc,arg0,arg1,arg2,arg3) ; 
}; break;
// 283 NTSTATUS NtQueryPortInformationProcess ['']
case 283: {
if (PPP_CHECK_CB(on_NtQueryPortInformationProcess_return)) {
}
PPP_RUN_CB(on_NtQueryPortInformationProcess_enter, env,pc) ; 
}; break;
default:
PPP_RUN_CB(on_unknown_sys_enter, env, pc, EAX);
}
PPP_RUN_CB(on_all_sys_enter, env, pc, EAX);
appendReturnPoint(rp);
#endif
 } 
