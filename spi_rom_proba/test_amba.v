`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:50:33 05/14/2017
// Design Name:   amba
// Module Name:   C:/gitproject/rarchhazi/spi_rom_proba/test_amba.v
// Project Name:  spi_rom_proba
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: amba
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_amba;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] addr;
	reg pwrite;
	reg psel;
	reg pen;
	reg [31:0] pwdata;
	reg [7:0] ip2bus_data;
	reg ip2bus_rdack;
	reg ip2bus_wrack;

	// Outputs
	wire pready;
	wire bus2ip_clk;
	wire [1:0] bus2ip_addr;
	wire [8:0] bus2ip_data;
	wire [31:0] prdata;
	wire bus2ip_wr;
	wire bus2ip_rd;

	// Instantiate the Unit Under Test (UUT)
	amba uut (
		.clk(clk), 
		.rst(rst), 
		.addr(addr), 
		.pwrite(pwrite), 
		.psel(psel), 
		.pen(pen), 
		.pwdata(pwdata), 
		.prdata(prdata), 
		.pready(pready), 
		.bus2ip_clk(bus2ip_clk), 
		.bus2ip_addr(bus2ip_addr), 
		.bus2ip_data(bus2ip_data), 
		.bus2ip_wr(bus2ip_wr), 
		.bus2ip_rd(bus2ip_rd), 
		.ip2bus_data(ip2bus_data), 
		.ip2bus_rdack(ip2bus_rdack), 
		.ip2bus_wrack(ip2bus_wrack)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		addr = 0;
		pwrite = 0;
		psel = 0;
		pen = 0;
		pwdata = 0;
		ip2bus_data = 0;
		ip2bus_rdack = 0;
		ip2bus_wrack = 0;

		// Wait 100 ns for global reset to finish
		#100;
		#5;
		rst = 0;
		
		#10;
		addr = 32'h 0000_0000;
		pwrite = 1;
		psel = 1;
		pwdata = 32'h0000_1111;
		#10;
		pen = 1;
		ip2bus_wrack = 1;
		#10;
		psel = 0;
		pen = 0;
		ip2bus_wrack = 0;
		#10;
		
		#30;
		addr = 32'h 0000_0001;
		pwrite = 1;
		psel = 1;
		pwdata = 32'h0000_FFFF;
		#10;
		pen = 1;
		#20;
		ip2bus_wrack = 1;
		#10;
		psel = 0;
		pen = 0;
		ip2bus_wrack = 0;
		#10;
		
		#30;
		addr = 32'h 0000_0002;
		pwrite = 0;
		psel = 1;
		pwdata = 32'h0000_0000;
		#10;
		pen = 1;
		ip2bus_rdack = 1;
		ip2bus_data = 8'h0F;
		#10;
		psel = 0;
		pen = 0;
		ip2bus_rdack = 0;
		#10;
        

	end
	
	always #5 clk = ~clk;
	
      
endmodule

