# libvirt回滚功能实现：
## 1.创建虚拟机快照
	virsh snapshot-create-as --domain instance-0000006d snap1
## 2.查看虚拟机快照信息
	virsh snapshot-list instance-0000006d
## 3.快照回滚
	virsh snapshot-revert --domain instance-0000006d snap1


