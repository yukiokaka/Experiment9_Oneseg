
module test_radix4;

   wire [21:0] A0,A1,A2,A3;
   reg [10:0]  A0R, A0I;
   reg [10:0]  A1R, A1I;
   reg [10:0]  A2R, A2I;
   reg [10:0]  A3R, A3I;
  
   reg [15:0]  WR, WI;
   reg [6:0]   k;
   reg         start, valid;
   reg         clk,rst;
   
   
   assign A0 = {A0R, A0I};
   assign A1 = {A1R, A1I};
   assign A2 = {A2R, A2I};
   assign A3 = {A3R, A3I};
   

   initial begin 
      rst = 1;
      A0R <= 1;
      A0I <= 2;
      A1R <= 3;
      A1I <= 4;
      A2R <= 5;
      A2I <= 6;
      A3R <= 7;
      A3I <= 8;
      valid <= 0;
      k <= 1;
      
      #10 rst<=0;
      #10 rst<=1;
      #3000 $finish;

   end
   initial
     begin
        $dumpfile("radix.vcd");
        $dumpvars;
        #0
          clk<=0;
     end

      
   initial begin
      #20 valid <= 1;
      #10 valid <= 0;
      
   end // initial begin

   always #5 clk <= ~clk;
   
  radix4_batterfly adix4_batterfly_module(.clk(clk), .rst(rst), .k(k), .A0(A0), .A1(A1), .A2(A2), .A3(A3), .valid_i(valid));
   
   
endmodule

