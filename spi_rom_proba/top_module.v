`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:50:29 05/09/2017 
// Design Name: 
// Module Name:    top_module 
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
module top_module( 
	 	input rst,
		input clk,
		input enable,
		input miso,
		output mosi,
		output transfer_success,
		output HOLD_ENABLE
    );
	 
	wire enable;
	wire miso;
	wire mosi;
	wire cs;
	wire sck;

spi_interface interface(
	.HOLD_ENABLE(HOLD_ENABLE)
    );
	 
	 amba amba(
    );

wire sckcs;
assign sckcs = sck | cs;



endmodule
