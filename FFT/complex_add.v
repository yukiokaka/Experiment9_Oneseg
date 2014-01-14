module complex_add(
                   input         clk,
                   input [21:0]  A,
                   input [21:0]  B,
                   output [21:0] Y
                   );
   
   wire signed [10:0]            AR, AI, BR, BI;
   // reg signed [10:0]             YR, YI;
   wire signed [10:0]             YR, YI;
   
   assign {AR, AI} = A;
   assign {BR, BI} = B;
   
   assign YR = AR + BR;
   assign YI = AI + BI;

   assign Y = {YR, YI};
   
   always@(posedge clk) begin
      // YR <= AR + BR;
      // YI <= AI + BI;
   end
   
endmodule // complex_add
