
module fft64
  #(parameter width = 11)
   (
    input                  CLK,
    input                  RST,

    input                  valid_a,
    input [width-1:0]      ar,
    input [width-1:0]      ai,

    output reg             valid_o,
    input                  rd_en,
    output                 full,
    output reg [width-1:0] xr,
    output reg [width-1:0] xi
    );
   
   reg [6:0]           cnt,cnt_o;
   
   reg [21:0]          A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31,A32,A33,A34,A35,A36,A37,A38,A39,A40,A41,A42,A43,A44,A45,A46,A47,A48,A49,A50,A51,A52,A53,A54,A55,A56,A57,A58,A59,A60,A61,A62,A63;
   reg [21:0]          AREG0,AREG1,AREG2,AREG3,AREG4,AREG5,AREG6,AREG7,AREG8,AREG9,AREG10,AREG11,AREG12,AREG13,AREG14,AREG15,AREG16,AREG17,AREG18,AREG19,AREG20,AREG21,AREG22,AREG23,AREG24,AREG25,AREG26,AREG27,AREG28,AREG29,AREG30,AREG31,AREG32,AREG33,AREG34,AREG35,AREG36,AREG37,AREG38,AREG39,AREG40,AREG41,AREG42,AREG43,AREG44,AREG45,AREG46,AREG47,AREG48,AREG49,AREG50,AREG51,AREG52,AREG53,AREG54,AREG55,AREG56,AREG57,AREG58,AREG59,AREG60,AREG61,AREG62,AREG63;

   
   wire [21:0]         Y0,Y1,Y2,Y3,Y4,Y5,Y6,Y7,Y8,Y9,Y10,Y11,Y12,Y13,Y14,Y15,Y16,Y17,Y18,Y19,Y20,Y21,Y22,Y23,Y24,Y25,Y26,Y27,Y28,Y29,Y30,Y31,Y32,Y33,Y34,Y35,Y36,Y37,Y38,Y39,Y40,Y41,Y42,Y43,Y44,Y45,Y46,Y47,Y48,Y49,Y50,Y51,Y52,Y53,Y54,Y55,Y56,Y57,Y58,Y59,Y60,Y61,Y62,Y63;


   reg                 start, start_fft_flg, fin_fft_flg, fin_fft_prepare_flg;
   wire                valid_o_from_myFFT, input_succeed_flg;
   reg                 fft_culculating_flg;
   
   
   
   always@(posedge CLK or negedge RST) begin
      if(!RST) begin
         start <= 0;
         cnt_o <= 0;
         cnt <= 0;
         valid_o <= 0;
         start_fft_flg <= 0;
         fft_culculating_flg <= 0;

      end
      else begin
         if(!start_fft_flg) begin
            //            if(fft_culculating_flg <= 0) begin
            if(valid_a) begin
               case(cnt)
                 7'd0: AREG0<= {ar,ai};
                 7'd1: AREG1<= {ar,ai};
                 7'd2: AREG2<= {ar,ai};
                 7'd3: AREG3<= {ar,ai};
                 7'd4: AREG4<= {ar,ai};
                 7'd5: AREG5<= {ar,ai};
                 7'd6: AREG6<= {ar,ai};
                 7'd7: AREG7<= {ar,ai};
                 7'd8: AREG8<= {ar,ai};
                 7'd9: AREG9<= {ar,ai};
                 7'd10: AREG10<= {ar,ai};
                 7'd11: AREG11<= {ar,ai};
                 7'd12: AREG12<= {ar,ai};
                 7'd13: AREG13<= {ar,ai};
                 7'd14: AREG14<= {ar,ai};
                 7'd15: AREG15<= {ar,ai};
                 7'd16: AREG16<= {ar,ai};
                 7'd17: AREG17<= {ar,ai};
                 7'd18: AREG18<= {ar,ai};
                 7'd19: AREG19<= {ar,ai};
                 7'd20: AREG20<= {ar,ai};
                 7'd21: AREG21<= {ar,ai};
                 7'd22: AREG22<= {ar,ai};
                 7'd23: AREG23<= {ar,ai};
                 7'd24: AREG24<= {ar,ai};
                 7'd25: AREG25<= {ar,ai};
                 7'd26: AREG26<= {ar,ai};
                 7'd27: AREG27<= {ar,ai};
                 7'd28: AREG28<= {ar,ai};
                 7'd29: AREG29<= {ar,ai};
                 7'd30: AREG30<= {ar,ai};
                 7'd31: AREG31<= {ar,ai};
                 7'd32: AREG32<= {ar,ai};
                 7'd33: AREG33<= {ar,ai};
                 7'd34: AREG34<= {ar,ai};
                 7'd35: AREG35<= {ar,ai};
                 7'd36: AREG36<= {ar,ai};
                 7'd37: AREG37<= {ar,ai};
                 7'd38: AREG38<= {ar,ai};
                 7'd39: AREG39<= {ar,ai};
                 7'd40: AREG40<= {ar,ai};
                 7'd41: AREG41<= {ar,ai};
                 7'd42: AREG42<= {ar,ai};
                 7'd43: AREG43<= {ar,ai};
                 7'd44: AREG44<= {ar,ai};
                 7'd45: AREG45<= {ar,ai};
                 7'd46: AREG46<= {ar,ai};
                 7'd47: AREG47<= {ar,ai};
                 7'd48: AREG48<= {ar,ai};
                 7'd49: AREG49<= {ar,ai};
                 7'd50: AREG50<= {ar,ai};
                 7'd51: AREG51<= {ar,ai};
                 7'd52: AREG52<= {ar,ai};
                 7'd53: AREG53<= {ar,ai};
                 7'd54: AREG54<= {ar,ai};
                 7'd55: AREG55<= {ar,ai};
                 7'd56: AREG56<= {ar,ai};
                 7'd57: AREG57<= {ar,ai};
                 7'd58: AREG58<= {ar,ai};
                 7'd59: AREG59<= {ar,ai};
                 7'd60: AREG60<= {ar,ai};
                 7'd61: AREG61<= {ar,ai};
                 7'd62: AREG62<= {ar,ai};
                 7'd63: AREG63<= {ar,ai};
                 default cnt <= cnt;                 
               endcase
               cnt <= cnt+1;
            end // if (fft_culculating_flg <= 0)
         end // if (!start_fft_flg)
         
         else begin
            if(!start) begin
               A0<= AREG0;
               A1<= AREG1;
               A2<= AREG2;
               A3<= AREG3;
               A4<= AREG4;
               A5<= AREG5;
               A6<= AREG6;
               A7<= AREG7;
               A8<= AREG8;
               A9<= AREG9;
               A10<= AREG10;
               A11<= AREG11;
               A12<= AREG12;
               A13<= AREG13;
               A14<= AREG14;
               A15<= AREG15;
               A16<= AREG16;
               A17<= AREG17;
               A18<= AREG18;
               A19<= AREG19;
               A20<= AREG20;
               A21<= AREG21;
               A22<= AREG22;
               A23<= AREG23;
               A24<= AREG24;
               A25<= AREG25;
               A26<= AREG26;
               A27<= AREG27;
               A28<= AREG28;
               A29<= AREG29;
               A30<= AREG30;
               A31<= AREG31;
               A32<= AREG32;
               A33<= AREG33;
               A34<= AREG34;
               A35<= AREG35;
               A36<= AREG36;
               A37<= AREG37;
               A38<= AREG38;
               A39<= AREG39;
               A40<= AREG40;
               A41<= AREG41;
               A42<= AREG42;
               A43<= AREG43;
               A44<= AREG44;
               A45<= AREG45;
               A46<= AREG46;
               A47<= AREG47;
               A48<= AREG48;
               A49<= AREG49;
               A50<= AREG50;
               A51<= AREG51;
               A52<= AREG52;
               A53<= AREG53;
               A54<= AREG54;
               A55<= AREG55;
               A56<= AREG56;
               A57<= AREG57;
               A58<= AREG58;
               A59<= AREG59;
               A60<= AREG60;
               A61<= AREG61;
               A62<= AREG62;
               A63<= AREG63;

               start <= 1;
            end
            if(input_succeed_flg) begin
               start <= 0;
               start_fft_flg <= 0;
               cnt <= 0;
            end
            
         end // else: !if(!start_fft_flg)
         
         if(cnt > 63) begin
            start_fft_flg <= 1;
            cnt <= 0;
            fft_culculating_flg <= 1;
         end // if (valid_a)

 
         if(valid_o_from_myFFT) begin
            fin_fft_flg <= 1;
         end
         if(fin_fft_flg) begin
            valid_o <= 1;
            fft_culculating_flg <= 0;
            case(cnt_o)
              7'd0:{xr,xi} <= Y0;
              7'd1:{xr,xi} <= Y1;
              7'd2:{xr,xi} <= Y2;
              7'd3:{xr,xi} <= Y3;
              7'd4:{xr,xi} <= Y4;
              7'd5:{xr,xi} <= Y5;
              7'd6:{xr,xi} <= Y6;
              7'd7:{xr,xi} <= Y7;
              7'd8:{xr,xi} <= Y8;
              7'd9:{xr,xi} <= Y9;
              7'd10:{xr,xi} <= Y10;
              7'd11:{xr,xi} <= Y11;
              7'd12:{xr,xi} <= Y12;
              7'd13:{xr,xi} <= Y13;
              7'd14:{xr,xi} <= Y14;
              7'd15:{xr,xi} <= Y15;
              7'd16:{xr,xi} <= Y16;
              7'd17:{xr,xi} <= Y17;
              7'd18:{xr,xi} <= Y18;
              7'd19:{xr,xi} <= Y19;
              7'd20:{xr,xi} <= Y20;
              7'd21:{xr,xi} <= Y21;
              7'd22:{xr,xi} <= Y22;
              7'd23:{xr,xi} <= Y23;
              7'd24:{xr,xi} <= Y24;
              7'd25:{xr,xi} <= Y25;
              7'd26:{xr,xi} <= Y26;
              7'd27:{xr,xi} <= Y27;
              7'd28:{xr,xi} <= Y28;
              7'd29:{xr,xi} <= Y29;
              7'd30:{xr,xi} <= Y30;
              7'd31:{xr,xi} <= Y31;
              7'd32:{xr,xi} <= Y32;
              7'd33:{xr,xi} <= Y33;
              7'd34:{xr,xi} <= Y34;
              7'd35:{xr,xi} <= Y35;
              7'd36:{xr,xi} <= Y36;
              7'd37:{xr,xi} <= Y37;
              7'd38:{xr,xi} <= Y38;
              7'd39:{xr,xi} <= Y39;
              7'd40:{xr,xi} <= Y40;
              7'd41:{xr,xi} <= Y41;
              7'd42:{xr,xi} <= Y42;
              7'd43:{xr,xi} <= Y43;
              7'd44:{xr,xi} <= Y44;
              7'd45:{xr,xi} <= Y45;
              7'd46:{xr,xi} <= Y46;
              7'd47:{xr,xi} <= Y47;
              7'd48:{xr,xi} <= Y48;
              7'd49:{xr,xi} <= Y49;
              7'd50:{xr,xi} <= Y50;
              7'd51:{xr,xi} <= Y51;
              7'd52:{xr,xi} <= Y52;
              7'd53:{xr,xi} <= Y53;
              7'd54:{xr,xi} <= Y54;
              7'd55:{xr,xi} <= Y55;
              7'd56:{xr,xi} <= Y56;
              7'd57:{xr,xi} <= Y57;
              7'd58:{xr,xi} <= Y58;
              7'd59:{xr,xi} <= Y59;
              7'd60:{xr,xi} <= Y60;
              7'd61:{xr,xi} <= Y61;
              7'd62:{xr,xi} <= Y62;
              7'd63:{xr,xi} <= Y63;
              default: cnt <= cnt;
              
            endcase
            cnt_o <= cnt_o + 1;
            if(valid_o_from_myFFT) begin
               fin_fft_prepare_flg <= 1;
               
            end
            if(cnt_o == 64) begin
               cnt_o <= 0;
               valid_o <= 0; 
               if(fin_fft_prepare_flg) begin
                                
                  fin_fft_prepare_flg <= 0;
               end
               else begin
                  fin_fft_flg <= 0;
               end
            end
         end // if (fin_fft_flg)

         
      end // else: !if(!RST)
   end // always@ (posedge CLK or negedge RST)
   
   
   
   
   
   myFFT myFFT_module(.clk(CLK), .rst(RST), .start(start),.valid_o(valid_o_from_myFFT),.input_succeed_flg(input_succeed_flg),.A0(A0),.A1(A1),.A2(A2),.A3(A3),.A4(A4),.A5(A5),.A6(A6),.A7(A7),.A8(A8),.A9(A9),.A10(A10),.A11(A11),.A12(A12),.A13(A13),.A14(A14),.A15(A15),.A16(A16),.A17(A17),.A18(A18),.A19(A19),.A20(A20),.A21(A21),.A22(A22),.A23(A23),.A24(A24),.A25(A25),.A26(A26),.A27(A27),.A28(A28),.A29(A29),.A30(A30),.A31(A31),.A32(A32),.A33(A33),.A34(A34),.A35(A35),.A36(A36),.A37(A37),.A38(A38),.A39(A39),.A40(A40),.A41(A41),.A42(A42),.A43(A43),.A44(A44),.A45(A45),.A46(A46),.A47(A47),.A48(A48),.A49(A49),.A50(A50),.A51(A51),.A52(A52),.A53(A53),.A54(A54),.A55(A55),.A56(A56),.A57(A57),.A58(A58),.A59(A59),.A60(A60),.A61(A61),.A62(A62),.A63(A63),.YOUT0(Y0),.YOUT1(Y1),.YOUT2(Y2),.YOUT3(Y3),.YOUT4(Y4),.YOUT5(Y5),.YOUT6(Y6),.YOUT7(Y7),.YOUT8(Y8),.YOUT9(Y9),.YOUT10(Y10),.YOUT11(Y11),.YOUT12(Y12),.YOUT13(Y13),.YOUT14(Y14),.YOUT15(Y15),.YOUT16(Y16),.YOUT17(Y17),.YOUT18(Y18),.YOUT19(Y19),.YOUT20(Y20),.YOUT21(Y21),.YOUT22(Y22),.YOUT23(Y23),.YOUT24(Y24),.YOUT25(Y25),.YOUT26(Y26),.YOUT27(Y27),.YOUT28(Y28),.YOUT29(Y29),.YOUT30(Y30),.YOUT31(Y31),.YOUT32(Y32),.YOUT33(Y33),.YOUT34(Y34),.YOUT35(Y35),.YOUT36(Y36),.YOUT37(Y37),.YOUT38(Y38),.YOUT39(Y39),.YOUT40(Y40),.YOUT41(Y41),.YOUT42(Y42),.YOUT43(Y43),.YOUT44(Y44),.YOUT45(Y45),.YOUT46(Y46),.YOUT47(Y47),.YOUT48(Y48),.YOUT49(Y49),.YOUT50(Y50),.YOUT51(Y51),.YOUT52(Y52),.YOUT53(Y53),.YOUT54(Y54),.YOUT55(Y55),.YOUT56(Y56),.YOUT57(Y57),.YOUT58(Y58),.YOUT59(Y59),.YOUT60(Y60),.YOUT61(Y61),.YOUT62(Y62),.YOUT63(Y63));
   

endmodule
