module j_multiplier(
                    input         clk,
                    input [21:0]  A,
                    output [21:0] Y
                    );
   wire signed [10:0]             AR;
   wire signed [10:0]             AI;
   // reg signed [10:0]              YR, YI;
   wire signed [10:0]              YR, YI;
   assign {AR, AI} = A;
   assign YR = -AI;
   assign YI = AR;

   assign Y = {YR, YI};
   
   always@(posedge clk) begin
      // YR <= -AI;
      // YI <= AR;
   end
   
endmodule // j_multiplier

