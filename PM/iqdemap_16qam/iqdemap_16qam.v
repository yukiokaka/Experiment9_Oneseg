`timescale 1ns / 1ps

module iqdemap_qpsk(
                    input               CLK,
                    input               RST,
                    input               ce,
                    input               valid_i,
                    input signed [10:0] ar,
                    input signed [10:0] ai,
                    output reg          valid_o,
                    output reg [127:0]  writer_data,
                    output              valid_raw,
                    output reg [3:0]    raw
                    );

   reg [8:0]                            cnt;
   reg                                  write_data_output_flg;

   assign valid_raw = valid_o;
   
   
   always@(posedge CLK)
     begin
        if(!RST)
          begin
             valid_o <= 0;
             raw <= 0;
          end
        else
          begin
             if(write_data_output_flg)  
               begin
                  cnt <= 3;
                  write_data_output_flg <= 0;
                  valid_o <= 0;              
               end
             else
               begin
                  if(valid_i)
                    begin
                       raw <= ar;
                       case(ar)
                         3:
                           begin
                              writer_data[cnt-3] = 0;
                              writer_data[cnt-1] = 0;
                           end
                         1:
                           begin
                              writer_data[cnt-3] = 0;
                              writer_data[cnt-1] = 1;
                           end
                        -1:
                          begin
                             writer_data[cnt-3] = 1;
                             writer_data[cnt-1] = 1;
                          end
                        -3:
                          begin
                             writer_data[cnt-3] = 1;
                             writer_data[cnt-1] = 0;
                          end                            
                       endcase // case (ar)
                       case(ai)
                         3:
                           begin
                              writer_data[cnt-2] = 0;
                              writer_data[cnt] = 0;
                           end
                         1:
                           begin
                              writer_data[cnt-2] = 0;
                              writer_data[cnt] = 1;
                           end
                         -1:
                           begin
                              writer_data[cnt-2] = 1;
                              writer_data[cnt] = 1;
                           end
                        -3:
                          begin
                             writer_data[cnt-2] = 1;
                             writer_data[cnt] = 0;
                          end
                       endcase // case (ar)

                       cnt <= cnt + 4;
                       if(cnt >= 128)
                         begin
                            write_data_output_flg <= 1;
                            valid_o <= 1;
                         end
                    end
                  else
                    begin
                       cnt <= 3;
                       
                    end 
               end 
          end
        
     end
   

   
endmodule
