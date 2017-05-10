`timescale 1ns / 1ps
module spi(
    input clk,
    input rst,
	 input [31:0] din, //mosi-n k�ldend� adat
	 input [1:0] freq, //sck frekvenci�j�t meghat�roz� �rt�k
	 input en, //kommunik�ci� enged�lyez� jele
    input miso,
	 output mosi,
    output [31:0] dout, //miso-n vett adat
	 output cs,
    output sck,
	 output transfer_succeded //sikeres transzfer v�g�t jelz� bit
    );

//az sck frekvenci�j�nak be�ll�t�sa
// kommunik�ci� alatt nem lehets�ges
reg frq;

always@(posedge clk)
	if (en==0)
		frq<=1'b1;
	else if (en==1)
		frq<=frq+1'b1;
	
assign #62.5 sck = frq;

reg [5:0] cntr = 0;
always@(posedge clk)
  if(rst || cs==1)
    cntr <=6'b0;
  else if (cs==0)
    cntr <= cntr+1'b1;

// SPI �rajel felfut� �l
wire sck_rise;
reg sck_reg;
always@(posedge clk)
	sck_reg<=sck;
	
assign sck_rise=(sck_reg==0 && sck==1);

reg [5:0] transfer_end;
always@(posedge clk)
	transfer_end = 6'd62;

// SPI CS kiv�laszt� jel
reg cs_reg;
always@(posedge clk)
	if (rst || en==0)
	cs_reg<=1;
  else if(cntr[5:0]==6'b0) 
    cs_reg<=0;
	//sck �rajel�t�l f�gg az akt�v kommunik�ci� id�tartama
  else if (cntr[5:0]==transfer_end) 
    cs_reg<=0;
assign cs = cs_reg;

// Adat shift regiszter miso
//Felfut� �lre t�rt�n� mintav�telez�s
reg [31:0] shr_miso;
always@(posedge clk)
  if(sck_rise)
    shr_miso<={shr_miso[30:0],miso};
	 
// Kimeneti regiszter, mindig �rv�nyes adatot tartalmaz	
assign dout = (cntr[5:0]==transfer_end && (~cs_reg)) ? shr_miso[31:0] : dout; 

// Adat shift regiszter miso
//Felfut� �lre t�rt�n� kishiftel�s	 
reg [31:0] shr_mosi;
always@(posedge clk)
	if (rst)
		shr_mosi<=0;
	else if(cntr[5:0]==6'b0) //bet�lt�s
		shr_mosi<=din;	
	else if(sck_rise && cs==0 && cntr >= 6'b0) begin
		shr_mosi<={shr_mosi[30:0],1'b0};	
		end

assign mosi = shr_mosi[31];

//reg [1:0] cs_reg2;
//always@(posedge clk)
//	cs_reg2<={cs_reg2[0],cs_reg};

// Ha a cs felfut �s a sz�ml�l� v�gig�rt a 32 biten-> sikeres �tvitel	
assign transfer_succeded = (cntr[5:0]==transfer_end) ? 1 : 0;
endmodule
