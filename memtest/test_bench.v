`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:49:09 05/09/2017
// Design Name:   M23A1024
// Module Name:   C:/Users/Ari/Desktop/xilinx/fehervari/memtest/test_bench.v
// Project Name:  memtest
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: M23A1024
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
	reg SCK;
	reg CS_N;
	reg RESET;

	// Bidirs
	wire SI_SIO0;
	wire SO_SIO1;
	wire SIO2;
	wire HOLD_N_SIO3;

	// Instantiate the Unit Under Test (UUT)
	M23A1024 uut (
		.SI_SIO0(SI_SIO0), 
		.SO_SIO1(SO_SIO1), 
		.SCK(SCK), 
		.CS_N(CS_N), 
		.SIO2(SIO2), 
		.HOLD_N_SIO3(HOLD_N_SIO3), 
		.RESET(RESET)
	);

	reg adat;
	initial begin
		// Initialize Inputs
		SCK = 0;
		CS_N = 1;
		RESET = 1;

		// Wait 100 ns for global reset to finish
		#100;
        RESET = 0;
		  #10;
		  CS_N = 0;
		  adat  = 0;
		  #10;
		  adat  = 0;
		  #10;
		  adat  = 0;
		  #10;
		  adat  = 0;
		  #10;
		  adat  = 0;
		  #10;
		  adat  = 0;
		  #10;
		  adat  = 1;
		  #10;
		  adat  = 1;
		  #10;
		  adat = 0;
		  #10;

		// Add stimulus here

	end
      
		always #5 SCK = ~SCK;
		assign SI_SIO0 = adat;
		assign HOLD_N_SIO3 = 1;
endmodule

