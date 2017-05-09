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
	reg enable;
	reg [31:0] d_send;

	// Outputs
	wire [31:0] d_received;
	wire transfer_success;
	wire miso;
	wire mosi;
	wire HOLD_ENABLE;

	// Instantiate the Unit Under Test (UUT)
	top_module uut (
		.rst(rst), 
		.clk(clk), 
		.enable(enable), 
		.d_send(d_send), 
		.d_received(d_received), 
		.transfer_success(transfer_success), 
		.HOLD_ENABLE(HOLD_ENABLE),
		.miso(miso),
		.mosi(mosi)
	);
	
	M23A1024 memoria (
		.SI_SIO0(mosi),
		.SO_SIO1(miso), 
		.SCK(), 
		.CS_N(), 
		.SIO2(), //not used
		.HOLD_N_SIO3(HOLD_ENABLE), 
		.RESET(rst)
		);

	initial begin
		// Initialize Inputs
		rst = 0;
		clk = 0;
		enable = 0;
		d_send = 0;
		HOLD_ENABLE = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

