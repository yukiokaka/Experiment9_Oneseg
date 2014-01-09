// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vfft64_H_
#define _Vfft64_H_

#include "verilated.h"
class Vfft64__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vfft64) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(CLK,0,0);
    VL_IN8(RST,0,0);
    VL_IN8(valid_a,0,0);
    VL_OUT8(valid_o,0,0);
    VL_IN8(rd_en,0,0);
    VL_OUT8(full,0,0);
    VL_IN16(ar,10,0);
    VL_IN16(ai,10,0);
    VL_OUT16(xr,10,0);
    VL_OUT16(xi,10,0);
    //char	__VpadToAlign14[2];
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__cnt,6,0);
    VL_SIG8(v__DOT__cnt_o,6,0);
    VL_SIG8(v__DOT__start,0,0);
    VL_SIG8(v__DOT__start_fft_flg,0,0);
    VL_SIG8(v__DOT__fin_fft_flg,0,0);
    VL_SIG8(v__DOT__valid_o_from_myFFT,0,0);
    VL_SIG8(v__DOT__fft_culculating_flg,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__stage,3,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__stage_1_start_flg,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__stage_2_start_flg,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__stage_3_start_flg,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__stage_4_start_flg,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__stage_5_start_flg,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__cnt,6,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__cnt3,6,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__start_batterfly,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__calculating_batterfly_flg,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__start_batterfly_3,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__k1,6,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__k3,6,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__fin_batterfly,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__fin_batterfly_3,0,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__cnt,3,0);
    VL_SIG8(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__cnt,3,0);
    //char	__VpadToAlign45[1];
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YR,10,0);
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YI,10,0);
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YR,10,0);
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YI,10,0);
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YR,10,0);
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YI,10,0);
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YR,10,0);
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YI,10,0);
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YR,10,0);
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YI,10,0);
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YR,10,0);
    VL_SIG16(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YI,10,0);
    //char	__VpadToAlign70[2];
    VL_SIG(v__DOT__A0,21,0);
    VL_SIG(v__DOT__A1,21,0);
    VL_SIG(v__DOT__A2,21,0);
    VL_SIG(v__DOT__A3,21,0);
    VL_SIG(v__DOT__A4,21,0);
    VL_SIG(v__DOT__A5,21,0);
    VL_SIG(v__DOT__A6,21,0);
    VL_SIG(v__DOT__A7,21,0);
    VL_SIG(v__DOT__A8,21,0);
    VL_SIG(v__DOT__A9,21,0);
    VL_SIG(v__DOT__A10,21,0);
    VL_SIG(v__DOT__A11,21,0);
    VL_SIG(v__DOT__A12,21,0);
    VL_SIG(v__DOT__A13,21,0);
    VL_SIG(v__DOT__A14,21,0);
    VL_SIG(v__DOT__A15,21,0);
    VL_SIG(v__DOT__A16,21,0);
    VL_SIG(v__DOT__A17,21,0);
    VL_SIG(v__DOT__A18,21,0);
    VL_SIG(v__DOT__A19,21,0);
    VL_SIG(v__DOT__A20,21,0);
    VL_SIG(v__DOT__A21,21,0);
    VL_SIG(v__DOT__A22,21,0);
    VL_SIG(v__DOT__A23,21,0);
    VL_SIG(v__DOT__A24,21,0);
    VL_SIG(v__DOT__A25,21,0);
    VL_SIG(v__DOT__A26,21,0);
    VL_SIG(v__DOT__A27,21,0);
    VL_SIG(v__DOT__A28,21,0);
    VL_SIG(v__DOT__A29,21,0);
    VL_SIG(v__DOT__A30,21,0);
    VL_SIG(v__DOT__A31,21,0);
    VL_SIG(v__DOT__A32,21,0);
    VL_SIG(v__DOT__A33,21,0);
    VL_SIG(v__DOT__A34,21,0);
    VL_SIG(v__DOT__A35,21,0);
    VL_SIG(v__DOT__A36,21,0);
    VL_SIG(v__DOT__A37,21,0);
    VL_SIG(v__DOT__A38,21,0);
    VL_SIG(v__DOT__A39,21,0);
    VL_SIG(v__DOT__A40,21,0);
    VL_SIG(v__DOT__A41,21,0);
    VL_SIG(v__DOT__A42,21,0);
    VL_SIG(v__DOT__A43,21,0);
    VL_SIG(v__DOT__A44,21,0);
    VL_SIG(v__DOT__A45,21,0);
    VL_SIG(v__DOT__A46,21,0);
    VL_SIG(v__DOT__A47,21,0);
    VL_SIG(v__DOT__A48,21,0);
    VL_SIG(v__DOT__A49,21,0);
    VL_SIG(v__DOT__A50,21,0);
    VL_SIG(v__DOT__A51,21,0);
    VL_SIG(v__DOT__A52,21,0);
    VL_SIG(v__DOT__A53,21,0);
    VL_SIG(v__DOT__A54,21,0);
    VL_SIG(v__DOT__A55,21,0);
    VL_SIG(v__DOT__A56,21,0);
    VL_SIG(v__DOT__A57,21,0);
    VL_SIG(v__DOT__A58,21,0);
    VL_SIG(v__DOT__A59,21,0);
    VL_SIG(v__DOT__A60,21,0);
    VL_SIG(v__DOT__A61,21,0);
    VL_SIG(v__DOT__A62,21,0);
    VL_SIG(v__DOT__A63,21,0);
    VL_SIG(v__DOT__Y0,21,0);
    VL_SIG(v__DOT__Y1,21,0);
    VL_SIG(v__DOT__Y2,21,0);
    VL_SIG(v__DOT__Y3,21,0);
    VL_SIG(v__DOT__Y4,21,0);
    VL_SIG(v__DOT__Y5,21,0);
    VL_SIG(v__DOT__Y6,21,0);
    VL_SIG(v__DOT__Y7,21,0);
    VL_SIG(v__DOT__Y8,21,0);
    VL_SIG(v__DOT__Y9,21,0);
    VL_SIG(v__DOT__Y10,21,0);
    VL_SIG(v__DOT__Y11,21,0);
    VL_SIG(v__DOT__Y12,21,0);
    VL_SIG(v__DOT__Y13,21,0);
    VL_SIG(v__DOT__Y14,21,0);
    VL_SIG(v__DOT__Y15,21,0);
    VL_SIG(v__DOT__Y16,21,0);
    VL_SIG(v__DOT__Y17,21,0);
    VL_SIG(v__DOT__Y18,21,0);
    VL_SIG(v__DOT__Y19,21,0);
    VL_SIG(v__DOT__Y20,21,0);
    VL_SIG(v__DOT__Y21,21,0);
    VL_SIG(v__DOT__Y22,21,0);
    VL_SIG(v__DOT__Y23,21,0);
    VL_SIG(v__DOT__Y24,21,0);
    VL_SIG(v__DOT__Y25,21,0);
    VL_SIG(v__DOT__Y26,21,0);
    VL_SIG(v__DOT__Y27,21,0);
    VL_SIG(v__DOT__Y28,21,0);
    VL_SIG(v__DOT__Y29,21,0);
    VL_SIG(v__DOT__Y30,21,0);
    VL_SIG(v__DOT__Y31,21,0);
    VL_SIG(v__DOT__Y32,21,0);
    VL_SIG(v__DOT__Y33,21,0);
    VL_SIG(v__DOT__Y34,21,0);
    VL_SIG(v__DOT__Y35,21,0);
    VL_SIG(v__DOT__Y36,21,0);
    VL_SIG(v__DOT__Y37,21,0);
    VL_SIG(v__DOT__Y38,21,0);
    VL_SIG(v__DOT__Y39,21,0);
    VL_SIG(v__DOT__Y40,21,0);
    VL_SIG(v__DOT__Y41,21,0);
    VL_SIG(v__DOT__Y42,21,0);
    VL_SIG(v__DOT__Y43,21,0);
    VL_SIG(v__DOT__Y44,21,0);
    VL_SIG(v__DOT__Y45,21,0);
    VL_SIG(v__DOT__Y46,21,0);
    VL_SIG(v__DOT__Y47,21,0);
    VL_SIG(v__DOT__Y48,21,0);
    VL_SIG(v__DOT__Y49,21,0);
    VL_SIG(v__DOT__Y50,21,0);
    VL_SIG(v__DOT__Y51,21,0);
    VL_SIG(v__DOT__Y52,21,0);
    VL_SIG(v__DOT__Y53,21,0);
    VL_SIG(v__DOT__Y54,21,0);
    VL_SIG(v__DOT__Y55,21,0);
    VL_SIG(v__DOT__Y56,21,0);
    VL_SIG(v__DOT__Y57,21,0);
    VL_SIG(v__DOT__Y58,21,0);
    VL_SIG(v__DOT__Y59,21,0);
    VL_SIG(v__DOT__Y60,21,0);
    VL_SIG(v__DOT__Y61,21,0);
    VL_SIG(v__DOT__Y62,21,0);
    VL_SIG(v__DOT__Y63,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B0,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B1,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B2,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B3,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B4,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B5,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B6,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B7,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B8,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B9,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B10,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B11,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B12,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B13,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B14,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B15,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B16,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B17,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B18,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B19,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B20,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B21,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B22,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B23,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B24,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B25,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B26,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B27,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B28,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B29,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B30,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B31,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B32,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B33,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B34,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B35,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B36,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B37,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B38,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B39,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B40,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B41,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B42,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B43,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B44,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B45,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B46,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B47,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B48,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B49,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B50,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B51,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B52,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B53,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B54,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B55,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B56,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B57,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B58,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B59,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B60,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B61,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B62,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__B63,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C0,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C1,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C2,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C3,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C4,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C5,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C6,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C7,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C8,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C9,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C10,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C11,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C12,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C13,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C14,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C15,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C16,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C17,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C18,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C19,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C20,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C21,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C22,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C23,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C24,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C25,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C26,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C27,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C28,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C29,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C30,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C31,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C32,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C33,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C34,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C35,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C36,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C37,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C38,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C39,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C40,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C41,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C42,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C43,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C44,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C45,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C46,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C47,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C48,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C49,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C50,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C51,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C52,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C53,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C54,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C55,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C56,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C57,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C58,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C59,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C60,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C61,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C62,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__C63,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__Y1,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__Y2,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__Y3,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__Y9,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__Y10,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__Y11,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__AIN0,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__AIN1,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__AIN2,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__AIN3,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__AIN8,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__AIN9,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__AIN10,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__AIN11,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B0,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B1,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B2,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3J,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C1,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C2,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C3,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W1KR,16,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W1KI,16,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W2KR,16,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W2KI,16,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W3KR,16,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W3KI,16,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B0,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B1,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B2,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3J,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C1,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C2,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C3,21,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W1KR,16,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W1KI,16,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W2KR,16,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W2KI,16,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W3KR,16,0);
    VL_SIG(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W3KI,16,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YR1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YR2,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YI1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YI2,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YR1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YR2,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YI1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YI2,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YR1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YR2,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YI1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YI2,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YR1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YR2,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YI1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YI2,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YR1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YR2,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YI1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YI2,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YR1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YR2,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YI1,44,0);
    VL_SIG64(v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YI2,44,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k1_sin__0__select,6,0);
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k2_sin__1__select,6,0);
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k3_sin__2__select,6,0);
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k1_cos__3__select,6,0);
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k2_cos__4__select,6,0);
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k3_cos__5__select,6,0);
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k1_sin__6__select,6,0);
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k2_sin__7__select,6,0);
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k3_sin__8__select,6,0);
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k1_cos__9__select,6,0);
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k2_cos__10__select,6,0);
    VL_SIG8(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k3_cos__11__select,6,0);
    VL_SIG8(__Vclklast__TOP__CLK,0,0);
    VL_SIG8(__Vclklast__TOP__RST,0,0);
    //char	__VpadToAlign1474[2];
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k1_sin__0__Vfuncout,16,0);
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k2_sin__1__Vfuncout,16,0);
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k3_sin__2__Vfuncout,16,0);
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k1_cos__3__Vfuncout,16,0);
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k2_cos__4__Vfuncout,16,0);
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__func_k3_cos__5__Vfuncout,16,0);
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k1_sin__6__Vfuncout,16,0);
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k2_sin__7__Vfuncout,16,0);
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k3_sin__8__Vfuncout,16,0);
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k1_cos__9__Vfuncout,16,0);
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k2_cos__10__Vfuncout,16,0);
    VL_SIG(__Vfunc_v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__func_k3_cos__11__Vfuncout,16,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign1532[4];
    Vfft64__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vfft64& operator= (const Vfft64&);	///< Copying not allowed
    Vfft64(const Vfft64&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vfft64(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vfft64();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vfft64__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vfft64__Syms* symsp, bool first);
  private:
    static IData	_change_request(Vfft64__Syms* __restrict vlSymsp);
  public:
    static void	_eval(Vfft64__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vfft64__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vfft64__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vfft64__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vfft64__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(Vfft64__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(Vfft64__Syms* __restrict vlSymsp);
    static void	traceChgThis(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
