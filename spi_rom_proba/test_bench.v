`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:26:02 05/09/2017
// Design Name:   top_module
// Module Name:   C:/Company/GitProject/rarchhazi/spi_rom_proba/test_bench.v
// Project Name:  spi_rom_proba
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_bench;

	// Inputs
	reg rst;
	reg clk;
	reg [31:0] d_send;

	// Outputs
	wire miso;
	wire mosi;
	wire cs;
	wire sck;
	wire HOLD_ENABLE;

	// Instantiate the Unit Under Test (UUT)
	top_module uut (
		.rst(rst), 
		.clk(clk),  
		.HOLD_ENABLE(HOLD_ENABLE),
		.miso(miso),
		.mosi(mosi)
	);
	
	M23A1024 memoria (
		.SI_SIO0(mosi),
		.SO_SIO1(miso), 
		.SCK(sck), 
		.CS_N(cs), 
		.SIO2(), //not used
		.HOLD_N_SIO3(HOLD_ENABLE), 
		.RESET(rst)
		);

	initial begin
		// Initialize Inputs
		rst = 1;
		clk = 0;
		
		#9
		rst = 0;
		// Wait 100 ns for global reset to finish

        
		// Add stimulus here
	end
   
	always #25 clk = ~clk;
   
endmodule

