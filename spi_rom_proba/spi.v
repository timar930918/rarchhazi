`timescale 1ns / 1ps
module spi(
    input clk,
    input rst,
	 input [31:0] din, //mosi-n küldendõ adat
	 input [1:0] freq, //sck frekvenciáját meghatározó érték
	 input en, //kommunikáció engedélyezõ jele
    input miso,
	 output mosi,
    output [31:0] dout, //miso-n vett adat
	 output cs,
    output sck,
	 output transfer_succeded //sikeres transzfer végét jelzõ bit
    );

//az sck frekvenciájának beállítása
// kommunikáció alatt nem lehetséges
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

// SPI órajel felfutó él
wire sck_rise;
reg sck_reg;
always@(posedge clk)
	sck_reg<=sck;
	
assign sck_rise=(sck_reg==0 && sck==1);

reg [5:0] transfer_end;
always@(posedge clk)
	transfer_end = 6'd62;

// SPI CS kiválasztó jel
reg cs_reg;
always@(posedge clk)
	if (rst || en==0)
	cs_reg<=1;
  else if(cntr[5:0]==6'b0) 
    cs_reg<=0;
	//sck órajelétõl függ az aktív kommunikáció idõtartama
  else if (cntr[5:0]==transfer_end) 
    cs_reg<=0;
assign cs = cs_reg;

// Adat shift regiszter miso
//Felfutó élre történõ mintavételezés
reg [31:0] shr_miso;
always@(posedge clk)
  if(sck_rise)
    shr_miso<={shr_miso[30:0],miso};
	 
// Kimeneti regiszter, mindig érvényes adatot tartalmaz	
assign dout = (cntr[5:0]==transfer_end && (~cs_reg)) ? shr_miso[31:0] : dout; 

// Adat shift regiszter miso
//Felfutó élre történõ kishiftelés	 
reg [31:0] shr_mosi;
always@(posedge clk)
	if (rst)
		shr_mosi<=0;
	else if(cntr[5:0]==6'b0) //betöltés
		shr_mosi<=din;	
	else if(sck_rise && cs==0 && cntr >= 6'b0) begin
		shr_mosi<={shr_mosi[30:0],1'b0};	
		end

assign mosi = shr_mosi[31];

//reg [1:0] cs_reg2;
//always@(posedge clk)
//	cs_reg2<={cs_reg2[0],cs_reg};

// Ha a cs felfut és a számláló végigért a 32 biten-> sikeres átvitel	
assign transfer_succeded = (cntr[5:0]==transfer_end) ? 1 : 0;
endmodule
