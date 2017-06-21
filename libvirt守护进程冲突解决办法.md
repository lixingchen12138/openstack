# libvirt守护进程冲突解决办法:
## 1.修改libvirt版本链接:
	cd /usr/lib
	rm libvirt.so.0
	mv libvirt.so.0.1002.0 libvirt.so.0
	rm libvirt-lxc.so.0
	mv libvirt-lxc.so.0.1002.0 libvirt-lxc.so.0
	rm libvirt-qemu.so.0
	mv libvirt-qemu.so.0.1002.0 libvirt-qemu.so.0
## 2.修改libvirtd.conf文件:
	cd /etc/libvirt/libvirtd.conf
	listen_tls = 0
	unix_sock_group = "libvirtd"
	unix_sock_ro_perms = "0777"
	unix_sock_rw_perms = "0770"
	auth_unix_ro = "none"
	auth_unix_rw = "none"
## 3.删除pid文件
	cd /var/run
	rm libvirtd.pid
## 4.杀死libvirtd进程
	cd /usr/sbin
	mv libvirtd libvirtd1
	ps -ax | grep libvirtd
	kill
	mv libvirtd1 libvirtd
## 5.重新启动libvirtd服务
	/usr/sbin/libvirtd -d --listen --config /etc/libvirt/libvirt.conf

## 6.添加kvm权限:
	chmod 666 /dev/kvm
