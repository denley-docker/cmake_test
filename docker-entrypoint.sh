#!/usr/bin/env bash

set -ex

cmake --version
mkdir -p build
cd build
cmake .. -DUSE_MYMATH=OFF
make -j$(nproc --all)
./cmake_test
