
module test_fft;
   reg [10:0]  xr,xi;
   
   reg         clk,rst;
   reg         valid;
   reg [6:0]   cnt;
   reg [10:0]  ar;
   reg [10:0]  ai;
   
   
   initial begin rst=1;
      #1 rst=0;
      #2 rst=1;
      #30000 $finish;

   end
   initial
     begin
        $dumpvars;
        $dumpfile("stm.vcd");
        #0
          begin
             clk <= 0;
             valid <= 0;
             ai <= 0;
             ar <= 0;
          end
     end

   always #5         clk <= ~clk;

   initial begin
      
      #50
        valid <= 1;
      #650
        valid <= 0;
      
   end // initial begin
   
   fft fft_module(.clk(clk), .rst(rst), .valid_i(valid), .ar(ar), .ai(ai));
   
   
endmodule
