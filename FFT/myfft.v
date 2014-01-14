module myFFT(
             input             clk, rst, start,
             output reg        valid_o, input_succeed_flg,
             output reg [21:0] YOUT0,YOUT1,YOUT2,YOUT3,YOUT4,YOUT5,YOUT6,YOUT7,YOUT8,YOUT9,YOUT10,YOUT11,YOUT12,YOUT13,YOUT14,YOUT15,YOUT16,YOUT17,YOUT18,YOUT19,YOUT20,YOUT21,YOUT22,YOUT23,YOUT24,YOUT25,YOUT26,YOUT27,YOUT28,YOUT29,YOUT30,YOUT31,YOUT32,YOUT33,YOUT34,YOUT35,YOUT36,YOUT37,YOUT38,YOUT39,YOUT40,YOUT41,YOUT42,YOUT43,YOUT44,YOUT45,YOUT46,YOUT47,YOUT48,YOUT49,YOUT50,YOUT51,YOUT52,YOUT53,YOUT54,YOUT55,YOUT56,YOUT57,YOUT58,YOUT59,YOUT60,YOUT61,YOUT62,YOUT63,
             input [21:0]      A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31,A32,A33,A34,A35,A36,A37,A38,A39,A40,A41,A42,A43,A44,A45,A46,A47,A48,A49,A50,A51,A52,A53,A54,A55,A56,A57,A58,A59,A60,A61,A62,A63
             );

   reg [21:0]                  B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31,B32,B33,B34,B35,B36,B37,B38,B39,B40,B41,B42,B43,B44,B45,B46,B47,B48,B49,B50,B51,B52,B53,B54,B55,B56,B57,B58,B59,B60,B61,B62,B63;

   reg [21:0]                  C0,C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C13,C14,C15,C16,C17,C18,C19,C20,C21,C22,C23,C24,C25,C26,C27,C28,C29,C30,C31,C32,C33,C34,C35,C36,C37,C38,C39,C40,C41,C42,C43,C44,C45,C46,C47,C48,C49,C50,C51,C52,C53,C54,C55,C56,C57,C58,C59,C60,C61,C62,C63;
   reg [21:0]                  D0,D1,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,D13,D14,D15,D16,D17,D18,D19,D20,D21,D22,D23,D24,D25,D26,D27,D28,D29,D30,D31,D32,D33,D34,D35,D36,D37,D38,D39,D40,D41,D42,D43,D44,D45,D46,D47,D48,D49,D50,D51,D52,D53,D54,D55,D56,D57,D58,D59,D60,D61,D62,D63;
   reg [21:0]                  BREG0,BREG1,BREG2,BREG3,BREG4,BREG5,BREG6,BREG7,BREG8,BREG9,BREG10,BREG11,BREG12,BREG13,BREG14,BREG15,BREG16,BREG17,BREG18,BREG19,BREG20,BREG21,BREG22,BREG23,BREG24,BREG25,BREG26,BREG27,BREG28,BREG29,BREG30,BREG31,BREG32,BREG33,BREG34,BREG35,BREG36,BREG37,BREG38,BREG39,BREG40,BREG41,BREG42,BREG43,BREG44,BREG45,BREG46,BREG47,BREG48,BREG49,BREG50,BREG51,BREG52,BREG53,BREG54,BREG55,BREG56,BREG57,BREG58,BREG59,BREG60,BREG61,BREG62,BREG63;
   reg [21:0]                  CREG0,CREG1,CREG2,CREG3,CREG4,CREG5,CREG6,CREG7,CREG8,CREG9,CREG10,CREG11,CREG12,CREG13,CREG14,CREG15,CREG16,CREG17,CREG18,CREG19,CREG20,CREG21,CREG22,CREG23,CREG24,CREG25,CREG26,CREG27,CREG28,CREG29,CREG30,CREG31,CREG32,CREG33,CREG34,CREG35,CREG36,CREG37,CREG38,CREG39,CREG40,CREG41,CREG42,CREG43,CREG44,CREG45,CREG46,CREG47,CREG48,CREG49,CREG50,CREG51,CREG52,CREG53,CREG54,CREG55,CREG56,CREG57,CREG58,CREG59,CREG60,CREG61,CREG62,CREG63;

   
   wire [21:0]                 Y0,Y1,Y2,Y3,Y4,Y5,Y6,Y7,Y8,Y9,Y10,Y11;
   
   
   reg [3:0]                   stage;
   reg                         stage_1_start_flg;
   reg                         stage_2_start_flg;
   reg                         stage_3_start_flg;
   reg                         stage_4_start_flg;
   reg                         stage_5_start_flg;

   reg [21:0]                  AIN0,AIN1,AIN2,AIN3,AIN4,AIN5,AIN6,AIN7,AIN8,AIN9,AIN10,AIN11;
   
   reg [6:0]                   cnt;
   reg [6:0]                   cnt2;
   reg [6:0]                   cnt3;
   reg                         start_batterfly, calculating_batterfly_flg;
   reg                         start_batterfly_2, calculating_batterfly_flg_2;
   reg                         start_batterfly_3, calculating_batterfly_flg_3;
   
   reg [6:0]                   k1,k2,k3;
   wire                        fin_batterfly, fin_batterfly_2, fin_batterfly_3;
                        
   
   always@(posedge clk or negedge rst) begin
      if(!rst) begin
         stage <= 0;
         cnt <= 0;
         start_batterfly <= 0;
         start_batterfly_2 <= 0;
         start_batterfly_3 <= 0;
         input_succeed_flg <= 0;
         
         valid_o <= 0;
         k1 <= 0;
         calculating_batterfly_flg <= 0;
         calculating_batterfly_flg_2 <= 0;
         calculating_batterfly_flg_3 <= 0;

         stage_1_start_flg <= 0;
         stage_2_start_flg <= 0;
         stage_3_start_flg <= 0;
         stage_4_start_flg <= 0;
         stage_5_start_flg <= 0;

      end
      else begin
         // if(stage == 0) begin
         //    if(start) begin
         //       stage <= 1;
         //       stage_1_start_flg <= 1;
         //       cnt <= 0;
         //    end
         // end

         if(!stage_1_start_flg) begin
            if(start) begin
               stage <= 1;
               stage_1_start_flg <= 1;
               cnt <= 0;
               input_succeed_flg <= 1;              
            end
         end

         
         if(stage_1_start_flg) begin
            input_succeed_flg <= 0;              
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
                       BREG0 <= Y0;
                       BREG16 <= Y1;
                       BREG32 <= Y2;
                       BREG48 <= Y3;
                    end
                    6'd1: begin
                       BREG1 <= Y0;
                       BREG17 <= Y1;
                       BREG33 <= Y2;
                       BREG49 <= Y3;
                    end
                    6'd2: begin
                       BREG2 <= Y0;
                       BREG18 <= Y1;
                       BREG34 <= Y2;
                       BREG50 <= Y3;
                    end
                    6'd3: begin
                       BREG3 <= Y0;
                       BREG19 <= Y1;
                       BREG35 <= Y2;
                       BREG51 <= Y3;
                    end
                    6'd4: begin
                       BREG4 <= Y0;
                       BREG20 <= Y1;
                       BREG36 <= Y2;
                       BREG52 <= Y3;
                    end
                    6'd5: begin
                       BREG5 <= Y0;
                       BREG21 <= Y1;
                       BREG37 <= Y2;
                       BREG53 <= Y3;
                    end
                    6'd6: begin
                       BREG6 <= Y0;
                       BREG22 <= Y1;
                       BREG38 <= Y2;
                       BREG54 <= Y3;
                    end
                    6'd7: begin
                       BREG7 <= Y0;
                       BREG23 <= Y1;
                       BREG39 <= Y2;
                       BREG55 <= Y3;
                    end
                    6'd8: begin
                       BREG8 <= Y0;
                       BREG24 <= Y1;
                       BREG40 <= Y2;
                       BREG56 <= Y3;
                    end
                    6'd9: begin
                       BREG9 <= Y0;
                       BREG25 <= Y1;
                       BREG41 <= Y2;
                       BREG57 <= Y3;
                    end
                    6'd10: begin
                       BREG10 <= Y0;
                       BREG26 <= Y1;
                       BREG42 <= Y2;
                       BREG58 <= Y3;
                    end
                    6'd11: begin
                       BREG11 <= Y0;
                       BREG27 <= Y1;
                       BREG43 <= Y2;
                       BREG59 <= Y3;
                    end
                    6'd12: begin
                       BREG12 <= Y0;
                       BREG28 <= Y1;
                       BREG44 <= Y2;
                       BREG60 <= Y3;
                    end
                    6'd13: begin
                       BREG13 <= Y0;
                       BREG29 <= Y1;
                       BREG45 <= Y2;
                       BREG61 <= Y3;
                    end
                    6'd14: begin
                       BREG14 <= Y0;
                       BREG30 <= Y1;
                       BREG46 <= Y2;
                       BREG62 <= Y3;
                    end
                    6'd15: begin
                       BREG15 <= Y0;
                       BREG31 <= Y1;
                       BREG47 <= Y2;
                       BREG63 <= Y3;
                    end
                    default:
                      cnt <= cnt;
                  endcase
                  cnt <= cnt + 1;
                  
               end // if (fin_batterfly)               
            end // else: !if(!calculating_batterfly_flg)
            if(cnt > 15) begin
               if(!stage_2_start_flg) begin
                  cnt2 <= 0;
                  stage_1_start_flg <= 0;         
                  stage_2_start_flg <= 1;            
                  stage <= stage + 1;              
                  k2 <= 0;           
                  B0<= BREG0;
                  B1<= BREG1;
                  B2<= BREG2;
                  B3<= BREG3;
                  B4<= BREG4;
                  B5<= BREG5;
                  B6<= BREG6;
                  B7<= BREG7;
                  B8<= BREG8;
                  B9<= BREG9;
                  B10<= BREG10;
                  B11<= BREG11;
                  B12<= BREG12;
                  B13<= BREG13;
                  B14<= BREG14;
                  B15<= BREG15;
                  B16<= BREG16;
                  B17<= BREG17;
                  B18<= BREG18;
                  B19<= BREG19;
                  B20<= BREG20;
                  B21<= BREG21;
                  B22<= BREG22;
                  B23<= BREG23;
                  B24<= BREG24;
                  B25<= BREG25;
                  B26<= BREG26;
                  B27<= BREG27;
                  B28<= BREG28;
                  B29<= BREG29;
                  B30<= BREG30;
                  B31<= BREG31;
                  B32<= BREG32;
                  B33<= BREG33;
                  B34<= BREG34;
                  B35<= BREG35;
                  B36<= BREG36;
                  B37<= BREG37;
                  B38<= BREG38;
                  B39<= BREG39;
                  B40<= BREG40;
                  B41<= BREG41;
                  B42<= BREG42;
                  B43<= BREG43;
                  B44<= BREG44;
                  B45<= BREG45;
                  B46<= BREG46;
                  B47<= BREG47;
                  B48<= BREG48;
                  B49<= BREG49;
                  B50<= BREG50;
                  B51<= BREG51;
                  B52<= BREG52;
                  B53<= BREG53;
                  B54<= BREG54;
                  B55<= BREG55;
                  B56<= BREG56;
                  B57<= BREG57;
                  B58<= BREG58;
                  B59<= BREG59;
                  B60<= BREG60;
                  B61<= BREG61;
                  B62<= BREG62;
                  B63<= BREG63;                  
                 end
            end
         end // if (stage == 1)
         
         if(stage_2_start_flg) begin
            if(!calculating_batterfly_flg_2) begin
               case(cnt2) 
                  6'd0: begin
                     AIN4 <= B0;
                     AIN5 <= B4;
                     AIN6 <= B8;
                     AIN7 <= B12;
                  end
                 6'd1: begin
                    AIN4 <= B1;
                    AIN5 <= B5;
                    AIN6 <= B9;
                    AIN7 <= B13;
                 end
                 6'd2: begin
                    AIN4 <= B2;
                    AIN5 <= B6;
                    AIN6 <= B10;
                    AIN7 <= B14;
                 end
                 6'd3: begin
                    AIN4 <= B3;
                    AIN5 <= B7;
                    AIN6 <= B11;
                    AIN7 <= B15;
                 end
                 6'd16: begin
                    AIN4 <= B16;
                    AIN5 <= B20;
                    AIN6 <= B24;
                    AIN7 <= B28;
                 end
                 6'd17: begin
                    AIN4 <= B17;
                    AIN5 <= B21;
                    AIN6 <= B25;
                    AIN7 <= B29;
                 end
                 6'd18: begin
                    AIN4 <= B18;
                    AIN5 <= B22;
                    AIN6 <= B26;
                    AIN7 <= B30;
                 end
                 6'd19: begin
                    AIN4 <= B19;
                    AIN5 <= B23;
                    AIN6 <= B27;
                    AIN7 <= B31;
                 end
                 6'd32: begin
                    AIN4 <= B32;
                    AIN5 <= B36;
                    AIN6 <= B40;
                    AIN7 <= B44;
                 end
                 6'd33: begin
                    AIN4 <= B33;
                    AIN5 <= B37;
                    AIN6 <= B41;
                    AIN7 <= B45;
                 end
                 6'd34: begin
                    AIN4 <= B34;
                    AIN5 <= B38;
                    AIN6 <= B42;
                    AIN7 <= B46;
                 end
                 6'd35: begin
                    AIN4 <= B35;
                    AIN5 <= B39;
                    AIN6 <= B43;
                    AIN7 <= B47;
                 end
                 6'd48: begin
                    AIN4 <= B48;
                    AIN5 <= B52;
                    AIN6 <= B56;
                    AIN7 <= B60;
                 end
                 6'd49: begin
                    AIN4 <= B49;
                    AIN5 <= B53;
                    AIN6 <= B57;
                    AIN7 <= B61;
                 end
                 6'd50: begin
                    AIN4 <= B50;
                    AIN5 <= B54;
                    AIN6 <= B58;
                    AIN7 <= B62;
                 end
                 6'd51: begin
                    AIN4 <= B51;
                    AIN5 <= B55;
                    AIN6 <= B59;
                    AIN7 <= B63;
                 end
                 default:
                   cnt2 <= cnt2;
               endcase

               k2 <= (cnt2%16)<<2;                  
               start_batterfly_2 <= 1;
               calculating_batterfly_flg_2 <= 1;
            end // if (!calculating_batterfly_flg)
            
            else begin
               start_batterfly_2 <= 0;                  
               if(fin_batterfly_2) begin
                  calculating_batterfly_flg_2 <= 0;
                  case(cnt2) 
                     6'd0: begin
                        CREG0 <= Y4;
                        CREG4 <= Y5;
                        CREG8 <= Y6;
                        CREG12 <= Y7;
                     end
                    6'd1: begin
                       CREG1 <= Y4;
                       CREG5 <= Y5;
                       CREG9 <= Y6;
                       CREG13 <= Y7;
                    end
                    6'd2: begin
                       CREG2 <= Y4;
                       CREG6 <= Y5;
                       CREG10 <= Y6;
                       CREG14 <= Y7;
                    end
                    6'd3: begin
                       CREG3 <= Y4;
                       CREG7 <= Y5;
                       CREG11 <= Y6;
                       CREG15 <= Y7;
                    end
                    6'd16: begin
                       CREG16 <= Y4;
                       CREG20 <= Y5;
                       CREG24 <= Y6;
                       CREG28 <= Y7;
                    end
                    6'd17: begin
                       CREG17 <= Y4;
                       CREG21 <= Y5;
                       CREG25 <= Y6;
                       CREG29 <= Y7;
                    end
                    6'd18: begin
                       CREG18 <= Y4;
                       CREG22 <= Y5;
                       CREG26 <= Y6;
                       CREG30 <= Y7;
                    end
                    6'd19: begin
                       CREG19 <= Y4;
                       CREG23 <= Y5;
                       CREG27 <= Y6;
                       CREG31 <= Y7;
                    end
                    6'd32: begin
                       CREG32 <= Y4;
                       CREG36 <= Y5;
                       CREG40 <= Y6;
                       CREG44 <= Y7;
                    end
                    6'd33: begin
                       CREG33 <= Y4;
                       CREG37 <= Y5;
                       CREG41 <= Y6;
                       CREG45 <= Y7;
                    end
                    6'd34: begin
                       CREG34 <= Y4;
                       CREG38 <= Y5;
                       CREG42 <= Y6;
                       CREG46 <= Y7;
                    end
                    6'd35: begin
                       CREG35 <= Y4;
                       CREG39 <= Y5;
                       CREG43 <= Y6;
                       CREG47 <= Y7;
                    end
                    6'd48: begin
                       CREG48 <= Y4;
                       CREG52 <= Y5;
                       CREG56 <= Y6;
                       CREG60 <= Y7;
                    end
                    6'd49: begin
                       CREG49 <= Y4;
                       CREG53 <= Y5;
                       CREG57 <= Y6;
                       CREG61 <= Y7;
                    end
                    6'd50: begin
                       CREG50 <= Y4;
                       CREG54 <= Y5;
                       CREG58 <= Y6;
                       CREG62 <= Y7;
                    end
                    6'd51: begin
                       CREG51 <= Y4;
                       CREG55 <= Y5;
                       CREG59 <= Y6;
                       CREG63 <= Y7;
                    end
                    default:
                      cnt <= cnt;
                    
                  endcase
                  
      
                  cnt2 <= cnt2 + 1;
                  if(((cnt2+1) % 4) == 0) cnt2 <= cnt2 + 13; 
               end // if (fin_batterfly)
               
            end // else: !if(!calculating_batterfly_flg)
            if(cnt2>51) begin
               if(!stage_3_start_flg) begin
                  cnt3 <= 0;
                  calculating_batterfly_flg_2 <= 0;

                  stage_2_start_flg <= 0;         
                  stage_3_start_flg <= 1;            
                  stage <= stage + 1;
                  k3 <= 0;  
                  C0<= CREG0;
                  C1<= CREG1;
                  C2<= CREG2;
                  C3<= CREG3;
                  C4<= CREG4;
                  C5<= CREG5;
                  C6<= CREG6;
                  C7<= CREG7;
                  C8<= CREG8;
                  C9<= CREG9;
                  C10<= CREG10;
                  C11<= CREG11;
                  C12<= CREG12;
                  C13<= CREG13;
                  C14<= CREG14;
                  C15<= CREG15;
                  C16<= CREG16;
                  C17<= CREG17;
                  C18<= CREG18;
                  C19<= CREG19;
                  C20<= CREG20;
                  C21<= CREG21;
                  C22<= CREG22;
                  C23<= CREG23;
                  C24<= CREG24;
                  C25<= CREG25;
                  C26<= CREG26;
                  C27<= CREG27;
                  C28<= CREG28;
                  C29<= CREG29;
                  C30<= CREG30;
                  C31<= CREG31;
                  C32<= CREG32;
                  C33<= CREG33;
                  C34<= CREG34;
                  C35<= CREG35;
                  C36<= CREG36;
                  C37<= CREG37;
                  C38<= CREG38;
                  C39<= CREG39;
                  C40<= CREG40;
                  C41<= CREG41;
                  C42<= CREG42;
                  C43<= CREG43;
                  C44<= CREG44;
                  C45<= CREG45;
                  C46<= CREG46;
                  C47<= CREG47;
                  C48<= CREG48;
                  C49<= CREG49;
                  C50<= CREG50;
                  C51<= CREG51;
                  C52<= CREG52;
                  C53<= CREG53;
                  C54<= CREG54;
                  C55<= CREG55;
                  C56<= CREG56;
                  C57<= CREG57;
                  C58<= CREG58;
                  C59<= CREG59;
                  C60<= CREG60;
                  C61<= CREG61;
                  C62<= CREG62;
                  C63<= CREG63;

                  
               end
            end                             
         end // if (stage == 2)
         
         if(stage_3_start_flg) begin
            if(!calculating_batterfly_flg_3) begin               
               case(cnt3)
                 6'd0: begin
                    AIN8 <= C0;
                    AIN9 <= C1;
                    AIN10 <= C2;
                    AIN11 <= C3;
                 end
                 6'd4: begin
                    AIN8 <= C4;
                    AIN9 <= C5;
                    AIN10 <= C6;
                    AIN11 <= C7;
                 end
                 6'd8: begin
                    AIN8 <= C8;
                    AIN9 <= C9;
                    AIN10 <= C10;
                    AIN11 <= C11;
                 end
                 6'd12: begin
                    AIN8 <= C12;
                    AIN9 <= C13;
                    AIN10 <= C14;
                    AIN11 <= C15;
                 end
                 6'd16: begin
                    AIN8 <= C16;
                    AIN9 <= C17;
                    AIN10 <= C18;
                    AIN11 <= C19;
                 end
                 6'd20: begin
                    AIN8 <= C20;
                    AIN9 <= C21;
                    AIN10 <= C22;
                    AIN11 <= C23;
                 end
                 6'd24: begin
                    AIN8 <= C24;
                    AIN9 <= C25;
                    AIN10 <= C26;
                    AIN11 <= C27;
                 end
                 6'd28: begin
                    AIN8 <= C28;
                    AIN9 <= C29;
                    AIN10 <= C30;
                    AIN11 <= C31;
                 end
                 6'd32: begin
                    AIN8 <= C32;
                    AIN9 <= C33;
                    AIN10 <= C34;
                    AIN11 <= C35;
                 end
                 6'd36: begin
                    AIN8 <= C36;
                    AIN9 <= C37;
                    AIN10 <= C38;
                    AIN11 <= C39;
                 end
                 6'd40: begin
                    AIN8 <= C40;
                    AIN9 <= C41;
                    AIN10 <= C42;
                    AIN11 <= C43;
                 end
                 6'd44: begin
                    AIN8 <= C44;
                    AIN9 <= C45;
                    AIN10 <= C46;
                    AIN11 <= C47;
                 end
                 6'd48: begin
                    AIN8 <= C48;
                    AIN9 <= C49;
                    AIN10 <= C50;
                    AIN11 <= C51;
                 end
                 6'd52: begin
                    AIN8 <= C52;
                    AIN9 <= C53;
                    AIN10 <= C54;
                    AIN11 <= C55;
                 end
                 6'd56: begin
                    AIN8 <= C56;
                    AIN9 <= C57;
                    AIN10 <= C58;
                    AIN11 <= C59;
                 end
                 6'd60: begin
                    AIN8 <= C60;
                    AIN9 <= C61;
                    AIN10 <= C62;
                    AIN11 <= C63;
                 end
                 default: begin
                    AIN8 <= 0;
                    AIN9 <= 0;
                    AIN10 <= 0;
                    AIN11 <= 0;
                 end
               endcase
               k3 <= 0;               
               start_batterfly_3 <= 1;
               calculating_batterfly_flg_3 <= 1;
               
            end // if (!calculating_batterfly_flg)

            else begin
               start_batterfly_3 <= 0;
               if(fin_batterfly_3) begin                   
                  calculating_batterfly_flg_3 <= 0;
                  case(cnt3) 
                    6'd0: begin
                       D0 <= Y8;
                       D1 <= Y9;
                       D2 <= Y10;
                       D3 <= Y11;
                    end
                    6'd4: begin
                       D4 <= Y8;
                       D5 <= Y9;
                       D6 <= Y10;
                       D7 <= Y11;
                    end
                    6'd8: begin
                       D8 <= Y8;
                       D9 <= Y9;
                       D10 <= Y10;
                       D11 <= Y11;
                    end
                    6'd12: begin
                       D12 <= Y8;
                       D13 <= Y9;
                       D14 <= Y10;
                       D15 <= Y11;
                    end
                    6'd16: begin
                       D16 <= Y8;
                       D17 <= Y9;
                       D18 <= Y10;
                       D19 <= Y11;
                    end
                    6'd20: begin
                       D20 <= Y8;
                       D21 <= Y9;
                       D22 <= Y10;
                       D23 <= Y11;
                    end
                    6'd24: begin
                       D24 <= Y8;
                       D25 <= Y9;
                       D26 <= Y10;
                       D27 <= Y11;
                    end
                    6'd28: begin
                       D28 <= Y8;
                       D29 <= Y9;
                       D30 <= Y10;
                       D31 <= Y11;
                    end
                    6'd32: begin
                       D32 <= Y8;
                       D33 <= Y9;
                       D34 <= Y10;
                       D35 <= Y11;
                    end
                    6'd36: begin
                       D36 <= Y8;
                       D37 <= Y9;
                       D38 <= Y10;
                       D39 <= Y11;
                    end
                    6'd40: begin
                       D40 <= Y8;
                       D41 <= Y9;
                       D42 <= Y10;
                       D43 <= Y11;
                    end
                    6'd44: begin
                       D44 <= Y8;
                       D45 <= Y9;
                       D46 <= Y10;
                       D47 <= Y11;
                    end
                    6'd48: begin
                       D48 <= Y8;
                       D49 <= Y9;
                       D50 <= Y10;
                       D51 <= Y11;
                    end
                    6'd52: begin
                       D52 <= Y8;
                       D53 <= Y9;
                       D54 <= Y10;
                       D55 <= Y11;
                    end
                    6'd56: begin
                       D56 <= Y8;
                       D57 <= Y9;
                       D58 <= Y10;
                       D59 <= Y11;
                    end
                    6'd60: begin
                       D60 <= Y8;
                       D61 <= Y9;
                       D62 <= Y10;
                       D63 <= Y11;
                    end
                    default: begin
                       cnt3 <= cnt3;
                    end
                  endcase
                  cnt3 <= cnt3 + 4;
               end // if (fin_batterfly)                
            end // else: !if(!calculating_batterfly_flg)
            if(cnt3 > 60)
              begin
                 if(!stage_4_start_flg) begin
                    cnt3 <= 0;
                    stage_3_start_flg <= 0;         
                    stage_4_start_flg <= 1;            
                    stage <= stage + 1;
                 end                                          
              end
         end // if (stage == 3)

         
         if(stage_4_start_flg) begin
            YOUT0 <= D0;
            YOUT1 <= D16;
            YOUT2 <= D32;
            YOUT3 <= D48;
            YOUT4 <= D4;
            YOUT5 <= D20;
            YOUT6 <= D36;
            YOUT7 <= D52;
            YOUT8 <= D8;
            YOUT9 <= D24;
            YOUT10 <= D40;
            YOUT11 <= D56;
            YOUT12 <= D12;
            YOUT13 <= D28;
            YOUT14 <= D44;
            YOUT15 <= D60;
            YOUT16 <= D1;
            YOUT17 <= D17;
            YOUT18 <= D33;
            YOUT19 <= D49;
            YOUT20 <= D5;
            YOUT21 <= D21;
            YOUT22 <= D37;
            YOUT23 <= D53;
            YOUT24 <= D9;
            YOUT25 <= D25;
            YOUT26 <= D41;
            YOUT27 <= D57;
            YOUT28 <= D13;
            YOUT29 <= D29;
            YOUT30 <= D45;
            YOUT31 <= D61;
            YOUT32 <= D2;
            YOUT33 <= D18;
            YOUT34 <= D34;
            YOUT35 <= D50;
            YOUT36 <= D6;
            YOUT37 <= D22;
            YOUT38 <= D38;
            YOUT39 <= D54;
            YOUT40 <= D10;
            YOUT41 <= D26;
            YOUT42 <= D42;
            YOUT43 <= D58;
            YOUT44 <= D14;
            YOUT45 <= D30;
            YOUT46 <= D46;
            YOUT47 <= D62;
            YOUT48 <= D3;
            YOUT49 <= D19;
            YOUT50 <= D35;
            YOUT51 <= D51;
            YOUT52 <= D7;
            YOUT53 <= D23;
            YOUT54 <= D39;
            YOUT55 <= D55;
            YOUT56 <= D11;
            YOUT57 <= D27;
            YOUT58 <= D43;
            YOUT59 <= D59;
            YOUT60 <= D15;
            YOUT61 <= D31;
            YOUT62 <= D47;
            YOUT63 <= D63;
            if(!stage_5_start_flg) begin
               stage <= stage + 1;
               stage_4_start_flg <= 0;         
               stage_5_start_flg <= 1;            
               valid_o <= 1;
               start_batterfly <= 0;
            end
         end // if (stage == 4)
         

         if(stage_5_start_flg) begin
            valid_o <= 0;
            stage <= 0;
            stage_5_start_flg <= 0;         
            start_batterfly <= 0;
            
         end          
      end // else: !if(!rst)
   end // always@ (posedge clk or negedge rst)
   
   radix4_batterfly radix4_batterfly_module1(.clk(clk),.rst(rst),.valid_i(start_batterfly), .valid_o(fin_batterfly),.A0(AIN0), .A1(AIN1), .A2(AIN2), .A3(AIN3), .Y0(Y0), .Y1(Y1), .Y2(Y2), .Y3(Y3),.k(k1));
   radix4_batterfly radix4_batterfly_module2(.clk(clk),.rst(rst),.valid_i(start_batterfly_2), .valid_o(fin_batterfly_2),.A0(AIN4), .A1(AIN5), .A2(AIN6), .A3(AIN7), .Y0(Y4), .Y1(Y5), .Y2(Y6), .Y3(Y7),.k(k2));   
   radix4_batterfly radix4_batterfly_module3(.clk(clk),.rst(rst),.valid_i(start_batterfly_3), .valid_o(fin_batterfly_3),.A0(AIN8), .A1(AIN9), .A2(AIN10), .A3(AIN11), .Y0(Y8), .Y1(Y9), .Y2(Y10), .Y3(Y11),.k(k3));
   
endmodule

