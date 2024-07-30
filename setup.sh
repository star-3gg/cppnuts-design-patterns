#!/bin/sh

# INFO: Build the project
cmake -B build -S .
make -C build

# INFO: Execute bult binaries
echo 0 | ./build/0001_FactoryDesignPattern/FDP
./build/0002_AbstractFactoryDesignPattern/AFDP
