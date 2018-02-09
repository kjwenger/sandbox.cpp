#!/usr/bin/env bash

export PATH=/usr/local/gcc-7.2.0/bin:${PATH}
make TOOLCHAIN="gcc-7.2.0" $@
