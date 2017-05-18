`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:35:18 05/15/2017 
// Design Name: 
// Module Name:    alles_test 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module alles_test(
	input rst,
	input clk,
	input enable,
	input [2:0] controll
    );

reg [31:0] address [0:3];
reg [31:0] data [0:31];

initial begin
address[0] = 32'h0000_0000;
address[1] = 32'h0000_0001;
address[2] = 32'h0000_0002;
address[3] = 32'h0000_0003;

data[0] = 32'h0000_0188;
data[1] = 32'h0000_0002;
data[2] = 32'h0000_0000;
data[3] = 32'h0000_0000;
data[4] = 32'h0000_0000;
data[5] = 32'h0000_0003;
data[6] = 32'h0000_0004;
data[7] = 32'h0000_0005;
data[8] = 32'h0000_0006;
data[9] = 32'h0000_0108;
data[10] = 32'h0000_0003;
data[11] = 32'h0000_0000;
data[12] = 32'h0000_0000;
data[13] = 32'h0000_0000;
data[14] = 32'h0000_0000;
data[15] = 32'h0000_0000;
data[16] = 32'h0000_0000;
data[17] = 32'h0000_0000;
data[18] = 32'h0000_0186;
data[19] = 32'h0000_0002;
data[20] = 32'h0000_0000;
data[21] = 32'h0000_0000;
data[22] = 32'h0000_0004;
data[23] = 32'h0000_0001;
data[24] = 32'h0000_0002;
data[25] = 32'h0000_0106;
data[26] = 32'h0000_0003;
data[27] = 32'h0000_0000;
data[28] = 32'h0000_0000;
data[29] = 32'h0000_0004;
data[30] = 32'h0000_0000;
data[31] = 32'h0000_0000;

end

`define IDLE 3'b000
`define WRITE_CMD 3'b001
`define RD_STATUS 3'b010
`define WR_DATA 3'b011
`define RD_DATA 3'b100


	wire miso;
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
		.pclk(clk), 
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


//////////////////////////AMBA regiszter vezérlõ

reg [4:0] cntr;

always@ ( * )
	case(controll)
		`IDLE :
		begin
			pwrite <= 0;
			paddr <= address[0];
			pwdata <= 32'h0000_0000;

		end
		`WRITE_CMD : 
		begin 
			pwrite <= 1;
			paddr <= address[0];
			pwdata <= 32'h0000_0000;
		end
		`RD_STATUS : 
		begin
			pwrite <= 0;
			paddr <= address[1];
			pwdata <= 32'b0000_0000;
		end
		`WR_DATA : 
		begin
			pwrite <= 1;
			paddr <= address[2];
			pwdata <= data[cntr];
		end
		`RD_DATA :
		begin
			pwrite <= 0;
			paddr <= address[3];
			pwdata <= 32'b0000_0000;
		end
	endcase


///////////////////////AMBA állapotgép
`define AMBAIDLE 2'b00
`define AMBASETUP 2'b01
`define AMBAACCESS 2'b10
/////////////////////AMBA állapotgép
reg [1:0] ambastate;

always@ ( * )
	case(ambastate)
	`AMBAIDLE : 
	begin 
		psel <= 0;
		pen <= 0;
	end
	`AMBASETUP : 
	begin
		psel <= 1;
		pen <= 0;
	end
	`AMBAACCESS : 
	begin
	psel <= 1;
	pen <= 1;
	end
	endcase
	
	
always@ (posedge clk)
	if(rst)
	begin
		ambastate <= `AMBAIDLE;
		cntr <= 0;
	end
	else
		begin
		if(enable)
			ambastate <= `AMBASETUP;
		if(ambastate == `AMBASETUP)
			ambastate <= `AMBAACCESS;
		if(ambastate == `AMBAACCESS)
		begin
			if(~pready)
				ambastate <= `AMBAACCESS;
			else if(pready & enable)
			begin
				ambastate <= `AMBASETUP;
				if(pwrite & controll == `WR_DATA)
					cntr <= cntr+1;
			end
			else if(pready & ~enable)
			begin
				ambastate <= `AMBAIDLE;
				if(pwrite & controll == `WR_DATA)
					cntr <= cntr+1;
			end
		end
	end
////////////////////////////////AMBA állapotgép vége

endmodule
