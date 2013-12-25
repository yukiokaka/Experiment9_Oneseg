
module test_twiddler;

   wire [21:0] A;
   reg [10:0] AR, AI;
   reg [15:0] WR, WI;
   
   
   assign A = {AR, AI};
   
   reg clk,rst;
   initial begin 
      rst=1;
      WR <= 16'hffff>>1;
      WI <= 16'hffff>>1;
      AR <=2;
      AI <= 2;
      k <= 1;
      
      #10 rst=0;
      #10 rst=1;
      #3000 $finish;

   end
   initial
     begin
        $dumpfile("twiddler.vcd");
        $dumpvars;
        #0
          clk=0;
     end

   always #10 clk <= ~clk;
   
   
   initial begin
      
   end // initial begin
   
   twiddler twiddler_module(.clk(clk), .rst(rst), .A(A), .WR(WR), .WI(WI));
   
endmodule
