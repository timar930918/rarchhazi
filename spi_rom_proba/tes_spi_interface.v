`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:25:05 05/11/2017
// Design Name:   spi_interface
// Module Name:   C:/gitproject/rarchhazi/spi_rom_proba/tes_spi_interface.v
// Project Name:  spi_rom_proba
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: spi_interface
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tes_spi_interface;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] amba_data_in;
	reg amba_comm_in;
	reg [1:0] amba_reg_select;
	reg mosi;

	// Outputs
	wire [31:0] amba_dout;
	wire HOLD_ENABLE;
	wire miso;
	wire sck;
	wire cs;

	// Instantiate the Unit Under Test (UUT)
	spi_interface uut (
		.clk(clk), 
		.rst(rst), 
		.amba_din(amba_data_in), 
		.amba_command(amba_comm_in), 
		.amba_reg_select(amba_reg_select), 
		.amba_dout(amba_dout), 
		.mosi(mosi), 
		.HOLD_ENABLE(HOLD_ENABLE), 
		.miso(miso), 
		.sck(sck), 
		.cs(cs)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		rst = 1;
		#100;
		rst = 0;
		amba_data_in = 0;
		amba_comm_in = 0;
		amba_reg_select = 0;
		mosi = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	#125;
	amba_reg_select <= 2'b01;
	amba_comm_in <= 1;
	amba_data_in <= 32'h00000001;
	//amba_data_in <= 32'b0;
	
	#3000;
	amba_reg_select <= 2'b10;
	amba_comm_in <= 1;
	amba_data_in <= 32'h0fffffff;
	
	#2400;
	amba_reg_select <= 2'b01;
	amba_comm_in <= 1;
	amba_data_in <= 32'h00000001;
	
	#2000;
	amba_reg_select <= 2'b11;
	amba_comm_in <= 0;
	//amba_data_in <= 32'h00000001;
	
end
	always #31.25 clk = ~clk;

      
endmodule

