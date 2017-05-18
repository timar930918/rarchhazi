`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:02:34 05/17/2017
// Design Name:   spiv2
// Module Name:   C:/gitproject/rarchhazi/spi_rom_proba/spiv2_testbench.v
// Project Name:  spi_rom_proba
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: spiv2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module spiv2_testbench;

	// Inputs
	reg clk;
	reg rst;
	reg miso;
	reg [8:0] din;
	reg [1:0] freq;
	reg tx_fifo_empty;
	reg rx_fifo_full;

	// Outputs
	wire cs;
	wire sck;
	wire mosi;
	wire [7:0] dout;
	wire tx_fifo_rd;
	wire rx_fifo_wr;

	// Instantiate the Unit Under Test (UUT)
	spiv2 uut (
		.clk(clk), 
		.rst(rst), 
		.cs(cs), 
		.sck(sck), 
		.miso(miso), 
		.mosi(mosi), 
		.dout(dout), 
		.din(din), 
		.freq(freq), 
		.tx_fifo_empty(tx_fifo_empty), 
		.rx_fifo_full(rx_fifo_full), 
		.tx_fifo_rd(tx_fifo_rd), 
		.rx_fifo_wr(rx_fifo_wr)
	);

		initial begin
		tx_fifo_empty = 1;
		rx_fifo_full = 0;
		clk = 1;
		rst = 1;
		miso = 0;
		din = 9'b0;
		freq = 2'b00;

		// Wait 100 ns for global reset to finish
		#100;
      rst = 0;
		// Add stimulus here
		#30;
		miso = 1;
		#30;
		din = 9'b111111111;
		tx_fifo_empty = 0;
		#300;
		din = 9'b011101111;
		tx_fifo_empty = 1;

		#460;
		tx_fifo_empty = 0;
		din = 9'b100000001;
		#380;
		din = 9'b000000011;
		tx_fifo_empty = 0;
		#30;
		din = 9'b100000011;
		#60;
		din = 9'b000001010;



	end
      		always#5 clk <= ~clk;
endmodule

