
module test_lcd_control;
   reg [127:0] reader_data;
   reg reader_en;
   reg clk,rst,start_update, busy;
   reg       valid,raw;
   
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
        clk <= 0;
	    reader_data <= 128'habcdefabcdefabcdefabcdefabcdef;
        valid <= 0;
        
     end

   always #10 clk <= ~clk;
   
   
   initial begin
           
        #50
          valid <= 1;
        #60
          valid <= 0;        
     end // initial begin
   
   iqmap_bpsk bpsk(.CLK(clk), .RST(rst), .reader_data(reader_data), .valid_i(valid),.ce(ce));
   
   
endmodule

