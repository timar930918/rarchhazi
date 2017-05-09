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
		input miso,
		output mosi,
		output sck,
		output cs,
		output HOLD_ENABLE
    );
	 
	reg [31:0] amba_data_in;
	reg [1:0] amba_reg_select;
	reg amba_comm_in;
	//reg [31:0] amba_data_out;

spi_interface interface(
	//amba felol
	.clk(clk),
	.rst(rst),
	.amba_din(amba_data_in),
	.amba_command(amba_reg_select), //read-write select
	.amba_reg_select(amba_comm_in),	//interface register select
	.amba_dout(),		
	//memory fele
	.mosi(mosi),
	.HOLD_ENABLE(HOLD_ENABLE),
	.miso(miso),
	.sck(sck),
	.cs(cs)
    );
	 
	 amba amba(
    );

initial begin
	#150
	amba_reg_select <= 2'b01;
	amba_comm_in <= 1;
	amba_data_in <= 32'h00000001;
	//amba_data_in <= 32'b0;
	
	#500000
	amba_reg_select <= 2'b10;
	amba_comm_in <= 1;
	amba_data_in <= 32'hfbfbfbfb;
	//amba_data_in <= 32'b0;
	
end

endmodule
