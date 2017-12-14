#!/usr/bin/env bash

sudo apt-get install cmake
sudo apt-get install g++
sudo apt-get install gcc

mkdir -p build
cd build
cmake ..
cmake --build .
cd ..
