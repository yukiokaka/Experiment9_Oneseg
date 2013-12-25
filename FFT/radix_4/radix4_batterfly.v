module complex_add(
                   input         clk,
                   input [21:0]  A,
                   input [21:0]  B,
                   output [21:0] Y,
                   output reg valid_o
                   );
   
   wire signed [10:0]            AR, AI, BR, BI;
   reg signed [10:0]             YR, YI;
   
   assign {AR, AI} = A;
   assign {BR, BI} = B;
   
   assign Y = {YR, YI};
   
   always@(posedge clk) begin
      YR <= AR + BR;
      YI <= AI + BI;
   end
   
endmodule // complex_add

module complex_sub(
                   input         clk,
                   input [21:0]  A,
                   input [21:0]  B,
                   output [21:0] Y
                   );
   
   wire signed [10:0]            AR, AI, BR, BI;
   reg signed [10:0]             YR, YI;
   
   assign {AR, AI} = A;
   assign {BR, BI} = B;

   assign Y = {YR, YI};

   always@(posedge clk) begin
      YR <= AR - BR;
      YI <= AI - BI;
   end

endmodule // complex_add

module j_multiplier(
                    input         clk,
                    input [21:0]  A,
                    output [21:0] Y
                    );
   wire signed [10:0]             AR;
   wire signed [10:0]             AI;
   reg signed [10:0]              YR, YI;
   
   assign {AR, AI} = A;
   assign Y = {YR, YI};

   always@(posedge clk) begin
      YR <= -AI;
      YI <= AR;
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
   wire [16:0]                        W1KR, W1KI,W2KR, W2KI,W3KR, W3KI;
   
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
         if(cnt == 1) begin
            cnt <= cnt + 1;            
         end
         if(cnt == 2) begin
            cnt <= cnt + 1;
         end
         if(cnt == 3) begin
            cnt <= cnt + 1;
            valid_o <= 1;
         end
         if(cnt == 4) begin
            cnt <= 0;
            valid_o <= 0;
         end         
      end
   end   
   
   complex_add u1 (.A(A0), .B(A2), .Y(B0),.clk(clk));
   complex_add u2 (.A(A1), .B(A3), .Y(B1),.clk(clk));
   complex_sub u3 (.A(A0), .B(A2), .Y(B2),.clk(clk));
   complex_sub u4 (.A(A1), .B(A3), .Y(B3),.clk(clk));
   
   j_multiplier u5 (.A(B3), .Y(B3J),.clk(clk));

   complex_add u6 (.A(B0), .B(B1), .Y(C0),.clk(clk));
   complex_sub u7 (.A(B0), .B(B1), .Y(C1),.clk(clk));
   complex_sub u8 (.A(B2), .B(B3J), .Y(C2),.clk(clk));
   complex_add u9 (.A(B2), .B(B3J), .Y(C3),.clk(clk));
   
   assign Y0 = C0;
   twiddler u10 (.A(C1), .WR(W3KR), .WI(W3KI), .Y(Y1),.clk(clk));
   twiddler u11 (.A(C2), .WR(W2KR), .WI(W2KI), .Y(Y2),.clk(clk));
   twiddler u12 (.A(C3), .WR(W1KR), .WI(W2KI), .Y(Y3),.clk(clk));
