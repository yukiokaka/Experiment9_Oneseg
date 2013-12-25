`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:13:28 12/09/2013 
// Design Name: 
// Module Name:    iqdemap_bpsk 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module iqmap_bpsk(
    input CLK,
    input RST,
    input ce,
    input valid_i,
    input [127:0] reader_data,
    output signed[10:0] xr,
    output signed[10:0] xi,
    output reg valid_o,
    output valid_raw,
    output reg[3:0] raw
    );
	
	assign valid_raw = valid_o;
	
	reg [127:0] reader_data_reg;
	reg [8:0] cnt;
	always@(posedge CLK)
		begin
			if(!RST == 0)
				begin
					cnt <= 0;
					reader_data_reg <= 0;
					valid_o <= 0;
					valid_raw <= 0;
					raw <= 0;
					reader_en <= 1;
				end
			else
				begin
					if(valid_i)
						begin
							reader_en <= 0;
							reader_data_reg <= reader_data;
							cnt <= 0;
							valid_o <= 0;
							xi <= 0;
						end
					else
						begin
						   xr <= 1 - (reader_data_reg[cnt] << 1);
							raw <= reader_data_reg[cnt];
							cnt <= cnt + 1;
							if(cnt == 128)
								begin
									valid_o <= 0;
									reader_en <= 1;
								end
						end
				end
		end


endmodule
