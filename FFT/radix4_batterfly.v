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

module complex_sub(
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


   assign YR = AR - BR;
   assign YI = AI - BI;

   assign Y = {YR, YI};

   always@(posedge clk) begin
      // YR <= AR - BR;
      // YI <= AI - BI;
   end

endmodule // complex_add

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



module radix4_batterfly(
                        input         clk,rst,
                        input [6:0]   k, 
                        input [21:0]  A0,
                        input [21:0]  A1,
                        input [21:0]  A2,
                        input [21:0]  A3,
                        input         valid_i,
                        output [21:0] Y0,
                        output [21:0] Y1,
                        output [21:0] Y2,
                        output [21:0] Y3,
                        output reg    valid_o
                        );

   wire [21:0]                        B0,B1,B2,B3,B3J;
   wire [21:0]                        C0,C1,C2,C3;
   wire signed [16:0]                        W1KR, W1KI,W2KR, W2KI,W3KR, W3KI;
   
   reg [3:0]                          cnt;
   
   assign W1KI = func_k1_sin(k);
   assign W2KI = func_k2_sin(k);
   assign W3KI = func_k3_sin(k);
   assign W1KR = func_k1_cos(k);
   assign W2KR = func_k2_cos(k);
   assign W3KR = func_k3_cos(k);

   
   always@(posedge clk or negedge rst) begin
      if(!rst) begin
         valid_o <= 0;
         cnt <= 0;
      end
      else begin
         if(valid_i) begin
            cnt <= 1;
            valid_o <= 0;            
         end
         // if(cnt == 1) begin
         //    cnt <= cnt + 1;            
         // end
         // if(cnt == 2) begin
         //    cnt <= cnt + 1;
         // end
         // if(cnt == 3) begin
         //    cnt <= cnt + 1;
         // end
         if(cnt == 1) begin
            cnt <= cnt + 1;
            valid_o <= 1;
         end
         if(cnt == 2) begin
            cnt <= 0;
            valid_o <= 0;
         end         
      end
   end   

   //B0 = A0+A2
   complex_add u1 (.A(A0), .B(A2), .Y(B0),.clk(clk));
   //B1 = A1+A3
   complex_add u2 (.A(A1), .B(A3), .Y(B1),.clk(clk));
   //B2 = A0-A2
   complex_sub u3 (.A(A0), .B(A2), .Y(B2),.clk(clk));
   //B3 = A1-A3
   complex_sub u4 (.A(A1), .B(A3), .Y(B3),.clk(clk));
   
   j_multiplier u5 (.A(B3), .Y(B3J),.clk(clk));

   //C0 = B0+B1=(A0+A2)+(A1+A3)=A0+A1+A2+A3
   complex_add u6 (.A(B0), .B(B1), .Y(C0),.clk(clk));
   //C1= B2-jB3=(A0-A2)-j(A1-A3)=A0-jA1-A2+jA3
   complex_sub u7 (.A(B2), .B(B3J), .Y(C1),.clk(clk));
   //C2= B0-B1=(A0+A2)-(A1+A3)=A0-A1+A2-A3
   complex_sub u8 (.A(B0), .B(B1), .Y(C2),.clk(clk));
   //C3= B2+jB3=(A0-A2)+j(A1-A3)=A0+jA1-A2-jA3
   complex_add u9 (.A(B2), .B(B3J), .Y(C3),.clk(clk));
   
   assign Y0 = C0;
   twiddler u10 (.A(C1), .WR(W1KR), .WI(W1KI), .Y(Y1), .clk(clk), .rst(rst));
   twiddler u11 (.A(C2), .WR(W2KR), .WI(W2KI), .Y(Y2), .clk(clk), .rst(rst));
   twiddler u12 (.A(C3), .WR(W3KR), .WI(W3KI), .Y(Y3), .clk(clk), .rst(rst));

   function signed [16:0] func_k1_sin;
      input[6:0] select;
      begin
         case(select)
           7'd0: func_k1_sin = 0;
           7'd1: func_k1_sin = -6423;
           7'd2: func_k1_sin = -12785;
           7'd3: func_k1_sin = -19023;
           7'd4: func_k1_sin = -25079;
           7'd5: func_k1_sin = -30892;
           7'd6: func_k1_sin = -36409;
           7'd7: func_k1_sin = -41574;
           7'd8: func_k1_sin = -46340;
           7'd9: func_k1_sin = -50659;
           7'd10: func_k1_sin = -54490;
           7'd11: func_k1_sin = -57796;
           7'd12: func_k1_sin = -60546;
           7'd13: func_k1_sin = -62713;
           7'd14: func_k1_sin = -64275;
           7'd15: func_k1_sin = -65219;
           7'd16: func_k1_sin = -65535;
           7'd17: func_k1_sin = -65219;
           7'd18: func_k1_sin = -64275;
           7'd19: func_k1_sin = -62713;
           7'd20: func_k1_sin = -60546;
           7'd21: func_k1_sin = -57796;
           7'd22: func_k1_sin = -54490;
           7'd23: func_k1_sin = -50659;
           7'd24: func_k1_sin = -46340;
           7'd25: func_k1_sin = -41574;
           7'd26: func_k1_sin = -36409;
           7'd27: func_k1_sin = -30892;
           7'd28: func_k1_sin = -25079;
           7'd29: func_k1_sin = -19023;
           7'd30: func_k1_sin = -12785;
           7'd31: func_k1_sin = -6423;
           7'd32: func_k1_sin = 0;
           7'd33: func_k1_sin = 6423;
           7'd34: func_k1_sin = 12785;
           7'd35: func_k1_sin = 19023;
           7'd36: func_k1_sin = 25079;
           7'd37: func_k1_sin = 30892;
           7'd38: func_k1_sin = 36409;
           7'd39: func_k1_sin = 41574;
           7'd40: func_k1_sin = 46340;
           7'd41: func_k1_sin = 50659;
           7'd42: func_k1_sin = 54490;
           7'd43: func_k1_sin = 57796;
           7'd44: func_k1_sin = 60546;
           7'd45: func_k1_sin = 62713;
           7'd46: func_k1_sin = 64275;
           7'd47: func_k1_sin = 65219;
           7'd48: func_k1_sin = 65535;
           7'd49: func_k1_sin = 65219;
           7'd50: func_k1_sin = 64275;
           7'd51: func_k1_sin = 62713;
           7'd52: func_k1_sin = 60546;
           7'd53: func_k1_sin = 57796;
           7'd54: func_k1_sin = 54490;
           7'd55: func_k1_sin = 50659;
           7'd56: func_k1_sin = 46340;
           7'd57: func_k1_sin = 41574;
           7'd58: func_k1_sin = 36409;
           7'd59: func_k1_sin = 30892;
           7'd60: func_k1_sin = 25079;
           7'd61: func_k1_sin = 19023;
           7'd62: func_k1_sin = 12785;
           7'd63: func_k1_sin = 6423;
           default: func_k1_sin = 0;
         endcase
      end
   endfunction

   function [16:0] func_k1_cos;
      input[6:0] select;
      begin
         case(select)
           7'd0: func_k1_cos = 65535;
           7'd1: func_k1_cos = 65219;
           7'd2: func_k1_cos = 64275;
           7'd3: func_k1_cos = 62713;
           7'd4: func_k1_cos = 60546;
           7'd5: func_k1_cos = 57796;
           7'd6: func_k1_cos = 54490;
           7'd7: func_k1_cos = 50659;
           7'd8: func_k1_cos = 46340;
           7'd9: func_k1_cos = 41574;
           7'd10: func_k1_cos = 36409;
           7'd11: func_k1_cos = 30892;
           7'd12: func_k1_cos = 25079;
           7'd13: func_k1_cos = 19023;
           7'd14: func_k1_cos = 12785;
           7'd15: func_k1_cos = 6423;
           7'd16: func_k1_cos = 0;
           7'd17: func_k1_cos = -6423;
           7'd18: func_k1_cos = -12785;
           7'd19: func_k1_cos = -19023;
           7'd20: func_k1_cos = -25079;
           7'd21: func_k1_cos = -30892;
           7'd22: func_k1_cos = -36409;
           7'd23: func_k1_cos = -41574;
           7'd24: func_k1_cos = -46340;
           7'd25: func_k1_cos = -50659;
           7'd26: func_k1_cos = -54490;
           7'd27: func_k1_cos = -57796;
           7'd28: func_k1_cos = -60546;
           7'd29: func_k1_cos = -62713;
           7'd30: func_k1_cos = -64275;
           7'd31: func_k1_cos = -65219;
           7'd32: func_k1_cos = -65535;
           7'd33: func_k1_cos = -65219;
           7'd34: func_k1_cos = -64275;
           7'd35: func_k1_cos = -62713;
           7'd36: func_k1_cos = -60546;
           7'd37: func_k1_cos = -57796;
           7'd38: func_k1_cos = -54490;
           7'd39: func_k1_cos = -50659;
           7'd40: func_k1_cos = -46340;
           7'd41: func_k1_cos = -41574;
           7'd42: func_k1_cos = -36409;
           7'd43: func_k1_cos = -30892;
           7'd44: func_k1_cos = -25079;
           7'd45: func_k1_cos = -19023;
           7'd46: func_k1_cos = -12785;
           7'd47: func_k1_cos = -6423;
           7'd48: func_k1_cos = 0;
           7'd49: func_k1_cos = 6423;
           7'd50: func_k1_cos = 12785;
           7'd51: func_k1_cos = 19023;
           7'd52: func_k1_cos = 25079;
           7'd53: func_k1_cos = 30892;
           7'd54: func_k1_cos = 36409;
           7'd55: func_k1_cos = 41574;
           7'd56: func_k1_cos = 46340;
           7'd57: func_k1_cos = 50659;
           7'd58: func_k1_cos = 54490;
           7'd59: func_k1_cos = 57796;
           7'd60: func_k1_cos = 60546;
           7'd61: func_k1_cos = 62713;
           7'd62: func_k1_cos = 64275;
           7'd63: func_k1_cos = 65219;
           default: func_k1_cos = 0;
         endcase
      end
   endfunction

   function signed [16:0] func_k2_sin;
      input[6:0] select;
      begin
         case(select)
           7'd0: func_k2_sin = 0;
           7'd1: func_k2_sin = -12785;
           7'd2: func_k2_sin = -25079;
           7'd3: func_k2_sin = -36409;
           7'd4: func_k2_sin = -46340;
           7'd5: func_k2_sin = -54490;
           7'd6: func_k2_sin = -60546;
           7'd7: func_k2_sin = -64275;
           7'd8: func_k2_sin = -65535;
           7'd9: func_k2_sin = -64275;
           7'd10: func_k2_sin = -60546;
           7'd11: func_k2_sin = -54490;
           7'd12: func_k2_sin = -46340;
           7'd13: func_k2_sin = -36409;
           7'd14: func_k2_sin = -25079;
           7'd15: func_k2_sin = -12785;
           7'd16: func_k2_sin = 0;
           7'd17: func_k2_sin = 12785;
           7'd18: func_k2_sin = 25079;
           7'd19: func_k2_sin = 36409;
           7'd20: func_k2_sin = 46340;
           7'd21: func_k2_sin = 54490;
           7'd22: func_k2_sin = 60546;
           7'd23: func_k2_sin = 64275;
           7'd24: func_k2_sin = 65535;
           7'd25: func_k2_sin = 64275;
           7'd26: func_k2_sin = 60546;
           7'd27: func_k2_sin = 54490;
           7'd28: func_k2_sin = 46340;
           7'd29: func_k2_sin = 36409;
           7'd30: func_k2_sin = 25079;
           7'd31: func_k2_sin = 12785;
           7'd32: func_k2_sin = 0;
           7'd33: func_k2_sin = -12785;
           7'd34: func_k2_sin = -25079;
           7'd35: func_k2_sin = -36409;
           7'd36: func_k2_sin = -46340;
           7'd37: func_k2_sin = -54490;
           7'd38: func_k2_sin = -60546;
           7'd39: func_k2_sin = -64275;
           7'd40: func_k2_sin = -65535;
           7'd41: func_k2_sin = -64275;
           7'd42: func_k2_sin = -60546;
           7'd43: func_k2_sin = -54490;
           7'd44: func_k2_sin = -46340;
           7'd45: func_k2_sin = -36409;
           7'd46: func_k2_sin = -25079;
           7'd47: func_k2_sin = -12785;
           7'd48: func_k2_sin = 0;
           7'd49: func_k2_sin = 12785;
           7'd50: func_k2_sin = 25079;
           7'd51: func_k2_sin = 36409;
           7'd52: func_k2_sin = 46340;
           7'd53: func_k2_sin = 54490;
           7'd54: func_k2_sin = 60546;
           7'd55: func_k2_sin = 64275;
           7'd56: func_k2_sin = 65535;
           7'd57: func_k2_sin = 64275;
           7'd58: func_k2_sin = 60546;
           7'd59: func_k2_sin = 54490;
           7'd60: func_k2_sin = 46340;
           7'd61: func_k2_sin = 36409;
           7'd62: func_k2_sin = 25079;
           7'd63: func_k2_sin = 12785;
           default: func_k2_sin = 0;
         endcase
      end
   endfunction

   function [16:0] func_k2_cos;
      input[6:0] select;
      begin
         case(select)
           7'd0: func_k2_cos = 65535;
           7'd1: func_k2_cos = 64275;
           7'd2: func_k2_cos = 60546;
           7'd3: func_k2_cos = 54490;
           7'd4: func_k2_cos = 46340;
           7'd5: func_k2_cos = 36409;
           7'd6: func_k2_cos = 25079;
           7'd7: func_k2_cos = 12785;
           7'd8: func_k2_cos = 0;
           7'd9: func_k2_cos = -12785;
           7'd10: func_k2_cos = -25079;
           7'd11: func_k2_cos = -36409;
           7'd12: func_k2_cos = -46340;
           7'd13: func_k2_cos = -54490;
           7'd14: func_k2_cos = -60546;
           7'd15: func_k2_cos = -64275;
           7'd16: func_k2_cos = -65535;
           7'd17: func_k2_cos = -64275;
           7'd18: func_k2_cos = -60546;
           7'd19: func_k2_cos = -54490;
           7'd20: func_k2_cos = -46340;
           7'd21: func_k2_cos = -36409;
           7'd22: func_k2_cos = -25079;
           7'd23: func_k2_cos = -12785;
           7'd24: func_k2_cos = 0;
           7'd25: func_k2_cos = 12785;
           7'd26: func_k2_cos = 25079;
           7'd27: func_k2_cos = 36409;
           7'd28: func_k2_cos = 46340;
           7'd29: func_k2_cos = 54490;
           7'd30: func_k2_cos = 60546;
           7'd31: func_k2_cos = 64275;
           7'd32: func_k2_cos = 65535;
           7'd33: func_k2_cos = 64275;
           7'd34: func_k2_cos = 60546;
           7'd35: func_k2_cos = 54490;
           7'd36: func_k2_cos = 46340;
           7'd37: func_k2_cos = 36409;
           7'd38: func_k2_cos = 25079;
           7'd39: func_k2_cos = 12785;
           7'd40: func_k2_cos = 0;
           7'd41: func_k2_cos = -12785;
           7'd42: func_k2_cos = -25079;
           7'd43: func_k2_cos = -36409;
           7'd44: func_k2_cos = -46340;
           7'd45: func_k2_cos = -54490;
           7'd46: func_k2_cos = -60546;
           7'd47: func_k2_cos = -64275;
           7'd48: func_k2_cos = -65535;
           7'd49: func_k2_cos = -64275;
           7'd50: func_k2_cos = -60546;
           7'd51: func_k2_cos = -54490;
           7'd52: func_k2_cos = -46340;
           7'd53: func_k2_cos = -36409;
           7'd54: func_k2_cos = -25079;
           7'd55: func_k2_cos = -12785;
           7'd56: func_k2_cos = 0;
           7'd57: func_k2_cos = 12785;
           7'd58: func_k2_cos = 25079;
           7'd59: func_k2_cos = 36409;
           7'd60: func_k2_cos = 46340;
           7'd61: func_k2_cos = 54490;
           7'd62: func_k2_cos = 60546;
           7'd63: func_k2_cos = 64275;
           default: func_k2_cos = 0;
         endcase
      end
   endfunction

   function signed [16:0] func_k3_sin;
      input[6:0] select;
      begin
         case(select)
           7'd0: func_k3_sin = 0;
           7'd1: func_k3_sin = -19023;
           7'd2: func_k3_sin = -36409;
           7'd3: func_k3_sin = -50659;
           7'd4: func_k3_sin = -60546;
           7'd5: func_k3_sin = -65219;
           7'd6: func_k3_sin = -64275;
           7'd7: func_k3_sin = -57796;
           7'd8: func_k3_sin = -46340;
           7'd9: func_k3_sin = -30892;
           7'd10: func_k3_sin = -12785;
           7'd11: func_k3_sin = 6423;
           7'd12: func_k3_sin = 25079;
           7'd13: func_k3_sin = 41574;
           7'd14: func_k3_sin = 54490;
           7'd15: func_k3_sin = 62713;
           7'd16: func_k3_sin = 65535;
           7'd17: func_k3_sin = 62713;
           7'd18: func_k3_sin = 54490;
           7'd19: func_k3_sin = 41574;
           7'd20: func_k3_sin = 25079;
           7'd21: func_k3_sin = 6423;
           7'd22: func_k3_sin = -12785;
           7'd23: func_k3_sin = -30892;
           7'd24: func_k3_sin = -46340;
           7'd25: func_k3_sin = -57796;
           7'd26: func_k3_sin = -64275;
           7'd27: func_k3_sin = -65219;
           7'd28: func_k3_sin = -60546;
           7'd29: func_k3_sin = -50659;
           7'd30: func_k3_sin = -36409;
           7'd31: func_k3_sin = -19023;
           7'd32: func_k3_sin = 0;
           7'd33: func_k3_sin = 19023;
           7'd34: func_k3_sin = 36409;
           7'd35: func_k3_sin = 50659;
           7'd36: func_k3_sin = 60546;
           7'd37: func_k3_sin = 65219;
           7'd38: func_k3_sin = 64275;
           7'd39: func_k3_sin = 57796;
           7'd40: func_k3_sin = 46340;
           7'd41: func_k3_sin = 30892;
           7'd42: func_k3_sin = 12785;
           7'd43: func_k3_sin = -6423;
           7'd44: func_k3_sin = -25079;
           7'd45: func_k3_sin = -41574;
           7'd46: func_k3_sin = -54490;
           7'd47: func_k3_sin = -62713;
           7'd48: func_k3_sin = -65535;
           7'd49: func_k3_sin = -62713;
           7'd50: func_k3_sin = -54490;
           7'd51: func_k3_sin = -41574;
           7'd52: func_k3_sin = -25079;
           7'd53: func_k3_sin = -6423;
           7'd54: func_k3_sin = 12785;
           7'd55: func_k3_sin = 30892;
           7'd56: func_k3_sin = 46340;
           7'd57: func_k3_sin = 57796;
           7'd58: func_k3_sin = 64275;
           7'd59: func_k3_sin = 65219;
           7'd60: func_k3_sin = 60546;
           7'd61: func_k3_sin = 50659;
           7'd62: func_k3_sin = 36409;
           7'd63: func_k3_sin = 19023;
           default: func_k3_sin = 0;
         endcase
      end
   endfunction

   function [16:0] func_k3_cos;
      input[6:0] select;
      begin
         case(select)
           7'd0: func_k3_cos = 65535;
           7'd1: func_k3_cos = 62713;
           7'd2: func_k3_cos = 54490;
           7'd3: func_k3_cos = 41574;
           7'd4: func_k3_cos = 25079;
           7'd5: func_k3_cos = 6423;
           7'd6: func_k3_cos = -12785;
           7'd7: func_k3_cos = -30892;
           7'd8: func_k3_cos = -46340;
           7'd9: func_k3_cos = -57796;
           7'd10: func_k3_cos = -64275;
           7'd11: func_k3_cos = -65219;
           7'd12: func_k3_cos = -60546;
           7'd13: func_k3_cos = -50659;
           7'd14: func_k3_cos = -36409;
           7'd15: func_k3_cos = -19023;
           7'd16: func_k3_cos = 0;
           7'd17: func_k3_cos = 19023;
           7'd18: func_k3_cos = 36409;
           7'd19: func_k3_cos = 50659;
           7'd20: func_k3_cos = 60546;
           7'd21: func_k3_cos = 65219;
           7'd22: func_k3_cos = 64275;
           7'd23: func_k3_cos = 57796;
           7'd24: func_k3_cos = 46340;
           7'd25: func_k3_cos = 30892;
           7'd26: func_k3_cos = 12785;
           7'd27: func_k3_cos = -6423;
           7'd28: func_k3_cos = -25079;
           7'd29: func_k3_cos = -41574;
           7'd30: func_k3_cos = -54490;
           7'd31: func_k3_cos = -62713;
           7'd32: func_k3_cos = -65535;
           7'd33: func_k3_cos = -62713;
           7'd34: func_k3_cos = -54490;
           7'd35: func_k3_cos = -41574;
           7'd36: func_k3_cos = -25079;
           7'd37: func_k3_cos = -6423;
           7'd38: func_k3_cos = 12785;
           7'd39: func_k3_cos = 30892;
           7'd40: func_k3_cos = 46340;
           7'd41: func_k3_cos = 57796;
           7'd42: func_k3_cos = 64275;
           7'd43: func_k3_cos = 65219;
           7'd44: func_k3_cos = 60546;
           7'd45: func_k3_cos = 50659;
           7'd46: func_k3_cos = 36409;
           7'd47: func_k3_cos = 19023;
           7'd48: func_k3_cos = 0;
           7'd49: func_k3_cos = -19023;
           7'd50: func_k3_cos = -36409;
           7'd51: func_k3_cos = -50659;
           7'd52: func_k3_cos = -60546;
           7'd53: func_k3_cos = -65219;
           7'd54: func_k3_cos = -64275;
           7'd55: func_k3_cos = -57796;
           7'd56: func_k3_cos = -46340;
           7'd57: func_k3_cos = -30892;
           7'd58: func_k3_cos = -12785;
           7'd59: func_k3_cos = 6423;
           7'd60: func_k3_cos = 25079;
           7'd61: func_k3_cos = 41574;
           7'd62: func_k3_cos = 54490;
           7'd63: func_k3_cos = 62713;
           default: func_k3_cos = 0;
         endcase
      end
   endfunction


   
endmodule // radix4_batterfly


