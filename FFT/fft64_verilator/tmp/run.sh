#!/bin/sh


# cleanup
rm -rf obj_dir
rm -f  counter.vcd


# run Verilator to translate Verilog into C++, include C++ testbench
verilator -Wall --cc --trace counter.v --exe main.cpp
# build C++ project
make -j -C obj_dir/ -f Vcounter.mk Vcounter
# run executable simulation
obj_dir/Vcounter



