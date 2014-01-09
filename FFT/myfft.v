module myFFT(
             input             clk, rst, start,
             output reg        valid_o,
             output reg [21:0] YOUT0,YOUT1,YOUT2,YOUT3,YOUT4,YOUT5,YOUT6,YOUT7,YOUT8,YOUT9,YOUT10,YOUT11,YOUT12,YOUT13,YOUT14,YOUT15,YOUT16,YOUT17,YOUT18,YOUT19,YOUT20,YOUT21,YOUT22,YOUT23,YOUT24,YOUT25,YOUT26,YOUT27,YOUT28,YOUT29,YOUT30,YOUT31,YOUT32,YOUT33,YOUT34,YOUT35,YOUT36,YOUT37,YOUT38,YOUT39,YOUT40,YOUT41,YOUT42,YOUT43,YOUT44,YOUT45,YOUT46,YOUT47,YOUT48,YOUT49,YOUT50,YOUT51,YOUT52,YOUT53,YOUT54,YOUT55,YOUT56,YOUT57,YOUT58,YOUT59,YOUT60,YOUT61,YOUT62,YOUT63,
             input [21:0]      A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31,A32,A33,A34,A35,A36,A37,A38,A39,A40,A41,A42,A43,A44,A45,A46,A47,A48,A49,A50,A51,A52,A53,A54,A55,A56,A57,A58,A59,A60,A61,A62,A63
             );

   reg [21:0]                  B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31,B32,B33,B34,B35,B36,B37,B38,B39,B40,B41,B42,B43,B44,B45,B46,B47,B48,B49,B50,B51,B52,B53,B54,B55,B56,B57,B58,B59,B60,B61,B62,B63;

   reg [21:0]                  C0,C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C13,C14,C15,C16,C17,C18,C19,C20,C21,C22,C23,C24,C25,C26,C27,C28,C29,C30,C31,C32,C33,C34,C35,C36,C37,C38,C39,C40,C41,C42,C43,C44,C45,C46,C47,C48,C49,C50,C51,C52,C53,C54,C55,C56,C57,C58,C59,C60,C61,C62,C63;
   
   wire [21:0]                 Y0,Y1,Y2,Y3;
   
   
   reg [3:0]                   stage;
   reg                         stage_1_start_flg;
   reg                         stage_2_start_flg;
   reg                         stage_3_start_flg;
   reg                         stage_4_start_flg;
   reg                         stage_5_start_flg;

   reg [21:0]                  AIN0,AIN1,AIN2,AIN3;
   
   reg [6:0]                   cnt;
   reg                         start_batterfly, calculating_batterfly_flg;
   
   reg [6:0]                   k1;
   wire                        fin_batterfly;
   
   
   always@(posedge clk or negedge rst) begin
      if(!rst) begin
         stage <= 0;
         cnt <= 0;
         start_batterfly <= 0;
         valid_o <= 0;
         k1 <= 0;
         calculating_batterfly_flg <= 0;
         stage_1_start_flg <= 0;
         stage_2_start_flg <= 0;
         stage_3_start_flg <= 0;
         stage_4_start_flg <= 0;
         stage_5_start_flg <= 0;

      end
      else begin
         if(stage == 0) begin
            if(start) begin
               stage <= 1;
               stage_1_start_flg <= 1;
               cnt <= 0;
            end
         end
         
         if(stage_1_start_flg) begin
            if(!calculating_batterfly_flg) begin
               case(cnt) 
                 6'd0: begin
                    AIN0 <= A0;
                    AIN1 <= A16;
                    AIN2 <= A32;
                    AIN3 <= A48;
                 end
                 6'd1: begin
                    AIN0 <= A1;
                    AIN1 <= A17;
                    AIN2 <= A33;
                    AIN3 <= A49;
                 end
                 6'd2: begin
                    AIN0 <= A2;
                    AIN1 <= A18;
                    AIN2 <= A34;
                    AIN3 <= A50;
                 end
                 6'd3: begin
                    AIN0 <= A3;
                    AIN1 <= A19;
                    AIN2 <= A35;
                    AIN3 <= A51;
                 end
                 6'd4: begin
                    AIN0 <= A4;
                    AIN1 <= A20;
                    AIN2 <= A36;
                    AIN3 <= A52;
                 end
                 6'd5: begin
                    AIN0 <= A5;
                    AIN1 <= A21;
                    AIN2 <= A37;
                    AIN3 <= A53;
                 end
                 6'd6: begin
                    AIN0 <= A6;
                    AIN1 <= A22;
                    AIN2 <= A38;
                    AIN3 <= A54;
                 end
                 6'd7: begin
                    AIN0 <= A7;
                    AIN1 <= A23;
                    AIN2 <= A39;
                    AIN3 <= A55;
                 end
                 6'd8: begin
                    AIN0 <= A8;
                    AIN1 <= A24;
                    AIN2 <= A40;
                    AIN3 <= A56;
                 end
                 6'd9: begin
                    AIN0 <= A9;
                    AIN1 <= A25;
                    AIN2 <= A41;
                    AIN3 <= A57;
                 end
                 6'd10: begin
                    AIN0 <= A10;
                    AIN1 <= A26;
                    AIN2 <= A42;
                    AIN3 <= A58;
                 end
                 6'd11: begin
                    AIN0 <= A11;
                    AIN1 <= A27;
                    AIN2 <= A43;
                    AIN3 <= A59;
                 end
                 6'd12: begin
                    AIN0 <= A12;
                    AIN1 <= A28;
                    AIN2 <= A44;
                    AIN3 <= A60;
                 end
                 6'd13: begin
                    AIN0 <= A13;
                    AIN1 <= A29;
                    AIN2 <= A45;
                    AIN3 <= A61;
                 end
                 6'd14: begin
                    AIN0 <= A14;
                    AIN1 <= A30;
                    AIN2 <= A46;
                    AIN3 <= A62;
                 end
                 6'd15: begin
                    AIN0 <= A15;
                    AIN1 <= A31;
                    AIN2 <= A47;
                    AIN3 <= A63;
                 end
                 default: begin
                    AIN0 <= 0;
                    AIN1 <= 0;
                    AIN2 <= 0;
                    AIN3 <= 0;
                 end
               endcase
               k1 <= cnt;
               calculating_batterfly_flg <= 1;               
               start_batterfly <= 1;
               
            end // if (!calculating_batterfly_flg)
                      
            else begin
               start_batterfly <= 0;
               if(fin_batterfly) begin
                  calculating_batterfly_flg <= 0;
                  
                  case(cnt)
                    6'd0: begin
                       B0 <= Y0;
                       B16 <= Y1;
                       B32 <= Y2;
                       B48 <= Y3;
                    end
                    6'd1: begin
                       B1 <= Y0;
                       B17 <= Y1;
                       B33 <= Y2;
                       B49 <= Y3;
                    end
                    6'd2: begin
                       B2 <= Y0;
                       B18 <= Y1;
                       B34 <= Y2;
                       B50 <= Y3;
                    end
                    6'd3: begin
                       B3 <= Y0;
                       B19 <= Y1;
                       B35 <= Y2;
                       B51 <= Y3;
                    end
                    6'd4: begin
                       B4 <= Y0;
                       B20 <= Y1;
                       B36 <= Y2;
                       B52 <= Y3;
                    end
                    6'd5: begin
                       B5 <= Y0;
                       B21 <= Y1;
                       B37 <= Y2;
                       B53 <= Y3;
                    end
                    6'd6: begin
                       B6 <= Y0;
                       B22 <= Y1;
                       B38 <= Y2;
                       B54 <= Y3;
                    end
                    6'd7: begin
                       B7 <= Y0;
                       B23 <= Y1;
                       B39 <= Y2;
                       B55 <= Y3;
                    end
                    6'd8: begin
                       B8 <= Y0;
                       B24 <= Y1;
                       B40 <= Y2;
                       B56 <= Y3;
                    end
                    6'd9: begin
                       B9 <= Y0;
                       B25 <= Y1;
                       B41 <= Y2;
                       B57 <= Y3;
                    end
                    6'd10: begin
                       B10 <= Y0;
                       B26 <= Y1;
                       B42 <= Y2;
                       B58 <= Y3;
                    end
                    6'd11: begin
                       B11 <= Y0;
                       B27 <= Y1;
                       B43 <= Y2;
                       B59 <= Y3;
                    end
                    6'd12: begin
                       B12 <= Y0;
                       B28 <= Y1;
                       B44 <= Y2;
                       B60 <= Y3;
                    end
                    6'd13: begin
                       B13 <= Y0;
                       B29 <= Y1;
                       B45 <= Y2;
                       B61 <= Y3;
                    end
                    6'd14: begin
                       B14 <= Y0;
                       B30 <= Y1;
                       B46 <= Y2;
                       B62 <= Y3;
                    end
                    6'd15: begin
                       B15 <= Y0;
                       B31 <= Y1;
                       B47 <= Y2;
                       B63 <= Y3;
                    end
                    default:
                      cnt <= cnt;
                  endcase
                  cnt <= cnt + 1;
                  if(cnt > 15) begin
                     cnt <= 0;
                     stage_1_start_flg <= 0;         
                     stage_2_start_flg <= 1;            
                     stage <= stage + 1;
                     
                     k1 <= 0;                     
                  end
                  
               end // if (fin_batterfly)               
            end // else: !if(!calculating_batterfly_flg)
           
         end // if (stage == 1)
         
         if(stage_2_start_flg) begin
            if(!calculating_batterfly_flg) begin
               case(cnt) 
                 6'd0: begin
                    AIN0 <= B0;
                    AIN1 <= B4;
                    AIN2 <= B8;
                    AIN3 <= B12;
                 end
                 6'd1: begin
                    AIN0 <= B1;
                    AIN1 <= B5;
                    AIN2 <= B9;
                    AIN3 <= B13;
                 end
                 6'd2: begin
                    AIN0 <= B2;
                    AIN1 <= B6;
                    AIN2 <= B10;
                    AIN3 <= B14;
                 end
                 6'd3: begin
                    AIN0 <= B3;
                    AIN1 <= B7;
                    AIN2 <= B11;
                    AIN3 <= B15;
                 end
                 6'd16: begin
                    AIN0 <= B16;
                    AIN1 <= B20;
                    AIN2 <= B24;
                    AIN3 <= B28;
                 end
                 6'd17: begin
                    AIN0 <= B17;
                    AIN1 <= B21;
                    AIN2 <= B25;
                    AIN3 <= B29;
                 end
                 6'd18: begin
                    AIN0 <= B18;
                    AIN1 <= B22;
                    AIN2 <= B26;
                    AIN3 <= B30;
                 end
                 6'd19: begin
                    AIN0 <= B19;
                    AIN1 <= B23;
                    AIN2 <= B27;
                    AIN3 <= B31;
                 end
                 6'd32: begin
                    AIN0 <= B32;
                    AIN1 <= B36;
                    AIN2 <= B40;
                    AIN3 <= B44;
                 end
                 6'd33: begin
                    AIN0 <= B33;
                    AIN1 <= B37;
                    AIN2 <= B41;
                    AIN3 <= B45;
                 end
                 6'd34: begin
                    AIN0 <= B34;
                    AIN1 <= B38;
                    AIN2 <= B42;
                    AIN3 <= B46;
                 end
                 6'd35: begin
                    AIN0 <= B35;
                    AIN1 <= B39;
                    AIN2 <= B43;
                    AIN3 <= B47;
                 end
                 6'd48: begin
                    AIN0 <= B48;
                    AIN1 <= B52;
                    AIN2 <= B56;
                    AIN3 <= B60;
                 end
                 6'd49: begin
                    AIN0 <= B49;
                    AIN1 <= B53;
                    AIN2 <= B57;
                    AIN3 <= B61;
                 end
                 6'd50: begin
                    AIN0 <= B50;
                    AIN1 <= B54;
                    AIN2 <= B58;
                    AIN3 <= B62;
                 end
                 6'd51: begin
                    AIN0 <= B51;
                    AIN1 <= B55;
                    AIN2 <= B59;
                    AIN3 <= B63;
                 end
                 default: begin
                    AIN0 <= 0;
                    AIN1 <= 0;
                    AIN2 <= 0;
                    AIN3 <= 0;
                 end
               endcase
               k1 <= (cnt%16)<<2;                  
               start_batterfly <= 1;
               calculating_batterfly_flg <= 1;
            end // if (!calculating_batterfly_flg)
            
            else begin
               start_batterfly <= 0;                  
               if(fin_batterfly) begin
                  calculating_batterfly_flg <= 0;
                  case(cnt) 
                    6'd0: begin
                       C0 <= Y0;
                       C4 <= Y1;
                       C8 <= Y2;
                       C12 <= Y3;
                    end
                    6'd1: begin
                       C1 <= Y0;
                       C5 <= Y1;
                       C9 <= Y2;
                       C13 <= Y3;
                    end
                    6'd2: begin
                       C2 <= Y0;
                       C6 <= Y1;
                       C10 <= Y2;
                       C14 <= Y3;
                    end
                    6'd3: begin
                       C3 <= Y0;
                       C7 <= Y1;
                       C11 <= Y2;
                       C15 <= Y3;
                    end
                    6'd16: begin
                       C16 <= Y0;
                       C20 <= Y1;
                       C24 <= Y2;
                       C28 <= Y3;
                    end
                    6'd17: begin
                       C17 <= Y0;
                       C21 <= Y1;
                       C25 <= Y2;
                       C29 <= Y3;
                    end
                    6'd18: begin
                       C18 <= Y0;
                       C22 <= Y1;
                       C26 <= Y2;
                       C30 <= Y3;
                    end
                    6'd19: begin
                       C19 <= Y0;
                       C23 <= Y1;
                       C27 <= Y2;
                       C31 <= Y3;
                    end
                    6'd32: begin
                       C32 <= Y0;
                       C36 <= Y1;
                       C40 <= Y2;
                       C44 <= Y3;
                    end
                    6'd33: begin
                       C33 <= Y0;
                       C37 <= Y1;
                       C41 <= Y2;
                       C45 <= Y3;
                    end
                    6'd34: begin
                       C34 <= Y0;
                       C38 <= Y1;
                       C42 <= Y2;
                       C46 <= Y3;
                    end
                    6'd35: begin
                       C35 <= Y0;
                       C39 <= Y1;
                       C43 <= Y2;
                       C47 <= Y3;
                    end
                    6'd48: begin
                       C48 <= Y0;
                       C52 <= Y1;
                       C56 <= Y2;
                       C60 <= Y3;
                    end
                    6'd49: begin
                       C49 <= Y0;
                       C53 <= Y1;
                       C57 <= Y2;
                       C61 <= Y3;
                    end
                    6'd50: begin
                       C50 <= Y0;
                       C54 <= Y1;
                       C58 <= Y2;
                       C62 <= Y3;
                    end
                    6'd51: begin
                       C51 <= Y0;
                       C55 <= Y1;
                       C59 <= Y2;
                       C63 <= Y3;
                    end
                    default: begin
                       cnt <= cnt;
                    end
                  endcase
      
                  cnt <= cnt + 1;
                  if(((cnt+1) % 4) == 0) cnt <= cnt + 13; 
                  if(cnt>51) begin
                     cnt <= 0;
                     stage_2_start_flg <= 0;         
                     stage_3_start_flg <= 1;            
                     stage <= stage + 1;
                     k1 <= 0;                     
                  end                  
               end // if (fin_batterfly)
               
            end // else: !if(!calculating_batterfly_flg)
         end // if (stage == 2)
         
         if(stage_3_start_flg) begin
            if(!calculating_batterfly_flg) begin               
               case(cnt)
                 6'd0: begin
                    AIN0 <= C0;
                    AIN1 <= C1;
                    AIN2 <= C2;
                    AIN3 <= C3;
                 end
                 6'd4: begin
                    AIN0 <= C4;
                    AIN1 <= C5;
                    AIN2 <= C6;
                    AIN3 <= C7;
                 end
                 6'd8: begin
                    AIN0 <= C8;
                    AIN1 <= C9;
                    AIN2 <= C10;
                    AIN3 <= C11;
                 end
                 6'd12: begin
                    AIN0 <= C12;
                    AIN1 <= C13;
                    AIN2 <= C14;
                    AIN3 <= C15;
                 end
                 6'd16: begin
                    AIN0 <= C16;
                    AIN1 <= C17;
                    AIN2 <= C18;
                    AIN3 <= C19;
                 end
                 6'd20: begin
                    AIN0 <= C20;
                    AIN1 <= C21;
                    AIN2 <= C22;
                    AIN3 <= C23;
                 end
                 6'd24: begin
                    AIN0 <= C24;
                    AIN1 <= C25;
                    AIN2 <= C26;
                    AIN3 <= C27;
                 end
                 6'd28: begin
                    AIN0 <= C28;
                    AIN1 <= C29;
                    AIN2 <= C30;
                    AIN3 <= C31;
                 end
                 6'd32: begin
                    AIN0 <= C32;
                    AIN1 <= C33;
                    AIN2 <= C34;
                    AIN3 <= C35;
                 end
                 6'd36: begin
                    AIN0 <= C36;
                    AIN1 <= C37;
                    AIN2 <= C38;
                    AIN3 <= C39;
                 end
                 6'd40: begin
                    AIN0 <= C40;
                    AIN1 <= C41;
                    AIN2 <= C42;
                    AIN3 <= C43;
                 end
                 6'd44: begin
                    AIN0 <= C44;
                    AIN1 <= C45;
                    AIN2 <= C46;
                    AIN3 <= C47;
                 end
                 6'd48: begin
                    AIN0 <= C48;
                    AIN1 <= C49;
                    AIN2 <= C50;
                    AIN3 <= C51;
                 end
                 6'd52: begin
                    AIN0 <= C52;
                    AIN1 <= C53;
                    AIN2 <= C54;
                    AIN3 <= C55;
                 end
                 6'd56: begin
                    AIN0 <= C56;
                    AIN1 <= C57;
                    AIN2 <= C58;
                    AIN3 <= C59;
                 end
                 6'd60: begin
                    AIN0 <= C60;
                    AIN1 <= C61;
                    AIN2 <= C62;
                    AIN3 <= C63;
                 end
                 default: begin
                    AIN0 <= 0;
                    AIN1 <= 0;
                    AIN2 <= 0;
                    AIN3 <= 0;
                 end
               endcase
               k1 <= 0;               
               start_batterfly <= 1;
               calculating_batterfly_flg <= 1;
               
            end // if (!calculating_batterfly_flg)

            else begin
               start_batterfly <= 0;
               if(fin_batterfly) begin                   
                  calculating_batterfly_flg <= 0;
                  case(cnt) 
                    6'd0: begin
                       YOUT0 <= Y0;
                       YOUT1 <= Y1;
                       YOUT2 <= Y2;
                       YOUT3 <= Y3;
                    end
                    6'd4: begin
                       YOUT4 <= Y0;
                       YOUT5 <= Y1;
                       YOUT6 <= Y2;
                       YOUT7 <= Y3;
                    end
                    6'd8: begin
                       YOUT8 <= Y0;
                       YOUT9 <= Y1;
                       YOUT10 <= Y2;
                       YOUT11 <= Y3;
                    end
                    6'd12: begin
                       YOUT12 <= Y0;
                       YOUT13 <= Y1;
                       YOUT14 <= Y2;
                       YOUT15 <= Y3;
                    end
                    6'd16: begin
                       YOUT16 <= Y0;
                       YOUT17 <= Y1;
                       YOUT18 <= Y2;
                       YOUT19 <= Y3;
                    end
                    6'd20: begin
                       YOUT20 <= Y0;
                       YOUT21 <= Y1;
                       YOUT22 <= Y2;
                       YOUT23 <= Y3;
                    end
                    6'd24: begin
                       YOUT24 <= Y0;
                       YOUT25 <= Y1;
                       YOUT26 <= Y2;
                       YOUT27 <= Y3;
                    end
                    6'd28: begin
                       YOUT28 <= Y0;
                       YOUT29 <= Y1;
                       YOUT30 <= Y2;
                       YOUT31 <= Y3;
                    end
                    6'd32: begin
                       YOUT32 <= Y0;
                       YOUT33 <= Y1;
                       YOUT34 <= Y2;
                       YOUT35 <= Y3;
                    end
                    6'd36: begin
                       YOUT36 <= Y0;
                       YOUT37 <= Y1;
                       YOUT38 <= Y2;
                       YOUT39 <= Y3;
                    end
                    6'd40: begin
                       YOUT40 <= Y0;
                       YOUT41 <= Y1;
                       YOUT42 <= Y2;
                       YOUT43 <= Y3;
                    end
                    6'd44: begin
                       YOUT44 <= Y0;
                       YOUT45 <= Y1;
                       YOUT46 <= Y2;
                       YOUT47 <= Y3;
                    end
                    6'd48: begin
                       YOUT48 <= Y0;
                       YOUT49 <= Y1;
                       YOUT50 <= Y2;
                       YOUT51 <= Y3;
                    end
                    6'd52: begin
                       YOUT52 <= Y0;
                       YOUT53 <= Y1;
                       YOUT54 <= Y2;
                       YOUT55 <= Y3;
                    end
                    6'd56: begin
                       YOUT56 <= Y0;
                       YOUT57 <= Y1;
                       YOUT58 <= Y2;
                       YOUT59 <= Y3;
                    end
                    6'd60: begin
                       YOUT60 <= Y0;
                       YOUT61 <= Y1;
                       YOUT62 <= Y2;
                       YOUT63 <= Y3;
                    end
                    default: begin
                       cnt <= cnt;
                    end
                  endcase
                  cnt <= cnt + 4;
                  if(cnt > 60)
                    begin
                       cnt <= 0;
                       stage_3_start_flg <= 0;         
                       stage_4_start_flg <= 1;            
                       stage <= stage + 1;
                    end                                          
               end // if (fin_batterfly)                
            end // else: !if(!calculating_batterfly_flg)
         end // if (stage == 3)

         
         if(stage_4_start_flg) begin
            YOUT0 <= YOUT0;
            YOUT1 <= YOUT16;
            YOUT2 <= YOUT32;
            YOUT3 <= YOUT48;
            YOUT4 <= YOUT4;
            YOUT5 <= YOUT20;
            YOUT6 <= YOUT36;
            YOUT7 <= YOUT52;
            YOUT8 <= YOUT8;
            YOUT9 <= YOUT24;
            YOUT10 <= YOUT40;
            YOUT11 <= YOUT56;
            YOUT12 <= YOUT12;
            YOUT13 <= YOUT28;
            YOUT14 <= YOUT44;
            YOUT15 <= YOUT60;
            YOUT16 <= YOUT1;
            YOUT17 <= YOUT17;
            YOUT18 <= YOUT33;
            YOUT19 <= YOUT49;
            YOUT20 <= YOUT5;
            YOUT21 <= YOUT21;
            YOUT22 <= YOUT37;
            YOUT23 <= YOUT53;
            YOUT24 <= YOUT9;
            YOUT25 <= YOUT25;
            YOUT26 <= YOUT41;
            YOUT27 <= YOUT57;
            YOUT28 <= YOUT13;
            YOUT29 <= YOUT29;
            YOUT30 <= YOUT45;
            YOUT31 <= YOUT61;
            YOUT32 <= YOUT2;
            YOUT33 <= YOUT18;
            YOUT34 <= YOUT34;
            YOUT35 <= YOUT50;
            YOUT36 <= YOUT6;
            YOUT37 <= YOUT22;
            YOUT38 <= YOUT38;
            YOUT39 <= YOUT54;
            YOUT40 <= YOUT10;
            YOUT41 <= YOUT26;
            YOUT42 <= YOUT42;
            YOUT43 <= YOUT58;
            YOUT44 <= YOUT14;
            YOUT45 <= YOUT30;
            YOUT46 <= YOUT46;
            YOUT47 <= YOUT62;
            YOUT48 <= YOUT3;
            YOUT49 <= YOUT19;
            YOUT50 <= YOUT35;
            YOUT51 <= YOUT51;
            YOUT52 <= YOUT7;
            YOUT53 <= YOUT23;
            YOUT54 <= YOUT39;
            YOUT55 <= YOUT55;
            YOUT56 <= YOUT11;
            YOUT57 <= YOUT27;
            YOUT58 <= YOUT43;
            YOUT59 <= YOUT59;
            YOUT60 <= YOUT15;
            YOUT61 <= YOUT31;
            YOUT62 <= YOUT47;
            YOUT63 <= YOUT63;
            stage <= stage + 1;
            stage_4_start_flg <= 0;         
            stage_5_start_flg <= 1;            
            valid_o <= 1;
            start_batterfly <= 0;
         end // if (stage == 4)
         

         if(stage_5_start_flg) begin
            valid_o <= 0;
            stage <= 0;
            stage_5_start_flg <= 0;         
            start_batterfly <= 0;
            
         end          
      end // else: !if(!rst)
   end // always@ (posedge clk or negedge rst)
   
   radix4_batterfly radix4_batterfly_module(.clk(clk),.rst(rst),.valid_i(start_batterfly), .valid_o(fin_batterfly),.A0(AIN0), .A1(AIN1), .A2(AIN2), .A3(AIN3), .Y0(Y0), .Y1(Y1), .Y2(Y2), .Y3(Y3),.k(k1));
   
endmodule
