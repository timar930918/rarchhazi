`timescale 1ns / 1ps

module spi_top_tb;

	// Inputs
	reg rstn;
	reg clk;
	reg [31:0] control;
	reg [31:0] spi_data_mosi;
	wire miso;

	// Outputs
	wire [31:0] dataout;
	wire [31:0] status;
	wire mosi;
	wire cs;
	wire sck;
	reg [31:0] spi_data_miso;	

	// Instantiate the Unit Under Test (UUT)
	spi_topmodule uut (
		.rstn(rstn), 
		.clk(clk), 
		.control(control), 
		.datain(spi_data_mosi), 
		.dataout(dataout), 
		.status(status), 
		.miso(miso), 
		.mosi(mosi), 
		.cs(cs), 
		.sck(sck)
	);

	initial begin
		// Initialize Inputs
		rstn = 0;
		clk = 0;
		control = 0;
		spi_data_mosi = 0;

		// Wait 100 ns for global reset to finish
		#100;
		control[0] = 1;
		control[2:1]=2'b00;
		spi_data_miso = 32'h88885678;
		spi_data_mosi=32'h87654321;
		#70000
				  
				  
		spi_data_miso = 32'h12345678;
		spi_data_mosi=32'h80000001;
		#80000
			  
		control[0] = 0;
		#10000
		control[2:1]=2'b01;
		#800
		control[0] = 1;
					
		#20		  
		spi_data_miso = 32'h56781234;
		spi_data_mosi=32'hfedcba98;
		#50000
					
		control[2:1]=2'b10;		
		spi_data_mosi=32'hba984321;
		#5000
		spi_data_miso = 32'h abcdefef;
		#80000
		control[2:1]=2'b11;
		spi_data_miso = 32'h efefabcd; 
		spi_data_mosi=32'h8765fedc;		  
		// Add stimulus here

	end
initial #102 rstn = 1;
always #10 clk = ~clk;

reg [ 4:0] bit_cntr =31;
wire cs_dl;

assign #2 cs_dl = cs;
  
always @ (negedge sck)
if (~cs_dl)
   bit_cntr <= bit_cntr - 1;

reg [31:0] slave_shr;	
always @ (negedge sck)
if (~cs_dl)
   slave_shr<={slave_shr[30:0],mosi};
	
wire [31:0] slave_reg;
assign slave_reg= (bit_cntr==31) ? slave_shr:slave_reg;

always @ (negedge cs)
   bit_cntr <= 31;

assign miso = spi_data_miso[bit_cntr];     
endmodule

