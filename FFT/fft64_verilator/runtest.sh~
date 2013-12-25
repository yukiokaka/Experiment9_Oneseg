#!/bin/sh

set -e;

# ADD FILES HERE!
#verilogs='../../rtl/fft64.v'

verilogs='../fft64.v ../radix4_batterfly.v ../myfft.v ../twiddler.v'
echo ${verilogs}

dir=test
echo ${dir}
verilator  -Wno-width   -LDFLAGS '-lfftw3' -Mdir "${dir}" --cc --trace ${verilogs} --exe main.cpp
# verilator --lint-only ${verilogs}
make -j -C "${dir}" -f Vfft64.mk Vfft64
./test/Vfft64

#make -C "${dir}" -f Vmyfft.mk Vmyfft
#./test/Vmyfft
