#!/bin/bash
./build.sh && cd build && ctest --output-on-failure $@
