`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:21:18 05/09/2017 
// Design Name: 
// Module Name:    spi_interface 
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
module spi_interface(
		//amba felol
		input bus2ip_clk,
		input rst,
		input [8:0] bus2ip_data,
		input [1:0] bus2ip_addr,
		input bus2ip_wr,
		input bus2ip_rd,
		
		output [7:0] ip2bus_data,
		output ip2bus_rdack,
		output ip2bus_wrack,
		
		//memory fele
		input mosi,
		output HOLD_ENABLE,
		output miso,
		output sck,
		output cs
		
    );
	 
	 
assign HOLD_ENABLE = 1'b1;

wire clk;
assign clk = bus2ip_clk;


reg [8:0] cmd_reg;
wire [7:0] status_reg;
reg [1:0] state;

reg [7:0] tempip2bus_data;
reg t_ip2bus_wrack;
reg t_ip2bus_rdack;

assign status_reg = {4'b0,tx_fifo_full,tx_fifo_empty,rx_fifo_full,rx_fifo_empty};


reg [1:0]rdack_help;

always@ (posedge clk)
	if (rst)
	begin
		cmd_reg <= 0;
		state <= 0;
		t_ip2bus_wrack <= 0;
		t_ip2bus_rdack <= 0;
		tx_fifo_datain <= 0;
		tx_fifo_wr <= 0;
		rx_fifo_rd <= 0;
	end
	else if (state == 2'b00)
	begin
		if(bus2ip_wr)
				begin
					if(bus2ip_addr == 2'b00)
						begin
							cmd_reg <= bus2ip_data;
							t_ip2bus_wrack <= 1;
							state <= 2'b01;
						end
					else if(bus2ip_addr == 2'b10)
					begin
						if(tx_fifo_full)
							begin
							t_ip2bus_wrack <= 0;
							end
						else
							begin
							state <= 2'b01;
							tx_fifo_datain <= bus2ip_data;
							tx_fifo_wr <= 1;
							t_ip2bus_wrack <= 1;
							end
					end
					else if(bus2ip_addr == 2'b01)
					begin
						state <= 2'b01;
						t_ip2bus_wrack <= 1;
					end
					else if(bus2ip_addr == 2'b11)
					begin
						state <= 2'b01;
						t_ip2bus_wrack <= 1;
					end
				end
		else if(bus2ip_rd)
				begin
					if(bus2ip_addr == 2'b00)
						begin
						state <= 2'b11;
						t_ip2bus_rdack <= 1;
						end
					else if(bus2ip_addr == 2'b01)
						begin
						tempip2bus_data <= status_reg;
						state <= 2'b11;
						t_ip2bus_rdack <= 1;
						end
					else if(bus2ip_addr == 2'b10)
						begin
						state <= 2'b11;
						t_ip2bus_rdack <= 1;
						end
					else if(bus2ip_addr == 2'b11)
						begin
						if(~rx_fifo_empty)
							begin
							state <= 2'b11;
							t_ip2bus_rdack <= 1;
							rx_fifo_rd <= 1;
							tempip2bus_data <= rx_fifo_dataout;
							rdack_help <= {rdack_help[0], 1'b1};
							end
						else
							begin
							t_ip2bus_rdack <= 0;
							end
						end
				end
		end
	else 
		begin
			if(tx_fifo_wr) begin tx_fifo_wr <= 0; state <= 0; end
			if(rx_fifo_rd) begin rx_fifo_rd <= 0;end
			if(state == 2'b11)
			begin
				t_ip2bus_rdack <= 0;
				state <= 0;
			end
			if(~bus2ip_wr & state == 2'b01)
			begin
				t_ip2bus_wrack <= 0;
				state <= 0;
			end
		end


wire t_ip_rd_reg;
assign t_ip_rd_reg = (bus2ip_addr == 2'b11)? ((t_ip2bus_rdack)? 1'b1 : 1'b0) : (1'b0);

reg delay_rdack;

always@( * )
	delay_rdack <= t_ip_rd_reg;

reg delay_rdack2;
always@(posedge clk)
	delay_rdack2 <= delay_rdack;
	
reg delay_rdack3;
always@(posedge clk)
	delay_rdack3 <= delay_rdack2;	
	
reg delay_rdack4;
always@(posedge clk)
	delay_rdack4 <= delay_rdack3;
	

assign ip2bus_data = (bus2ip_addr == 2'b11)? rx_fifo_dataout[7:0] : status_reg[7:0];
assign ip2bus_wrack = t_ip2bus_wrack;
assign ip2bus_rdack = (bus2ip_addr == 2'b11)? delay_rdack3 : t_ip2bus_rdack;


wire tx_fifo_full;
reg [8:0] tx_fifo_datain;
wire [8:0] tx_fifo_dataout;
reg tx_fifo_wr;
wire tx_fifo_rd;
wire tx_fifo_empty;

wire rx_fifo_full;
wire [7:0] rx_fifo_datain;
wire [7:0] rx_fifo_dataout;
wire rx_fifo_wr;
reg rx_fifo_rd;
wire rx_fifo_empty;
wire sck;

tx_fifo tx_fifo (
	.rst(rst),
	.clk(clk),
	.din(tx_fifo_datain),
	.dout(tx_fifo_dataout),
	.wr_en(tx_fifo_wr),
	.full(tx_fifo_full),
	.rd_en(tx_fifo_rd),
	.empty(tx_fifo_empty)
);
rx_fifo rx_fifo (
	.rst(rst),
	.clk(clk),
	.din(rx_fifo_datain),
	.dout(rx_fifo_dataout),
	.wr_en(rx_fifo_wr),
	.full(rx_fifo_full),
	.rd_en(rx_fifo_rd),
	.empty(rx_fifo_empty)
	);
spiv2 spi(
	 .clk(clk),
    .rst(rst), 
    .cs(cs),
    .sck(sck),
    .miso(miso),
	 .mosi(mosi),
    .dout(rx_fifo_datain), //miso-n vett adat
	 .din(tx_fifo_dataout), //mosi-n küldendõ adat
	 .freq(cmd_reg [1:0] ), //sck frekvenciáját meghatározó érték
	 .tx_fifo_empty(tx_fifo_empty),
	 .rx_fifo_full(rx_fifo_full),
	 .tx_fifo_rd(tx_fifo_rd),
	 .rx_fifo_wr(rx_fifo_wr)
    );

endmodule
