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
      valid_a <= 0;
      
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

      #0 begin
         ar<=5;
         ai<=15;
      end
      #10 begin
         ar<=1;
         ai<=3;
      end
      #10 begin
         ar<=-12;
         ai<=3;
      end
      #10 begin
         ar<=-7;
         ai<=11;
      end
      #10 begin
         ar<=1;
         ai<=11;
      end
      #10 begin
         ar<=12;
         ai<=7;
      end
      #10 begin
         ar<=-13;
         ai<=5;
      end
      #10 begin
         ar<=-8;
         ai<=14;
      end
      #10 begin
         ar<=13;
         ai<=4;
      end
      #10 begin
         ar<=-8;
         ai<=1;
      end
      #10 begin
         ar<=4;
         ai<=5;
      end
      #10 begin
         ar<=1;
         ai<=11;
      end
      #10 begin
         ar<=-6;
         ai<=2;
      end
      #10 begin
         ar<=-10;
         ai<=10;
      end
      #10 begin
         ar<=0;
         ai<=6;
      end
      #10 begin
         ar<=-4;
         ai<=4;
      end
      #10 begin
         ar<=-9;
         ai<=7;
      end
      #10 begin
         ar<=-9;
         ai<=3;
      end
      #10 begin
         ar<=-8;
         ai<=12;
      end
      #10 begin
         ar<=-7;
         ai<=11;
      end
      #10 begin
         ar<=14;
         ai<=0;
      end
      #10 begin
         ar<=11;
         ai<=2;
      end
      #10 begin
         ar<=8;
         ai<=2;
      end
      #10 begin
         ar<=-7;
         ai<=12;
      end
      #10 begin
         ar<=-4;
         ai<=0;
      end
      #10 begin
         ar<=3;
         ai<=11;
      end
      #10 begin
         ar<=-7;
         ai<=4;
      end
      #10 begin
         ar<=0;
         ai<=4;
      end
      #10 begin
         ar<=-5;
         ai<=15;
      end
      #10 begin
         ar<=-2;
         ai<=7;
      end
      #10 begin
         ar<=10;
         ai<=2;
      end
      #10 begin
         ar<=14;
         ai<=7;
      end
      #10 begin
         ar<=-8;
         ai<=7;
      end
      #10 begin
         ar<=-3;
         ai<=10;
      end
      #10 begin
         ar<=-15;
         ai<=0;
      end
      #10 begin
         ar<=-5;
         ai<=9;
      end
      #10 begin
         ar<=8;
         ai<=4;
      end
      #10 begin
         ar<=-12;
         ai<=9;
      end
      #10 begin
         ar<=-12;
         ai<=13;
      end
      #10 begin
         ar<=5;
         ai<=13;
      end
      #10 begin
         ar<=4;
         ai<=13;
      end
      #10 begin
         ar<=-8;
         ai<=2;
      end
      #10 begin
         ar<=2;
         ai<=15;
      end
      #10 begin
         ar<=8;
         ai<=4;
      end
      #10 begin
         ar<=-8;
         ai<=15;
      end
      #10 begin
         ar<=-9;
         ai<=1;
      end
      #10 begin
         ar<=-14;
         ai<=5;
      end
      #10 begin
         ar<=2;
         ai<=14;
      end
      #10 begin
         ar<=12;
         ai<=11;
      end
      #10 begin
         ar<=-13;
         ai<=4;
      end
      #10 begin
         ar<=3;
         ai<=2;
      end
      #10 begin
         ar<=6;
         ai<=11;
      end
      #10 begin
         ar<=10;
         ai<=8;
      end
      #10 begin
         ar<=-9;
         ai<=1;
      end
      #10 begin
         ar<=-6;
         ai<=9;
      end
      #10 begin
         ar<=-7;
         ai<=15;
      end
      #10 begin
         ar<=10;
         ai<=2;
      end
      #10 begin
         ar<=-6;
         ai<=4;
      end
      #10 begin
         ar<=6;
         ai<=1;
      end
      #10 begin
         ar<=-12;
         ai<=4;
      end
      #10 begin
         ar<=12;
         ai<=2;
      end
      #10 begin
         ar<=3;
         ai<=3;
      end
      #10 begin
         ar<=13;
         ai<=12;
      end
      #10 begin
         ar<=-11;
         ai<=6;
      end
      #10 begin
         valid_a <= 0;
         ar <= 0;
         ai <= 0;
      end
      
   end // initial begin

   
   always #5 CLK <= ~CLK;

   fft64 FFT64_module(.CLK(CLK), .RST(RST),.valid_a(valid_a),.ar(ar),.ai(ai));
         
   
endmodule
