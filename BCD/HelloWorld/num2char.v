`define BWW 6
`define BW  32
`define DW  10
`define DWW 4
`define DWB 40



module num2char
  (
   input        CLK,
   input        RST,

   input        start_update,
   input [31:0] error_rate,

   output [7:0] char,
   output       valid_o
   );

   reg [`BWW:0] state;
   reg [`BW+`DWB-1:0] AllReg;
   reg [`DWB-1:0]     char_reg;

   reg [7:0]          dispchar;
   reg                char_ready;
   reg [7:0]          cnt;
   reg                valid_out, disp_start;

   wire [`BW+`DWB:0]  tempReg;

   assign tempReg = {AllReg[`BW+`DWB-2:0],1'b0};
   assign char = dispchar;
   assign valid_o = valid_out;


   always@(posedge CLK or negedge RST)
     begin
        if(!RST)
          begin
             state <= 0;
             char_ready <= 0;
             valid_out <= 0;

          end
        else
          begin
             if(state == 0)
               begin
                  if(start_update == 1)
                    begin
                       cnt <= 40;
                       state <= 1;
                       AllReg <= {`DWB'b0, error_rate};
                    end
               end
             else if(state < (`BW))
               begin
                  AllReg <= {onedigit(tempReg), tempReg[`BW-1:0]};
                  state <= state +1;
               end
             else if(state == (`BW))
               begin
                  char_reg <= tempReg[`BW+`DWB-1:`BW];
                  state <= state +1;
                  char_ready <= 1;
               end
             else if(char_ready == 1)
               begin
                  state <= 0;
                  char_ready <= 0;
                  disp_start <= 1;
               end
             if (disp_start == 1)
               begin
                  valid_out <= 1;
                  dispchar <= ({char_reg[(cnt-4)+3], char_reg[(cnt-4)+2], char_reg[(cnt-4)+1], char_reg[(cnt-4)]}) +8'h30;
                  cnt <=  cnt - 4;
                  if(cnt == 0)
                    begin
                       cnt <= 40;
                       valid_out <= 0;
                       disp_start <= 0;
                    end
               end
          end
     end

   function [`DWB-1:0] onedigit;
      input  [`BW+`DWB-1:0] in;
      reg [3:0]             t0,t1;
      reg [`DWB-1:0]        a;
      integer               i;

      begin
         a = in[`BW+`DWB-1:`BW];
         onedigit = 0;
         for (i=0; i<`DW; i=i+1)
           begin
              onedigit =onedigit>>4;
              t0 = a[3:0];
              a = a >> 4;
              t1 = t0 +2'b11;
              if(t1[3] == 1)
                begin
                   onedigit = {t1[3:0], onedigit[`DWB-5:0]};
                end
              else
                begin
                   onedigit = {t0[3:0], onedigit[`DWB-5:0]};
                end
           end
      end
   endfunction

endmodule // num2char
