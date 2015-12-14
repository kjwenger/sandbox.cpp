#!/usr/bin/env bash

mkdir -p build
chdir build
cmake -Dgtest_build_samples=ON -G "MinGW Makefiles" ..
make
chdir ..
