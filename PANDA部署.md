# PANDA部署：
## 1.创建虚拟机
	qemu-img create -f qcow2 -o compat=0.10 panda-test.qcow2 3G
	/home/xen/panda-master/qemu/x86_64-softmmu/qemu-system-x86_64 -drive file=panda-test.qcow2,if=ide,cache=writeback -m 256M -cdrom ubuntu-14.04.3-desktop-amd64.iso -vnc :5901 --monitor stdio
## 2.开启虚拟机
	/home/xen/panda-master/qemu/x86_64-softmmu/qemu-system-x86_64 -drive file=panda-test.qcow2,if=ide,cache=writeback -m 256M -vnc :5901 --monitor stdio
## 3.录制
	begin_record panda
	end_record
## 4.回放
	/home/xen/panda-master/qemu/x86_64-softmmu/qemu-system-x86_64 -drive file=panda-test.qcow2,if=ide,cache=writeback -m 256M -vnc :5901 --monitor stdio -replay panda
