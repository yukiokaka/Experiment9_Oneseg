`timescale 1ns / 1ps

module iqmap_16qam(
                  input                    CLK,
                  input                    RST,
                  input                    ce,
                  input                    valid_i,
                  input [127:0]            reader_data,
                  output reg signed [10:0] xr,
                  output reg signed [10:0] xi,
                  output reg               valid_o,
                  output                   valid_raw,
                  output reg               reader_en,
                  output reg [3:0]         raw
                  );
   
   assign valid_raw = valid_o;
   
   reg [127:0]                             reader_data_reg;
   reg [8:0]                               cnt;
   reg                                     start_output_flg;
   reg [3:0]                               bits_r, bits_i;
                               
   
   always@(posedge CLK)
	 begin
		if(!RST)
		  begin
			 cnt <= 3;
			 reader_data_reg <= 0;
			 valid_o <= 0;
			 raw <= 0;
			 reader_en <= 1;
             start_output_flg <= 0;
             
		  end
		else
		  begin
			 if(valid_i)
			   begin
				  reader_en <= 0;
				  reader_data_reg <= reader_data;
                  bits_r <=  reader_data_reg[0]<<1 | reader_data_reg[2];
                  bits_i <=  reader_data_reg[1]<<1 | reader_data_reg[3];


				  cnt <= 3;
                  start_output_flg <= 1;                 
			   end
			 else
			   begin
                  if(start_output_flg)
                    begin
                       bits_r <=  reader_data_reg[cnt-3]<<1 | reader_data_reg[cnt-1];
				       case(bits_r)
                         3'h0: xr <= 3;
                         3'h1: xr <= 1;
                         3'h3: xr <= -1;
                         3'h2: xr <= 3;
                       endcase 
                       
                       bits_i <=  reader_data_reg[cnt-2]<<1 | reader_data_reg[cnt];
				       case(bits_i)
                         3'h0: xi <= 3;
                         3'h1: xi <= 1;
                         3'h3: xi <= -1;
                         3'h2: xi <= 3;
                       endcase 
                       
                       valid_o <= 1;
                       
                         
				       cnt <= cnt + 4;
				       if(cnt >= 128)
					     begin
                            start_output_flg <= 0;
					        valid_o <= 0;
					        reader_en <= 1;
                            cnt <= 3;
                            
					     end
			        end // if (start_output)
               end
		  end
	 end


endmodule
