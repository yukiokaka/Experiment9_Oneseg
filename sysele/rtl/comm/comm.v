
module comm
  #(
    parameter modtype = 1,
    parameter modonly = 0,
    parameter valid_delay_min = 24,
    parameter mult_aw = 16,
    parameter mult_bw = 16,
    parameter mult_pw = 32,
    parameter compmult_delay = 3
    )
   (
    input          CLK,
    input          RST,

    input [7:0]    ad1,
    input [7:0]    ad2,

    output [5:0]   da1,
    output [5:0]   da2,

    output         rd_en,
    input [127:0]  din,
    input          empty,

    output [127:0] dout,
    output         wr_en,
    input          full,

    input [3:0]    ad1_delay,
    input [3:0]    ad2_delay,
    input [3:0]    ad_valid_delay,

////////////////////////////////// ADDED
    output  [5:0]   raw_send_d,
    output  [5:0]   raw_recv,
    output  	valid_raw_recv
////////////////////////////////// ADDED


    );

//   wire           valid_raw_send;
//   wire           valid_raw_recv;
//   wire [5:0]     raw_send;
//   wire [5:0]     raw_recv;

   // **************************************************
   // DELAY
   //   8*2             8*2
   // ---/--- [DELAY] ---/---> comm_recv
   // **************************************************
   wire [7:0]     ad1_dl, ad2_dl;
   wire           da_valid;
   wire           ad_valid;
	
////////////////////////////////// ADDED
   assign   raw_recv = ad1_dl[5:0];
   assign   valid_raw_recv = ad_valid;
////////////////////////////////// ADDED

   variable_delay
     #(.width(1),
       .sel_width(4),
       .delay_min(valid_delay_min),
       .with_reset(1),
       .rstval(1'b0))
   ad_valid_delay_inst
     (.CLK(CLK),
      .RST(RST),
      .ce(1'b1),
      .din(da_valid),
      .sel(ad_valid_delay),
      .dout(ad_valid));

////////////////////////////////// ADDED
   variable_delay
     #(.width(6),
       .sel_width(4),
       .delay_min(valid_delay_min),
       .with_reset(1),
       .rstval(1'b0))
   da1_delay_inst
     (.CLK(CLK),
      .RST(RST),
      .ce(1'b1),
      .din(da1),
      .sel(ad_valid_delay),
      .dout(raw_send_d));
////////////////////////////////// ADDED

   variable_delay
     #(.width(8),
       .sel_width(4),
       .delay_min(1))
   ad1_delay_inst
     (.CLK(CLK),
      .RST(RST),

      .ce(1'b1),
      .din(ad1),
      .sel(ad1_delay),
      .dout(ad1_dl));

   variable_delay
     #(.width(8),
       .sel_width(4),
       .delay_min(1))
   ad2_delay_inst
     (.CLK(CLK),
      .RST(RST),

      .ce(1'b1),
      .din(ad2),
      .sel(ad2_delay),
      .dout(ad2_dl));


   // **************************************************
   // DDR >--- [MOD] ---> AD
   // DA  >--- [DEMOD] ---> DDR
   // **************************************************
   datop datop_inst
     (
      .CLK(CLK),
      .RST(RST),

      .rd_en(rd_en),
      .din(din),
      .empty(empty),
      .da1(da1),
      .da2(da2),
      .da_valid(da_valid));

   // RECEIVER
   adtop adtop_inst
     (
      .CLK(CLK),
      .RST(RST),

      .din1(ad1_dl),
      .din2(ad2_dl),
      .valid(ad_valid),

      .dout(dout),
      .wr_en(wr_en),
      .full(full)
      );
         
endmodule