function signed [16:0] func_k1_sin;
    input[6:0] select;
    begin
    case(select)
        7'd0: func_k1_sin = 0;
        7'd1: func_k1_sin = 6420;
        7'd2: func_k1_sin = 12778;
        7'd3: func_k1_sin = 19014;
        7'd4: func_k1_sin = 25067;
        7'd5: func_k1_sin = 30878;
        7'd6: func_k1_sin = 36393;
        7'd7: func_k1_sin = 41557;
        7'd8: func_k1_sin = 46321;
        7'd9: func_k1_sin = 50640;
        7'd10: func_k1_sin = 54472;
        7'd11: func_k1_sin = 57779;
        7'd12: func_k1_sin = 60531;
        7'd13: func_k1_sin = 62700;
        7'd14: func_k1_sin = 64266;
        7'd15: func_k1_sin = 65214;
        7'd16: func_k1_sin = 65534;
        7'd17: func_k1_sin = 65224;
        7'd18: func_k1_sin = 64287;
        7'd19: func_k1_sin = 62731;
        7'd20: func_k1_sin = 60571;
        7'd21: func_k1_sin = 57828;
        7'd22: func_k1_sin = 54530;
        7'd23: func_k1_sin = 50706;
        7'd24: func_k1_sin = 46395;
        7'd25: func_k1_sin = 41637;
        7'd26: func_k1_sin = 36479;
        7'd27: func_k1_sin = 30970;
        7'd28: func_k1_sin = 25163;
        7'd29: func_k1_sin = 19114;
        7'd30: func_k1_sin = 12881;
        7'd31: func_k1_sin = 6524;
        7'd32: func_k1_sin = 104;
        7'd33: func_k1_sin = -6316;
        7'd34: func_k1_sin = -12676;
        7'd35: func_k1_sin = -18914;
        7'd36: func_k1_sin = -24970;
        7'd37: func_k1_sin = -30786;
        7'd38: func_k1_sin = -36306;
        7'd39: func_k1_sin = -41476;
        7'd40: func_k1_sin = -46247;
        7'd41: func_k1_sin = -50574;
        7'd42: func_k1_sin = -54414;
        7'd43: func_k1_sin = -57730;
        7'd44: func_k1_sin = -60491;
        7'd45: func_k1_sin = -62670;
        7'd46: func_k1_sin = -64246;
        7'd47: func_k1_sin = -65204;
        7'd48: func_k1_sin = -65534;
        7'd49: func_k1_sin = -65234;
        7'd50: func_k1_sin = -64307;
        7'd51: func_k1_sin = -62761;
        7'd52: func_k1_sin = -60611;
        7'd53: func_k1_sin = -57877;
        7'd54: func_k1_sin = -54588;
        7'd55: func_k1_sin = -50772;
        7'd56: func_k1_sin = -46469;
        7'd57: func_k1_sin = -41718;
        7'd58: func_k1_sin = -36566;
        7'd59: func_k1_sin = -31062;
        7'd60: func_k1_sin = -25259;
        7'd61: func_k1_sin = -19214;
        7'd62: func_k1_sin = -12983;
        7'd63: func_k1_sin = -6628;
    endcase
    end
endfunction

function [16:0] func_k1_cos;
    input[6:0] select;
    begin
    case(select)
        7'd0: func_k1_cos = 65535;
        7'd1: func_k1_cos = 65219;
        7'd2: func_k1_cos = 64277;
        7'd3: func_k1_cos = 62715;
        7'd4: func_k1_cos = 60551;
        7'd5: func_k1_cos = 57804;
        7'd6: func_k1_cos = 54501;
        7'd7: func_k1_cos = 50673;
        7'd8: func_k1_cos = 46358;
        7'd9: func_k1_cos = 41597;
        7'd10: func_k1_cos = 36436;
        7'd11: func_k1_cos = 30924;
        7'd12: func_k1_cos = 25115;
        7'd13: func_k1_cos = 19064;
        7'd14: func_k1_cos = 12830;
        7'd15: func_k1_cos = 6472;
        7'd16: func_k1_cos = 52;
        7'd17: func_k1_cos = -6368;
        7'd18: func_k1_cos = -12727;
        7'd19: func_k1_cos = -18964;
        7'd20: func_k1_cos = -25018;
        7'd21: func_k1_cos = -30832;
        7'd22: func_k1_cos = -36349;
        7'd23: func_k1_cos = -41516;
        7'd24: func_k1_cos = -46284;
        7'd25: func_k1_cos = -50607;
        7'd26: func_k1_cos = -54443;
        7'd27: func_k1_cos = -57755;
        7'd28: func_k1_cos = -60511;
        7'd29: func_k1_cos = -62685;
        7'd30: func_k1_cos = -64256;
        7'd31: func_k1_cos = -65209;
        7'd32: func_k1_cos = -65534;
        7'd33: func_k1_cos = -65229;
        7'd34: func_k1_cos = -64297;
        7'd35: func_k1_cos = -62746;
        7'd36: func_k1_cos = -60591;
        7'd37: func_k1_cos = -57853;
        7'd38: func_k1_cos = -54559;
        7'd39: func_k1_cos = -50739;
        7'd40: func_k1_cos = -46432;
        7'd41: func_k1_cos = -41678;
        7'd42: func_k1_cos = -36523;
        7'd43: func_k1_cos = -31016;
        7'd44: func_k1_cos = -25211;
        7'd45: func_k1_cos = -19164;
        7'd46: func_k1_cos = -12932;
        7'd47: func_k1_cos = -6576;
        7'd48: func_k1_cos = -156;
        7'd49: func_k1_cos = 6264;
        7'd50: func_k1_cos = 12625;
        7'd51: func_k1_cos = 18864;
        7'd52: func_k1_cos = 24922;
        7'd53: func_k1_cos = 30740;
        7'd54: func_k1_cos = 36262;
        7'd55: func_k1_cos = 41436;
        7'd56: func_k1_cos = 46210;
        7'd57: func_k1_cos = 50541;
        7'd58: func_k1_cos = 54385;
        7'd59: func_k1_cos = 57705;
        7'd60: func_k1_cos = 60471;
        7'd61: func_k1_cos = 62655;
        7'd62: func_k1_cos = 64236;
        7'd63: func_k1_cos = 65198;
    endcase
    end
