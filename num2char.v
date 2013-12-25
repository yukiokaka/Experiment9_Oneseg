module num2char
  (
   input        CLK,
   input        RST,

   input        start_update,
   input [31:0] error_rate,

   output [7:0] char,
   output       valid_o
   );

   reg[4:0] counter = 1;
   reg start = 0;
   reg [31:0] error_rate_reg;

   reg [7:0]  out = 0;
   reg        valid = 0;
   
   assign char = out;
   assign valid_o = valid;

   
	always@(posedge CLK or negedge RST)
	begin
       
		if(start_update)
		begin
		   error_rate_reg <= error_rate;
           counter <= 0;
		   start <= 1;
		   valid <= 1;
		end
		if(start == 1)
		begin
			if (counter == 0)
			begin 
				out <= (error_rate / 10000000000) % 10 + 16'h30;
				counter <= 1;
			end
			if (counter == 1)
			begin 
			   out <= (error_rate / 1000000000) % 10 + 16'h30;
			   counter <= 2;
			end
			if (counter == 2)
			begin 
			   out <= (error_rate / 100000000) % 10 + 16'h30;		
				counter <= 3;
			end
			if (counter == 3)
			begin 
			   out <= (error_rate / 10000000) % 10 + 16'h30;
				counter <= 4;
			end
			if (counter == 4)
			begin 
			   out <= (error_rate / 1000000) % 10 + 16'h30;
			   counter <= 5;
			end
			if (counter == 5)
			begin 
			   out <= (error_rate / 100000) % 10 + 16'h30;
			   counter <= 6;
			end
			if (counter == 6)
			begin 
			   out <= (error_rate / 10000) % 10 + 16'h30;
			   counter <= 7;
			end
			if (counter == 7)
			begin 
			   out <=  (error_rate /1000) % 10 + 16'h30;
			   counter <= 8;
			end
            if (counter == 8)
			begin 
			   out <= (error_rate / 100) % 10 + 16'h30;
			   counter <= 9;
			end
			if (counter == 9)
			begin 
			   out <= (error_rate / 10) % 10 + 16'h30;
			   counter <= 10;
			end
			if (counter == 10)
			begin 
			   out <= error_rate  % 10 + 16'h30;
			   counter <= 0;
               start <= 0;
			   valid <= 0;
			end

		end
	end
	
	


endmodule
