`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:43:10 05/17/2017
// Design Name:   spi
// Module Name:   C:/gitproject/rarchhazi/spi_rom_proba/test_spi.v
// Project Name:  spi_rom_proba
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

module test_spi;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] din;
	reg [1:0] freq;
	reg en;
	reg miso;

	// Outputs
	wire mosi;
	wire [31:0] dout;
	wire cs;
	wire sck;
	wire transfer_succeded;

	// Instantiate the Unit Under Test (UUT)
	spi uut (
		.clk(clk), 
		.rst(rst), 
		.din(din), 
		.freq(freq), 
		.en(en), 
		.miso(miso), 
		.mosi(mosi), 
		.dout(dout), 
		.cs(cs), 
		.sck(sck), 
		.transfer_succeded(transfer_succeded)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		rst = 1;
		din = 0;
		freq = 2'b11;
		en = 0;
		miso = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		rst = 0;
		#10;
		din = 32'h1111_1111_1111_1111;
		en = 1;

	end
      
		always #5 clk <= ~clk;
endmodule

