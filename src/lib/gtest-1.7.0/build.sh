#!/usr/bin/env bash

mkdir -p build
cd build
cmake -Dgtest_build_samples=ON ..
make
mkdir -p ../../../../lib/test
cp libgtest.a ../../../../lib/test
cp libgtest_main.a ../../../../lib/test
cd ..
