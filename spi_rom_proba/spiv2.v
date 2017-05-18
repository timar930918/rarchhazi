`timescale 1ns / 1ps

module spiv2(
    input clk,
    input rst,
	 
    output cs,
    output sck,
    input miso,
	 output mosi,
	 
	 
    output [7:0] dout, //miso-n vett adat
	 input [8:0] din, //mosi-n küldendõ adat
	 input [1:0] freq, //sck frekvenciáját meghatározó érték
	 input tx_fifo_empty,
	 input rx_fifo_full,
	 output tx_fifo_rd,
	 output rx_fifo_wr
	 
    );


//az sck frekvenciájának beállítása
// kommunikáció alatt nem lehetséges
reg [1:0] frq;
always@(posedge clk)
	if (cs_delayed)
		frq<=freq;

reg [4:0] cntr;

always@ (posedge clk)
if(rst)
	cntr <= 0;
else
	cntr <= cntr+1'b1;


////////
/*
frq = 00 -> /2 órajel osztás
frg = 01 -> /4 órajel osztás
frg = 10 -> /8 órajel osztás
frg = 11 -> /16 órajel osztás
*/

// SPI órajel
wire sck_temp;
assign sck_temp = (frq[1]) ? (frq[0] ? cntr[4] : cntr[3]) : (frq[0] ? cntr[2] : cntr[1]);

// SPI órajel felfutó él lefutó él



reg sck_reg;
always@(posedge clk)
if(rst)
	sck_reg <= 0;
else
	sck_reg <= sck_temp;


wire sck_rise;
wire sck_fall;
assign sck_fall = ((sck_reg == 1 && sck_temp == 0) & ~cs_delayed[7]);
assign sck_rise = ((sck_reg == 0 && sck_temp == 1) & ~cs_delayed[7]);

reg delaysck;
always@(posedge clk)
	delaysck <= sck_temp;


`define IDLE		2'b00
`define COMMAND	2'b01
`define DATA		2'b10
`define READY		2'b11

assign mosi = (`DATA == status)? temp_mosi[8] : 1'b1;
assign sck = ((`DATA == status)? delaysck : 1'b0) & ~cs_delayed[8];

reg [8:0] cs_delayed;
always@ (posedge clk)
	cs_delayed <= { cs_delayed[7:0] ,(`DATA == status)? 1'b0 : 1'b1};
	
assign cs = (`DATA == status)? 1'b0 : 1'b1;


reg [3:0] status;
reg [7:0] datacntr;
reg [7:0] mosiout;
reg [3:0] datapos;

always@ (posedge clk)
if(rst)
	datacntr <= 0;
else
	if(status == `COMMAND & din[8] == 1'b1)
		datacntr <= din[7:0];
	else
		if(status == `DATA)
			if(datapos == 4'b1000 & sck_rise)
				datacntr <= datacntr - 1'b1;


always@ (posedge clk)
if(rst)
	datapos <= 0;
else
begin
	if(sck_rise)
		begin datapos <= datapos + 1'b1; end
	if((datapos == 4'b1000) & sck_rise)
		datapos <= 4'b0;
end

always@ (posedge clk)
if (rst)
begin
	status <= `IDLE;
end
else
	case(status)
		`IDLE		: if(~tx_fifo_empty)
						status <= `READY;
		`READY	: if(din[8] == 1)
						status <= `COMMAND;
					  else
						status <= `DATA;
		`COMMAND : if(din[8] == 1)
						status <= `COMMAND;
					  else
						status <= `DATA;
		`DATA		: 	if(datapos == 3'b0)
							if(datacntr == 8'b0)
								status <= `IDLE;
	endcase

/*
 if(~tx_fifo_empty)
						if(tx_fifo_rd == 0)
							begin
							tx_fifo_rd <= 1;
							end
						else if(tx_fifo_rd == 1)
							begin
							tx_fifo <=0;
							end
*/

reg [8:0] temp_mosi;
reg [8:0] temp_miso;


always@ (posedge clk)
if(rst)
begin
	temp_mosi <= 0;
	temp_miso <= 0;
end
else
begin
	if(datapos == 4'b0)
		temp_mosi <= {1'b0, din[7:0]};
	if(sck_reg == 0 & sck_temp == 1)
		temp_mosi <= {temp_mosi[7:0] , 1'b0};
	if(sck_reg == 1 & sck_temp == 0)
		temp_miso <= {temp_miso[7:0] , miso};
end

endmodule
