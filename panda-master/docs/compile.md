# Compiling PANDA

WARNING: This document is slightly out of date. Look at
[panda_install.bash](../panda_install.bash) instead.

In order to build PANDA, you should use the `build.sh` script
in the QEMU directory. The script comes with some default
options. But first, the prerequisites need to be taken care of.
It is recommended to build LLVM and QEMU with the same compiler.
In order to build some of the PANDA plugins inside of the QEMU
directory, a compiler that supports C++11 is required.

PANDA is known to build on debian wheezy and jessie with the
following steps.
Some parts of the installation require root privileges. We assume
that sudo has been setup and enabled for the user installing
PANDA.
If you prefer to have these instructions printed, you can 
use [gitprint](https://gitprint.com/) to render them into
a printable PDF file.

## Prepackaged prerequisites
Use the following commands to install the prerequisites that can
be used as-is from the Debian repositories.
Some of the prerequisite libraries are not directly used by
PANDA, but are required by the plugins shipping with it.
Subversion is used to retrieve the source of LLVM.

```
sudo apt-get install build-essential 
sudo apt-get build-dep qemu
sudo apt-get install nasm
sudo apt-get install libssl-dev
sudo apt-get install libpcap-dev
sudo apt-get install subversion
sudo apt-get -y install curl
sudo apt-get -y install autoconf
sudo apt-get -y install libtool
sudo apt-get -y install python-pip
sudo apt-get -y install libelf-dev
```

## Compiled prerequisites

### LLVM
Download the source for LLVM 3.3 and Clang 3.3. **Make sure you
get these specific versions!** Clang source must be extracted in
directory `tools/clang` directory of the LLVM source tree.
The required source trees can be directly checked out from the
[LLVM subversion repositories](http://llvm.org/svn/llvm-project/).

```
cd panda
svn checkout http://llvm.org/svn/llvm-project/llvm/tags/RELEASE_33/final/ llvm
cd llvm/tools
svn checkout http://llvm.org/svn/llvm-project/cfe/tags/RELEASE_33/final/ clang
cd -
cd llvm/tools/clang/tools
svn checkout http://llvm.org/svn/llvm-project/clang-tools-extra/tags/RELEASE_33/final/ extra
cd -
```

If you are working with g++-4.9, you will also need to
[patch clang](http://reviews.llvm.org/rL201729) to provide `max_align_t`.
Otherwise building of some plugins will fail.

<!--
	In case the diff from llvm.org goes away, this is a backup:
	https://gist.githubusercontent.com/m000/c57fa35d550b49033864/raw/1eacc0ccd0876dc3abc3c314346a83bef614e23c/llvm-3.3_gcc-4.9.diff
-->

```
export CLANG_PATCH=http://reviews.llvm.org/file/data/sw37fgtbupwhetydgazl/PHID-FILE-wprxzvc5yn4ylp7xwt6t/201729.diff
cd llvm/tools/clang
wget -O - "$CLANG_PATCH" | patch -p2 -F3
unset CLANG_PATCH
cd -
```


Now, compile LLVM. For a **debug build** (REALLY slow), use the following command:

```
cd llvm
./configure --disable-optimized --enable-assertions --enable-debug-symbols --enable-debug-runtime --enable-targets=x86 && REQUIRES_RTTI=1 make -j $(nproc)
cd -
```

For a **release build**, use the following commands:

```
cd llvm
./configure --enable-optimized --disable-assertions --enable-targets=x86 && REQUIRES_RTTI=1 make -j $(nproc)
cd -
```

### diStorm
[diStorm](https://code.google.com/p/distorm/) is a binary
disassembler library. It is used by some of the PANDA plugins,
and may also come handy when writing your own plugins.
The following commands will download, build and install diStorm
on your system.

```
cd ~/software
svn checkout http://distorm.googlecode.com/svn/trunk/ distorm
cd distorm/make/linux
make
sudo make install
cd -
cd distorm/include
sudo cp * /usr/local/include
```

### libdwarf
[libdwarf](https://www.prevanders.net/dwarf.html) is a DWARF
producer and consumer. It is used by `dwarfp` in order to 
provide source level introspection to PANDA plugins.

```
wget http://www.prevanders.net/libdwarf-20160507.tar.gz --no-check-certificate 
tar -xzvf libdwarf-20151114.tar.gz
cd dwarf-20160507
progress "Installing libdwarf..."
./configure --enable-shared
make
sudo cp libdwarf/libdwarf.h /usr/local/include
sudo cp libdwarf/dwarf.h /usr/local/include
sudo cp libdwarf/libdwarf.so /usr/local/lib/
cd ../
```

### Protocol buffers C style

Protocol buffers are used by pandalog.  You want it.
This is how I built things and installed them.

```
cd ~/software
git clone https://github.com/google/protobuf.git
cd protobuf
sh ./autogen.sh
./configure --disable-shared
make
sudo make install

cd ~/software
git clone https://github.com/protobuf-c/protobuf-c.git
cd protobuf-c
sh ./autogen.sh
./configure --disable-shared
make
sudo make install
```

### Pycparser

The new version of PPP, which permits api functions that have fn pointers as arguments,
uses a c parser written in python: [pycparser](https://github.com/eliben/pycparser).
You can directly install pycparser using [pip](https://pip.pypa.io/):

```
sudo pip install git+https://github.com/eliben/pycparser.git@master
```

<!--
Manual installation is also possible:

```
cd ~/software
git clone https://github.com/eliben/pycparser.git
cd pycparser
sudo python setup.py install
```
-->


## Building the QEMU part and the PANDA plugins
After successfully installing all the prerequisites, you can go
on and build the QEMU part of PANDA.
This is most conveniently done by invoking `build.sh`.

```
cd qemu
./build.sh
```

### Overriding LLVM location
The `build.sh` script will attempt to use the Release build of the LLVM we compiled for PANDA.
You can specify some other LLVM directory and build type by setting the 
`PANDA_LLVM_ROOT` and `PANDA_LLVM_BUILD` environment variables. E.g.,

```
export PANDA_LLVM_ROOT="/opt/llvm"
export PANDA_LLVM_BUILD="Debug+Asserts"
cd qemu
./build.sh
```

If LLVM is not found in the specified locations, `build.sh`
will attempt to use any other version of LLVM 3.3 found in your path.

### Overriding default C/C++ compiler
The default C and C++ compilers will be used for the compilation.
In case you want to use a specific version of gcc/g++, the `build.sh`
script respects the ``CC``/``CXX`` environment variables.
E.g.,

```
cd qemu
CC=gcc-4.8 CXX=g++-4.8 ./build.sh
```

