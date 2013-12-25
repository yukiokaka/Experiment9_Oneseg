
module test_lcd_control;

   reg clk,rst,start_update, busy;
   reg [31:0] error_rate;
   reg [7:0] char;
   reg       valid;
   
   initial begin rst=1;
      #10 rst=0;
      #10 rst=1;
      #3000 $finish;

   end
   initial
     begin
        $dumpvars;
        $dumpfile("stm.vcd");
        #0

        start_update <= 0;
        error_rate <= 2136;
        clk=0;
     end

   always #10 clk <= ~clk;
   
   
   initial begin
           
        #50
          start_update <= 1;
        #60
          valid <= 1;
          char <=36;
        #70
          char <=31;
        #80
          char <=32;
        #90 
          char <=33;
        #100
          valid <= 0;
        
        
        
     end // initial begin
   
   lcd_control control_module(.CLK(clk), .RST(rst), .lcd_busy(busy), .valid_i(valid), .start_update(start_update), .char(char));
   
   
endmodule

