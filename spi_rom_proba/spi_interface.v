`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:21:18 05/09/2017 
// Design Name: 
// Module Name:    spi_interface 
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
module spi_interface(
		input clk,
		input rst,
		input mosi,
		input [31:0] amba_din,
		input amba_command, //read-write select
		input [1:0] amba_reg_select,	//interface register select
		output HOLD_ENABLE,
		output miso,
		output [31:0] amba_dout,
		output sck,
		output cs
    );

wire [31:0] spi_data_in;
wire [31:0] spi_data_out;

spi spi(
    .clk(clk),
    .rst(rst),
    .cs(cs),
    .sck1(sck),
    .miso(miso),
	 .mosi(mosi),
    .dout(spi_data_out), 
	 .din(spi_data_in), 
	 .freq(2'b00), //sck frekvenciáját meghatározó érték
	 .en(enable), //kommunikáció engedélyezõ jele
	 .transfer_succeded(transfer_success) //sikeres transzfer végét jelzõ bit
    );

//`define `READ      8'b0000_0011
//`define `WRITE     8'b0000_0010
//`define `ZERO		 8'b0000_0000

reg [23:0] reg_address;
reg [1:0] reg_state;
reg [7:0] reg_command;
reg [31:0] reg_data_in;
reg [31:0] reg_data_out;
reg [31:0] reg_spi_data_in;
reg enable;

always@ (posedge clk) begin
	case (reg_state)
	2'b00 : reg_spi_data_in = {reg_command,reg_address};
	2'b01 : reg_spi_data_in = reg_data_in;
	endcase
end
assign spi_data_in = reg_spi_data_in;

assign HOLD_ENABLE = 1; //fixen futtatjuk a memoriat
//
//always@ (posedge clk) begin
//	if(rst)
//		enable = 1'b0;
//	else if(reg_command != 8'b0) 
//end

always@ (posedge clk) begin
	if(rst)
		reg_state <= 2'b0;
	else
		if(transfer_success)
			reg_state <= {reg_state[0],1'b1};
		if(reg_state == 2'b11) begin
			reg_state <= 2'b00;
			end
end
	
always@ (posedge clk)
	if(rst)
		reg_command <= 8'b0;
	else if(amba_reg_select == 2'b00)
		if(amba_command) //write
			reg_command <= 8'b0000_0010;
		else if(amba_command == 1'b0) //read
			reg_command <= 8'b0000_0011;
		
always@ (posedge clk)
	if(rst)
		reg_address <= 24'b0;
	else if(amba_reg_select == 2'b01)
		if(amba_command) //write
			reg_address <= amba_din[23:0];
			
always@ (posedge clk)
	if(rst)
		reg_data_in <= 32'b0;
	else if(amba_reg_select == 2'b10)
		if(amba_command) //write
			reg_data_in <= amba_din;
			
always@ (posedge clk)
	if(rst)
		reg_data_out <= 32'b0;
	else if(amba_reg_select == 2'b11)
		if(~amba_command) //read
			reg_data_out <= amba_dout;	


endmodule