endfunction

function [16:0] func_k2_sin;
    input[6:0] select;
    begin
    case(select)
        7'd0: func_k2_sin = 0;
        7'd1: func_k2_sin = 1023;
        7'd2: func_k2_sin = 2047;
        7'd3: func_k2_sin = 3070;
        7'd4: func_k2_sin = 4093;
        7'd5: func_k2_sin = 5114;
        7'd6: func_k2_sin = 6134;
        7'd7: func_k2_sin = 7153;
        7'd8: func_k2_sin = 8170;
        7'd9: func_k2_sin = 9185;
        7'd10: func_k2_sin = 10198;
        7'd11: func_k2_sin = 11208;
        7'd12: func_k2_sin = 12215;
        7'd13: func_k2_sin = 13220;
        7'd14: func_k2_sin = 14221;
        7'd15: func_k2_sin = 15219;
        7'd16: func_k2_sin = 16213;
        7'd17: func_k2_sin = 17203;
        7'd18: func_k2_sin = 18189;
        7'd19: func_k2_sin = 19171;
        7'd20: func_k2_sin = 20147;
        7'd21: func_k2_sin = 21119;
        7'd22: func_k2_sin = 22086;
        7'd23: func_k2_sin = 23047;
        7'd24: func_k2_sin = 24003;
        7'd25: func_k2_sin = 24953;
        7'd26: func_k2_sin = 25897;
        7'd27: func_k2_sin = 26834;
        7'd28: func_k2_sin = 27765;
        7'd29: func_k2_sin = 28689;
        7'd30: func_k2_sin = 29606;
        7'd31: func_k2_sin = 30516;
        7'd32: func_k2_sin = 31419;
        7'd33: func_k2_sin = 32313;
        7'd34: func_k2_sin = 33200;
        7'd35: func_k2_sin = 34079;
        7'd36: func_k2_sin = 34949;
        7'd37: func_k2_sin = 35811;
        7'd38: func_k2_sin = 36665;
        7'd39: func_k2_sin = 37509;
        7'd40: func_k2_sin = 38344;
        7'd41: func_k2_sin = 39170;
        7'd42: func_k2_sin = 39986;
        7'd43: func_k2_sin = 40792;
        7'd44: func_k2_sin = 41588;
        7'd45: func_k2_sin = 42375;
        7'd46: func_k2_sin = 43151;
        7'd47: func_k2_sin = 43916;
        7'd48: func_k2_sin = 44671;
        7'd49: func_k2_sin = 45414;
        7'd50: func_k2_sin = 46147;
        7'd51: func_k2_sin = 46869;
        7'd52: func_k2_sin = 47578;
        7'd53: func_k2_sin = 48277;
        7'd54: func_k2_sin = 48963;
        7'd55: func_k2_sin = 49638;
        7'd56: func_k2_sin = 50300;
        7'd57: func_k2_sin = 50951;
        7'd58: func_k2_sin = 51588;
        7'd59: func_k2_sin = 52214;
        7'd60: func_k2_sin = 52826;
        7'd61: func_k2_sin = 53426;
        7'd62: func_k2_sin = 54012;
        7'd63: func_k2_sin = 54585;
    endcase
    end
endfunction

