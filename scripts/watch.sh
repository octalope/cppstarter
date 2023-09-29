#!/usr/bin/env bash

cmake src -B build

find . \( -type d -name build -o -name .git -o -name scripts \) -prune -o -type f -print | entr -c -p cmake --build build
