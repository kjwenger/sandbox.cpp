#!/usr/bin/env bash

wget -O - http://apt.llvm.org/llvm-snapshot.gpg.key | sudo apt-key add -

CODENAME=`lsb_release -c | sed 's/Codename\:\s*//'`
VERSION=${1:-5.0}

echo "
deb http://apt.llvm.org/${CODENAME}/ llvm-toolchain-${CODENAME}-${VERSION} main
deb-src http://apt.llvm.org/${CODENAME}/ llvm-toolchain-${CODENAME}-${VERSION} main" | \
sudo tee "/etc/apt/sources.list.d/llvm-toolchain-${CODENAME}-${VERSION}.list"

sudo apt update
sudo apt install "clang-${VERSION}" -y
sudo apt install "libc++1" -y
sudo apt install "libc++-dev" -y