function [16:0] func_k2_cos;
    input[6:0] select;
    begin
    case(select)
        7'd0: func_k2_cos = 65535;
        7'd1: func_k2_cos = 65527;
        7'd2: func_k2_cos = 65503;
        7'd3: func_k2_cos = 65463;
        7'd4: func_k2_cos = 65407;
        7'd5: func_k2_cos = 65335;
        7'd6: func_k2_cos = 65247;
        7'd7: func_k2_cos = 65143;
        7'd8: func_k2_cos = 65023;
        7'd9: func_k2_cos = 64888;
        7'd10: func_k2_cos = 64736;
        7'd11: func_k2_cos = 64569;
        7'd12: func_k2_cos = 64386;
        7'd13: func_k2_cos = 64187;
        7'd14: func_k2_cos = 63973;
        7'd15: func_k2_cos = 63743;
        7'd16: func_k2_cos = 63497;
        7'd17: func_k2_cos = 63236;
        7'd18: func_k2_cos = 62960;
        7'd19: func_k2_cos = 62668;
        7'd20: func_k2_cos = 62361;
        7'd21: func_k2_cos = 62038;
        7'd22: func_k2_cos = 61701;
        7'd23: func_k2_cos = 61348;
        7'd24: func_k2_cos = 60980;
        7'd25: func_k2_cos = 60598;
        7'd26: func_k2_cos = 60201;
        7'd27: func_k2_cos = 59789;
        7'd28: func_k2_cos = 59362;
        7'd29: func_k2_cos = 58921;
        7'd30: func_k2_cos = 58465;
        7'd31: func_k2_cos = 57996;
        7'd32: func_k2_cos = 57512;
        7'd33: func_k2_cos = 57014;
        7'd34: func_k2_cos = 56502;
        7'd35: func_k2_cos = 55976;
        7'd36: func_k2_cos = 55437;
        7'd37: func_k2_cos = 54884;
        7'd38: func_k2_cos = 54318;
        7'd39: func_k2_cos = 53739;
        7'd40: func_k2_cos = 53146;
        7'd41: func_k2_cos = 52540;
        7'd42: func_k2_cos = 51922;
        7'd43: func_k2_cos = 51291;
        7'd44: func_k2_cos = 50647;
        7'd45: func_k2_cos = 49991;
        7'd46: func_k2_cos = 49323;
        7'd47: func_k2_cos = 48643;
        7'd48: func_k2_cos = 47951;
        7'd49: func_k2_cos = 47247;
        7'd50: func_k2_cos = 46532;
        7'd51: func_k2_cos = 45805;
        7'd52: func_k2_cos = 45067;
        7'd53: func_k2_cos = 44318;
        7'd54: func_k2_cos = 43558;
        7'd55: func_k2_cos = 42788;
        7'd56: func_k2_cos = 42007;
        7'd57: func_k2_cos = 41216;
        7'd58: func_k2_cos = 40415;
        7'd59: func_k2_cos = 39604;
        7'd60: func_k2_cos = 38783;
        7'd61: func_k2_cos = 37953;
        7'd62: func_k2_cos = 37114;
        7'd63: func_k2_cos = 36266;
    endcase
    end
endfunction

function signed [16:0] func_k3_sin;
    input[6:0] select;
    begin
    case(select)
        7'd0: func_k3_sin = 0;
        7'd1: func_k3_sin = 61;
        7'd2: func_k3_sin = 485;
        7'd3: func_k3_sin = 1600;
        7'd4: func_k3_sin = 3667;
        7'd5: func_k3_sin = 6855;
        7'd6: func_k3_sin = 11222;
        7'd7: func_k3_sin = 16710;
        7'd8: func_k3_sin = 23142;
        7'd9: func_k3_sin = 30237;
        7'd10: func_k3_sin = 37633;
        7'd11: func_k3_sin = 44913;
        7'd12: func_k3_sin = 51641;
        7'd13: func_k3_sin = 57394;
        7'd14: func_k3_sin = 61803;
        7'd15: func_k3_sin = 64578;
        7'd16: func_k3_sin = 65534;
        7'd17: func_k3_sin = 64608;
        7'd18: func_k3_sin = 61862;
        7'd19: func_k3_sin = 57477;
        7'd20: func_k3_sin = 51743;
        7'd21: func_k3_sin = 45028;
        7'd22: func_k3_sin = 37754;
        7'd23: func_k3_sin = 30356;
        7'd24: func_k3_sin = 23253;
        7'd25: func_k3_sin = 16808;
        7'd26: func_k3_sin = 11303;
        7'd27: func_k3_sin = 6916;
        7'd28: func_k3_sin = 3709;
        7'd29: func_k3_sin = 1626;
        7'd30: func_k3_sin = 497;
        7'd31: func_k3_sin = 64;
        7'd32: func_k3_sin = 0;
        7'd33: func_k3_sin = -58;
        7'd34: func_k3_sin = -474;
        7'd35: func_k3_sin = -1575;
        7'd36: func_k3_sin = -3625;
        7'd37: func_k3_sin = -6794;
        7'd38: func_k3_sin = -11142;
        7'd39: func_k3_sin = -16613;
        7'd40: func_k3_sin = -23031;
        7'd41: func_k3_sin = -30119;
        7'd42: func_k3_sin = -37513;
        7'd43: func_k3_sin = -44799;
        7'd44: func_k3_sin = -51538;
        7'd45: func_k3_sin = -57311;
        7'd46: func_k3_sin = -61744;
        7'd47: func_k3_sin = -64547;
        7'd48: func_k3_sin = -65534;
        7'd49: func_k3_sin = -64638;
        7'd50: func_k3_sin = -61920;
        7'd51: func_k3_sin = -57560;
        7'd52: func_k3_sin = -51845;
        7'd53: func_k3_sin = -45143;
        7'd54: func_k3_sin = -37874;
        7'd55: func_k3_sin = -30475;
        7'd56: func_k3_sin = -23364;
        7'd57: func_k3_sin = -16905;
        7'd58: func_k3_sin = -11384;
        7'd59: func_k3_sin = -6978;
        7'd60: func_k3_sin = -3752;
        7'd61: func_k3_sin = -1651;
        7'd62: func_k3_sin = -509;
        7'd63: func_k3_sin = -67;
    endcase
    end
