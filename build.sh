#!/usr/bin/env bash

mkdir -p build
chdir build
cmake -G "MinGW Makefiles" ..
chdir ..
