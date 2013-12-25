`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:18:14 12/09/2013 
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
module iqdemap_bpsk(
    input CLK,
    input RST,
    input ce,
    input valid_i,
    input signed [10:0] ar,
    input signed [10:0] ai,
    output reg valid_o,
    output reg [127:0] writer_data,
    output reg valid_raw,
    output reg raw
    );


endmodule
