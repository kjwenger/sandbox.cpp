#!/usr/bin/env bash

wget -O - http://apt.llvm.org/llvm-snapshot.gpg.key | sudo apt-key add -

sudo echo "
deb http://apt.llvm.org/stretch/ llvm-toolchain-stretch-4.0 main
deb-src http://apt.llvm.org/stretch/ llvm-toolchain-stretch-4.0 main" \
> /etc/apt/sources.list

sudo apt update
sudo apt install clang-4.0
sudo apt install libc++1
sudo apt install libc++-dev