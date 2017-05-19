`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:07:13 05/17/2017
// Design Name:   alles_test
// Module Name:   C:/gitproject/rarchhazi/spi_rom_proba/test_top_mmodule_alles.v
// Project Name:  spi_rom_proba
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alles_test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_top_mmodule_alles;

	// Inputs
	reg rst;
	reg clk;
	reg enable;
	reg [2:0] controll;

	// Instantiate the Unit Under Test (UUT)
	alles_test uut (
		.rst(rst), 
		.clk(clk), 
		.enable(enable), 
		.controll(controll)
	);
	
`define IDLE 3'b000
`define WRITE_CMD 3'b001
`define RD_STATUS 3'b010
`define WR_DATA 3'b011
`define RD_DATA 3'b100

	initial begin
		// Initialize Inputs
		rst = 1;
		clk = 1;
		enable = 0;
		controll = 0;

		// Wait 100 ns for global reset to finish
		#100;

        
		// Add stimulus here
		rst = 0;
		#100;
		
		controll = `WRITE_CMD;
		enable = 1;
		#80;
		enable = 0;
		#70;
		
		controll = `RD_STATUS;
		enable = 1;
		#80;
		enable = 0;
		#40;
		
		controll = `WR_DATA;
		enable = 1;
		#4420;
		enable = 0;
		
		controll = `RD_STATUS;
		enable = 1;
		#20;
		enable = 0;
		//#20;
		
		controll = `RD_DATA;
		enable = 1;
		#40;
		#800000;
		

	end
      
		always#5 clk <= ~clk;
endmodule

