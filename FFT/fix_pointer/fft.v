

module fft(
           input             clk,rst,
           input [10:0]      ar,
           input [10:0]      ai,
           input             valid_i,
           output reg [10:0] xr,
           output reg [10:0] xi,
           output [10:0] test
           );
   reg [10:0]                ar_reg [0:63];
   reg [10:0]                ai_reg [0:63];
   reg [31:0]                wr;
   reg [31:0]                wi;
   reg [10:0]                xr_tmp,xi_tmp;                            
   reg [6:0]                 input_cnt, output_cnt, m, mh, j, i, k;
   reg                       start_flg, output_flg, m_loop_flg,i_loop_flg,j_loop_flg;

   assign test = ar_reg[1];
   
   
   always@(posedge clk or negedge rst)
     begin
        if(!rst) begin
           xr <= 0;
           xi <= 0;
           input_cnt <= 0;
           output_cnt <= 0;
           output_flg <= 0;
           
           m <= 0;
           j <= 0;
           start_flg <= 0;
           m_loop_flg <= 0;
           i_loop_flg <= 0;
           j_loop_flg <= 0;           
           
        end

        else begin
              if(start_flg) begin //FFT
                 if(!i_loop_flg) begin
                    m <= m >> 1;
                    if(!m) begin
                       start_flg <= 0;
                       output_flg <= 1;
                       
                       //演算終了
                    end
                    else begin
                       mh <= m >> 1;
                       i_loop_flg <= 1;
                    end
                 end
                 else begin
                    if(!j_loop_flg) begin
                       i <= i + 1;
                       if(i >= mh) begin
                          i <= 0;
                          i_loop_flg <= 0; 
                       end                       
                       else begin
                          wr <= (m >> 5) * i;
                          wi <= (m >> 5) * i;
                          j <= i;
                          k <= j + mh;
                          j_loop_flg <= 1;                        
                       end
                    end
                    else begin
                       j <= j + m;
                       k <= j + mh;

                       if(j >= 64) begin
                          j <= 0;
                          k <= mh;
                          j_loop_flg <= 0;
                       end
                       if (k < 64) begin
                          xr_tmp <= ar_reg[j] -ar_reg[k];
                          xi_tmp <= ai_reg[j] -ai_reg[k];
                          ar_reg[k] <= (wr * xr- wi * xi) >>15;
                          ai_reg[k] <= (wr * xi- wi * xr) >>15;
                       end
                    end // else: !if(!j_loop_flg)
                 end // else: !if(!i_loop_flg)
              end // if (start_flg)

              else if(output_flg) begin
                 xr[output_cnt] <= ar_reg[output_cnt];
                 xi[output_cnt] <= ai_reg[output_cnt];
                 output_cnt <= output_cnt + 1;

                 if(output_cnt >= 64) begin
                    output_flg <= 0;
                    output_cnt <= 0;
                 end
              end
              else if(valid_i) begin
                 ar_reg[input_cnt] <= ar;
                 ai_reg[input_cnt] <= ai;
                 input_cnt <= input_cnt + 1;
                 if(input_cnt >= 64) begin
                    start_flg <= 1;
                    input_cnt <= 0;
                    m <= 64;
                    mh <= 32;
                    i <= 0;
                    i_loop_flg <= 1;
                    j <= 0;
                    j_loop_flg <= 1;
                    
                 end   
              end // if (valid_i)
           
           
           else begin


           end // else: !if(valid_i)

        end // else: !if(!rst)
     end // always@ (posedge clk)
   


   
   
   
   
endmodule // encode_fix_point
