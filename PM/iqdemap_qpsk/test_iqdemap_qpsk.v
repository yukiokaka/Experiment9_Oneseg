
module test_iqdemap_qpsk;
   reg [127:0] reader_data;
   reg         reader_en;
   reg         clk,rst,start_update, busy;
   reg         valid,raw;
   reg [6:0]   cnt;
   reg signed [10:0]  ar;
   reg signed [10:0]  ai;
   
   
   initial begin rst=1;
      #1 rst=0;
      #2 rst=1;
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
        ai <= 0;
        cnt <= 1;
        
     end

   always #5         clk <= ~clk;


   always #10
     begin
        ar <= 1 - (reader_data[cnt-1] << 1);
        ai <= 1 - (reader_data[cnt] << 1);
        valid <= 1;        
        cnt <= cnt + 2;
     end
   
   
   
   initial begin
      
      #50
        valid <= 1;
   end // initial begin
   
   iqdemap_qpsk qpsk(.CLK(clk), .RST(rst), .valid_i(valid), .ce(ce), .ar(ar), .ai(ai));
   
   
endmodule

