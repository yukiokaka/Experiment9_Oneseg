function [15:0] func_k2_sin;
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

function [15:0] func_k2_cos;
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
