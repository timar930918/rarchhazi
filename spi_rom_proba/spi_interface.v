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
		input clk,
		input rst,
		input [31:0] amba_din,
		input amba_command, //read-write select
		input [1:0] amba_reg_select,	//interface register select
		output [31:0] amba_dout,		
		//memory fele
		input mosi,
		output HOLD_ENABLE,
		output miso,
		output sck,
		output cs
    );

wire [31:0] spi_data_in;
wire [31:0] spi_data_out;
wire spi_enable;

spi spi(
    .clk(clk), 				//input
    .rst(rst), 				//input
    .cs(cs),   								   //output
    .miso(miso), 				//input
	 .mosi(mosi),								   //output
    .dout(spi_data_out),   				   //output
	 .din(spi_data_in),  	//input
	 .freq(clk),				//input
	 .en(spi_enable),					//input
	 .transfer_succeded(transfer_success), //output
	 .sck(sck)
    );

reg ena;
reg [23:0] reg_address;
reg [1:0] reg_state;
reg [7:0] reg_command;
reg [31:0] reg_data_in;
reg [31:0] reg_data_out;
reg [31:0] reg_spi_data_in;
reg [5:0] cntr;

always@ (posedge clk) begin
	if (ena) begin
		if(amba_command==1) begin
			case (reg_state)
				2'b00 : reg_spi_data_in = {reg_command,reg_address};
				2'b01 : reg_spi_data_in = reg_data_in;
			endcase 
		end
		else if(amba_command==0) begin
			case (reg_state)
				2'b00 : reg_spi_data_in = {reg_command,reg_address}; 
				2'b01 : begin reg_data_out = spi_data_out; reg_spi_data_in = 32'b0; end
			endcase		
		end
	end
end

assign spi_data_in = reg_spi_data_in;
assign amba_dout = reg_data_out;

assign spi_enable = ena;
assign HOLD_ENABLE = 1; //fixen futtatjuk a memoriat

//always@ (posedge transfer_success)
//	cntr <=0;

always@ (negedge clk) begin
	if(rst)
		cntr <=6'b0;
	else
		cntr <= cntr + 1'b1;
		
	if(rst)
		ena <= 1'b0;
	else begin 
		if(reg_command == 8'b00000010 && reg_state==2'b00) begin
			ena <= 1'b1;
		end
		else if(reg_command == 8'b0000_0011 && reg_state==2'b00) begin
			ena <= 1'b1;
		end
		else if(reg_command == 8'b0000_0011 && ena == 1 && cntr==6'b111111) begin
			ena <= 0;
			reg_state <= 2'b00;
		end
		else if(reg_command == 8'b00000010 && ena == 1 && cntr==6'b1111111) begin
			ena <= 0;
		end
	end
/*end

always@ (posedge clk) begin*/
	if(rst)
		reg_state <= 2'b0;
	else
		if(transfer_success)
			reg_state <= {reg_state[0],1'b1};
		if(reg_state == 2'b11) begin
			reg_state <= 2'b00;
			end
end
	
always@ (posedge clk)
	if(rst)
		reg_command <= 8'b0;
	else begin
		if(amba_command) //write
			reg_command <= 8'b0000_0010;
		else if(amba_command == 1'b0) //read
			reg_command <= 8'b0000_0011;
	end
		
always@ (posedge clk)
	if(rst)
		reg_address <= 24'b0;
	else if(amba_reg_select == 2'b01)
		if(amba_command) //write
			reg_address <= amba_din[23:0];
			
always@ (posedge clk)
	if(rst)
		reg_data_in <= 32'b0;
	else if(amba_reg_select == 2'b10)
		if(amba_command) begin //write
			reg_data_in <= amba_din;
			end
			
always@ (posedge clk)
	if(rst)
		reg_data_out <= 32'b0;
	else if(amba_reg_select == 2'b11)
		if(~amba_command) begin //read
			reg_data_out <= spi_data_out;
		end

endmodule
