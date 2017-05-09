`timescale 1ns / 1ps

module spi_interface(	
    input clk,
    input rst,
	 
	 //interface és spi modul közti kapcsolat
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

//status [0] adatátvitel 
//status [2:1] frekvencia

always @(posedge clk)
	if(rst)
	status<=0;
	else if (cs==1)
		begin		
			//Frekvencia váltás csak kommunikációt követõen történik meg
			status[2:1]<=control[2:1]; 
			status[0]<=0;			
		end	
	else
		begin
			status[0]<=1;	
		end

//Engedélyezõ jel
//aktív kommunikáció is megszakítható vele		
assign en=control[0];

//Csak inaktív kommunikáció alatt jut érvényre
//a következõ transzfer már ezzel a frekvenciával hajtódik végre
assign freq=control [2:1];

//Sikeres adatátvitelt követõen frissül a miso-n vett adat értéke az
//spi interface regiszterében
always @(posedge clk)
	if(tr_success==1)
		rx<=drec;

//A mosi-n küldendõ adat értéke csak inaktív kommunikáció
//esetén kerül figyelembevételre
always @(posedge clk)
	if(cs==1)
		dsend<=tx;

endmodule
