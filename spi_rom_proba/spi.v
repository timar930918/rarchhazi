`timescale 1ns / 1ps
module spi(
    input clk,
    input rst,
    output cs,
    output sck,
    input miso,
	 output mosi,
	 
	 
    output [31:0] dout, //miso-n vett adat
	 input [31:0] din, //mosi-n k�ldend� adat
	 input [1:0] freq, //sck frekvenci�j�t meghat�roz� �rt�k
	 input en, //kommunik�ci� enged�lyez� jele
	 output transfer_succeded //sikeres transzfer v�g�t jelz� bit
    );

//az sck frekvenci�j�nak be�ll�t�sa
// kommunik�ci� alatt nem lehets�ges
reg [1:0] frq;
always@(posedge clk)
	if (cs)
		frq<=freq;

//50 MHz rendszer�rajel
// Ciklus id�z�t� sz�ml�l�, 
//32 us �zenet + 8 us v�rakoz�s 1MHz-en
//40 us-onk�nt t�rt�nik kommunik�ci�
//40 us* 50 Mhz=2000->11 bit
reg [10:0] cntr = 0;
always@(posedge clk)
  if(rst || en==0)
    cntr <=11'b11111111111;
  else if (en)
    cntr <= cntr+1'b1;


// SPI �rajel
assign sck = (frq[1]) ? (frq[0] ? cntr[1] : cntr[2]) : (frq[0] ? cntr[3] : cntr[4]) ;

// SPI �rajel felfut� �l
wire sck_rise;
reg sck_reg;
always@(posedge clk)
	sck_reg<=sck;
	
assign sck_rise=(sck_reg==0 && sck==1);

//40 us-on bel�l, hogy mikor �r v�get az adatk�ld�s
// az sck frekvenci�ja hat�rozza meg
reg [10:0] transfer_end;
always@(posedge clk)
		case (frq)
       2'b00 : transfer_end = 11'd1024;   //1.5625 MHz
		 2'b01 : transfer_end = 11'd512;   //3.125 MHz
		 2'b10 : transfer_end = 11'd256;   //6.25 MHz
		 2'b11 : transfer_end = 11'd128;   //12.5 MHz
       default : transfer_end = 11'd1024;   //1.5625 MHz
   endcase


// SPI CS kiv�laszt� jel
reg cs_reg;
always@(posedge clk)
	if (rst || en==0)
	cs_reg<=1;
  else if(cntr[10:0]==11'b11111111111) 
    cs_reg<=0;
	//sck �rajel�t�l f�gg az akt�v kommunik�ci� id�tartama
  else if (cntr[10:0]==transfer_end) 
    cs_reg<=1;
assign cs = cs_reg;

// Adat shift regiszter miso
//Felfut� �lre t�rt�n� mintav�telez�s
reg [31:0] shr_miso;
always@(posedge clk)
  if(sck_rise)
    shr_miso<={shr_miso[30:0],miso};
	 
// Kimeneti regiszter, mindig �rv�nyes adatot tartalmaz	
assign dout = (cntr[10:0]==transfer_end && (~cs_reg)) ? shr_miso[31:0] : dout; 

// Adat shift regiszter miso
//Felfut� �lre t�rt�n� kishiftel�s	 
reg [32:0] shr_mosi;

always@(posedge clk)
	if (rst)
		shr_mosi<=0;
	else if(cntr[10:0]==11'b11111111111) //bet�lt�s
		shr_mosi<={1'b0,din};
	else if(sck_rise && cs==0)
		shr_mosi <= {shr_mosi[31:0] , 1'b0};
		
assign mosi = shr_mosi[32];

reg [1:0] cs_reg2;
always@(posedge clk)
	cs_reg2<={cs_reg2[0],cs_reg};

// Ha a cs felfut �s a sz�ml�l� v�gig�rt a 32 biten-> sikeres �tvitel	
//transfer_end+2 a cs_reg2-ben l�v� 2 �rajelnyi k�sleltet�s miatt
assign transfer_succeded = (cs_reg2==2'b01 && cntr[10:0]==transfer_end+2);
endmodule
