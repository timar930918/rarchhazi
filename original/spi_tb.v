`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:13:23 04/14/2016
// Design Name:   spi
// Module Name:   C:/Users/P.Dani/Desktop/rendszerarch/hf/rendszerarch_spi/spi_tb.v
// Project Name:  rendszerarch_spi
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: spi
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module spi_tb;

	// Inputs
	reg clk;
	reg rst;
	reg miso;
	reg [31:0] din;
	reg [1:0] frq;

	// Outputs
	wire cs;
	wire sck;
	wire mosi;
	wire [31:0] dout;

	// Instantiate the Unit Under Test (UUT)
	spi uut (
		.clk(clk), 
		.rst(rst), 
		.cs(cs), 
		.sck(sck), 
		.miso(miso), 
		.mosi(mosi), 
		.dout(dout), 
		.din(din), 
		.frq(frq)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		miso = 0;
		din = 0;
		frq = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

