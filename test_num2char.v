
module test_num2char;

   reg clk,rst,start_update;
   reg [31:0] error_rate;
   wire[7:0]  char;
   wire       valid;

   initial begin rst=1;
      #10 rst=0;
      #10 rst=1;
      #1000 $finish;

   end
   initial
     begin
        #0 start_update <= 0;
        
        $dumpvars;
        $dumpfile("stm.vcd");

        clk=0;
        #10
          start_update <= 1;
          error_rate <= 2136;
        forever #10 clk=~clk;
        
     end
   num2char num2char_inst(.CLK(clk),.RST(rst),.start_update(start_update), .error_rate(error_rate),.char(char), .valid_o(valid));

endmodule

