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
		
		//memoria
		input miso,
		output mosi,
		output sck,
		output cs,
		output HOLD_ENABLE,
		
		//amba
		input pclk,
		input [31:0] paddr,
		input pwrite,
		input psel,
		input pen,
		input [31:0] pwdata,
		input [31:0] prdata,
		output pready
		
    );

	wire	bus2ip_clk;
	wire	[1:0] bus2ip_addr;
	wire	[8:0] bus2ip_data;
	wire	bus2ip_wr;
	wire	bus2ip_rd;
		
	wire	[7:0] ip2bus_data;
	wire	ip2bus_rdack;
	wire	ip2bus_wrack;


	 amba amba(
	 		
		.clk(clk),
		.rst(rst),
		.addr(paddr),
		.pwrite(pwrite),
		.psel(psel),
		.pen(pen),
		.pwdata(pwdata),
		
		.prdata(prdata),
		.pready(pready),
		
		.bus2ip_clk(bus2ip_clk),
		.bus2ip_addr(bus2ip_addr),
		.bus2ip_data(bus2ip_data),
		.bus2ip_wr(bus2ip_wr),
		.bus2ip_rd(bus2ip_rd),
		
		.ip2bus_data(ip2bus_data),
		.ip2bus_rdack(ip2bus_rdack),
		.ip2bus_wrack(ip2bus_wrack)
	 
    );
	 
spi_interface spi_interface(
		.bus2ip_clk(bus2ip_clk),
		.rst(rst),
		.bus2ip_data(bus2ip_data),
		.bus2ip_addr(bus2ip_addr),
		.bus2ip_wr(bus2ip_wr),
		.bus2ip_rd(bus2ip_rd),
		
		.ip2bus_data(ip2bus_data),
		.ip2bus_rdack(ip2bus_rdack),
		.ip2bus_wrack(ip2bus_wrack),
		
		//memory fele
		.mosi(mosi),
		.HOLD_ENABLE(HOLD_ENABLE),
		.miso(miso),
		.sck(sck),
		.cs(cs)
    );



endmodule
