`timescale 1ns / 1ps

module spi_topmodule(

	input rstn,
	input clk,
	
	//interface és busz közti kapcsolat
	input [31:0] control,	
	input [31:0] datain,//bus->interface
	output [31:0] dataout,//interface->bus
	output [31:0] status,

	
	//spi és a külvilág
	input miso,
	output mosi,
	output cs,
	output sck
	
    );
	 
wire rst;
assign rst = ~rstn;

//spi interface és az spi közti adatvonalak
wire enable;	//spi engedélyezõ jel, aktív kommunikáció is megszakítható vele
wire [31:0] d_received; //spi->interface
wire [31:0] d_send;//interface->spi
wire [1:0] spi_freq;//interface->spi
wire transfer_success;//spi->interface
wire chip_select;//spi->interface

assign cs=chip_select;

	 spi spi_i(
    .clk(clk),//->spi
    .rst(rst),//->spi
    .cs(chip_select),//spi->
    .sck(sck),//spi->
    .miso(miso),//->spi
	 .mosi(mosi),//spi->
    .dout(d_received),	//spi->interface				
	 .din(d_send),//interface->spi
	 .freq(spi_freq),//interface->spi
	 .en(enable),//interface->spi
	 .transfer_succeded(transfer_success)//spi->interface
    );
	 
//****************************************************

 
	 spi_interface spi_int(
	 .clk(clk),
    .rst(rst),

	 //interface és spi modul közti kapcsolat
	.en(enable),		//interface->spi
	.drec(d_received),	//spi->interface
	.dsend(d_send),	//interface->spi 
	.freq(spi_freq),	//interface->spi
	.tr_success(transfer_success),	//spi->interface	
	.cs(chip_select),
	 
	 .status(status),
	 .control(control),
	 .tx(datain), //bus->interface->spi->mosi
	 .rx(dataout)	//miso->spi->interface->bus
	 );

endmodule
