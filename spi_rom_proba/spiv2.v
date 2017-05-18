`timescale 1ns / 1ps

module spiv2(
    input clk,
    input rst,
	 
    output cs,
    output sck,
    input miso,
	 output mosi,
	 
	 input rd_wr_in,
	 
    output [7:0] dout, //miso-n vett adat
	 input [8:0] din, //mosi-n küldendõ adat
	 input [1:0] freq, //sck frekvenciáját meghatározó érték
	 input tx_fifo_empty,
	 input rx_fifo_full,
	 output tx_fifo_rd,
	 output rx_fifo_wr
	 
    );

reg rd_wr;
always@ ( * )
rd_wr <= rd_wr_in;
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
assign sck_fall = ((sck_reg == 1 && sck_temp == 0) & ~cs_delayed[2] & (datapos != 4'b0000));
assign sck_rise = ((sck_reg == 0 && sck_temp == 1) & ~cs_delayed[2] );

reg delaysck;
always@(posedge clk)
	delaysck <= sck_temp;


`define IDLE		4'b0000
`define COMMAND	4'b0001
`define DATA		4'b0010
`define READY		4'b0011
`define WAIT		4'b0100


reg [1:0]delayed_mosi;
always@ (posedge clk)
	delayed_mosi <= { delayed_mosi[0] , (`DATA == status | `WAIT == status)? temp_mosi[7] : 1'b1};

assign mosi = (datapos != 4'b0)? delayed_mosi[1] : 1'b0;
assign sck = ((`DATA == status)? delaysck : 1'b0) & ~cs_delayed[2] & ~( datapos[3:0] == 4'b0000  ) & (datacntr != 8'b0);

reg [8:0] cs_delayed;
always@ (posedge clk)
	cs_delayed <= { cs_delayed[7:0] ,(`DATA == status)? 1'b0 : 1'b1};

assign cs = (`DATA == status | `WAIT == status) ? ((datacntr != 8'b0)? 1'b0 : 1'b1 ) : 1'b1;


reg [3:0] status;
reg [7:0] datacntr;
reg [7:0] mosiout;
reg [3:0] datapos;

always@ (posedge clk)
if(rst)
	datacntr <= 0;
else
	if(status == `COMMAND & din[8] == 1'b1)
		datacntr <= din[6:0];
	else
		if(status == `DATA)
			if(datapos == 4'b1000 & sck_rise)
				datacntr <= datacntr - 1'b1;

always@ (posedge clk)
if (rst)
	rd_wr <= 0;
else if(status == `COMMAND & din[8] == 1'b1)
		rd_wr <= din[7];


reg tx_fifo_rd_reg;
always @ (posedge clk)
if (rst)
	tx_fifo_rd_reg <= 0;
else
begin
	if(tx_fifo_rd_reg == 1'b1 & tx_fifo_empty)
		tx_fifo_rd_reg <= 1;
	else 	if(tx_fifo_rd_reg == 1'b1 & ~tx_fifo_empty)
		tx_fifo_rd_reg <= 0;
	else if(tx_fifo_empty & status == `DATA & datapos == 4'b1000 & sck_fall & datacntr != 8'h01)
		tx_fifo_rd_reg <= 1;
	else
	begin
		if(~tx_fifo_empty)
			if(status == `COMMAND)
				tx_fifo_rd_reg <= 1'b1;
			else if(datapos == 4'b1000 & sck_fall & datacntr != 8'h01)
				tx_fifo_rd_reg <= 1'b1;
			else if(datapos == 4'b0 & status == `WAIT)
				tx_fifo_rd_reg <= 1'b1;
	end
end

assign tx_fifo_rd = tx_fifo_rd_reg;
		
reg delayed_dout;
always@ (posedge clk)
 delayed_dout <= (datapos == 4'b1000 & sck_rise) ? 1'b1 : 1'b0;

reg rx_fifo_wr_reg;
always@ (posedge clk)
if(rst)
	rx_fifo_wr_reg <= 0;
else if(rx_fifo_wr_reg)
	rx_fifo_wr_reg <= 0;
else
	if(~rd_wr)
	begin
		if(delayed_dout)
			rx_fifo_wr_reg <= 1;
	end

assign rx_fifo_wr = rx_fifo_wr_reg & rd_wr;


reg [7:0] tx_fifo_rd_delay;
always@ (posedge clk)
	tx_fifo_rd_delay <= { tx_fifo_rd_delay[6:0] , tx_fifo_rd };

wire test;
assign test = ~(|tx_fifo_rd_delay);

always@ (posedge clk)
if(rst)
	datapos <= 0;
else
if(cs)
	datapos <= 0;
else
begin
	if(sck_rise)
		if(datapos == 4'b1000 & ~tx_fifo_empty)
			datapos <= 4'b0001;
		else if(datapos == 4'b1000 & tx_fifo_empty)
			datapos <= 4'b0;
		else if(datapos == 4'b0 & tx_fifo_empty & (|tx_fifo_rd_delay) & tx_fifo_rd)
				datapos <= 4'b1001;
		else
			datapos <= datapos + 1'b1;
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
		`READY	: if(din[8] == 1 | datacntr == 8'b0)
						status <= `COMMAND;
					  else
						status <= `DATA;
		`COMMAND : if(din[8] == 1)
						status <= `DATA;
					  else
						status <= `DATA;
		`DATA		: begin 
							if(datacntr == 8'b0)
								status <= `IDLE;
							else if(datapos == 4'b1000 & datacntr != 8'b0 & tx_fifo_empty & sck_rise)
								status <= `WAIT;
							else status <= `DATA;
					  end
		`WAIT		: if(~tx_fifo_empty) status <= `DATA;
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
	if(datapos == 4'b1000 & ~tx_fifo_empty & sck_rise)
		temp_mosi <= {din[7:0], 1'b0};
		else
		begin
			if(sck_reg == 0 & sck_temp == 1)
				temp_mosi <= {temp_mosi[7:0] , 1'b0};
		end
	if(sck_fall)
		temp_miso <= {temp_miso[7:0] , miso};
end

assign dout = (rst)? (8'b0) : (datapos == 4'b1000 & sck_rise)? temp_miso[7:0] : dout;

endmodule