endfunction

function [16:0] func_k3_cos;
    input[6:0] select;
    begin
    case(select)
        7'd0: func_k3_cos = 65535;
        7'd1: func_k3_cos = 64593;
        7'd2: func_k3_cos = 61833;
        7'd3: func_k3_cos = 57436;
        7'd4: func_k3_cos = 51692;
        7'd5: func_k3_cos = 44971;
        7'd6: func_k3_cos = 37694;
        7'd7: func_k3_cos = 30297;
        7'd8: func_k3_cos = 23197;
        7'd9: func_k3_cos = 16759;
        7'd10: func_k3_cos = 11263;
        7'd11: func_k3_cos = 6885;
        7'd12: func_k3_cos = 3688;
        7'd13: func_k3_cos = 1613;
        7'd14: func_k3_cos = 491;
        7'd15: func_k3_cos = 63;
        7'd16: func_k3_cos = 0;
        7'd17: func_k3_cos = -60;
        7'd18: func_k3_cos = -480;
        7'd19: func_k3_cos = -1588;
        7'd20: func_k3_cos = -3646;
        7'd21: func_k3_cos = -6824;
        7'd22: func_k3_cos = -11182;
        7'd23: func_k3_cos = -16662;
        7'd24: func_k3_cos = -23087;
        7'd25: func_k3_cos = -30178;
        7'd26: func_k3_cos = -37573;
        7'd27: func_k3_cos = -44856;
        7'd28: func_k3_cos = -51590;
        7'd29: func_k3_cos = -57352;
        7'd30: func_k3_cos = -61774;
        7'd31: func_k3_cos = -64563;
        7'd32: func_k3_cos = -65534;
        7'd33: func_k3_cos = -64623;
        7'd34: func_k3_cos = -61891;
        7'd35: func_k3_cos = -57519;
        7'd36: func_k3_cos = -51794;
        7'd37: func_k3_cos = -45086;
        7'd38: func_k3_cos = -37814;
        7'd39: func_k3_cos = -30415;
        7'd40: func_k3_cos = -23308;
        7'd41: func_k3_cos = -16857;
        7'd42: func_k3_cos = -11343;
        7'd43: func_k3_cos = -6947;
        7'd44: func_k3_cos = -3731;
        7'd45: func_k3_cos = -1638;
        7'd46: func_k3_cos = -503;
        7'd47: func_k3_cos = -66;
        7'd48: func_k3_cos = 0;
        7'd49: func_k3_cos = 57;
        7'd50: func_k3_cos = 468;
        7'd51: func_k3_cos = 1563;
        7'd52: func_k3_cos = 3604;
        7'd53: func_k3_cos = 6763;
        7'd54: func_k3_cos = 11102;
        7'd55: func_k3_cos = 16564;
        7'd56: func_k3_cos = 22976;
        7'd57: func_k3_cos = 30059;
        7'd58: func_k3_cos = 37453;
        7'd59: func_k3_cos = 44741;
        7'd60: func_k3_cos = 51487;
        7'd61: func_k3_cos = 57269;
        7'd62: func_k3_cos = 61714;
        7'd63: func_k3_cos = 64532;
    endcase
    end
endfunction


   
   
endmodule // radix4_batterfly


