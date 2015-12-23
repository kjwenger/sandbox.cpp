#!/usr/bin/env bash

cd src/lib/gtest-1.7.0
./build.sh
cd ../../..

mkdir -p build
cd build
cmake ..
cmake --build .
./tests
cd ..
