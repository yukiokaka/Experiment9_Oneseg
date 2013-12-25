
module test_iqdemap_bpsk;
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
        ai <= 0;
        cnt <= 0;
        
     end

   always #5         clk <= ~clk;

   always #10
     begin
        ar <= 1 - (reader_data[cnt] << 1);
        valid <= 1;
          cnt <= cnt + 1;
     end
   
   
   
   initial begin
      
      
   end // initial begin
   
   iqdemap_bpsk bpsk(.CLK(clk), .RST(rst), .valid_i(valid), .ce(ce), .ar(ar), .ai(ai));
   
   
endmodule

