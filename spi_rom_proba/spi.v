`timescale 1ns / 1ps
module spi(
    input clk,
    input rst,
    output cs,
    output sck,
    input miso,
	 output mosi,
	 
	 
    output [31:0] dout, //miso-n vett adat
	 input [31:0] din, //mosi-n küldendõ adat
	 input [1:0] freq, //sck frekvenciáját meghatározó érték
	 input en, //kommunikáció engedélyezõ jele
	 output transfer_succeded //sikeres transzfer végét jelzõ bit
    );

//az sck frekvenciájának beállítása
// kommunikáció alatt nem lehetséges
reg [1:0] frq;
always@(posedge clk)
	if (cs)
		frq<=freq;

//50 MHz rendszerórajel
// Ciklus idõzítõ számláló, 
//32 us üzenet + 8 us várakozás 1MHz-en
//40 us-onként történik kommunikáció
//40 us* 50 Mhz=2000->11 bit
reg [10:0] cntr = 0;
always@(posedge clk)
  if(rst || en==0)
    cntr <=11'b11111111111;
  else if (en)
    cntr <= cntr+1'b1;


// SPI órajel
assign sck = (frq[1]) ? (frq[0] ? cntr[1] : cntr[2]) : (frq[0] ? cntr[3] : cntr[4]) ;

// SPI órajel felfutó él
wire sck_rise;
reg sck_reg;
always@(posedge clk)
	sck_reg<=sck;
	
assign sck_rise=(sck_reg==0 && sck==1);

//40 us-on belül, hogy mikor ér véget az adatküldés
// az sck frekvenciája határozza meg
reg [10:0] transfer_end;
always@(posedge clk)
		case (frq)
       2'b00 : transfer_end = 11'd1024;   //1.5625 MHz
		 2'b01 : transfer_end = 11'd512;   //3.125 MHz
		 2'b10 : transfer_end = 11'd256;   //6.25 MHz
		 2'b11 : transfer_end = 11'd128;   //12.5 MHz
       default : transfer_end = 11'd1024;   //1.5625 MHz
   endcase


// SPI CS kiválasztó jel
reg cs_reg;
always@(posedge clk)
	if (rst || en==0)
	cs_reg<=1;
  else if(cntr[10:0]==11'b11111111111) 
    cs_reg<=0;
	//sck órajelétõl függ az aktív kommunikáció idõtartama
  else if (cntr[10:0]==transfer_end) 
    cs_reg<=1;
assign cs = cs_reg;

// Adat shift regiszter miso
//Felfutó élre történõ mintavételezés
reg [31:0] shr_miso;
always@(posedge clk)
  if(sck_rise)
    shr_miso<={shr_miso[30:0],miso};
	 
// Kimeneti regiszter, mindig érvényes adatot tartalmaz	
assign dout = (cntr[10:0]==transfer_end && (~cs_reg)) ? shr_miso[31:0] : dout; 

// Adat shift regiszter miso
//Felfutó élre történõ kishiftelés	 
reg [32:0] shr_mosi;

always@(posedge clk)
	if (rst)
		shr_mosi<=0;
	else if(cntr[10:0]==11'b11111111111) //betöltés
		shr_mosi<={1'b0,din};
	else if(sck_rise && cs==0)
		shr_mosi <= {shr_mosi[31:0] , 1'b0};
		
assign mosi = shr_mosi[32];

reg [1:0] cs_reg2;
always@(posedge clk)
	cs_reg2<={cs_reg2[0],cs_reg};

// Ha a cs felfut és a számláló végigért a 32 biten-> sikeres átvitel	
//transfer_end+2 a cs_reg2-ben lévõ 2 órajelnyi késleltetés miatt
assign transfer_succeded = (cs_reg2==2'b01 && cntr[10:0]==transfer_end+2);
endmodule
