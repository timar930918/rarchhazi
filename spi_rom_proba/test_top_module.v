`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:56:34 05/15/2017
// Design Name:   top_module
// Module Name:   C:/gitproject/rarchhazi/spi_rom_proba/test_top_module.v
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

module test_top_module;

	// Inputs
	reg rst;
	reg clk;
	reg miso;
	reg pclk;
	reg [31:0] paddr;
	reg pwrite;
	reg psel;
	reg pen;
	reg [31:0] pwdata;
	wire [31:0] prdata;

	// Outputs
	wire mosi;
	wire sck;
	wire cs;
	wire HOLD_ENABLE;
	wire pready;

	// Instantiate the Unit Under Test (UUT)
	top_module uut (
		.rst(rst), 
		.clk(clk), 
		.miso(miso), 
		.mosi(mosi), 
		.sck(sck), 
		.cs(cs), 
		.HOLD_ENABLE(HOLD_ENABLE), 
		.pclk(pclk), 
		.paddr(paddr), 
		.pwrite(pwrite), 
		.psel(psel), 
		.pen(pen), 
		.pwdata(pwdata), 
		.prdata(prdata), 
		.pready(pready)
	);
	
	M23A1024 memoria(
	.SI_SIO0(mosi),
	.SO_SIO1(miso),
	.SCK(sck),
	.CS_N(cs),
	.SIO2(),
	.HOLD_N_SIO3(HOLD_ENABLE),
	.RESET()
	);

	initial begin
		// Initialize Inputs
		rst = 1;
		clk = 0;
		miso = 0;
		pclk = 0;
		paddr = 0;
		pwrite = 0;
		psel = 0;
		pen = 0;
		pwdata = 0;

		// Wait 100 ns for global reset to finish
		#100;
		#100;
		#5;
		
		rst = 0;
		#100;

		
		#10;
		paddr = 32'h 0000_0000;
		pwrite = 1;
		psel = 1;
		pwdata = 32'h0000_00af;
		#10;
		pen = 1;
		#10;
		psel = 0;
		pen = 0;
		#10;
		
		#30;
		paddr = 32'h 0000_0001;
		pwrite = 0;
		psel = 1;
		pwdata = 32'h0000_00bf;
		#10;
		pen = 1;
		#20;
		#10;
		psel = 0;
		pen = 0;
		#10;
		//Tx fifo írás
		#30;
		paddr = 32'h 0000_0002;
		pwrite = 1;
		psel = 1;
		pwdata = 32'h0000_0101;
		#10;
		pen = 1;
		#10;
		psel = 0;
		pen = 0;
		#10;
        

		
		#30;
		paddr = 32'h 0000_0002;
		pwrite = 1;
		psel = 1;
		pwdata = 32'h0000_010f;
		#10;
		pen = 1;
		#10;
		psel = 0;
		pen = 0;
		#10;
        

		
		#30;
		paddr = 32'h 0000_0002;
		pwrite = 1;
		psel = 1;
		pwdata = 32'h0000_0003;
		#10;
		pen = 1;
		#10;
		psel = 0;
		pen = 0;
		#10;
        
      //Tx fifo olvasás
				
		#30;
		paddr = 32'h 0000_0002;
		pwrite = 0;
		psel = 1;
		pwdata = 32'h0000_0000;
		#10;
		pen = 1;
		#10;
		psel = 0;
		pen = 0;
		#10;
        

		
		#30;
		paddr = 32'h 0000_0002;
		pwrite = 0;
		psel = 1;
		pwdata = 32'h0000_0000;
		#10;
		pen = 1;
		#10;
		psel = 0;
		pen = 0;
		#10;
        

		
		#30;
		paddr = 32'h 0000_0002;
		pwrite = 0;
		psel = 1;
		pwdata = 32'h0000_0000;
		#10;
		pen = 1;
		#10;
		psel = 0;
		pen = 0;
		#10;
        

	end
	
	always #5 clk = ~clk;
	
            
endmodule

