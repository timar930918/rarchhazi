`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:24:26 05/09/2017 
// Design Name: 
// Module Name:    amba 
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
module amba(
		
		input clk,
		input rst,
		input [31:0] addr,
		input pwrite,
		input psel,
		input pen,
		input [31:0] pwdata,
		
		output [31:0] prdata,
		output pready,
		
		output bus2ip_clk,
		output [1:0] bus2ip_addr,
		output [8:0] bus2ip_data,
		output bus2ip_wr,
		output bus2ip_rd,
		
		input [7:0] ip2bus_data,
		input ip2bus_rdack,
		input ip2bus_wrack
    );

assign bus2ip_clk = clk;
assign bus2ip_addr = addr[1:0];
assign bus2ip_data = pwdata[8:0];
assign bus2ip_wr = pwrite & psel;
assign bus2ip_rd = ~pwrite & psel;

	
reg [1:0] cntr;
always@ ( * )
if (rst)
	cntr <= 2'b0;
else
begin
		if(psel & ~pen) cntr <= 2'b01;
		if(psel & pen) cntr <= 2'b10;
		if(~psel & ~pen) cntr <= 2'b00;
end

assign pready = (cntr == 2'b10)? (ip2bus_wrack | ip2bus_rdack) : 0 ;

assign prdata = (~pwrite & pready & psel & cntr == 2'b10) ? {24'b0 , ip2bus_data} : 32'bz;

endmodule






