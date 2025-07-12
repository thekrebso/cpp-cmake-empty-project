#!/bin/bash
set -e
cmake -G Ninja -B build/ -DCMAKE_BUILD_TYPE=Release
cd build && ninja
