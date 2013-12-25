module ber
  (
   input         CLK,
   input         RST,

   input         valid_i,
   input [7:0]   sent_data,
   input [7:0]   recv_data,
   input [3:0]   number_of_bits,

   output        valid_o,
   output [31:0] error_rate
   );
	
   reg[32:0] cnt;
	reg[31:0] error_cnt;
	reg disp_start;
	assign valid_o = disp_start;
	
	always@(posedge CLK)
	  begin
		if(!RST) 
			begin
				cnt <= 0;
				error_cnt <= 0;
				disp_start <= 0;
			end
		else
			begin
				if(cnt == 32'd240_000_000)
					begin
						error_rate <= error_cnt;
						error_cnt <= 0;
						disp_start <= 1;
						cnt <= 0;
					end
				else
					begin
						if(valid_i == 1)
						begin
							disp_start <= 0;
							case(sent_data ^ recv_data)
								error_cnt <= (sent_data ^ recv_data);
						   endcase
					  end
				  cnt <= cnt + 1;
			     end
			
	  end

endmodule
