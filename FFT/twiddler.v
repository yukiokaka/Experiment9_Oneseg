module twiddler(
                input         clk,rst,
                input [21:0]  A,
                output [21:0] Y,
                input signed [16:0] WR,WI
                );


   wire signed [10:0]        AR;
   wire signed [10:0]        AI;
   reg signed [10:0]         YR;
   reg signed [10:0]         YI;

   reg signed [44:0]         YR1,YR2,YI1,YI2;
          
   
   assign {AR, AI} = A;
   assign Y = {YR, YI}; 
   
   always@(posedge clk or negedge rst) begin
      if(!rst) begin
         YR <= 0;
         YI <= 0;
      end
      else begin
         YR1 <= AR * WR;
         YR2 <= AI * WI;
         YI1 <= AR * WI;
         YI2 <= AI * WR;
         YR <= (YR1 - YR2)>>16;
         YI <= (YI1 + YI2)>>16;
         
      end
   end

endmodule // twiddler

