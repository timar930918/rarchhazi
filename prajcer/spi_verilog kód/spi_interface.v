`timescale 1ns / 1ps

module spi_interface(	
    input clk,
    input rst,
	 
	 //interface �s spi modul k�zti kapcsolat
	output en,				//bus->interface->spi
	input [31:0] drec,	//miso->spi->interface->bus
	output reg [31:0] dsend,	//bus->interface->spi->mosi 
	output [1:0] freq,	//bus->interface->spi
	input tr_success,	//spi->interface	
	input cs,
	
	 output reg [31:0] status,
	 input [31:0] control,
	 input [31:0] tx, //bus->interface->spi->mosi
	 output reg [31:0] rx	//miso->spi->interface->bus
    );

//control [0] send
//control [2:1] sck frekvencia 

//status [0] adat�tvitel 
//status [2:1] frekvencia

always @(posedge clk)
	if(rst)
	status<=0;
	else if (cs==1)
		begin		
			//Frekvencia v�lt�s csak kommunik�ci�t k�vet�en t�rt�nik meg
			status[2:1]<=control[2:1]; 
			status[0]<=0;			
		end	
	else
		begin
			status[0]<=1;	
		end

//Enged�lyez� jel
//akt�v kommunik�ci� is megszak�that� vele		
assign en=control[0];

//Csak inakt�v kommunik�ci� alatt jut �rv�nyre
//a k�vetkez� transzfer m�r ezzel a frekvenci�val hajt�dik v�gre
assign freq=control [2:1];

//Sikeres adat�tvitelt k�vet�en friss�l a miso-n vett adat �rt�ke az
//spi interface regiszter�ben
always @(posedge clk)
	if(tr_success==1)
		rx<=drec;

//A mosi-n k�ldend� adat �rt�ke csak inakt�v kommunik�ci�
//eset�n ker�l figyelembev�telre
always @(posedge clk)
	if(cs==1)
		dsend<=tx;

endmodule
