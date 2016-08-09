#glance上传镜像(以windows xp为例）
##1.公有仓库：
	source admin-openrc.sh
	glance image-create --name "windows-xp-sp3" --file panda-test.qcow2 --disk-format qcow2 --container-format bare --visibility public --progress
##2.私有仓库
	source demo-openrc.sh
	glance image-create --name "windows-xp-sp3" --file panda-test.qcow2 --disk-format qcow2 --container-format bare --progress