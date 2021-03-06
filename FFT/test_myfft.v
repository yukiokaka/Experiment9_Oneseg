
module test_fft;
   reg [10:0] A[0:63];
   reg [6:0]  k;
   reg        start;
   reg        clk,rst;
   integer    cnt;
   
   reg [21:0] A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31,A32,A33,A34,A35,A36,A37,A38,A39,A40,A41,A42,A43,A44,A45,A46,A47,A48,A49,A50,A51,A52,A53,A54,A55,A56,A57,A58,A59,A60,A61,A62,A63;
   

   

   initial begin 
      rst = 1;
      start <= 0;
      k <= 1;
      A0 <= 0;
      A1 <= 0;
      A2 <= 0;
      A3 <= 0;
      A4 <= 0;
      A5 <= 0;
      A6 <= 0;
      A7 <= 0;
      A8 <= 0;
      A9 <= 0;
      A10 <= 0;
      A11 <= 0;
      A12 <= 0;
      A13 <= 0;
      A14 <= 0;
      A15 <= 0;
      A16 <= 0;
      A17 <= 0;
      A18 <= 0;
      A19 <= 0;
      A20 <= 0;
      A21 <= 0;
      A22 <= 0;
      A23 <= 0;
      A24 <= 0;
      A25 <= 0;
      A26 <= 0;
      A27 <= 0;
      A28 <= 0;
      A29 <= 0;
      A30 <= 0;
      A31 <= 0;
      A32 <= 0;
      A33 <= 0;
      A34 <= 0;
      A35 <= 0;
      A36 <= 0;
      A37 <= 0;
      A38 <= 0;
      A39 <= 0;
      A40 <= 0;
      A41 <= 0;
      A42 <= 0;
      A43 <= 0;
      A44 <= 0;
      A45 <= 0;
      A46 <= 0;
      A47 <= 0;
      A48 <= 0;
      A49 <= 0;
      A50 <= 0;
      A51 <= 0;
      A52 <= 0;
      A53 <= 0;
      A54 <= 0;
      A55 <= 0;
      A56 <= 0;
      A57 <= 0;
      A58 <= 0;
      A59 <= 0;
      A60 <= 0;
      A61 <= 0;
      A62 <= 0;
      A63 <= 0;
      #10 rst<=0;
      #10 rst<=1;
      #30000 $finish;

   end
   initial
     begin
        $dumpfile("fft.vcd");
        $dumpvars;
        #0
          clk<=0;
     end

      
   initial begin
      #20 start <= 1;
      #10 start <= 0;
      
   end // initial begin

   always #5 clk <= ~clk;
   
   myFFT FFT_module(.clk(clk), .rst(rst),.start(start),.A0(A0),.A1(A1),.A2(A2),.A3(A3),.A4(A4),.A5(A5),.A6(A6),.A7(A7),.A8(A8),.A9(A9),.A10(A10),.A11(A11),.A12(A12),.A13(A13),.A14(A14),.A15(A15),.A16(A16),.A17(A17),.A18(A18),.A19(A19),.A20(A20),.A21(A21),.A22(A22),.A23(A23),.A24(A24),.A25(A25),.A26(A26),.A27(A27),.A28(A28),.A29(A29),.A30(A30),.A31(A31),.A32(A32),.A33(A33),.A34(A34),.A35(A35),.A36(A36),.A37(A37),.A38(A38),.A39(A39),.A40(A40),.A41(A41),.A42(A42),.A43(A43),.A44(A44),.A45(A45),.A46(A46),.A47(A47),.A48(A48),.A49(A49),.A50(A50),.A51(A51),.A52(A52),.A53(A53),.A54(A54),.A55(A55),.A56(A56),.A57(A57),.A58(A58),.A59(A59),.A60(A60),.A61(A61),.A62(A62),.A63(A63)
);
      
endmodule
