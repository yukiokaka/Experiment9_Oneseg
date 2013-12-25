
module test_lcd_control;

   reg clk,rst,start_update, busy;
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
        busy <= 0;      
        start_update <= 0;
        clk=0;
     end

   always #10 clk <= ~clk;
   always #120 busy <= ~busy;
   always #120 start_update <= ~start_update;
   
   
   initial begin
           
        #50
          start_update <= 1;
        #60
          valid <= 1;
        #70
          start_update <= 0;
          char <=31;
        #80
          char <=32;
        #90 
          char <=33;
        #100
          valid <= 0;
        
        
        
     end // initial begin
   
   lcd_ber_top top_inst(.CLK(clk), .RST(rst), .lcd_busy(busy), .start(start_update));
   
   
endmodule

