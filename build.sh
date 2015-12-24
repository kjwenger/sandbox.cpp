#!/usr/bin/env bash

sudo apt-get install cmake
sudo apt-get install g++
sudo apt-get install gcc

cd src/lib/gtest-1.7.0
./build.sh
cd ../../..

mkdir -p build
cd build
cmake ..
cmake --build .
./tests
cd ..
