rm fft64.vcd ./a.out
iverilog  fft64.v radix4_batterfly.v twiddler.v myfft.v test_fft64_2.v
./a.out
gtkwave fft64.vcd
