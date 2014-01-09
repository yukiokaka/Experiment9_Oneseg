// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfft64.h for the primary calling header

#include "Vfft64.h"            // For This
#include "Vfft64__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfft64) {
    Vfft64__Syms* __restrict vlSymsp = __VlSymsp = new Vfft64__Syms(this, name());
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT__v__DOT__myFFT_module__DOT__radix4_batterfly_module1, Vfft64_radix4_batterfly);
    VL_CELL (__PVT__v__DOT__myFFT_module__DOT__radix4_batterfly_module2, Vfft64_radix4_batterfly);
    VL_CELL (__PVT__v__DOT__myFFT_module__DOT__radix4_batterfly_module3, Vfft64_radix4_batterfly);
    // Reset internal values
    
    // Reset structure values
    CLK = VL_RAND_RESET_I(1);
    RST = VL_RAND_RESET_I(1);
    valid_a = VL_RAND_RESET_I(1);
    ar = VL_RAND_RESET_I(11);
    ai = VL_RAND_RESET_I(11);
    valid_o = VL_RAND_RESET_I(1);
    rd_en = VL_RAND_RESET_I(1);
    full = VL_RAND_RESET_I(1);
    xr = VL_RAND_RESET_I(11);
    xi = VL_RAND_RESET_I(11);
    v__DOT__cnt = VL_RAND_RESET_I(7);
    v__DOT__cnt_o = VL_RAND_RESET_I(7);
    v__DOT__A0 = VL_RAND_RESET_I(22);
    v__DOT__A1 = VL_RAND_RESET_I(22);
    v__DOT__A2 = VL_RAND_RESET_I(22);
    v__DOT__A3 = VL_RAND_RESET_I(22);
    v__DOT__A4 = VL_RAND_RESET_I(22);
    v__DOT__A5 = VL_RAND_RESET_I(22);
    v__DOT__A6 = VL_RAND_RESET_I(22);
    v__DOT__A7 = VL_RAND_RESET_I(22);
    v__DOT__A8 = VL_RAND_RESET_I(22);
    v__DOT__A9 = VL_RAND_RESET_I(22);
    v__DOT__A10 = VL_RAND_RESET_I(22);
    v__DOT__A11 = VL_RAND_RESET_I(22);
    v__DOT__A12 = VL_RAND_RESET_I(22);
    v__DOT__A13 = VL_RAND_RESET_I(22);
    v__DOT__A14 = VL_RAND_RESET_I(22);
    v__DOT__A15 = VL_RAND_RESET_I(22);
    v__DOT__A16 = VL_RAND_RESET_I(22);
    v__DOT__A17 = VL_RAND_RESET_I(22);
    v__DOT__A18 = VL_RAND_RESET_I(22);
    v__DOT__A19 = VL_RAND_RESET_I(22);
    v__DOT__A20 = VL_RAND_RESET_I(22);
    v__DOT__A21 = VL_RAND_RESET_I(22);
    v__DOT__A22 = VL_RAND_RESET_I(22);
    v__DOT__A23 = VL_RAND_RESET_I(22);
    v__DOT__A24 = VL_RAND_RESET_I(22);
    v__DOT__A25 = VL_RAND_RESET_I(22);
    v__DOT__A26 = VL_RAND_RESET_I(22);
    v__DOT__A27 = VL_RAND_RESET_I(22);
    v__DOT__A28 = VL_RAND_RESET_I(22);
    v__DOT__A29 = VL_RAND_RESET_I(22);
    v__DOT__A30 = VL_RAND_RESET_I(22);
    v__DOT__A31 = VL_RAND_RESET_I(22);
    v__DOT__A32 = VL_RAND_RESET_I(22);
    v__DOT__A33 = VL_RAND_RESET_I(22);
    v__DOT__A34 = VL_RAND_RESET_I(22);
    v__DOT__A35 = VL_RAND_RESET_I(22);
    v__DOT__A36 = VL_RAND_RESET_I(22);
    v__DOT__A37 = VL_RAND_RESET_I(22);
    v__DOT__A38 = VL_RAND_RESET_I(22);
    v__DOT__A39 = VL_RAND_RESET_I(22);
    v__DOT__A40 = VL_RAND_RESET_I(22);
    v__DOT__A41 = VL_RAND_RESET_I(22);
    v__DOT__A42 = VL_RAND_RESET_I(22);
    v__DOT__A43 = VL_RAND_RESET_I(22);
    v__DOT__A44 = VL_RAND_RESET_I(22);
    v__DOT__A45 = VL_RAND_RESET_I(22);
    v__DOT__A46 = VL_RAND_RESET_I(22);
    v__DOT__A47 = VL_RAND_RESET_I(22);
    v__DOT__A48 = VL_RAND_RESET_I(22);
    v__DOT__A49 = VL_RAND_RESET_I(22);
    v__DOT__A50 = VL_RAND_RESET_I(22);
    v__DOT__A51 = VL_RAND_RESET_I(22);
    v__DOT__A52 = VL_RAND_RESET_I(22);
    v__DOT__A53 = VL_RAND_RESET_I(22);
    v__DOT__A54 = VL_RAND_RESET_I(22);
    v__DOT__A55 = VL_RAND_RESET_I(22);
    v__DOT__A56 = VL_RAND_RESET_I(22);
    v__DOT__A57 = VL_RAND_RESET_I(22);
    v__DOT__A58 = VL_RAND_RESET_I(22);
    v__DOT__A59 = VL_RAND_RESET_I(22);
    v__DOT__A60 = VL_RAND_RESET_I(22);
    v__DOT__A61 = VL_RAND_RESET_I(22);
    v__DOT__A62 = VL_RAND_RESET_I(22);
    v__DOT__A63 = VL_RAND_RESET_I(22);
    v__DOT__Y0 = VL_RAND_RESET_I(22);
    v__DOT__Y1 = VL_RAND_RESET_I(22);
    v__DOT__Y2 = VL_RAND_RESET_I(22);
    v__DOT__Y3 = VL_RAND_RESET_I(22);
    v__DOT__Y4 = VL_RAND_RESET_I(22);
    v__DOT__Y5 = VL_RAND_RESET_I(22);
    v__DOT__Y6 = VL_RAND_RESET_I(22);
    v__DOT__Y7 = VL_RAND_RESET_I(22);
    v__DOT__Y8 = VL_RAND_RESET_I(22);
    v__DOT__Y9 = VL_RAND_RESET_I(22);
    v__DOT__Y10 = VL_RAND_RESET_I(22);
    v__DOT__Y11 = VL_RAND_RESET_I(22);
    v__DOT__Y12 = VL_RAND_RESET_I(22);
    v__DOT__Y13 = VL_RAND_RESET_I(22);
    v__DOT__Y14 = VL_RAND_RESET_I(22);
    v__DOT__Y15 = VL_RAND_RESET_I(22);
    v__DOT__Y16 = VL_RAND_RESET_I(22);
    v__DOT__Y17 = VL_RAND_RESET_I(22);
    v__DOT__Y18 = VL_RAND_RESET_I(22);
    v__DOT__Y19 = VL_RAND_RESET_I(22);
    v__DOT__Y20 = VL_RAND_RESET_I(22);
    v__DOT__Y21 = VL_RAND_RESET_I(22);
    v__DOT__Y22 = VL_RAND_RESET_I(22);
    v__DOT__Y23 = VL_RAND_RESET_I(22);
    v__DOT__Y24 = VL_RAND_RESET_I(22);
    v__DOT__Y25 = VL_RAND_RESET_I(22);
    v__DOT__Y26 = VL_RAND_RESET_I(22);
    v__DOT__Y27 = VL_RAND_RESET_I(22);
    v__DOT__Y28 = VL_RAND_RESET_I(22);
    v__DOT__Y29 = VL_RAND_RESET_I(22);
    v__DOT__Y30 = VL_RAND_RESET_I(22);
    v__DOT__Y31 = VL_RAND_RESET_I(22);
    v__DOT__Y32 = VL_RAND_RESET_I(22);
    v__DOT__Y33 = VL_RAND_RESET_I(22);
    v__DOT__Y34 = VL_RAND_RESET_I(22);
    v__DOT__Y35 = VL_RAND_RESET_I(22);
    v__DOT__Y36 = VL_RAND_RESET_I(22);
    v__DOT__Y37 = VL_RAND_RESET_I(22);
    v__DOT__Y38 = VL_RAND_RESET_I(22);
    v__DOT__Y39 = VL_RAND_RESET_I(22);
    v__DOT__Y40 = VL_RAND_RESET_I(22);
    v__DOT__Y41 = VL_RAND_RESET_I(22);
    v__DOT__Y42 = VL_RAND_RESET_I(22);
    v__DOT__Y43 = VL_RAND_RESET_I(22);
    v__DOT__Y44 = VL_RAND_RESET_I(22);
    v__DOT__Y45 = VL_RAND_RESET_I(22);
    v__DOT__Y46 = VL_RAND_RESET_I(22);
    v__DOT__Y47 = VL_RAND_RESET_I(22);
    v__DOT__Y48 = VL_RAND_RESET_I(22);
    v__DOT__Y49 = VL_RAND_RESET_I(22);
    v__DOT__Y50 = VL_RAND_RESET_I(22);
    v__DOT__Y51 = VL_RAND_RESET_I(22);
    v__DOT__Y52 = VL_RAND_RESET_I(22);
    v__DOT__Y53 = VL_RAND_RESET_I(22);
    v__DOT__Y54 = VL_RAND_RESET_I(22);
    v__DOT__Y55 = VL_RAND_RESET_I(22);
    v__DOT__Y56 = VL_RAND_RESET_I(22);
    v__DOT__Y57 = VL_RAND_RESET_I(22);
    v__DOT__Y58 = VL_RAND_RESET_I(22);
    v__DOT__Y59 = VL_RAND_RESET_I(22);
    v__DOT__Y60 = VL_RAND_RESET_I(22);
    v__DOT__Y61 = VL_RAND_RESET_I(22);
    v__DOT__Y62 = VL_RAND_RESET_I(22);
    v__DOT__Y63 = VL_RAND_RESET_I(22);
    v__DOT__start = VL_RAND_RESET_I(1);
    v__DOT__start_fft_flg = VL_RAND_RESET_I(1);
    v__DOT__fin_fft_flg = VL_RAND_RESET_I(1);
    v__DOT__valid_o_from_myFFT = VL_RAND_RESET_I(1);
    v__DOT__fft_culculating_flg = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__B0 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B1 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B2 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B3 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B4 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B5 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B6 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B7 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B8 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B9 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B10 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B11 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B12 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B13 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B14 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B15 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B16 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B17 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B18 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B19 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B20 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B21 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B22 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B23 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B24 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B25 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B26 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B27 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B28 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B29 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B30 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B31 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B32 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B33 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B34 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B35 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B36 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B37 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B38 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B39 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B40 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B41 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B42 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B43 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B44 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B45 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B46 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B47 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B48 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B49 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B50 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B51 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B52 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B53 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B54 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B55 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B56 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B57 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B58 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B59 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B60 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B61 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B62 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__B63 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C0 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C1 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C2 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C3 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C4 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C5 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C6 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C7 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C8 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C9 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C10 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C11 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C12 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C13 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C14 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C15 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C16 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C17 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C18 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C19 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C20 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C21 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C22 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C23 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C24 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C25 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C26 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C27 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C28 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C29 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C30 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C31 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C32 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C33 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C34 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C35 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C36 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C37 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C38 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C39 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C40 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C41 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C42 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C43 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C44 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C45 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C46 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C47 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C48 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C49 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C50 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C51 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C52 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C53 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C54 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C55 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C56 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C57 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C58 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C59 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C60 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C61 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C62 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__C63 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__stage = VL_RAND_RESET_I(4);
    v__DOT__myFFT_module__DOT__stage_1_start_flg = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__stage_2_start_flg = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__stage_3_start_flg = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__stage_4_start_flg = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__stage_5_start_flg = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__AIN0 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__AIN1 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__AIN2 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__AIN3 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__AIN4 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__AIN5 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__AIN6 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__AIN7 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__AIN8 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__AIN9 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__AIN10 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__AIN11 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__cnt = VL_RAND_RESET_I(7);
    v__DOT__myFFT_module__DOT__cnt3 = VL_RAND_RESET_I(7);
    v__DOT__myFFT_module__DOT__start_batterfly = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__calculating_batterfly_flg = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__start_batterfly_2 = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2 = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__start_batterfly_3 = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3 = VL_RAND_RESET_I(1);
    v__DOT__myFFT_module__DOT__k1 = VL_RAND_RESET_I(7);
    v__DOT__myFFT_module__DOT__k2 = VL_RAND_RESET_I(7);
    v__DOT__myFFT_module__DOT__k3 = VL_RAND_RESET_I(7);
    __Vclklast__TOP__CLK = VL_RAND_RESET_I(1);
    __Vclklast__TOP__RST = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vfft64::__Vconfigure(Vfft64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfft64::~Vfft64() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vfft64::eval() {
    Vfft64__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vfft64::eval\n"); );
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vfft64::_eval_initial_loop(Vfft64__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vfft64::_sequent__TOP__1(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfft64::_sequent__TOP__1\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__v__DOT__start,0,0);
    VL_SIG8(__Vdly__v__DOT__cnt,6,0);
    VL_SIG8(__Vdly__v__DOT__start_fft_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__fin_fft_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__fft_culculating_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__cnt_o,6,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage,3,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__cnt,6,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__cnt3,6,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage_3_start_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage_4_start_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__valid_o_from_myFFT,0,0);
    //char	__VpadToAlign22[2];
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B15,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B31,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B47,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B63,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B14,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B30,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B46,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B62,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B13,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B29,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B45,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B61,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B12,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B28,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B44,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B60,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B11,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B27,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B43,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B59,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B10,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B26,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B42,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B58,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B9,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B25,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B41,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B57,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B8,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B24,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B40,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B56,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B7,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B23,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B39,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B55,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B6,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B22,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B38,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B54,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B5,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B21,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B37,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B53,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B4,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B20,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B36,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B52,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B3,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B19,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B35,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B51,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B2,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B18,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B34,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B50,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B1,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B17,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B33,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B49,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B0,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B16,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B32,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B48,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C51,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C55,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C59,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C63,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C50,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C54,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C58,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C62,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C49,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C53,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C57,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C61,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C48,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C52,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C56,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C60,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C35,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C39,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C43,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C47,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C34,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C38,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C42,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C46,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C33,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C37,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C41,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C45,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C32,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C36,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C40,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C44,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C19,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C23,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C27,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C31,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C18,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C22,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C26,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C30,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C17,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C21,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C25,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C29,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C16,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C20,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C24,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C28,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C3,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C7,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C11,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C15,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C2,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C6,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C10,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C14,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C1,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C5,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C9,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C13,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C0,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C4,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C8,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C12,21,0);
    VL_SIG(__Vdly__v__DOT__Y60,21,0);
    VL_SIG(__Vdly__v__DOT__Y61,21,0);
    VL_SIG(__Vdly__v__DOT__Y62,21,0);
    VL_SIG(__Vdly__v__DOT__Y63,21,0);
    VL_SIG(__Vdly__v__DOT__Y56,21,0);
    VL_SIG(__Vdly__v__DOT__Y57,21,0);
    VL_SIG(__Vdly__v__DOT__Y58,21,0);
    VL_SIG(__Vdly__v__DOT__Y59,21,0);
    VL_SIG(__Vdly__v__DOT__Y52,21,0);
    VL_SIG(__Vdly__v__DOT__Y53,21,0);
    VL_SIG(__Vdly__v__DOT__Y54,21,0);
    VL_SIG(__Vdly__v__DOT__Y55,21,0);
    VL_SIG(__Vdly__v__DOT__Y48,21,0);
    VL_SIG(__Vdly__v__DOT__Y49,21,0);
    VL_SIG(__Vdly__v__DOT__Y50,21,0);
    VL_SIG(__Vdly__v__DOT__Y51,21,0);
    VL_SIG(__Vdly__v__DOT__Y44,21,0);
    VL_SIG(__Vdly__v__DOT__Y45,21,0);
    VL_SIG(__Vdly__v__DOT__Y46,21,0);
    VL_SIG(__Vdly__v__DOT__Y47,21,0);
    VL_SIG(__Vdly__v__DOT__Y40,21,0);
    VL_SIG(__Vdly__v__DOT__Y41,21,0);
    VL_SIG(__Vdly__v__DOT__Y42,21,0);
    VL_SIG(__Vdly__v__DOT__Y43,21,0);
    VL_SIG(__Vdly__v__DOT__Y36,21,0);
    VL_SIG(__Vdly__v__DOT__Y37,21,0);
    VL_SIG(__Vdly__v__DOT__Y38,21,0);
    VL_SIG(__Vdly__v__DOT__Y39,21,0);
    VL_SIG(__Vdly__v__DOT__Y32,21,0);
    VL_SIG(__Vdly__v__DOT__Y33,21,0);
    VL_SIG(__Vdly__v__DOT__Y34,21,0);
    VL_SIG(__Vdly__v__DOT__Y35,21,0);
    VL_SIG(__Vdly__v__DOT__Y28,21,0);
    VL_SIG(__Vdly__v__DOT__Y29,21,0);
    VL_SIG(__Vdly__v__DOT__Y30,21,0);
    VL_SIG(__Vdly__v__DOT__Y31,21,0);
    VL_SIG(__Vdly__v__DOT__Y24,21,0);
    VL_SIG(__Vdly__v__DOT__Y25,21,0);
    VL_SIG(__Vdly__v__DOT__Y26,21,0);
    VL_SIG(__Vdly__v__DOT__Y27,21,0);
    VL_SIG(__Vdly__v__DOT__Y20,21,0);
    VL_SIG(__Vdly__v__DOT__Y21,21,0);
    VL_SIG(__Vdly__v__DOT__Y22,21,0);
    VL_SIG(__Vdly__v__DOT__Y23,21,0);
    VL_SIG(__Vdly__v__DOT__Y16,21,0);
    VL_SIG(__Vdly__v__DOT__Y17,21,0);
    VL_SIG(__Vdly__v__DOT__Y18,21,0);
    VL_SIG(__Vdly__v__DOT__Y19,21,0);
    VL_SIG(__Vdly__v__DOT__Y12,21,0);
    VL_SIG(__Vdly__v__DOT__Y13,21,0);
    VL_SIG(__Vdly__v__DOT__Y14,21,0);
    VL_SIG(__Vdly__v__DOT__Y15,21,0);
    VL_SIG(__Vdly__v__DOT__Y8,21,0);
    VL_SIG(__Vdly__v__DOT__Y9,21,0);
    VL_SIG(__Vdly__v__DOT__Y10,21,0);
    VL_SIG(__Vdly__v__DOT__Y11,21,0);
    VL_SIG(__Vdly__v__DOT__Y4,21,0);
    VL_SIG(__Vdly__v__DOT__Y5,21,0);
    VL_SIG(__Vdly__v__DOT__Y6,21,0);
    VL_SIG(__Vdly__v__DOT__Y7,21,0);
    VL_SIG(__Vdly__v__DOT__Y0,21,0);
    VL_SIG(__Vdly__v__DOT__Y1,21,0);
    VL_SIG(__Vdly__v__DOT__Y2,21,0);
    VL_SIG(__Vdly__v__DOT__Y3,21,0);
    // Body
    __Vdly__v__DOT__start = vlTOPp->v__DOT__start;
    __Vdly__v__DOT__cnt = vlTOPp->v__DOT__cnt;
    __Vdly__v__DOT__start_fft_flg = vlTOPp->v__DOT__start_fft_flg;
    __Vdly__v__DOT__fin_fft_flg = vlTOPp->v__DOT__fin_fft_flg;
    __Vdly__v__DOT__fft_culculating_flg = vlTOPp->v__DOT__fft_culculating_flg;
    __Vdly__v__DOT__cnt_o = vlTOPp->v__DOT__cnt_o;
    __Vdly__v__DOT__myFFT_module__DOT__stage = vlTOPp->v__DOT__myFFT_module__DOT__stage;
    __Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__stage_1_start_flg;
    __Vdly__v__DOT__myFFT_module__DOT__cnt = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
    __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg;
    __Vdly__v__DOT__myFFT_module__DOT__B15 = vlTOPp->v__DOT__myFFT_module__DOT__B15;
    __Vdly__v__DOT__myFFT_module__DOT__B31 = vlTOPp->v__DOT__myFFT_module__DOT__B31;
    __Vdly__v__DOT__myFFT_module__DOT__B47 = vlTOPp->v__DOT__myFFT_module__DOT__B47;
    __Vdly__v__DOT__myFFT_module__DOT__B63 = vlTOPp->v__DOT__myFFT_module__DOT__B63;
    __Vdly__v__DOT__myFFT_module__DOT__B14 = vlTOPp->v__DOT__myFFT_module__DOT__B14;
    __Vdly__v__DOT__myFFT_module__DOT__B30 = vlTOPp->v__DOT__myFFT_module__DOT__B30;
    __Vdly__v__DOT__myFFT_module__DOT__B46 = vlTOPp->v__DOT__myFFT_module__DOT__B46;
    __Vdly__v__DOT__myFFT_module__DOT__B62 = vlTOPp->v__DOT__myFFT_module__DOT__B62;
    __Vdly__v__DOT__myFFT_module__DOT__B13 = vlTOPp->v__DOT__myFFT_module__DOT__B13;
    __Vdly__v__DOT__myFFT_module__DOT__B29 = vlTOPp->v__DOT__myFFT_module__DOT__B29;
    __Vdly__v__DOT__myFFT_module__DOT__B45 = vlTOPp->v__DOT__myFFT_module__DOT__B45;
    __Vdly__v__DOT__myFFT_module__DOT__B61 = vlTOPp->v__DOT__myFFT_module__DOT__B61;
    __Vdly__v__DOT__myFFT_module__DOT__B12 = vlTOPp->v__DOT__myFFT_module__DOT__B12;
    __Vdly__v__DOT__myFFT_module__DOT__B28 = vlTOPp->v__DOT__myFFT_module__DOT__B28;
    __Vdly__v__DOT__myFFT_module__DOT__B44 = vlTOPp->v__DOT__myFFT_module__DOT__B44;
    __Vdly__v__DOT__myFFT_module__DOT__B60 = vlTOPp->v__DOT__myFFT_module__DOT__B60;
    __Vdly__v__DOT__myFFT_module__DOT__B11 = vlTOPp->v__DOT__myFFT_module__DOT__B11;
    __Vdly__v__DOT__myFFT_module__DOT__B27 = vlTOPp->v__DOT__myFFT_module__DOT__B27;
    __Vdly__v__DOT__myFFT_module__DOT__B43 = vlTOPp->v__DOT__myFFT_module__DOT__B43;
    __Vdly__v__DOT__myFFT_module__DOT__B59 = vlTOPp->v__DOT__myFFT_module__DOT__B59;
    __Vdly__v__DOT__myFFT_module__DOT__B10 = vlTOPp->v__DOT__myFFT_module__DOT__B10;
    __Vdly__v__DOT__myFFT_module__DOT__B26 = vlTOPp->v__DOT__myFFT_module__DOT__B26;
    __Vdly__v__DOT__myFFT_module__DOT__B42 = vlTOPp->v__DOT__myFFT_module__DOT__B42;
    __Vdly__v__DOT__myFFT_module__DOT__B58 = vlTOPp->v__DOT__myFFT_module__DOT__B58;
    __Vdly__v__DOT__myFFT_module__DOT__B9 = vlTOPp->v__DOT__myFFT_module__DOT__B9;
    __Vdly__v__DOT__myFFT_module__DOT__B25 = vlTOPp->v__DOT__myFFT_module__DOT__B25;
    __Vdly__v__DOT__myFFT_module__DOT__B41 = vlTOPp->v__DOT__myFFT_module__DOT__B41;
    __Vdly__v__DOT__myFFT_module__DOT__B57 = vlTOPp->v__DOT__myFFT_module__DOT__B57;
    __Vdly__v__DOT__myFFT_module__DOT__B8 = vlTOPp->v__DOT__myFFT_module__DOT__B8;
    __Vdly__v__DOT__myFFT_module__DOT__B24 = vlTOPp->v__DOT__myFFT_module__DOT__B24;
    __Vdly__v__DOT__myFFT_module__DOT__B40 = vlTOPp->v__DOT__myFFT_module__DOT__B40;
    __Vdly__v__DOT__myFFT_module__DOT__B56 = vlTOPp->v__DOT__myFFT_module__DOT__B56;
    __Vdly__v__DOT__myFFT_module__DOT__B7 = vlTOPp->v__DOT__myFFT_module__DOT__B7;
    __Vdly__v__DOT__myFFT_module__DOT__B23 = vlTOPp->v__DOT__myFFT_module__DOT__B23;
    __Vdly__v__DOT__myFFT_module__DOT__B39 = vlTOPp->v__DOT__myFFT_module__DOT__B39;
    __Vdly__v__DOT__myFFT_module__DOT__B55 = vlTOPp->v__DOT__myFFT_module__DOT__B55;
    __Vdly__v__DOT__myFFT_module__DOT__B6 = vlTOPp->v__DOT__myFFT_module__DOT__B6;
    __Vdly__v__DOT__myFFT_module__DOT__B22 = vlTOPp->v__DOT__myFFT_module__DOT__B22;
    __Vdly__v__DOT__myFFT_module__DOT__B38 = vlTOPp->v__DOT__myFFT_module__DOT__B38;
    __Vdly__v__DOT__myFFT_module__DOT__B54 = vlTOPp->v__DOT__myFFT_module__DOT__B54;
    __Vdly__v__DOT__myFFT_module__DOT__B5 = vlTOPp->v__DOT__myFFT_module__DOT__B5;
    __Vdly__v__DOT__myFFT_module__DOT__B21 = vlTOPp->v__DOT__myFFT_module__DOT__B21;
    __Vdly__v__DOT__myFFT_module__DOT__B37 = vlTOPp->v__DOT__myFFT_module__DOT__B37;
    __Vdly__v__DOT__myFFT_module__DOT__B53 = vlTOPp->v__DOT__myFFT_module__DOT__B53;
    __Vdly__v__DOT__myFFT_module__DOT__B4 = vlTOPp->v__DOT__myFFT_module__DOT__B4;
    __Vdly__v__DOT__myFFT_module__DOT__B20 = vlTOPp->v__DOT__myFFT_module__DOT__B20;
    __Vdly__v__DOT__myFFT_module__DOT__B36 = vlTOPp->v__DOT__myFFT_module__DOT__B36;
    __Vdly__v__DOT__myFFT_module__DOT__B52 = vlTOPp->v__DOT__myFFT_module__DOT__B52;
    __Vdly__v__DOT__myFFT_module__DOT__B3 = vlTOPp->v__DOT__myFFT_module__DOT__B3;
    __Vdly__v__DOT__myFFT_module__DOT__B19 = vlTOPp->v__DOT__myFFT_module__DOT__B19;
    __Vdly__v__DOT__myFFT_module__DOT__B35 = vlTOPp->v__DOT__myFFT_module__DOT__B35;
    __Vdly__v__DOT__myFFT_module__DOT__B51 = vlTOPp->v__DOT__myFFT_module__DOT__B51;
    __Vdly__v__DOT__myFFT_module__DOT__B2 = vlTOPp->v__DOT__myFFT_module__DOT__B2;
    __Vdly__v__DOT__myFFT_module__DOT__B18 = vlTOPp->v__DOT__myFFT_module__DOT__B18;
    __Vdly__v__DOT__myFFT_module__DOT__B34 = vlTOPp->v__DOT__myFFT_module__DOT__B34;
    __Vdly__v__DOT__myFFT_module__DOT__B50 = vlTOPp->v__DOT__myFFT_module__DOT__B50;
    __Vdly__v__DOT__myFFT_module__DOT__B1 = vlTOPp->v__DOT__myFFT_module__DOT__B1;
    __Vdly__v__DOT__myFFT_module__DOT__B17 = vlTOPp->v__DOT__myFFT_module__DOT__B17;
    __Vdly__v__DOT__myFFT_module__DOT__B33 = vlTOPp->v__DOT__myFFT_module__DOT__B33;
    __Vdly__v__DOT__myFFT_module__DOT__B49 = vlTOPp->v__DOT__myFFT_module__DOT__B49;
    __Vdly__v__DOT__myFFT_module__DOT__B0 = vlTOPp->v__DOT__myFFT_module__DOT__B0;
    __Vdly__v__DOT__myFFT_module__DOT__B16 = vlTOPp->v__DOT__myFFT_module__DOT__B16;
    __Vdly__v__DOT__myFFT_module__DOT__B32 = vlTOPp->v__DOT__myFFT_module__DOT__B32;
    __Vdly__v__DOT__myFFT_module__DOT__B48 = vlTOPp->v__DOT__myFFT_module__DOT__B48;
    __Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__stage_2_start_flg;
    __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2 
	= vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2;
    __Vdly__v__DOT__myFFT_module__DOT__C51 = vlTOPp->v__DOT__myFFT_module__DOT__C51;
    __Vdly__v__DOT__myFFT_module__DOT__C55 = vlTOPp->v__DOT__myFFT_module__DOT__C55;
    __Vdly__v__DOT__myFFT_module__DOT__C59 = vlTOPp->v__DOT__myFFT_module__DOT__C59;
    __Vdly__v__DOT__myFFT_module__DOT__C63 = vlTOPp->v__DOT__myFFT_module__DOT__C63;
    __Vdly__v__DOT__myFFT_module__DOT__C50 = vlTOPp->v__DOT__myFFT_module__DOT__C50;
    __Vdly__v__DOT__myFFT_module__DOT__C54 = vlTOPp->v__DOT__myFFT_module__DOT__C54;
    __Vdly__v__DOT__myFFT_module__DOT__C58 = vlTOPp->v__DOT__myFFT_module__DOT__C58;
    __Vdly__v__DOT__myFFT_module__DOT__C62 = vlTOPp->v__DOT__myFFT_module__DOT__C62;
    __Vdly__v__DOT__myFFT_module__DOT__C49 = vlTOPp->v__DOT__myFFT_module__DOT__C49;
    __Vdly__v__DOT__myFFT_module__DOT__C53 = vlTOPp->v__DOT__myFFT_module__DOT__C53;
    __Vdly__v__DOT__myFFT_module__DOT__C57 = vlTOPp->v__DOT__myFFT_module__DOT__C57;
    __Vdly__v__DOT__myFFT_module__DOT__C61 = vlTOPp->v__DOT__myFFT_module__DOT__C61;
    __Vdly__v__DOT__myFFT_module__DOT__C48 = vlTOPp->v__DOT__myFFT_module__DOT__C48;
    __Vdly__v__DOT__myFFT_module__DOT__C52 = vlTOPp->v__DOT__myFFT_module__DOT__C52;
    __Vdly__v__DOT__myFFT_module__DOT__C56 = vlTOPp->v__DOT__myFFT_module__DOT__C56;
    __Vdly__v__DOT__myFFT_module__DOT__C60 = vlTOPp->v__DOT__myFFT_module__DOT__C60;
    __Vdly__v__DOT__myFFT_module__DOT__C35 = vlTOPp->v__DOT__myFFT_module__DOT__C35;
    __Vdly__v__DOT__myFFT_module__DOT__C39 = vlTOPp->v__DOT__myFFT_module__DOT__C39;
    __Vdly__v__DOT__myFFT_module__DOT__C43 = vlTOPp->v__DOT__myFFT_module__DOT__C43;
    __Vdly__v__DOT__myFFT_module__DOT__C47 = vlTOPp->v__DOT__myFFT_module__DOT__C47;
    __Vdly__v__DOT__myFFT_module__DOT__C34 = vlTOPp->v__DOT__myFFT_module__DOT__C34;
    __Vdly__v__DOT__myFFT_module__DOT__C38 = vlTOPp->v__DOT__myFFT_module__DOT__C38;
    __Vdly__v__DOT__myFFT_module__DOT__C42 = vlTOPp->v__DOT__myFFT_module__DOT__C42;
    __Vdly__v__DOT__myFFT_module__DOT__C46 = vlTOPp->v__DOT__myFFT_module__DOT__C46;
    __Vdly__v__DOT__myFFT_module__DOT__C33 = vlTOPp->v__DOT__myFFT_module__DOT__C33;
    __Vdly__v__DOT__myFFT_module__DOT__C37 = vlTOPp->v__DOT__myFFT_module__DOT__C37;
    __Vdly__v__DOT__myFFT_module__DOT__C41 = vlTOPp->v__DOT__myFFT_module__DOT__C41;
    __Vdly__v__DOT__myFFT_module__DOT__C45 = vlTOPp->v__DOT__myFFT_module__DOT__C45;
    __Vdly__v__DOT__myFFT_module__DOT__C32 = vlTOPp->v__DOT__myFFT_module__DOT__C32;
    __Vdly__v__DOT__myFFT_module__DOT__C36 = vlTOPp->v__DOT__myFFT_module__DOT__C36;
    __Vdly__v__DOT__myFFT_module__DOT__C40 = vlTOPp->v__DOT__myFFT_module__DOT__C40;
    __Vdly__v__DOT__myFFT_module__DOT__C44 = vlTOPp->v__DOT__myFFT_module__DOT__C44;
    __Vdly__v__DOT__myFFT_module__DOT__C19 = vlTOPp->v__DOT__myFFT_module__DOT__C19;
    __Vdly__v__DOT__myFFT_module__DOT__C23 = vlTOPp->v__DOT__myFFT_module__DOT__C23;
    __Vdly__v__DOT__myFFT_module__DOT__C27 = vlTOPp->v__DOT__myFFT_module__DOT__C27;
    __Vdly__v__DOT__myFFT_module__DOT__C31 = vlTOPp->v__DOT__myFFT_module__DOT__C31;
    __Vdly__v__DOT__myFFT_module__DOT__C18 = vlTOPp->v__DOT__myFFT_module__DOT__C18;
    __Vdly__v__DOT__myFFT_module__DOT__C22 = vlTOPp->v__DOT__myFFT_module__DOT__C22;
    __Vdly__v__DOT__myFFT_module__DOT__C26 = vlTOPp->v__DOT__myFFT_module__DOT__C26;
    __Vdly__v__DOT__myFFT_module__DOT__C30 = vlTOPp->v__DOT__myFFT_module__DOT__C30;
    __Vdly__v__DOT__myFFT_module__DOT__C17 = vlTOPp->v__DOT__myFFT_module__DOT__C17;
    __Vdly__v__DOT__myFFT_module__DOT__C21 = vlTOPp->v__DOT__myFFT_module__DOT__C21;
    __Vdly__v__DOT__myFFT_module__DOT__C25 = vlTOPp->v__DOT__myFFT_module__DOT__C25;
    __Vdly__v__DOT__myFFT_module__DOT__C29 = vlTOPp->v__DOT__myFFT_module__DOT__C29;
    __Vdly__v__DOT__myFFT_module__DOT__C16 = vlTOPp->v__DOT__myFFT_module__DOT__C16;
    __Vdly__v__DOT__myFFT_module__DOT__C20 = vlTOPp->v__DOT__myFFT_module__DOT__C20;
    __Vdly__v__DOT__myFFT_module__DOT__C24 = vlTOPp->v__DOT__myFFT_module__DOT__C24;
    __Vdly__v__DOT__myFFT_module__DOT__C28 = vlTOPp->v__DOT__myFFT_module__DOT__C28;
    __Vdly__v__DOT__myFFT_module__DOT__C3 = vlTOPp->v__DOT__myFFT_module__DOT__C3;
    __Vdly__v__DOT__myFFT_module__DOT__C7 = vlTOPp->v__DOT__myFFT_module__DOT__C7;
    __Vdly__v__DOT__myFFT_module__DOT__C11 = vlTOPp->v__DOT__myFFT_module__DOT__C11;
    __Vdly__v__DOT__myFFT_module__DOT__C15 = vlTOPp->v__DOT__myFFT_module__DOT__C15;
    __Vdly__v__DOT__myFFT_module__DOT__C2 = vlTOPp->v__DOT__myFFT_module__DOT__C2;
    __Vdly__v__DOT__myFFT_module__DOT__C6 = vlTOPp->v__DOT__myFFT_module__DOT__C6;
    __Vdly__v__DOT__myFFT_module__DOT__C10 = vlTOPp->v__DOT__myFFT_module__DOT__C10;
    __Vdly__v__DOT__myFFT_module__DOT__C14 = vlTOPp->v__DOT__myFFT_module__DOT__C14;
    __Vdly__v__DOT__myFFT_module__DOT__C1 = vlTOPp->v__DOT__myFFT_module__DOT__C1;
    __Vdly__v__DOT__myFFT_module__DOT__C5 = vlTOPp->v__DOT__myFFT_module__DOT__C5;
    __Vdly__v__DOT__myFFT_module__DOT__C9 = vlTOPp->v__DOT__myFFT_module__DOT__C9;
    __Vdly__v__DOT__myFFT_module__DOT__C13 = vlTOPp->v__DOT__myFFT_module__DOT__C13;
    __Vdly__v__DOT__myFFT_module__DOT__C0 = vlTOPp->v__DOT__myFFT_module__DOT__C0;
    __Vdly__v__DOT__myFFT_module__DOT__C4 = vlTOPp->v__DOT__myFFT_module__DOT__C4;
    __Vdly__v__DOT__myFFT_module__DOT__C8 = vlTOPp->v__DOT__myFFT_module__DOT__C8;
    __Vdly__v__DOT__myFFT_module__DOT__C12 = vlTOPp->v__DOT__myFFT_module__DOT__C12;
    __Vdly__v__DOT__myFFT_module__DOT__cnt3 = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
    __Vdly__v__DOT__myFFT_module__DOT__stage_3_start_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__stage_3_start_flg;
    __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3 
	= vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3;
    __Vdly__v__DOT__Y60 = vlTOPp->v__DOT__Y60;
    __Vdly__v__DOT__Y61 = vlTOPp->v__DOT__Y61;
    __Vdly__v__DOT__Y62 = vlTOPp->v__DOT__Y62;
    __Vdly__v__DOT__Y63 = vlTOPp->v__DOT__Y63;
    __Vdly__v__DOT__Y56 = vlTOPp->v__DOT__Y56;
    __Vdly__v__DOT__Y57 = vlTOPp->v__DOT__Y57;
    __Vdly__v__DOT__Y58 = vlTOPp->v__DOT__Y58;
    __Vdly__v__DOT__Y59 = vlTOPp->v__DOT__Y59;
    __Vdly__v__DOT__Y52 = vlTOPp->v__DOT__Y52;
    __Vdly__v__DOT__Y53 = vlTOPp->v__DOT__Y53;
    __Vdly__v__DOT__Y54 = vlTOPp->v__DOT__Y54;
    __Vdly__v__DOT__Y55 = vlTOPp->v__DOT__Y55;
    __Vdly__v__DOT__Y48 = vlTOPp->v__DOT__Y48;
    __Vdly__v__DOT__Y49 = vlTOPp->v__DOT__Y49;
    __Vdly__v__DOT__Y50 = vlTOPp->v__DOT__Y50;
    __Vdly__v__DOT__Y51 = vlTOPp->v__DOT__Y51;
    __Vdly__v__DOT__Y44 = vlTOPp->v__DOT__Y44;
    __Vdly__v__DOT__Y45 = vlTOPp->v__DOT__Y45;
    __Vdly__v__DOT__Y46 = vlTOPp->v__DOT__Y46;
    __Vdly__v__DOT__Y47 = vlTOPp->v__DOT__Y47;
    __Vdly__v__DOT__Y40 = vlTOPp->v__DOT__Y40;
    __Vdly__v__DOT__Y41 = vlTOPp->v__DOT__Y41;
    __Vdly__v__DOT__Y42 = vlTOPp->v__DOT__Y42;
    __Vdly__v__DOT__Y43 = vlTOPp->v__DOT__Y43;
    __Vdly__v__DOT__Y36 = vlTOPp->v__DOT__Y36;
    __Vdly__v__DOT__Y37 = vlTOPp->v__DOT__Y37;
    __Vdly__v__DOT__Y38 = vlTOPp->v__DOT__Y38;
    __Vdly__v__DOT__Y39 = vlTOPp->v__DOT__Y39;
    __Vdly__v__DOT__Y32 = vlTOPp->v__DOT__Y32;
    __Vdly__v__DOT__Y33 = vlTOPp->v__DOT__Y33;
    __Vdly__v__DOT__Y34 = vlTOPp->v__DOT__Y34;
    __Vdly__v__DOT__Y35 = vlTOPp->v__DOT__Y35;
    __Vdly__v__DOT__Y28 = vlTOPp->v__DOT__Y28;
    __Vdly__v__DOT__Y29 = vlTOPp->v__DOT__Y29;
    __Vdly__v__DOT__Y30 = vlTOPp->v__DOT__Y30;
    __Vdly__v__DOT__Y31 = vlTOPp->v__DOT__Y31;
    __Vdly__v__DOT__Y24 = vlTOPp->v__DOT__Y24;
    __Vdly__v__DOT__Y25 = vlTOPp->v__DOT__Y25;
    __Vdly__v__DOT__Y26 = vlTOPp->v__DOT__Y26;
    __Vdly__v__DOT__Y27 = vlTOPp->v__DOT__Y27;
    __Vdly__v__DOT__Y20 = vlTOPp->v__DOT__Y20;
    __Vdly__v__DOT__Y21 = vlTOPp->v__DOT__Y21;
    __Vdly__v__DOT__Y22 = vlTOPp->v__DOT__Y22;
    __Vdly__v__DOT__Y23 = vlTOPp->v__DOT__Y23;
    __Vdly__v__DOT__Y16 = vlTOPp->v__DOT__Y16;
    __Vdly__v__DOT__Y17 = vlTOPp->v__DOT__Y17;
    __Vdly__v__DOT__Y18 = vlTOPp->v__DOT__Y18;
    __Vdly__v__DOT__Y19 = vlTOPp->v__DOT__Y19;
    __Vdly__v__DOT__Y12 = vlTOPp->v__DOT__Y12;
    __Vdly__v__DOT__Y13 = vlTOPp->v__DOT__Y13;
    __Vdly__v__DOT__Y14 = vlTOPp->v__DOT__Y14;
    __Vdly__v__DOT__Y15 = vlTOPp->v__DOT__Y15;
    __Vdly__v__DOT__Y8 = vlTOPp->v__DOT__Y8;
    __Vdly__v__DOT__Y9 = vlTOPp->v__DOT__Y9;
    __Vdly__v__DOT__Y10 = vlTOPp->v__DOT__Y10;
    __Vdly__v__DOT__Y11 = vlTOPp->v__DOT__Y11;
    __Vdly__v__DOT__Y4 = vlTOPp->v__DOT__Y4;
    __Vdly__v__DOT__Y5 = vlTOPp->v__DOT__Y5;
    __Vdly__v__DOT__Y6 = vlTOPp->v__DOT__Y6;
    __Vdly__v__DOT__Y7 = vlTOPp->v__DOT__Y7;
    __Vdly__v__DOT__Y0 = vlTOPp->v__DOT__Y0;
    __Vdly__v__DOT__Y1 = vlTOPp->v__DOT__Y1;
    __Vdly__v__DOT__Y2 = vlTOPp->v__DOT__Y2;
    __Vdly__v__DOT__Y3 = vlTOPp->v__DOT__Y3;
    __Vdly__v__DOT__myFFT_module__DOT__stage_4_start_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__stage_4_start_flg;
    __Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__stage_5_start_flg;
    __Vdly__v__DOT__valid_o_from_myFFT = vlTOPp->v__DOT__valid_o_from_myFFT;
    // ALWAYS at ../myfft.v:34
    if (vlTOPp->RST) {
	if ((0 == (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage))) {
	    if (vlTOPp->v__DOT__start) {
		__Vdly__v__DOT__myFFT_module__DOT__stage = 1;
		__Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg = 1;
		__Vdly__v__DOT__myFFT_module__DOT__cnt = 0;
	    }
	}
	if (vlTOPp->v__DOT__myFFT_module__DOT__stage_1_start_flg) {
	    if (vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg) {
		vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly = 0;
		if (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.valid_o) {
		    __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg = 0;
		    if ((0x40 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
			__Vdly__v__DOT__myFFT_module__DOT__cnt 
			    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
		    } else {
			if ((0x20 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
			    __Vdly__v__DOT__myFFT_module__DOT__cnt 
				= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
			} else {
			    if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				__Vdly__v__DOT__myFFT_module__DOT__cnt 
				    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
			    } else {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__B15 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B31 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B47 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B63 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__B14 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B30 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B46 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B62 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__B13 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B29 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B45 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B61 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__B12 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B28 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B44 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B60 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__B11 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B27 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B43 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B59 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__B10 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B26 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B42 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B58 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__B9 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B25 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B41 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B57 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__B8 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B24 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B40 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B56 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					}
				    }
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__B7 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B23 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B39 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B55 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__B6 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B22 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B38 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B54 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__B5 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B21 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B37 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B53 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__B4 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B20 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B36 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B52 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__B3 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B19 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B35 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B51 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__B2 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B18 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B34 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B50 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__B1 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B17 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B33 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B49 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__B0 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__B16 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B32 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__B48 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					}
				    }
				}
			    }
			}
		    }
		    __Vdly__v__DOT__myFFT_module__DOT__cnt 
			= (0x7f & ((IData)(1) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt)));
		    if (((IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt) 
			 > 0xf)) {
			__Vdly__v__DOT__myFFT_module__DOT__stage 
			    = (0xf & ((IData)(1) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage)));
			__Vdly__v__DOT__myFFT_module__DOT__cnt = 0;
			__Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg = 0;
			__Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg = 1;
			vlTOPp->v__DOT__myFFT_module__DOT__k2 = 0;
		    }
		}
	    } else {
		if ((0x40 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
		    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 = 0;
		    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 = 0;
		    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 = 0;
		    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 = 0;
		} else {
		    if ((0x20 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
			vlTOPp->v__DOT__myFFT_module__DOT__AIN0 = 0;
			vlTOPp->v__DOT__myFFT_module__DOT__AIN1 = 0;
			vlTOPp->v__DOT__myFFT_module__DOT__AIN2 = 0;
			vlTOPp->v__DOT__myFFT_module__DOT__AIN3 = 0;
		    } else {
			if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
			    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 = 0;
			    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 = 0;
			    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 = 0;
			    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 = 0;
			} else {
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A15;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A31;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A47;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A63;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A14;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A30;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A46;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A62;
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A13;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A29;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A45;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A61;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A12;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A28;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A44;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A60;
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A11;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A27;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A43;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A59;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A10;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A26;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A42;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A58;
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A9;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A25;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A41;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A57;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A8;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A24;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A40;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A56;
					}
				    }
				}
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A7;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A23;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A39;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A55;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A6;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A22;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A38;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A54;
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A5;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A21;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A37;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A53;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A4;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A20;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A36;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A52;
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A3;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A19;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A35;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A51;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A2;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A18;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A34;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A50;
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A1;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A17;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A33;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A49;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
						= vlTOPp->v__DOT__A0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
						= vlTOPp->v__DOT__A16;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
						= vlTOPp->v__DOT__A32;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
						= vlTOPp->v__DOT__A48;
					}
				    }
				}
			    }
			}
		    }
		}
		__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg = 1;
		vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly = 1;
		vlTOPp->v__DOT__myFFT_module__DOT__k1 
		    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
	    }
	}
	if (vlTOPp->v__DOT__myFFT_module__DOT__stage_2_start_flg) {
	    if (vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2) {
		vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_2 = 0;
		if (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.valid_o) {
		    __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2 = 0;
		    if ((0x40 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
			__Vdly__v__DOT__myFFT_module__DOT__cnt 
			    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
		    } else {
			if ((0x20 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
			    if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					__Vdly__v__DOT__myFFT_module__DOT__cnt 
					    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__C51 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C55 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C59 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C63 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__C50 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C54 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C58 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C62 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__C49 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C53 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C57 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C61 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__C48 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C52 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C56 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C60 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					}
				    }
				}
			    } else {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					__Vdly__v__DOT__myFFT_module__DOT__cnt 
					    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__C35 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C39 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C43 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C47 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__C34 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C38 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C42 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C46 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__C33 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C37 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C41 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C45 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__C32 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C36 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C40 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C44 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					__Vdly__v__DOT__myFFT_module__DOT__cnt 
					    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__C19 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C23 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C27 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C31 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__C18 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C22 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C26 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C30 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__C17 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C21 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C25 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C29 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__C16 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C20 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C24 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C28 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					}
				    }
				}
			    } else {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					__Vdly__v__DOT__myFFT_module__DOT__cnt 
					    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__C3 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C7 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C11 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C15 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__C2 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C6 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C10 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C14 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__C1 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C5 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C9 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C13 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__C0 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
						__Vdly__v__DOT__myFFT_module__DOT__C4 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C8 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__C12 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					}
				    }
				}
			    }
			}
		    }
		    __Vdly__v__DOT__myFFT_module__DOT__cnt 
			= (0x7f & ((IData)(1) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt)));
		    if ((0 == VL_MODDIV_III(32, ((IData)(1) 
						 + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt)), (IData)(4)))) {
			__Vdly__v__DOT__myFFT_module__DOT__cnt 
			    = (0x7f & ((IData)(0xd) 
				       + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt)));
		    }
		    if (((IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt) 
			 > 0x33)) {
			__Vdly__v__DOT__myFFT_module__DOT__stage 
			    = (0xf & ((IData)(1) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage)));
			__Vdly__v__DOT__myFFT_module__DOT__cnt3 = 0;
			__Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg = 0;
			__Vdly__v__DOT__myFFT_module__DOT__stage_3_start_flg = 1;
			vlTOPp->v__DOT__myFFT_module__DOT__k3 = 0;
		    }
		}
	    } else {
		if ((0x40 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
		    __Vdly__v__DOT__myFFT_module__DOT__cnt 
			= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
		} else {
		    if ((0x20 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
			if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				__Vdly__v__DOT__myFFT_module__DOT__cnt 
				    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B51;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B55;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B59;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B63;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B50;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B54;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B58;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B62;
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B49;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B53;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B57;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B61;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B48;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B52;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B56;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B60;
					}
				    }
				}
			    }
			} else {
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				__Vdly__v__DOT__myFFT_module__DOT__cnt 
				    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B35;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B39;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B43;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B47;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B34;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B38;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B42;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B46;
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B33;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B37;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B41;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B45;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B32;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B36;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B40;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B44;
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				__Vdly__v__DOT__myFFT_module__DOT__cnt 
				    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B19;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B23;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B27;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B31;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B18;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B22;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B26;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B30;
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B17;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B21;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B25;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B29;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B16;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B20;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B24;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B28;
					}
				    }
				}
			    }
			} else {
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				__Vdly__v__DOT__myFFT_module__DOT__cnt 
				    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B3;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B7;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B11;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B15;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B2;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B6;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B10;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B14;
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B1;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B5;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B9;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B13;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
						= vlTOPp->v__DOT__myFFT_module__DOT__B0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
						= vlTOPp->v__DOT__myFFT_module__DOT__B4;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
						= vlTOPp->v__DOT__myFFT_module__DOT__B8;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
						= vlTOPp->v__DOT__myFFT_module__DOT__B12;
					}
				    }
				}
			    }
			}
		    }
		}
		vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_2 = 1;
		__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2 = 1;
		vlTOPp->v__DOT__myFFT_module__DOT__k2 
		    = (0x7f & (VL_MODDIV_III(32, (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt), (IData)(0x10)) 
			       << 2));
	    }
	}
	if (vlTOPp->v__DOT__myFFT_module__DOT__stage_3_start_flg) {
	    if (vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3) {
		vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_3 = 0;
		if (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.valid_o) {
		    __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3 = 0;
		    if ((0x40 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
			__Vdly__v__DOT__myFFT_module__DOT__cnt3 
			    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
		    } else {
			if ((0x20 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
			    if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y60 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y61 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y62 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y63 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y56 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y57 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y58 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y59 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    }
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y52 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y53 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y54 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y55 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y48 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y49 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y50 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y51 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    }
				}
			    } else {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y44 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y45 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y46 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y47 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y40 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y41 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y42 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y43 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    }
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y36 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y37 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y38 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y39 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y32 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y33 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y34 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y35 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y28 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y29 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y30 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y31 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y24 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y25 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y26 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y27 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    }
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y20 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y21 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y22 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y23 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y16 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y17 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y18 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y19 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    }
				}
			    } else {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y12 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y13 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y14 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y15 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y8 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y9 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y10 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y11 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    }
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y4 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y5 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y6 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y7 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
						= vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
						__Vdly__v__DOT__myFFT_module__DOT__cnt3 
						    = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
					    } else {
						__Vdly__v__DOT__Y0 
						    = 
						    ((0x3ff800 
						      & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   >> 0xb) 
							  + 
							  (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
							   >> 0xb)) 
							 << 0xb)) 
						     | (0x7ff 
							& (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
							   + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
						__Vdly__v__DOT__Y1 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__Y2 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__Y3 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI));
					    }
					}
				    }
				}
			    }
			}
		    }
		    __Vdly__v__DOT__myFFT_module__DOT__cnt3 
			= (0x7f & ((IData)(4) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3)));
		    if (((IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3) 
			 > 0x3c)) {
			__Vdly__v__DOT__myFFT_module__DOT__stage 
			    = (0xf & ((IData)(1) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage)));
			__Vdly__v__DOT__myFFT_module__DOT__cnt3 = 0;
			__Vdly__v__DOT__myFFT_module__DOT__stage_3_start_flg = 0;
			__Vdly__v__DOT__myFFT_module__DOT__stage_4_start_flg = 1;
		    }
		}
	    } else {
		if ((0x40 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
		    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
		    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
		    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
		    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
		} else {
		    if ((0x20 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
			if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C60;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C61;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C62;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C63;
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C56;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C57;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C58;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C59;
					}
				    }
				}
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C52;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C53;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C54;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C55;
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C48;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C49;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C50;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C51;
					}
				    }
				}
			    }
			} else {
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C44;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C45;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C46;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C47;
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C40;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C41;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C42;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C43;
					}
				    }
				}
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C36;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C37;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C38;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C39;
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C32;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C33;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C34;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C35;
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C28;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C29;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C30;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C31;
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C24;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C25;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C26;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C27;
					}
				    }
				}
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C20;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C21;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C22;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C23;
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C16;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C17;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C18;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C19;
					}
				    }
				}
			    }
			} else {
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C12;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C13;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C14;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C15;
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C8;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C9;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C10;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C11;
					}
				    }
				}
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C4;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C5;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C6;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C7;
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3))) {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 = 0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 = 0;
					} else {
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
						= vlTOPp->v__DOT__myFFT_module__DOT__C0;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
						= vlTOPp->v__DOT__myFFT_module__DOT__C1;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
						= vlTOPp->v__DOT__myFFT_module__DOT__C2;
					    vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
						= vlTOPp->v__DOT__myFFT_module__DOT__C3;
					}
				    }
				}
			    }
			}
		    }
		}
		vlTOPp->v__DOT__myFFT_module__DOT__k3 = 0;
		vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_3 = 1;
		__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3 = 1;
	    }
	}
	if (vlTOPp->v__DOT__myFFT_module__DOT__stage_4_start_flg) {
	    __Vdly__v__DOT__Y0 = vlTOPp->v__DOT__Y0;
	    __Vdly__v__DOT__Y4 = vlTOPp->v__DOT__Y4;
	    __Vdly__v__DOT__Y8 = vlTOPp->v__DOT__Y8;
	    __Vdly__v__DOT__Y12 = vlTOPp->v__DOT__Y12;
	    __Vdly__v__DOT__Y16 = vlTOPp->v__DOT__Y1;
	    __Vdly__v__DOT__Y17 = vlTOPp->v__DOT__Y17;
	    __Vdly__v__DOT__Y20 = vlTOPp->v__DOT__Y5;
	    __Vdly__v__DOT__Y21 = vlTOPp->v__DOT__Y21;
	    __Vdly__v__DOT__Y24 = vlTOPp->v__DOT__Y9;
	    __Vdly__v__DOT__Y25 = vlTOPp->v__DOT__Y25;
	    __Vdly__v__DOT__Y28 = vlTOPp->v__DOT__Y13;
	    __Vdly__v__DOT__Y29 = vlTOPp->v__DOT__Y29;
	    __Vdly__v__DOT__Y32 = vlTOPp->v__DOT__Y2;
	    __Vdly__v__DOT__Y33 = vlTOPp->v__DOT__Y18;
	    __Vdly__v__DOT__Y34 = vlTOPp->v__DOT__Y34;
	    __Vdly__v__DOT__Y36 = vlTOPp->v__DOT__Y6;
	    __Vdly__v__DOT__Y37 = vlTOPp->v__DOT__Y22;
	    __Vdly__v__DOT__Y38 = vlTOPp->v__DOT__Y38;
	    __Vdly__v__DOT__Y40 = vlTOPp->v__DOT__Y10;
	    __Vdly__v__DOT__Y41 = vlTOPp->v__DOT__Y26;
	    __Vdly__v__DOT__Y42 = vlTOPp->v__DOT__Y42;
	    __Vdly__v__DOT__Y44 = vlTOPp->v__DOT__Y14;
	    __Vdly__v__DOT__Y45 = vlTOPp->v__DOT__Y30;
	    __Vdly__v__DOT__Y46 = vlTOPp->v__DOT__Y46;
	    __Vdly__v__DOT__Y48 = vlTOPp->v__DOT__Y3;
	    __Vdly__v__DOT__Y49 = vlTOPp->v__DOT__Y19;
	    __Vdly__v__DOT__Y50 = vlTOPp->v__DOT__Y35;
	    __Vdly__v__DOT__Y51 = vlTOPp->v__DOT__Y51;
	    __Vdly__v__DOT__Y52 = vlTOPp->v__DOT__Y7;
	    __Vdly__v__DOT__Y53 = vlTOPp->v__DOT__Y23;
	    __Vdly__v__DOT__Y54 = vlTOPp->v__DOT__Y39;
	    __Vdly__v__DOT__Y55 = vlTOPp->v__DOT__Y55;
	    __Vdly__v__DOT__Y56 = vlTOPp->v__DOT__Y11;
	    __Vdly__v__DOT__Y57 = vlTOPp->v__DOT__Y27;
	    __Vdly__v__DOT__Y58 = vlTOPp->v__DOT__Y43;
	    __Vdly__v__DOT__Y59 = vlTOPp->v__DOT__Y59;
	    __Vdly__v__DOT__Y60 = vlTOPp->v__DOT__Y15;
	    __Vdly__v__DOT__Y61 = vlTOPp->v__DOT__Y31;
	    __Vdly__v__DOT__Y62 = vlTOPp->v__DOT__Y47;
	    __Vdly__v__DOT__Y63 = vlTOPp->v__DOT__Y63;
	    __Vdly__v__DOT__myFFT_module__DOT__stage 
		= (0xf & ((IData)(1) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage)));
	    __Vdly__v__DOT__myFFT_module__DOT__stage_4_start_flg = 0;
	    __Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg = 1;
	    __Vdly__v__DOT__valid_o_from_myFFT = 1;
	    vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly = 0;
	    __Vdly__v__DOT__Y1 = vlTOPp->v__DOT__Y16;
	    __Vdly__v__DOT__Y2 = vlTOPp->v__DOT__Y32;
	    __Vdly__v__DOT__Y3 = vlTOPp->v__DOT__Y48;
	    __Vdly__v__DOT__Y5 = vlTOPp->v__DOT__Y20;
	    __Vdly__v__DOT__Y6 = vlTOPp->v__DOT__Y36;
	    __Vdly__v__DOT__Y7 = vlTOPp->v__DOT__Y52;
	    __Vdly__v__DOT__Y9 = vlTOPp->v__DOT__Y24;
	    __Vdly__v__DOT__Y10 = vlTOPp->v__DOT__Y40;
	    __Vdly__v__DOT__Y11 = vlTOPp->v__DOT__Y56;
	    __Vdly__v__DOT__Y13 = vlTOPp->v__DOT__Y28;
	    __Vdly__v__DOT__Y14 = vlTOPp->v__DOT__Y44;
	    __Vdly__v__DOT__Y15 = vlTOPp->v__DOT__Y60;
	    __Vdly__v__DOT__Y18 = vlTOPp->v__DOT__Y33;
	    __Vdly__v__DOT__Y19 = vlTOPp->v__DOT__Y49;
	    __Vdly__v__DOT__Y22 = vlTOPp->v__DOT__Y37;
	    __Vdly__v__DOT__Y23 = vlTOPp->v__DOT__Y53;
	    __Vdly__v__DOT__Y26 = vlTOPp->v__DOT__Y41;
	    __Vdly__v__DOT__Y27 = vlTOPp->v__DOT__Y57;
	    __Vdly__v__DOT__Y30 = vlTOPp->v__DOT__Y45;
	    __Vdly__v__DOT__Y31 = vlTOPp->v__DOT__Y61;
	    __Vdly__v__DOT__Y35 = vlTOPp->v__DOT__Y50;
	    __Vdly__v__DOT__Y39 = vlTOPp->v__DOT__Y54;
	    __Vdly__v__DOT__Y43 = vlTOPp->v__DOT__Y58;
	    __Vdly__v__DOT__Y47 = vlTOPp->v__DOT__Y62;
	}
	if (vlTOPp->v__DOT__myFFT_module__DOT__stage_5_start_flg) {
	    __Vdly__v__DOT__valid_o_from_myFFT = 0;
	    __Vdly__v__DOT__myFFT_module__DOT__stage = 0;
	    __Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg = 0;
	    vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly = 0;
	}
    } else {
	__Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg = 0;
	__Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg = 0;
	__Vdly__v__DOT__myFFT_module__DOT__stage_3_start_flg = 0;
	__Vdly__v__DOT__myFFT_module__DOT__stage_4_start_flg = 0;
	__Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg = 0;
	__Vdly__v__DOT__myFFT_module__DOT__stage = 0;
	__Vdly__v__DOT__myFFT_module__DOT__cnt = 0;
	vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly = 0;
	vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_2 = 0;
	vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_3 = 0;
	__Vdly__v__DOT__valid_o_from_myFFT = 0;
	vlTOPp->v__DOT__myFFT_module__DOT__k1 = 0;
	__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg = 0;
	__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2 = 0;
	__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3 = 0;
    }
    vlTOPp->v__DOT__myFFT_module__DOT__stage = __Vdly__v__DOT__myFFT_module__DOT__stage;
    vlTOPp->v__DOT__myFFT_module__DOT__stage_1_start_flg 
	= __Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg;
    vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg 
	= __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg;
    vlTOPp->v__DOT__myFFT_module__DOT__cnt = __Vdly__v__DOT__myFFT_module__DOT__cnt;
    vlTOPp->v__DOT__myFFT_module__DOT__stage_2_start_flg 
	= __Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg;
    vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2 
	= __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2;
    vlTOPp->v__DOT__myFFT_module__DOT__B51 = __Vdly__v__DOT__myFFT_module__DOT__B51;
    vlTOPp->v__DOT__myFFT_module__DOT__B55 = __Vdly__v__DOT__myFFT_module__DOT__B55;
    vlTOPp->v__DOT__myFFT_module__DOT__B59 = __Vdly__v__DOT__myFFT_module__DOT__B59;
    vlTOPp->v__DOT__myFFT_module__DOT__B63 = __Vdly__v__DOT__myFFT_module__DOT__B63;
    vlTOPp->v__DOT__myFFT_module__DOT__B50 = __Vdly__v__DOT__myFFT_module__DOT__B50;
    vlTOPp->v__DOT__myFFT_module__DOT__B54 = __Vdly__v__DOT__myFFT_module__DOT__B54;
    vlTOPp->v__DOT__myFFT_module__DOT__B58 = __Vdly__v__DOT__myFFT_module__DOT__B58;
    vlTOPp->v__DOT__myFFT_module__DOT__B62 = __Vdly__v__DOT__myFFT_module__DOT__B62;
    vlTOPp->v__DOT__myFFT_module__DOT__B49 = __Vdly__v__DOT__myFFT_module__DOT__B49;
    vlTOPp->v__DOT__myFFT_module__DOT__B53 = __Vdly__v__DOT__myFFT_module__DOT__B53;
    vlTOPp->v__DOT__myFFT_module__DOT__B57 = __Vdly__v__DOT__myFFT_module__DOT__B57;
    vlTOPp->v__DOT__myFFT_module__DOT__B61 = __Vdly__v__DOT__myFFT_module__DOT__B61;
    vlTOPp->v__DOT__myFFT_module__DOT__B48 = __Vdly__v__DOT__myFFT_module__DOT__B48;
    vlTOPp->v__DOT__myFFT_module__DOT__B52 = __Vdly__v__DOT__myFFT_module__DOT__B52;
    vlTOPp->v__DOT__myFFT_module__DOT__B56 = __Vdly__v__DOT__myFFT_module__DOT__B56;
    vlTOPp->v__DOT__myFFT_module__DOT__B60 = __Vdly__v__DOT__myFFT_module__DOT__B60;
    vlTOPp->v__DOT__myFFT_module__DOT__B35 = __Vdly__v__DOT__myFFT_module__DOT__B35;
    vlTOPp->v__DOT__myFFT_module__DOT__B39 = __Vdly__v__DOT__myFFT_module__DOT__B39;
    vlTOPp->v__DOT__myFFT_module__DOT__B43 = __Vdly__v__DOT__myFFT_module__DOT__B43;
    vlTOPp->v__DOT__myFFT_module__DOT__B47 = __Vdly__v__DOT__myFFT_module__DOT__B47;
    vlTOPp->v__DOT__myFFT_module__DOT__B34 = __Vdly__v__DOT__myFFT_module__DOT__B34;
    vlTOPp->v__DOT__myFFT_module__DOT__B38 = __Vdly__v__DOT__myFFT_module__DOT__B38;
    vlTOPp->v__DOT__myFFT_module__DOT__B42 = __Vdly__v__DOT__myFFT_module__DOT__B42;
    vlTOPp->v__DOT__myFFT_module__DOT__B46 = __Vdly__v__DOT__myFFT_module__DOT__B46;
    vlTOPp->v__DOT__myFFT_module__DOT__B33 = __Vdly__v__DOT__myFFT_module__DOT__B33;
    vlTOPp->v__DOT__myFFT_module__DOT__B37 = __Vdly__v__DOT__myFFT_module__DOT__B37;
    vlTOPp->v__DOT__myFFT_module__DOT__B41 = __Vdly__v__DOT__myFFT_module__DOT__B41;
    vlTOPp->v__DOT__myFFT_module__DOT__B45 = __Vdly__v__DOT__myFFT_module__DOT__B45;
    vlTOPp->v__DOT__myFFT_module__DOT__B32 = __Vdly__v__DOT__myFFT_module__DOT__B32;
    vlTOPp->v__DOT__myFFT_module__DOT__B36 = __Vdly__v__DOT__myFFT_module__DOT__B36;
    vlTOPp->v__DOT__myFFT_module__DOT__B40 = __Vdly__v__DOT__myFFT_module__DOT__B40;
    vlTOPp->v__DOT__myFFT_module__DOT__B44 = __Vdly__v__DOT__myFFT_module__DOT__B44;
    vlTOPp->v__DOT__myFFT_module__DOT__B19 = __Vdly__v__DOT__myFFT_module__DOT__B19;
    vlTOPp->v__DOT__myFFT_module__DOT__B23 = __Vdly__v__DOT__myFFT_module__DOT__B23;
    vlTOPp->v__DOT__myFFT_module__DOT__B27 = __Vdly__v__DOT__myFFT_module__DOT__B27;
    vlTOPp->v__DOT__myFFT_module__DOT__B31 = __Vdly__v__DOT__myFFT_module__DOT__B31;
    vlTOPp->v__DOT__myFFT_module__DOT__B18 = __Vdly__v__DOT__myFFT_module__DOT__B18;
    vlTOPp->v__DOT__myFFT_module__DOT__B22 = __Vdly__v__DOT__myFFT_module__DOT__B22;
    vlTOPp->v__DOT__myFFT_module__DOT__B26 = __Vdly__v__DOT__myFFT_module__DOT__B26;
    vlTOPp->v__DOT__myFFT_module__DOT__B30 = __Vdly__v__DOT__myFFT_module__DOT__B30;
    vlTOPp->v__DOT__myFFT_module__DOT__B17 = __Vdly__v__DOT__myFFT_module__DOT__B17;
    vlTOPp->v__DOT__myFFT_module__DOT__B21 = __Vdly__v__DOT__myFFT_module__DOT__B21;
    vlTOPp->v__DOT__myFFT_module__DOT__B25 = __Vdly__v__DOT__myFFT_module__DOT__B25;
    vlTOPp->v__DOT__myFFT_module__DOT__B29 = __Vdly__v__DOT__myFFT_module__DOT__B29;
    vlTOPp->v__DOT__myFFT_module__DOT__B16 = __Vdly__v__DOT__myFFT_module__DOT__B16;
    vlTOPp->v__DOT__myFFT_module__DOT__B20 = __Vdly__v__DOT__myFFT_module__DOT__B20;
    vlTOPp->v__DOT__myFFT_module__DOT__B24 = __Vdly__v__DOT__myFFT_module__DOT__B24;
    vlTOPp->v__DOT__myFFT_module__DOT__B28 = __Vdly__v__DOT__myFFT_module__DOT__B28;
    vlTOPp->v__DOT__myFFT_module__DOT__B3 = __Vdly__v__DOT__myFFT_module__DOT__B3;
    vlTOPp->v__DOT__myFFT_module__DOT__B7 = __Vdly__v__DOT__myFFT_module__DOT__B7;
    vlTOPp->v__DOT__myFFT_module__DOT__B11 = __Vdly__v__DOT__myFFT_module__DOT__B11;
    vlTOPp->v__DOT__myFFT_module__DOT__B15 = __Vdly__v__DOT__myFFT_module__DOT__B15;
    vlTOPp->v__DOT__myFFT_module__DOT__B2 = __Vdly__v__DOT__myFFT_module__DOT__B2;
    vlTOPp->v__DOT__myFFT_module__DOT__B6 = __Vdly__v__DOT__myFFT_module__DOT__B6;
    vlTOPp->v__DOT__myFFT_module__DOT__B10 = __Vdly__v__DOT__myFFT_module__DOT__B10;
    vlTOPp->v__DOT__myFFT_module__DOT__B14 = __Vdly__v__DOT__myFFT_module__DOT__B14;
    vlTOPp->v__DOT__myFFT_module__DOT__B1 = __Vdly__v__DOT__myFFT_module__DOT__B1;
    vlTOPp->v__DOT__myFFT_module__DOT__B5 = __Vdly__v__DOT__myFFT_module__DOT__B5;
    vlTOPp->v__DOT__myFFT_module__DOT__B9 = __Vdly__v__DOT__myFFT_module__DOT__B9;
    vlTOPp->v__DOT__myFFT_module__DOT__B13 = __Vdly__v__DOT__myFFT_module__DOT__B13;
    vlTOPp->v__DOT__myFFT_module__DOT__B0 = __Vdly__v__DOT__myFFT_module__DOT__B0;
    vlTOPp->v__DOT__myFFT_module__DOT__B4 = __Vdly__v__DOT__myFFT_module__DOT__B4;
    vlTOPp->v__DOT__myFFT_module__DOT__B8 = __Vdly__v__DOT__myFFT_module__DOT__B8;
    vlTOPp->v__DOT__myFFT_module__DOT__B12 = __Vdly__v__DOT__myFFT_module__DOT__B12;
    vlTOPp->v__DOT__myFFT_module__DOT__stage_3_start_flg 
	= __Vdly__v__DOT__myFFT_module__DOT__stage_3_start_flg;
    vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3 
	= __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3;
    vlTOPp->v__DOT__myFFT_module__DOT__cnt3 = __Vdly__v__DOT__myFFT_module__DOT__cnt3;
    vlTOPp->v__DOT__myFFT_module__DOT__C60 = __Vdly__v__DOT__myFFT_module__DOT__C60;
    vlTOPp->v__DOT__myFFT_module__DOT__C61 = __Vdly__v__DOT__myFFT_module__DOT__C61;
    vlTOPp->v__DOT__myFFT_module__DOT__C62 = __Vdly__v__DOT__myFFT_module__DOT__C62;
    vlTOPp->v__DOT__myFFT_module__DOT__C63 = __Vdly__v__DOT__myFFT_module__DOT__C63;
    vlTOPp->v__DOT__myFFT_module__DOT__C56 = __Vdly__v__DOT__myFFT_module__DOT__C56;
    vlTOPp->v__DOT__myFFT_module__DOT__C57 = __Vdly__v__DOT__myFFT_module__DOT__C57;
    vlTOPp->v__DOT__myFFT_module__DOT__C58 = __Vdly__v__DOT__myFFT_module__DOT__C58;
    vlTOPp->v__DOT__myFFT_module__DOT__C59 = __Vdly__v__DOT__myFFT_module__DOT__C59;
    vlTOPp->v__DOT__myFFT_module__DOT__C52 = __Vdly__v__DOT__myFFT_module__DOT__C52;
    vlTOPp->v__DOT__myFFT_module__DOT__C53 = __Vdly__v__DOT__myFFT_module__DOT__C53;
    vlTOPp->v__DOT__myFFT_module__DOT__C54 = __Vdly__v__DOT__myFFT_module__DOT__C54;
    vlTOPp->v__DOT__myFFT_module__DOT__C55 = __Vdly__v__DOT__myFFT_module__DOT__C55;
    vlTOPp->v__DOT__myFFT_module__DOT__C48 = __Vdly__v__DOT__myFFT_module__DOT__C48;
    vlTOPp->v__DOT__myFFT_module__DOT__C49 = __Vdly__v__DOT__myFFT_module__DOT__C49;
    vlTOPp->v__DOT__myFFT_module__DOT__C50 = __Vdly__v__DOT__myFFT_module__DOT__C50;
    vlTOPp->v__DOT__myFFT_module__DOT__C51 = __Vdly__v__DOT__myFFT_module__DOT__C51;
    vlTOPp->v__DOT__myFFT_module__DOT__C44 = __Vdly__v__DOT__myFFT_module__DOT__C44;
    vlTOPp->v__DOT__myFFT_module__DOT__C45 = __Vdly__v__DOT__myFFT_module__DOT__C45;
    vlTOPp->v__DOT__myFFT_module__DOT__C46 = __Vdly__v__DOT__myFFT_module__DOT__C46;
    vlTOPp->v__DOT__myFFT_module__DOT__C47 = __Vdly__v__DOT__myFFT_module__DOT__C47;
    vlTOPp->v__DOT__myFFT_module__DOT__C40 = __Vdly__v__DOT__myFFT_module__DOT__C40;
    vlTOPp->v__DOT__myFFT_module__DOT__C41 = __Vdly__v__DOT__myFFT_module__DOT__C41;
    vlTOPp->v__DOT__myFFT_module__DOT__C42 = __Vdly__v__DOT__myFFT_module__DOT__C42;
    vlTOPp->v__DOT__myFFT_module__DOT__C43 = __Vdly__v__DOT__myFFT_module__DOT__C43;
    vlTOPp->v__DOT__myFFT_module__DOT__C36 = __Vdly__v__DOT__myFFT_module__DOT__C36;
    vlTOPp->v__DOT__myFFT_module__DOT__C37 = __Vdly__v__DOT__myFFT_module__DOT__C37;
    vlTOPp->v__DOT__myFFT_module__DOT__C38 = __Vdly__v__DOT__myFFT_module__DOT__C38;
    vlTOPp->v__DOT__myFFT_module__DOT__C39 = __Vdly__v__DOT__myFFT_module__DOT__C39;
    vlTOPp->v__DOT__myFFT_module__DOT__C32 = __Vdly__v__DOT__myFFT_module__DOT__C32;
    vlTOPp->v__DOT__myFFT_module__DOT__C33 = __Vdly__v__DOT__myFFT_module__DOT__C33;
    vlTOPp->v__DOT__myFFT_module__DOT__C34 = __Vdly__v__DOT__myFFT_module__DOT__C34;
    vlTOPp->v__DOT__myFFT_module__DOT__C35 = __Vdly__v__DOT__myFFT_module__DOT__C35;
    vlTOPp->v__DOT__myFFT_module__DOT__C28 = __Vdly__v__DOT__myFFT_module__DOT__C28;
    vlTOPp->v__DOT__myFFT_module__DOT__C29 = __Vdly__v__DOT__myFFT_module__DOT__C29;
    vlTOPp->v__DOT__myFFT_module__DOT__C30 = __Vdly__v__DOT__myFFT_module__DOT__C30;
    vlTOPp->v__DOT__myFFT_module__DOT__C31 = __Vdly__v__DOT__myFFT_module__DOT__C31;
    vlTOPp->v__DOT__myFFT_module__DOT__C24 = __Vdly__v__DOT__myFFT_module__DOT__C24;
    vlTOPp->v__DOT__myFFT_module__DOT__C25 = __Vdly__v__DOT__myFFT_module__DOT__C25;
    vlTOPp->v__DOT__myFFT_module__DOT__C26 = __Vdly__v__DOT__myFFT_module__DOT__C26;
    vlTOPp->v__DOT__myFFT_module__DOT__C27 = __Vdly__v__DOT__myFFT_module__DOT__C27;
    vlTOPp->v__DOT__myFFT_module__DOT__C20 = __Vdly__v__DOT__myFFT_module__DOT__C20;
    vlTOPp->v__DOT__myFFT_module__DOT__C21 = __Vdly__v__DOT__myFFT_module__DOT__C21;
    vlTOPp->v__DOT__myFFT_module__DOT__C22 = __Vdly__v__DOT__myFFT_module__DOT__C22;
    vlTOPp->v__DOT__myFFT_module__DOT__C23 = __Vdly__v__DOT__myFFT_module__DOT__C23;
    vlTOPp->v__DOT__myFFT_module__DOT__C16 = __Vdly__v__DOT__myFFT_module__DOT__C16;
    vlTOPp->v__DOT__myFFT_module__DOT__C17 = __Vdly__v__DOT__myFFT_module__DOT__C17;
    vlTOPp->v__DOT__myFFT_module__DOT__C18 = __Vdly__v__DOT__myFFT_module__DOT__C18;
    vlTOPp->v__DOT__myFFT_module__DOT__C19 = __Vdly__v__DOT__myFFT_module__DOT__C19;
    vlTOPp->v__DOT__myFFT_module__DOT__C12 = __Vdly__v__DOT__myFFT_module__DOT__C12;
    vlTOPp->v__DOT__myFFT_module__DOT__C13 = __Vdly__v__DOT__myFFT_module__DOT__C13;
    vlTOPp->v__DOT__myFFT_module__DOT__C14 = __Vdly__v__DOT__myFFT_module__DOT__C14;
    vlTOPp->v__DOT__myFFT_module__DOT__C15 = __Vdly__v__DOT__myFFT_module__DOT__C15;
    vlTOPp->v__DOT__myFFT_module__DOT__C8 = __Vdly__v__DOT__myFFT_module__DOT__C8;
    vlTOPp->v__DOT__myFFT_module__DOT__C9 = __Vdly__v__DOT__myFFT_module__DOT__C9;
    vlTOPp->v__DOT__myFFT_module__DOT__C10 = __Vdly__v__DOT__myFFT_module__DOT__C10;
    vlTOPp->v__DOT__myFFT_module__DOT__C11 = __Vdly__v__DOT__myFFT_module__DOT__C11;
    vlTOPp->v__DOT__myFFT_module__DOT__C4 = __Vdly__v__DOT__myFFT_module__DOT__C4;
    vlTOPp->v__DOT__myFFT_module__DOT__C5 = __Vdly__v__DOT__myFFT_module__DOT__C5;
    vlTOPp->v__DOT__myFFT_module__DOT__C6 = __Vdly__v__DOT__myFFT_module__DOT__C6;
    vlTOPp->v__DOT__myFFT_module__DOT__C7 = __Vdly__v__DOT__myFFT_module__DOT__C7;
    vlTOPp->v__DOT__myFFT_module__DOT__C0 = __Vdly__v__DOT__myFFT_module__DOT__C0;
    vlTOPp->v__DOT__myFFT_module__DOT__C1 = __Vdly__v__DOT__myFFT_module__DOT__C1;
    vlTOPp->v__DOT__myFFT_module__DOT__C2 = __Vdly__v__DOT__myFFT_module__DOT__C2;
    vlTOPp->v__DOT__myFFT_module__DOT__C3 = __Vdly__v__DOT__myFFT_module__DOT__C3;
    vlTOPp->v__DOT__myFFT_module__DOT__stage_4_start_flg 
	= __Vdly__v__DOT__myFFT_module__DOT__stage_4_start_flg;
    vlTOPp->v__DOT__myFFT_module__DOT__stage_5_start_flg 
	= __Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg;
    // ALWAYS at ../fft64.v:32
    if (vlTOPp->RST) {
	if (vlTOPp->v__DOT__start_fft_flg) {
	    __Vdly__v__DOT__start = 1;
	    __Vdly__v__DOT__cnt = 0;
	    if (vlTOPp->v__DOT__start) {
		__Vdly__v__DOT__start = 0;
		__Vdly__v__DOT__start_fft_flg = 0;
	    }
	} else {
	    if (((IData)(vlTOPp->v__DOT__fft_culculating_flg) 
		 <= 0)) {
		if (vlTOPp->valid_a) {
		    if ((0x40 & (IData)(vlTOPp->v__DOT__cnt))) {
			__Vdly__v__DOT__cnt = vlTOPp->v__DOT__cnt;
		    } else {
			if ((0x20 & (IData)(vlTOPp->v__DOT__cnt))) {
			    if ((0x10 & (IData)(vlTOPp->v__DOT__cnt))) {
				if ((8 & (IData)(vlTOPp->v__DOT__cnt))) {
				    if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A63 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A62 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A61 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A60 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A59 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A58 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A57 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A56 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    }
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A55 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A54 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A53 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A52 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A51 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A50 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A49 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A48 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    }
				}
			    } else {
				if ((8 & (IData)(vlTOPp->v__DOT__cnt))) {
				    if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A47 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A46 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A45 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A44 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A43 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A42 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A41 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A40 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    }
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A39 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A38 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A37 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A36 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A35 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A34 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A33 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A32 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x10 & (IData)(vlTOPp->v__DOT__cnt))) {
				if ((8 & (IData)(vlTOPp->v__DOT__cnt))) {
				    if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A31 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A30 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A29 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A28 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A27 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A26 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A25 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A24 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    }
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A23 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A22 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A21 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A20 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A19 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A18 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A17 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A16 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    }
				}
			    } else {
				if ((8 & (IData)(vlTOPp->v__DOT__cnt))) {
				    if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A15 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A14 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A13 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A12 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A11 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A10 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A9 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A8 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    }
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A7 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A6 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A5 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A4 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A3 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A2 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__cnt))) {
						vlTOPp->v__DOT__A1 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    } else {
						vlTOPp->v__DOT__A0 
						    = 
						    (((IData)(vlTOPp->ar) 
						      << 0xb) 
						     | (IData)(vlTOPp->ai));
					    }
					}
				    }
				}
			    }
			}
		    }
		    __Vdly__v__DOT__cnt = (0x7f & ((IData)(1) 
						   + (IData)(vlTOPp->v__DOT__cnt)));
		}
	    }
	}
	if (vlTOPp->v__DOT__valid_o_from_myFFT) {
	    __Vdly__v__DOT__fin_fft_flg = 1;
	}
	if (vlTOPp->v__DOT__fin_fft_flg) {
	    vlTOPp->valid_o = 1;
	    __Vdly__v__DOT__fft_culculating_flg = 0;
	    if ((0x40 & (IData)(vlTOPp->v__DOT__cnt_o))) {
		__Vdly__v__DOT__cnt = vlTOPp->v__DOT__cnt;
	    } else {
		if ((0x20 & (IData)(vlTOPp->v__DOT__cnt_o))) {
		    if ((0x10 & (IData)(vlTOPp->v__DOT__cnt_o))) {
			if ((8 & (IData)(vlTOPp->v__DOT__cnt_o))) {
			    if ((4 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y63 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y63);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y62 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y62);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y61 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y61);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y60 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y60);
				    }
				}
			    } else {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y59 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y59);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y58 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y58);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y57 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y57);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y56 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y56);
				    }
				}
			    }
			} else {
			    if ((4 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y55 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y55);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y54 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y54);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y53 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y53);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y52 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y52);
				    }
				}
			    } else {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y51 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y51);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y50 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y50);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y49 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y49);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y48 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y48);
				    }
				}
			    }
			}
		    } else {
			if ((8 & (IData)(vlTOPp->v__DOT__cnt_o))) {
			    if ((4 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y47 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y47);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y46 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y46);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y45 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y45);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y44 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y44);
				    }
				}
			    } else {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y43 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y43);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y42 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y42);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y41 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y41);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y40 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y40);
				    }
				}
			    }
			} else {
			    if ((4 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y39 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y39);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y38 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y38);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y37 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y37);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y36 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y36);
				    }
				}
			    } else {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y35 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y35);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y34 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y34);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y33 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y33);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y32 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y32);
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10 & (IData)(vlTOPp->v__DOT__cnt_o))) {
			if ((8 & (IData)(vlTOPp->v__DOT__cnt_o))) {
			    if ((4 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y31 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y31);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y30 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y30);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y29 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y29);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y28 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y28);
				    }
				}
			    } else {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y27 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y27);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y26 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y26);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y25 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y25);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y24 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y24);
				    }
				}
			    }
			} else {
			    if ((4 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y23 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y23);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y22 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y22);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y21 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y21);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y20 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y20);
				    }
				}
			    } else {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y19 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y19);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y18 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y18);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y17 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y17);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y16 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y16);
				    }
				}
			    }
			}
		    } else {
			if ((8 & (IData)(vlTOPp->v__DOT__cnt_o))) {
			    if ((4 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y15 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y15);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y14 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y14);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y13 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y13);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y12 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y12);
				    }
				}
			    } else {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y11 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y11);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y10 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y10);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y9 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y9);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y8 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y8);
				    }
				}
			    }
			} else {
			    if ((4 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y7 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y7);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y6 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y6);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y5 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y5);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y4 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y4);
				    }
				}
			    } else {
				if ((2 & (IData)(vlTOPp->v__DOT__cnt_o))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y3 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y3);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y2 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y2);
				    }
				} else {
				    if ((1 & (IData)(vlTOPp->v__DOT__cnt_o))) {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y1 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y1);
				    } else {
					vlTOPp->xr 
					    = (0x7ff 
					       & (vlTOPp->v__DOT__Y0 
						  >> 0xb));
					vlTOPp->xi 
					    = (0x7ff 
					       & vlTOPp->v__DOT__Y0);
				    }
				}
			    }
			}
		    }
		}
	    }
	    __Vdly__v__DOT__cnt_o = (0x7f & ((IData)(1) 
					     + (IData)(vlTOPp->v__DOT__cnt_o)));
	    if ((0x40 == (IData)(vlTOPp->v__DOT__cnt_o))) {
		__Vdly__v__DOT__cnt_o = 0;
		vlTOPp->valid_o = 0;
		__Vdly__v__DOT__fin_fft_flg = 0;
	    }
	}
	if (((IData)(vlTOPp->v__DOT__cnt) > 0x3f)) {
	    __Vdly__v__DOT__start_fft_flg = 1;
	    __Vdly__v__DOT__cnt = 0;
	    __Vdly__v__DOT__fft_culculating_flg = 1;
	}
    } else {
	__Vdly__v__DOT__start = 0;
	__Vdly__v__DOT__cnt_o = 0;
	__Vdly__v__DOT__cnt = 0;
	vlTOPp->valid_o = 0;
	__Vdly__v__DOT__start_fft_flg = 0;
	__Vdly__v__DOT__fft_culculating_flg = 0;
    }
    vlTOPp->v__DOT__start_fft_flg = __Vdly__v__DOT__start_fft_flg;
    vlTOPp->v__DOT__fft_culculating_flg = __Vdly__v__DOT__fft_culculating_flg;
    vlTOPp->v__DOT__cnt = __Vdly__v__DOT__cnt;
    vlTOPp->v__DOT__valid_o_from_myFFT = __Vdly__v__DOT__valid_o_from_myFFT;
    vlTOPp->v__DOT__fin_fft_flg = __Vdly__v__DOT__fin_fft_flg;
    vlTOPp->v__DOT__cnt_o = __Vdly__v__DOT__cnt_o;
    vlTOPp->v__DOT__start = __Vdly__v__DOT__start;
    vlTOPp->v__DOT__Y63 = __Vdly__v__DOT__Y63;
    vlTOPp->v__DOT__Y62 = __Vdly__v__DOT__Y62;
    vlTOPp->v__DOT__Y61 = __Vdly__v__DOT__Y61;
    vlTOPp->v__DOT__Y60 = __Vdly__v__DOT__Y60;
    vlTOPp->v__DOT__Y59 = __Vdly__v__DOT__Y59;
    vlTOPp->v__DOT__Y58 = __Vdly__v__DOT__Y58;
    vlTOPp->v__DOT__Y57 = __Vdly__v__DOT__Y57;
    vlTOPp->v__DOT__Y56 = __Vdly__v__DOT__Y56;
    vlTOPp->v__DOT__Y55 = __Vdly__v__DOT__Y55;
    vlTOPp->v__DOT__Y54 = __Vdly__v__DOT__Y54;
    vlTOPp->v__DOT__Y53 = __Vdly__v__DOT__Y53;
    vlTOPp->v__DOT__Y52 = __Vdly__v__DOT__Y52;
    vlTOPp->v__DOT__Y51 = __Vdly__v__DOT__Y51;
    vlTOPp->v__DOT__Y50 = __Vdly__v__DOT__Y50;
    vlTOPp->v__DOT__Y49 = __Vdly__v__DOT__Y49;
    vlTOPp->v__DOT__Y48 = __Vdly__v__DOT__Y48;
    vlTOPp->v__DOT__Y47 = __Vdly__v__DOT__Y47;
    vlTOPp->v__DOT__Y46 = __Vdly__v__DOT__Y46;
    vlTOPp->v__DOT__Y45 = __Vdly__v__DOT__Y45;
    vlTOPp->v__DOT__Y44 = __Vdly__v__DOT__Y44;
    vlTOPp->v__DOT__Y43 = __Vdly__v__DOT__Y43;
    vlTOPp->v__DOT__Y42 = __Vdly__v__DOT__Y42;
    vlTOPp->v__DOT__Y41 = __Vdly__v__DOT__Y41;
    vlTOPp->v__DOT__Y40 = __Vdly__v__DOT__Y40;
    vlTOPp->v__DOT__Y39 = __Vdly__v__DOT__Y39;
    vlTOPp->v__DOT__Y38 = __Vdly__v__DOT__Y38;
    vlTOPp->v__DOT__Y37 = __Vdly__v__DOT__Y37;
    vlTOPp->v__DOT__Y36 = __Vdly__v__DOT__Y36;
    vlTOPp->v__DOT__Y35 = __Vdly__v__DOT__Y35;
    vlTOPp->v__DOT__Y34 = __Vdly__v__DOT__Y34;
    vlTOPp->v__DOT__Y33 = __Vdly__v__DOT__Y33;
    vlTOPp->v__DOT__Y32 = __Vdly__v__DOT__Y32;
    vlTOPp->v__DOT__Y31 = __Vdly__v__DOT__Y31;
    vlTOPp->v__DOT__Y30 = __Vdly__v__DOT__Y30;
    vlTOPp->v__DOT__Y29 = __Vdly__v__DOT__Y29;
    vlTOPp->v__DOT__Y28 = __Vdly__v__DOT__Y28;
    vlTOPp->v__DOT__Y27 = __Vdly__v__DOT__Y27;
    vlTOPp->v__DOT__Y26 = __Vdly__v__DOT__Y26;
    vlTOPp->v__DOT__Y25 = __Vdly__v__DOT__Y25;
    vlTOPp->v__DOT__Y24 = __Vdly__v__DOT__Y24;
    vlTOPp->v__DOT__Y23 = __Vdly__v__DOT__Y23;
    vlTOPp->v__DOT__Y22 = __Vdly__v__DOT__Y22;
    vlTOPp->v__DOT__Y21 = __Vdly__v__DOT__Y21;
    vlTOPp->v__DOT__Y20 = __Vdly__v__DOT__Y20;
    vlTOPp->v__DOT__Y19 = __Vdly__v__DOT__Y19;
    vlTOPp->v__DOT__Y18 = __Vdly__v__DOT__Y18;
    vlTOPp->v__DOT__Y17 = __Vdly__v__DOT__Y17;
    vlTOPp->v__DOT__Y16 = __Vdly__v__DOT__Y16;
    vlTOPp->v__DOT__Y15 = __Vdly__v__DOT__Y15;
    vlTOPp->v__DOT__Y14 = __Vdly__v__DOT__Y14;
    vlTOPp->v__DOT__Y13 = __Vdly__v__DOT__Y13;
    vlTOPp->v__DOT__Y12 = __Vdly__v__DOT__Y12;
    vlTOPp->v__DOT__Y11 = __Vdly__v__DOT__Y11;
    vlTOPp->v__DOT__Y10 = __Vdly__v__DOT__Y10;
    vlTOPp->v__DOT__Y9 = __Vdly__v__DOT__Y9;
    vlTOPp->v__DOT__Y8 = __Vdly__v__DOT__Y8;
    vlTOPp->v__DOT__Y7 = __Vdly__v__DOT__Y7;
    vlTOPp->v__DOT__Y6 = __Vdly__v__DOT__Y6;
    vlTOPp->v__DOT__Y5 = __Vdly__v__DOT__Y5;
    vlTOPp->v__DOT__Y4 = __Vdly__v__DOT__Y4;
    vlTOPp->v__DOT__Y3 = __Vdly__v__DOT__Y3;
    vlTOPp->v__DOT__Y2 = __Vdly__v__DOT__Y2;
    vlTOPp->v__DOT__Y1 = __Vdly__v__DOT__Y1;
    vlTOPp->v__DOT__Y0 = __Vdly__v__DOT__Y0;
}

void Vfft64::_eval(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfft64::_eval\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((~ (IData)(vlTOPp->RST)) & (IData)(vlTOPp->__Vclklast__TOP__RST)))) {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1._sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2 | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2._sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__2(vlSymsp);
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3._sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__3(vlSymsp);
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1._sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__4(vlSymsp);
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2._sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__5(vlSymsp);
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3._sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__6(vlSymsp);
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1._sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__10(vlSymsp);
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2._sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__11(vlSymsp);
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3._sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__12(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__RST = vlTOPp->RST;
}

void Vfft64::_eval_initial(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfft64::_eval_initial\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfft64::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vfft64::final\n"); );
    // Variables
    Vfft64__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfft64::_eval_settle(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfft64::_eval_settle\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1._settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1 | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2._settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__8(vlSymsp);
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3._settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__9(vlSymsp);
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1._settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__13(vlSymsp);
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2._settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__14(vlSymsp);
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3._settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__15(vlSymsp);
}

IData Vfft64::_change_request(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfft64::_change_request\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    IData __req = false;  // Logically a bool
    return __req;
}
