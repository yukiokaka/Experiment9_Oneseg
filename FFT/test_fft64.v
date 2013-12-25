
module test_fft64;
   reg [6:0]  k;
   reg        valid_a;
   reg        CLK,RST;
   integer    cnt;
   reg [10:0] ar,ai;


   initial begin
      RST = 1;
      k <= 1;
      ar <= 0;
      ai <= 0;

      #10 RST<=0;
      #10 RST<=1;
      #30000 $finish;

   end
   initial
     begin
        $dumpfile("fft64.vcd");
        $dumpvars;
        #0
          CLK<=0;
     end


   initial begin
      #20 begin
         valid_a <= 1;
      end
      #100 begin
         ar <= 100;
         ai <= 0;
      end
      #10 begin
        ar <= 0;
        ai <= 0;
       end
      //#630 valid_a <= 0;

   end // initial begin

   always #5 CLK <= ~CLK;

   fft64 FFT64_module(.CLK(CLK), .RST(RST),.valid_a(valid_a),.ar(ar),.ai(ai));

endmodule