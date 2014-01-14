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
    v__DOT__AREG0 = VL_RAND_RESET_I(22);
    v__DOT__AREG1 = VL_RAND_RESET_I(22);
    v__DOT__AREG2 = VL_RAND_RESET_I(22);
    v__DOT__AREG3 = VL_RAND_RESET_I(22);
    v__DOT__AREG4 = VL_RAND_RESET_I(22);
    v__DOT__AREG5 = VL_RAND_RESET_I(22);
    v__DOT__AREG6 = VL_RAND_RESET_I(22);
    v__DOT__AREG7 = VL_RAND_RESET_I(22);
    v__DOT__AREG8 = VL_RAND_RESET_I(22);
    v__DOT__AREG9 = VL_RAND_RESET_I(22);
    v__DOT__AREG10 = VL_RAND_RESET_I(22);
    v__DOT__AREG11 = VL_RAND_RESET_I(22);
    v__DOT__AREG12 = VL_RAND_RESET_I(22);
    v__DOT__AREG13 = VL_RAND_RESET_I(22);
    v__DOT__AREG14 = VL_RAND_RESET_I(22);
    v__DOT__AREG15 = VL_RAND_RESET_I(22);
    v__DOT__AREG16 = VL_RAND_RESET_I(22);
    v__DOT__AREG17 = VL_RAND_RESET_I(22);
    v__DOT__AREG18 = VL_RAND_RESET_I(22);
    v__DOT__AREG19 = VL_RAND_RESET_I(22);
    v__DOT__AREG20 = VL_RAND_RESET_I(22);
    v__DOT__AREG21 = VL_RAND_RESET_I(22);
    v__DOT__AREG22 = VL_RAND_RESET_I(22);
    v__DOT__AREG23 = VL_RAND_RESET_I(22);
    v__DOT__AREG24 = VL_RAND_RESET_I(22);
    v__DOT__AREG25 = VL_RAND_RESET_I(22);
    v__DOT__AREG26 = VL_RAND_RESET_I(22);
    v__DOT__AREG27 = VL_RAND_RESET_I(22);
    v__DOT__AREG28 = VL_RAND_RESET_I(22);
    v__DOT__AREG29 = VL_RAND_RESET_I(22);
    v__DOT__AREG30 = VL_RAND_RESET_I(22);
    v__DOT__AREG31 = VL_RAND_RESET_I(22);
    v__DOT__AREG32 = VL_RAND_RESET_I(22);
    v__DOT__AREG33 = VL_RAND_RESET_I(22);
    v__DOT__AREG34 = VL_RAND_RESET_I(22);
    v__DOT__AREG35 = VL_RAND_RESET_I(22);
    v__DOT__AREG36 = VL_RAND_RESET_I(22);
    v__DOT__AREG37 = VL_RAND_RESET_I(22);
    v__DOT__AREG38 = VL_RAND_RESET_I(22);
    v__DOT__AREG39 = VL_RAND_RESET_I(22);
    v__DOT__AREG40 = VL_RAND_RESET_I(22);
    v__DOT__AREG41 = VL_RAND_RESET_I(22);
    v__DOT__AREG42 = VL_RAND_RESET_I(22);
    v__DOT__AREG43 = VL_RAND_RESET_I(22);
    v__DOT__AREG44 = VL_RAND_RESET_I(22);
    v__DOT__AREG45 = VL_RAND_RESET_I(22);
    v__DOT__AREG46 = VL_RAND_RESET_I(22);
    v__DOT__AREG47 = VL_RAND_RESET_I(22);
    v__DOT__AREG48 = VL_RAND_RESET_I(22);
    v__DOT__AREG49 = VL_RAND_RESET_I(22);
    v__DOT__AREG50 = VL_RAND_RESET_I(22);
    v__DOT__AREG51 = VL_RAND_RESET_I(22);
    v__DOT__AREG52 = VL_RAND_RESET_I(22);
    v__DOT__AREG53 = VL_RAND_RESET_I(22);
    v__DOT__AREG54 = VL_RAND_RESET_I(22);
    v__DOT__AREG55 = VL_RAND_RESET_I(22);
    v__DOT__AREG56 = VL_RAND_RESET_I(22);
    v__DOT__AREG57 = VL_RAND_RESET_I(22);
    v__DOT__AREG58 = VL_RAND_RESET_I(22);
    v__DOT__AREG59 = VL_RAND_RESET_I(22);
    v__DOT__AREG60 = VL_RAND_RESET_I(22);
    v__DOT__AREG61 = VL_RAND_RESET_I(22);
    v__DOT__AREG62 = VL_RAND_RESET_I(22);
    v__DOT__AREG63 = VL_RAND_RESET_I(22);
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
    v__DOT__input_succeed_flg = VL_RAND_RESET_I(1);
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
    v__DOT__myFFT_module__DOT__D0 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D1 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D2 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D3 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D4 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D5 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D6 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D7 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D8 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D9 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D10 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D11 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D12 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D13 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D14 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D15 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D16 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D17 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D18 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D19 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D20 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D21 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D22 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D23 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D24 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D25 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D26 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D27 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D28 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D29 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D30 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D31 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D32 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D33 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D34 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D35 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D36 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D37 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D38 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D39 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D40 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D41 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D42 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D43 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D44 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D45 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D46 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D47 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D48 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D49 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D50 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D51 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D52 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D53 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D54 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D55 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D56 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D57 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D58 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D59 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D60 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D61 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D62 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__D63 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG0 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG1 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG2 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG3 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG4 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG5 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG6 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG7 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG8 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG9 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG10 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG11 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG12 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG13 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG14 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG15 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG16 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG17 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG18 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG19 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG20 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG21 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG22 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG23 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG24 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG25 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG26 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG27 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG28 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG29 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG30 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG31 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG32 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG33 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG34 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG35 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG36 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG37 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG38 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG39 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG40 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG41 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG42 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG43 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG44 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG45 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG46 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG47 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG48 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG49 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG50 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG51 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG52 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG53 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG54 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG55 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG56 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG57 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG58 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG59 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG60 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG61 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG62 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__BREG63 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG0 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG1 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG2 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG3 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG4 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG5 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG6 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG7 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG8 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG9 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG10 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG11 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG12 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG13 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG14 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG15 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG16 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG17 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG18 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG19 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG20 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG21 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG22 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG23 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG24 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG25 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG26 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG27 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG28 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG29 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG30 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG31 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG32 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG33 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG34 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG35 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG36 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG37 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG38 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG39 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG40 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG41 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG42 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG43 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG44 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG45 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG46 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG47 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG48 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG49 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG50 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG51 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG52 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG53 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG54 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG55 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG56 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG57 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG58 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG59 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG60 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG61 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG62 = VL_RAND_RESET_I(22);
    v__DOT__myFFT_module__DOT__CREG63 = VL_RAND_RESET_I(22);
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
    v__DOT__myFFT_module__DOT__cnt2 = VL_RAND_RESET_I(7);
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
    VL_SIG8(__Vdly__v__DOT__start_fft_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__cnt,6,0);
    VL_SIG8(__Vdly__v__DOT__fin_fft_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__cnt_o,6,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage,3,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__cnt,6,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__cnt2,6,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__cnt3,6,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage_3_start_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage_4_start_flg,0,0);
    VL_SIG8(__Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg,0,0);
    //char	__VpadToAlign21[3];
    VL_SIG(__Vdly__v__DOT__A0,21,0);
    VL_SIG(__Vdly__v__DOT__A1,21,0);
    VL_SIG(__Vdly__v__DOT__A2,21,0);
    VL_SIG(__Vdly__v__DOT__A3,21,0);
    VL_SIG(__Vdly__v__DOT__A4,21,0);
    VL_SIG(__Vdly__v__DOT__A5,21,0);
    VL_SIG(__Vdly__v__DOT__A6,21,0);
    VL_SIG(__Vdly__v__DOT__A7,21,0);
    VL_SIG(__Vdly__v__DOT__A8,21,0);
    VL_SIG(__Vdly__v__DOT__A9,21,0);
    VL_SIG(__Vdly__v__DOT__A10,21,0);
    VL_SIG(__Vdly__v__DOT__A11,21,0);
    VL_SIG(__Vdly__v__DOT__A12,21,0);
    VL_SIG(__Vdly__v__DOT__A13,21,0);
    VL_SIG(__Vdly__v__DOT__A14,21,0);
    VL_SIG(__Vdly__v__DOT__A15,21,0);
    VL_SIG(__Vdly__v__DOT__A16,21,0);
    VL_SIG(__Vdly__v__DOT__A17,21,0);
    VL_SIG(__Vdly__v__DOT__A18,21,0);
    VL_SIG(__Vdly__v__DOT__A19,21,0);
    VL_SIG(__Vdly__v__DOT__A20,21,0);
    VL_SIG(__Vdly__v__DOT__A21,21,0);
    VL_SIG(__Vdly__v__DOT__A22,21,0);
    VL_SIG(__Vdly__v__DOT__A23,21,0);
    VL_SIG(__Vdly__v__DOT__A24,21,0);
    VL_SIG(__Vdly__v__DOT__A25,21,0);
    VL_SIG(__Vdly__v__DOT__A26,21,0);
    VL_SIG(__Vdly__v__DOT__A27,21,0);
    VL_SIG(__Vdly__v__DOT__A28,21,0);
    VL_SIG(__Vdly__v__DOT__A29,21,0);
    VL_SIG(__Vdly__v__DOT__A30,21,0);
    VL_SIG(__Vdly__v__DOT__A31,21,0);
    VL_SIG(__Vdly__v__DOT__A32,21,0);
    VL_SIG(__Vdly__v__DOT__A33,21,0);
    VL_SIG(__Vdly__v__DOT__A34,21,0);
    VL_SIG(__Vdly__v__DOT__A35,21,0);
    VL_SIG(__Vdly__v__DOT__A36,21,0);
    VL_SIG(__Vdly__v__DOT__A37,21,0);
    VL_SIG(__Vdly__v__DOT__A38,21,0);
    VL_SIG(__Vdly__v__DOT__A39,21,0);
    VL_SIG(__Vdly__v__DOT__A40,21,0);
    VL_SIG(__Vdly__v__DOT__A41,21,0);
    VL_SIG(__Vdly__v__DOT__A42,21,0);
    VL_SIG(__Vdly__v__DOT__A43,21,0);
    VL_SIG(__Vdly__v__DOT__A44,21,0);
    VL_SIG(__Vdly__v__DOT__A45,21,0);
    VL_SIG(__Vdly__v__DOT__A46,21,0);
    VL_SIG(__Vdly__v__DOT__A47,21,0);
    VL_SIG(__Vdly__v__DOT__A48,21,0);
    VL_SIG(__Vdly__v__DOT__A49,21,0);
    VL_SIG(__Vdly__v__DOT__A50,21,0);
    VL_SIG(__Vdly__v__DOT__A51,21,0);
    VL_SIG(__Vdly__v__DOT__A52,21,0);
    VL_SIG(__Vdly__v__DOT__A53,21,0);
    VL_SIG(__Vdly__v__DOT__A54,21,0);
    VL_SIG(__Vdly__v__DOT__A55,21,0);
    VL_SIG(__Vdly__v__DOT__A56,21,0);
    VL_SIG(__Vdly__v__DOT__A57,21,0);
    VL_SIG(__Vdly__v__DOT__A58,21,0);
    VL_SIG(__Vdly__v__DOT__A59,21,0);
    VL_SIG(__Vdly__v__DOT__A60,21,0);
    VL_SIG(__Vdly__v__DOT__A61,21,0);
    VL_SIG(__Vdly__v__DOT__A62,21,0);
    VL_SIG(__Vdly__v__DOT__A63,21,0);
    VL_SIG(__Vdly__v__DOT__AREG63,21,0);
    VL_SIG(__Vdly__v__DOT__AREG62,21,0);
    VL_SIG(__Vdly__v__DOT__AREG61,21,0);
    VL_SIG(__Vdly__v__DOT__AREG60,21,0);
    VL_SIG(__Vdly__v__DOT__AREG59,21,0);
    VL_SIG(__Vdly__v__DOT__AREG58,21,0);
    VL_SIG(__Vdly__v__DOT__AREG57,21,0);
    VL_SIG(__Vdly__v__DOT__AREG56,21,0);
    VL_SIG(__Vdly__v__DOT__AREG55,21,0);
    VL_SIG(__Vdly__v__DOT__AREG54,21,0);
    VL_SIG(__Vdly__v__DOT__AREG53,21,0);
    VL_SIG(__Vdly__v__DOT__AREG52,21,0);
    VL_SIG(__Vdly__v__DOT__AREG51,21,0);
    VL_SIG(__Vdly__v__DOT__AREG50,21,0);
    VL_SIG(__Vdly__v__DOT__AREG49,21,0);
    VL_SIG(__Vdly__v__DOT__AREG48,21,0);
    VL_SIG(__Vdly__v__DOT__AREG47,21,0);
    VL_SIG(__Vdly__v__DOT__AREG46,21,0);
    VL_SIG(__Vdly__v__DOT__AREG45,21,0);
    VL_SIG(__Vdly__v__DOT__AREG44,21,0);
    VL_SIG(__Vdly__v__DOT__AREG43,21,0);
    VL_SIG(__Vdly__v__DOT__AREG42,21,0);
    VL_SIG(__Vdly__v__DOT__AREG41,21,0);
    VL_SIG(__Vdly__v__DOT__AREG40,21,0);
    VL_SIG(__Vdly__v__DOT__AREG39,21,0);
    VL_SIG(__Vdly__v__DOT__AREG38,21,0);
    VL_SIG(__Vdly__v__DOT__AREG37,21,0);
    VL_SIG(__Vdly__v__DOT__AREG36,21,0);
    VL_SIG(__Vdly__v__DOT__AREG35,21,0);
    VL_SIG(__Vdly__v__DOT__AREG34,21,0);
    VL_SIG(__Vdly__v__DOT__AREG33,21,0);
    VL_SIG(__Vdly__v__DOT__AREG32,21,0);
    VL_SIG(__Vdly__v__DOT__AREG31,21,0);
    VL_SIG(__Vdly__v__DOT__AREG30,21,0);
    VL_SIG(__Vdly__v__DOT__AREG29,21,0);
    VL_SIG(__Vdly__v__DOT__AREG28,21,0);
    VL_SIG(__Vdly__v__DOT__AREG27,21,0);
    VL_SIG(__Vdly__v__DOT__AREG26,21,0);
    VL_SIG(__Vdly__v__DOT__AREG25,21,0);
    VL_SIG(__Vdly__v__DOT__AREG24,21,0);
    VL_SIG(__Vdly__v__DOT__AREG23,21,0);
    VL_SIG(__Vdly__v__DOT__AREG22,21,0);
    VL_SIG(__Vdly__v__DOT__AREG21,21,0);
    VL_SIG(__Vdly__v__DOT__AREG20,21,0);
    VL_SIG(__Vdly__v__DOT__AREG19,21,0);
    VL_SIG(__Vdly__v__DOT__AREG18,21,0);
    VL_SIG(__Vdly__v__DOT__AREG17,21,0);
    VL_SIG(__Vdly__v__DOT__AREG16,21,0);
    VL_SIG(__Vdly__v__DOT__AREG15,21,0);
    VL_SIG(__Vdly__v__DOT__AREG14,21,0);
    VL_SIG(__Vdly__v__DOT__AREG13,21,0);
    VL_SIG(__Vdly__v__DOT__AREG12,21,0);
    VL_SIG(__Vdly__v__DOT__AREG11,21,0);
    VL_SIG(__Vdly__v__DOT__AREG10,21,0);
    VL_SIG(__Vdly__v__DOT__AREG9,21,0);
    VL_SIG(__Vdly__v__DOT__AREG8,21,0);
    VL_SIG(__Vdly__v__DOT__AREG7,21,0);
    VL_SIG(__Vdly__v__DOT__AREG6,21,0);
    VL_SIG(__Vdly__v__DOT__AREG5,21,0);
    VL_SIG(__Vdly__v__DOT__AREG4,21,0);
    VL_SIG(__Vdly__v__DOT__AREG3,21,0);
    VL_SIG(__Vdly__v__DOT__AREG2,21,0);
    VL_SIG(__Vdly__v__DOT__AREG1,21,0);
    VL_SIG(__Vdly__v__DOT__AREG0,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG15,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG31,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG47,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG63,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG14,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG30,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG46,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG62,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG13,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG29,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG45,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG61,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG12,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG28,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG44,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG60,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG11,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG27,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG43,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG59,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG10,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG26,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG42,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG58,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG9,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG25,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG41,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG57,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG8,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG24,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG40,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG56,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG7,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG23,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG39,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG55,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG6,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG22,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG38,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG54,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG5,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG21,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG37,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG53,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG4,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG20,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG36,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG52,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG3,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG19,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG35,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG51,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG2,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG18,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG34,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG50,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG1,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG17,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG33,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG49,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG0,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG16,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG32,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__BREG48,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B0,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B1,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B2,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B3,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B4,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B5,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B6,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B7,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B8,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B9,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B10,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B11,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B12,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B13,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B14,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B15,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B16,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B17,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B18,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B19,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B20,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B21,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B22,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B23,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B24,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B25,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B26,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B27,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B28,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B29,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B30,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B31,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B32,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B33,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B34,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B35,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B36,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B37,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B38,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B39,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B40,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B41,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B42,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B43,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B44,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B45,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B46,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B47,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B48,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B49,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B50,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B51,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B52,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B53,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B54,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B55,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B56,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B57,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B58,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B59,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B60,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B61,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B62,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__B63,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG51,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG55,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG59,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG63,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG50,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG54,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG58,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG62,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG49,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG53,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG57,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG61,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG48,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG52,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG56,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG60,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG35,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG39,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG43,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG47,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG34,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG38,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG42,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG46,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG33,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG37,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG41,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG45,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG32,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG36,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG40,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG44,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG19,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG23,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG27,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG31,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG18,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG22,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG26,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG30,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG17,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG21,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG25,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG29,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG16,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG20,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG24,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG28,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG3,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG7,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG11,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG15,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG2,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG6,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG10,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG14,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG1,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG5,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG9,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG13,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG0,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG4,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG8,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__CREG12,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C0,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C1,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C2,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C3,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C4,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C5,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C6,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C7,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C8,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C9,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C10,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C11,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C12,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C13,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C14,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C15,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C16,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C17,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C18,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C19,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C20,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C21,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C22,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C23,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C24,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C25,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C26,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C27,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C28,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C29,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C30,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C31,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C32,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C33,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C34,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C35,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C36,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C37,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C38,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C39,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C40,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C41,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C42,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C43,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C44,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C45,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C46,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C47,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C48,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C49,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C50,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C51,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C52,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C53,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C54,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C55,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C56,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C57,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C58,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C59,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C60,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C61,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C62,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__C63,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D60,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D61,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D62,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D63,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D56,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D57,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D58,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D59,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D52,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D53,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D54,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D55,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D48,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D49,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D50,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D51,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D44,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D45,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D46,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D47,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D40,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D41,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D42,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D43,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D36,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D37,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D38,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D39,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D32,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D33,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D34,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D35,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D28,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D29,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D30,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D31,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D24,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D25,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D26,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D27,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D20,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D21,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D22,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D23,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D16,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D17,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D18,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D19,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D12,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D13,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D14,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D15,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D8,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D9,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D10,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D11,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D4,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D5,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D6,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D7,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D0,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D1,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D2,21,0);
    VL_SIG(__Vdly__v__DOT__myFFT_module__DOT__D3,21,0);
    // Body
    __Vdly__v__DOT__myFFT_module__DOT__stage = vlTOPp->v__DOT__myFFT_module__DOT__stage;
    __Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__stage_1_start_flg;
    __Vdly__v__DOT__myFFT_module__DOT__cnt = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
    __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg;
    __Vdly__v__DOT__myFFT_module__DOT__BREG15 = vlTOPp->v__DOT__myFFT_module__DOT__BREG15;
    __Vdly__v__DOT__myFFT_module__DOT__BREG31 = vlTOPp->v__DOT__myFFT_module__DOT__BREG31;
    __Vdly__v__DOT__myFFT_module__DOT__BREG47 = vlTOPp->v__DOT__myFFT_module__DOT__BREG47;
    __Vdly__v__DOT__myFFT_module__DOT__BREG63 = vlTOPp->v__DOT__myFFT_module__DOT__BREG63;
    __Vdly__v__DOT__myFFT_module__DOT__BREG14 = vlTOPp->v__DOT__myFFT_module__DOT__BREG14;
    __Vdly__v__DOT__myFFT_module__DOT__BREG30 = vlTOPp->v__DOT__myFFT_module__DOT__BREG30;
    __Vdly__v__DOT__myFFT_module__DOT__BREG46 = vlTOPp->v__DOT__myFFT_module__DOT__BREG46;
    __Vdly__v__DOT__myFFT_module__DOT__BREG62 = vlTOPp->v__DOT__myFFT_module__DOT__BREG62;
    __Vdly__v__DOT__myFFT_module__DOT__BREG13 = vlTOPp->v__DOT__myFFT_module__DOT__BREG13;
    __Vdly__v__DOT__myFFT_module__DOT__BREG29 = vlTOPp->v__DOT__myFFT_module__DOT__BREG29;
    __Vdly__v__DOT__myFFT_module__DOT__BREG45 = vlTOPp->v__DOT__myFFT_module__DOT__BREG45;
    __Vdly__v__DOT__myFFT_module__DOT__BREG61 = vlTOPp->v__DOT__myFFT_module__DOT__BREG61;
    __Vdly__v__DOT__myFFT_module__DOT__BREG12 = vlTOPp->v__DOT__myFFT_module__DOT__BREG12;
    __Vdly__v__DOT__myFFT_module__DOT__BREG28 = vlTOPp->v__DOT__myFFT_module__DOT__BREG28;
    __Vdly__v__DOT__myFFT_module__DOT__BREG44 = vlTOPp->v__DOT__myFFT_module__DOT__BREG44;
    __Vdly__v__DOT__myFFT_module__DOT__BREG60 = vlTOPp->v__DOT__myFFT_module__DOT__BREG60;
    __Vdly__v__DOT__myFFT_module__DOT__BREG11 = vlTOPp->v__DOT__myFFT_module__DOT__BREG11;
    __Vdly__v__DOT__myFFT_module__DOT__BREG27 = vlTOPp->v__DOT__myFFT_module__DOT__BREG27;
    __Vdly__v__DOT__myFFT_module__DOT__BREG43 = vlTOPp->v__DOT__myFFT_module__DOT__BREG43;
    __Vdly__v__DOT__myFFT_module__DOT__BREG59 = vlTOPp->v__DOT__myFFT_module__DOT__BREG59;
    __Vdly__v__DOT__myFFT_module__DOT__BREG10 = vlTOPp->v__DOT__myFFT_module__DOT__BREG10;
    __Vdly__v__DOT__myFFT_module__DOT__BREG26 = vlTOPp->v__DOT__myFFT_module__DOT__BREG26;
    __Vdly__v__DOT__myFFT_module__DOT__BREG42 = vlTOPp->v__DOT__myFFT_module__DOT__BREG42;
    __Vdly__v__DOT__myFFT_module__DOT__BREG58 = vlTOPp->v__DOT__myFFT_module__DOT__BREG58;
    __Vdly__v__DOT__myFFT_module__DOT__BREG9 = vlTOPp->v__DOT__myFFT_module__DOT__BREG9;
    __Vdly__v__DOT__myFFT_module__DOT__BREG25 = vlTOPp->v__DOT__myFFT_module__DOT__BREG25;
    __Vdly__v__DOT__myFFT_module__DOT__BREG41 = vlTOPp->v__DOT__myFFT_module__DOT__BREG41;
    __Vdly__v__DOT__myFFT_module__DOT__BREG57 = vlTOPp->v__DOT__myFFT_module__DOT__BREG57;
    __Vdly__v__DOT__myFFT_module__DOT__BREG8 = vlTOPp->v__DOT__myFFT_module__DOT__BREG8;
    __Vdly__v__DOT__myFFT_module__DOT__BREG24 = vlTOPp->v__DOT__myFFT_module__DOT__BREG24;
    __Vdly__v__DOT__myFFT_module__DOT__BREG40 = vlTOPp->v__DOT__myFFT_module__DOT__BREG40;
    __Vdly__v__DOT__myFFT_module__DOT__BREG56 = vlTOPp->v__DOT__myFFT_module__DOT__BREG56;
    __Vdly__v__DOT__myFFT_module__DOT__BREG7 = vlTOPp->v__DOT__myFFT_module__DOT__BREG7;
    __Vdly__v__DOT__myFFT_module__DOT__BREG23 = vlTOPp->v__DOT__myFFT_module__DOT__BREG23;
    __Vdly__v__DOT__myFFT_module__DOT__BREG39 = vlTOPp->v__DOT__myFFT_module__DOT__BREG39;
    __Vdly__v__DOT__myFFT_module__DOT__BREG55 = vlTOPp->v__DOT__myFFT_module__DOT__BREG55;
    __Vdly__v__DOT__myFFT_module__DOT__BREG6 = vlTOPp->v__DOT__myFFT_module__DOT__BREG6;
    __Vdly__v__DOT__myFFT_module__DOT__BREG22 = vlTOPp->v__DOT__myFFT_module__DOT__BREG22;
    __Vdly__v__DOT__myFFT_module__DOT__BREG38 = vlTOPp->v__DOT__myFFT_module__DOT__BREG38;
    __Vdly__v__DOT__myFFT_module__DOT__BREG54 = vlTOPp->v__DOT__myFFT_module__DOT__BREG54;
    __Vdly__v__DOT__myFFT_module__DOT__BREG5 = vlTOPp->v__DOT__myFFT_module__DOT__BREG5;
    __Vdly__v__DOT__myFFT_module__DOT__BREG21 = vlTOPp->v__DOT__myFFT_module__DOT__BREG21;
    __Vdly__v__DOT__myFFT_module__DOT__BREG37 = vlTOPp->v__DOT__myFFT_module__DOT__BREG37;
    __Vdly__v__DOT__myFFT_module__DOT__BREG53 = vlTOPp->v__DOT__myFFT_module__DOT__BREG53;
    __Vdly__v__DOT__myFFT_module__DOT__BREG4 = vlTOPp->v__DOT__myFFT_module__DOT__BREG4;
    __Vdly__v__DOT__myFFT_module__DOT__BREG20 = vlTOPp->v__DOT__myFFT_module__DOT__BREG20;
    __Vdly__v__DOT__myFFT_module__DOT__BREG36 = vlTOPp->v__DOT__myFFT_module__DOT__BREG36;
    __Vdly__v__DOT__myFFT_module__DOT__BREG52 = vlTOPp->v__DOT__myFFT_module__DOT__BREG52;
    __Vdly__v__DOT__myFFT_module__DOT__BREG3 = vlTOPp->v__DOT__myFFT_module__DOT__BREG3;
    __Vdly__v__DOT__myFFT_module__DOT__BREG19 = vlTOPp->v__DOT__myFFT_module__DOT__BREG19;
    __Vdly__v__DOT__myFFT_module__DOT__BREG35 = vlTOPp->v__DOT__myFFT_module__DOT__BREG35;
    __Vdly__v__DOT__myFFT_module__DOT__BREG51 = vlTOPp->v__DOT__myFFT_module__DOT__BREG51;
    __Vdly__v__DOT__myFFT_module__DOT__BREG2 = vlTOPp->v__DOT__myFFT_module__DOT__BREG2;
    __Vdly__v__DOT__myFFT_module__DOT__BREG18 = vlTOPp->v__DOT__myFFT_module__DOT__BREG18;
    __Vdly__v__DOT__myFFT_module__DOT__BREG34 = vlTOPp->v__DOT__myFFT_module__DOT__BREG34;
    __Vdly__v__DOT__myFFT_module__DOT__BREG50 = vlTOPp->v__DOT__myFFT_module__DOT__BREG50;
    __Vdly__v__DOT__myFFT_module__DOT__BREG1 = vlTOPp->v__DOT__myFFT_module__DOT__BREG1;
    __Vdly__v__DOT__myFFT_module__DOT__BREG17 = vlTOPp->v__DOT__myFFT_module__DOT__BREG17;
    __Vdly__v__DOT__myFFT_module__DOT__BREG33 = vlTOPp->v__DOT__myFFT_module__DOT__BREG33;
    __Vdly__v__DOT__myFFT_module__DOT__BREG49 = vlTOPp->v__DOT__myFFT_module__DOT__BREG49;
    __Vdly__v__DOT__myFFT_module__DOT__BREG0 = vlTOPp->v__DOT__myFFT_module__DOT__BREG0;
    __Vdly__v__DOT__myFFT_module__DOT__BREG16 = vlTOPp->v__DOT__myFFT_module__DOT__BREG16;
    __Vdly__v__DOT__myFFT_module__DOT__BREG32 = vlTOPp->v__DOT__myFFT_module__DOT__BREG32;
    __Vdly__v__DOT__myFFT_module__DOT__BREG48 = vlTOPp->v__DOT__myFFT_module__DOT__BREG48;
    __Vdly__v__DOT__myFFT_module__DOT__cnt2 = vlTOPp->v__DOT__myFFT_module__DOT__cnt2;
    __Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__stage_2_start_flg;
    __Vdly__v__DOT__myFFT_module__DOT__B0 = vlTOPp->v__DOT__myFFT_module__DOT__B0;
    __Vdly__v__DOT__myFFT_module__DOT__B1 = vlTOPp->v__DOT__myFFT_module__DOT__B1;
    __Vdly__v__DOT__myFFT_module__DOT__B2 = vlTOPp->v__DOT__myFFT_module__DOT__B2;
    __Vdly__v__DOT__myFFT_module__DOT__B3 = vlTOPp->v__DOT__myFFT_module__DOT__B3;
    __Vdly__v__DOT__myFFT_module__DOT__B4 = vlTOPp->v__DOT__myFFT_module__DOT__B4;
    __Vdly__v__DOT__myFFT_module__DOT__B5 = vlTOPp->v__DOT__myFFT_module__DOT__B5;
    __Vdly__v__DOT__myFFT_module__DOT__B6 = vlTOPp->v__DOT__myFFT_module__DOT__B6;
    __Vdly__v__DOT__myFFT_module__DOT__B7 = vlTOPp->v__DOT__myFFT_module__DOT__B7;
    __Vdly__v__DOT__myFFT_module__DOT__B8 = vlTOPp->v__DOT__myFFT_module__DOT__B8;
    __Vdly__v__DOT__myFFT_module__DOT__B9 = vlTOPp->v__DOT__myFFT_module__DOT__B9;
    __Vdly__v__DOT__myFFT_module__DOT__B10 = vlTOPp->v__DOT__myFFT_module__DOT__B10;
    __Vdly__v__DOT__myFFT_module__DOT__B11 = vlTOPp->v__DOT__myFFT_module__DOT__B11;
    __Vdly__v__DOT__myFFT_module__DOT__B12 = vlTOPp->v__DOT__myFFT_module__DOT__B12;
    __Vdly__v__DOT__myFFT_module__DOT__B13 = vlTOPp->v__DOT__myFFT_module__DOT__B13;
    __Vdly__v__DOT__myFFT_module__DOT__B14 = vlTOPp->v__DOT__myFFT_module__DOT__B14;
    __Vdly__v__DOT__myFFT_module__DOT__B15 = vlTOPp->v__DOT__myFFT_module__DOT__B15;
    __Vdly__v__DOT__myFFT_module__DOT__B16 = vlTOPp->v__DOT__myFFT_module__DOT__B16;
    __Vdly__v__DOT__myFFT_module__DOT__B17 = vlTOPp->v__DOT__myFFT_module__DOT__B17;
    __Vdly__v__DOT__myFFT_module__DOT__B18 = vlTOPp->v__DOT__myFFT_module__DOT__B18;
    __Vdly__v__DOT__myFFT_module__DOT__B19 = vlTOPp->v__DOT__myFFT_module__DOT__B19;
    __Vdly__v__DOT__myFFT_module__DOT__B20 = vlTOPp->v__DOT__myFFT_module__DOT__B20;
    __Vdly__v__DOT__myFFT_module__DOT__B21 = vlTOPp->v__DOT__myFFT_module__DOT__B21;
    __Vdly__v__DOT__myFFT_module__DOT__B22 = vlTOPp->v__DOT__myFFT_module__DOT__B22;
    __Vdly__v__DOT__myFFT_module__DOT__B23 = vlTOPp->v__DOT__myFFT_module__DOT__B23;
    __Vdly__v__DOT__myFFT_module__DOT__B24 = vlTOPp->v__DOT__myFFT_module__DOT__B24;
    __Vdly__v__DOT__myFFT_module__DOT__B25 = vlTOPp->v__DOT__myFFT_module__DOT__B25;
    __Vdly__v__DOT__myFFT_module__DOT__B26 = vlTOPp->v__DOT__myFFT_module__DOT__B26;
    __Vdly__v__DOT__myFFT_module__DOT__B27 = vlTOPp->v__DOT__myFFT_module__DOT__B27;
    __Vdly__v__DOT__myFFT_module__DOT__B28 = vlTOPp->v__DOT__myFFT_module__DOT__B28;
    __Vdly__v__DOT__myFFT_module__DOT__B29 = vlTOPp->v__DOT__myFFT_module__DOT__B29;
    __Vdly__v__DOT__myFFT_module__DOT__B30 = vlTOPp->v__DOT__myFFT_module__DOT__B30;
    __Vdly__v__DOT__myFFT_module__DOT__B31 = vlTOPp->v__DOT__myFFT_module__DOT__B31;
    __Vdly__v__DOT__myFFT_module__DOT__B32 = vlTOPp->v__DOT__myFFT_module__DOT__B32;
    __Vdly__v__DOT__myFFT_module__DOT__B33 = vlTOPp->v__DOT__myFFT_module__DOT__B33;
    __Vdly__v__DOT__myFFT_module__DOT__B34 = vlTOPp->v__DOT__myFFT_module__DOT__B34;
    __Vdly__v__DOT__myFFT_module__DOT__B35 = vlTOPp->v__DOT__myFFT_module__DOT__B35;
    __Vdly__v__DOT__myFFT_module__DOT__B36 = vlTOPp->v__DOT__myFFT_module__DOT__B36;
    __Vdly__v__DOT__myFFT_module__DOT__B37 = vlTOPp->v__DOT__myFFT_module__DOT__B37;
    __Vdly__v__DOT__myFFT_module__DOT__B38 = vlTOPp->v__DOT__myFFT_module__DOT__B38;
    __Vdly__v__DOT__myFFT_module__DOT__B39 = vlTOPp->v__DOT__myFFT_module__DOT__B39;
    __Vdly__v__DOT__myFFT_module__DOT__B40 = vlTOPp->v__DOT__myFFT_module__DOT__B40;
    __Vdly__v__DOT__myFFT_module__DOT__B41 = vlTOPp->v__DOT__myFFT_module__DOT__B41;
    __Vdly__v__DOT__myFFT_module__DOT__B42 = vlTOPp->v__DOT__myFFT_module__DOT__B42;
    __Vdly__v__DOT__myFFT_module__DOT__B43 = vlTOPp->v__DOT__myFFT_module__DOT__B43;
    __Vdly__v__DOT__myFFT_module__DOT__B44 = vlTOPp->v__DOT__myFFT_module__DOT__B44;
    __Vdly__v__DOT__myFFT_module__DOT__B45 = vlTOPp->v__DOT__myFFT_module__DOT__B45;
    __Vdly__v__DOT__myFFT_module__DOT__B46 = vlTOPp->v__DOT__myFFT_module__DOT__B46;
    __Vdly__v__DOT__myFFT_module__DOT__B47 = vlTOPp->v__DOT__myFFT_module__DOT__B47;
    __Vdly__v__DOT__myFFT_module__DOT__B48 = vlTOPp->v__DOT__myFFT_module__DOT__B48;
    __Vdly__v__DOT__myFFT_module__DOT__B49 = vlTOPp->v__DOT__myFFT_module__DOT__B49;
    __Vdly__v__DOT__myFFT_module__DOT__B50 = vlTOPp->v__DOT__myFFT_module__DOT__B50;
    __Vdly__v__DOT__myFFT_module__DOT__B51 = vlTOPp->v__DOT__myFFT_module__DOT__B51;
    __Vdly__v__DOT__myFFT_module__DOT__B52 = vlTOPp->v__DOT__myFFT_module__DOT__B52;
    __Vdly__v__DOT__myFFT_module__DOT__B53 = vlTOPp->v__DOT__myFFT_module__DOT__B53;
    __Vdly__v__DOT__myFFT_module__DOT__B54 = vlTOPp->v__DOT__myFFT_module__DOT__B54;
    __Vdly__v__DOT__myFFT_module__DOT__B55 = vlTOPp->v__DOT__myFFT_module__DOT__B55;
    __Vdly__v__DOT__myFFT_module__DOT__B56 = vlTOPp->v__DOT__myFFT_module__DOT__B56;
    __Vdly__v__DOT__myFFT_module__DOT__B57 = vlTOPp->v__DOT__myFFT_module__DOT__B57;
    __Vdly__v__DOT__myFFT_module__DOT__B58 = vlTOPp->v__DOT__myFFT_module__DOT__B58;
    __Vdly__v__DOT__myFFT_module__DOT__B59 = vlTOPp->v__DOT__myFFT_module__DOT__B59;
    __Vdly__v__DOT__myFFT_module__DOT__B60 = vlTOPp->v__DOT__myFFT_module__DOT__B60;
    __Vdly__v__DOT__myFFT_module__DOT__B61 = vlTOPp->v__DOT__myFFT_module__DOT__B61;
    __Vdly__v__DOT__myFFT_module__DOT__B62 = vlTOPp->v__DOT__myFFT_module__DOT__B62;
    __Vdly__v__DOT__myFFT_module__DOT__B63 = vlTOPp->v__DOT__myFFT_module__DOT__B63;
    __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2 
	= vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2;
    __Vdly__v__DOT__myFFT_module__DOT__CREG51 = vlTOPp->v__DOT__myFFT_module__DOT__CREG51;
    __Vdly__v__DOT__myFFT_module__DOT__CREG55 = vlTOPp->v__DOT__myFFT_module__DOT__CREG55;
    __Vdly__v__DOT__myFFT_module__DOT__CREG59 = vlTOPp->v__DOT__myFFT_module__DOT__CREG59;
    __Vdly__v__DOT__myFFT_module__DOT__CREG63 = vlTOPp->v__DOT__myFFT_module__DOT__CREG63;
    __Vdly__v__DOT__myFFT_module__DOT__CREG50 = vlTOPp->v__DOT__myFFT_module__DOT__CREG50;
    __Vdly__v__DOT__myFFT_module__DOT__CREG54 = vlTOPp->v__DOT__myFFT_module__DOT__CREG54;
    __Vdly__v__DOT__myFFT_module__DOT__CREG58 = vlTOPp->v__DOT__myFFT_module__DOT__CREG58;
    __Vdly__v__DOT__myFFT_module__DOT__CREG62 = vlTOPp->v__DOT__myFFT_module__DOT__CREG62;
    __Vdly__v__DOT__myFFT_module__DOT__CREG49 = vlTOPp->v__DOT__myFFT_module__DOT__CREG49;
    __Vdly__v__DOT__myFFT_module__DOT__CREG53 = vlTOPp->v__DOT__myFFT_module__DOT__CREG53;
    __Vdly__v__DOT__myFFT_module__DOT__CREG57 = vlTOPp->v__DOT__myFFT_module__DOT__CREG57;
    __Vdly__v__DOT__myFFT_module__DOT__CREG61 = vlTOPp->v__DOT__myFFT_module__DOT__CREG61;
    __Vdly__v__DOT__myFFT_module__DOT__CREG48 = vlTOPp->v__DOT__myFFT_module__DOT__CREG48;
    __Vdly__v__DOT__myFFT_module__DOT__CREG52 = vlTOPp->v__DOT__myFFT_module__DOT__CREG52;
    __Vdly__v__DOT__myFFT_module__DOT__CREG56 = vlTOPp->v__DOT__myFFT_module__DOT__CREG56;
    __Vdly__v__DOT__myFFT_module__DOT__CREG60 = vlTOPp->v__DOT__myFFT_module__DOT__CREG60;
    __Vdly__v__DOT__myFFT_module__DOT__CREG35 = vlTOPp->v__DOT__myFFT_module__DOT__CREG35;
    __Vdly__v__DOT__myFFT_module__DOT__CREG39 = vlTOPp->v__DOT__myFFT_module__DOT__CREG39;
    __Vdly__v__DOT__myFFT_module__DOT__CREG43 = vlTOPp->v__DOT__myFFT_module__DOT__CREG43;
    __Vdly__v__DOT__myFFT_module__DOT__CREG47 = vlTOPp->v__DOT__myFFT_module__DOT__CREG47;
    __Vdly__v__DOT__myFFT_module__DOT__CREG34 = vlTOPp->v__DOT__myFFT_module__DOT__CREG34;
    __Vdly__v__DOT__myFFT_module__DOT__CREG38 = vlTOPp->v__DOT__myFFT_module__DOT__CREG38;
    __Vdly__v__DOT__myFFT_module__DOT__CREG42 = vlTOPp->v__DOT__myFFT_module__DOT__CREG42;
    __Vdly__v__DOT__myFFT_module__DOT__CREG46 = vlTOPp->v__DOT__myFFT_module__DOT__CREG46;
    __Vdly__v__DOT__myFFT_module__DOT__CREG33 = vlTOPp->v__DOT__myFFT_module__DOT__CREG33;
    __Vdly__v__DOT__myFFT_module__DOT__CREG37 = vlTOPp->v__DOT__myFFT_module__DOT__CREG37;
    __Vdly__v__DOT__myFFT_module__DOT__CREG41 = vlTOPp->v__DOT__myFFT_module__DOT__CREG41;
    __Vdly__v__DOT__myFFT_module__DOT__CREG45 = vlTOPp->v__DOT__myFFT_module__DOT__CREG45;
    __Vdly__v__DOT__myFFT_module__DOT__CREG32 = vlTOPp->v__DOT__myFFT_module__DOT__CREG32;
    __Vdly__v__DOT__myFFT_module__DOT__CREG36 = vlTOPp->v__DOT__myFFT_module__DOT__CREG36;
    __Vdly__v__DOT__myFFT_module__DOT__CREG40 = vlTOPp->v__DOT__myFFT_module__DOT__CREG40;
    __Vdly__v__DOT__myFFT_module__DOT__CREG44 = vlTOPp->v__DOT__myFFT_module__DOT__CREG44;
    __Vdly__v__DOT__myFFT_module__DOT__CREG19 = vlTOPp->v__DOT__myFFT_module__DOT__CREG19;
    __Vdly__v__DOT__myFFT_module__DOT__CREG23 = vlTOPp->v__DOT__myFFT_module__DOT__CREG23;
    __Vdly__v__DOT__myFFT_module__DOT__CREG27 = vlTOPp->v__DOT__myFFT_module__DOT__CREG27;
    __Vdly__v__DOT__myFFT_module__DOT__CREG31 = vlTOPp->v__DOT__myFFT_module__DOT__CREG31;
    __Vdly__v__DOT__myFFT_module__DOT__CREG18 = vlTOPp->v__DOT__myFFT_module__DOT__CREG18;
    __Vdly__v__DOT__myFFT_module__DOT__CREG22 = vlTOPp->v__DOT__myFFT_module__DOT__CREG22;
    __Vdly__v__DOT__myFFT_module__DOT__CREG26 = vlTOPp->v__DOT__myFFT_module__DOT__CREG26;
    __Vdly__v__DOT__myFFT_module__DOT__CREG30 = vlTOPp->v__DOT__myFFT_module__DOT__CREG30;
    __Vdly__v__DOT__myFFT_module__DOT__CREG17 = vlTOPp->v__DOT__myFFT_module__DOT__CREG17;
    __Vdly__v__DOT__myFFT_module__DOT__CREG21 = vlTOPp->v__DOT__myFFT_module__DOT__CREG21;
    __Vdly__v__DOT__myFFT_module__DOT__CREG25 = vlTOPp->v__DOT__myFFT_module__DOT__CREG25;
    __Vdly__v__DOT__myFFT_module__DOT__CREG29 = vlTOPp->v__DOT__myFFT_module__DOT__CREG29;
    __Vdly__v__DOT__myFFT_module__DOT__CREG16 = vlTOPp->v__DOT__myFFT_module__DOT__CREG16;
    __Vdly__v__DOT__myFFT_module__DOT__CREG20 = vlTOPp->v__DOT__myFFT_module__DOT__CREG20;
    __Vdly__v__DOT__myFFT_module__DOT__CREG24 = vlTOPp->v__DOT__myFFT_module__DOT__CREG24;
    __Vdly__v__DOT__myFFT_module__DOT__CREG28 = vlTOPp->v__DOT__myFFT_module__DOT__CREG28;
    __Vdly__v__DOT__myFFT_module__DOT__CREG3 = vlTOPp->v__DOT__myFFT_module__DOT__CREG3;
    __Vdly__v__DOT__myFFT_module__DOT__CREG7 = vlTOPp->v__DOT__myFFT_module__DOT__CREG7;
    __Vdly__v__DOT__myFFT_module__DOT__CREG11 = vlTOPp->v__DOT__myFFT_module__DOT__CREG11;
    __Vdly__v__DOT__myFFT_module__DOT__CREG15 = vlTOPp->v__DOT__myFFT_module__DOT__CREG15;
    __Vdly__v__DOT__myFFT_module__DOT__CREG2 = vlTOPp->v__DOT__myFFT_module__DOT__CREG2;
    __Vdly__v__DOT__myFFT_module__DOT__CREG6 = vlTOPp->v__DOT__myFFT_module__DOT__CREG6;
    __Vdly__v__DOT__myFFT_module__DOT__CREG10 = vlTOPp->v__DOT__myFFT_module__DOT__CREG10;
    __Vdly__v__DOT__myFFT_module__DOT__CREG14 = vlTOPp->v__DOT__myFFT_module__DOT__CREG14;
    __Vdly__v__DOT__myFFT_module__DOT__CREG1 = vlTOPp->v__DOT__myFFT_module__DOT__CREG1;
    __Vdly__v__DOT__myFFT_module__DOT__CREG5 = vlTOPp->v__DOT__myFFT_module__DOT__CREG5;
    __Vdly__v__DOT__myFFT_module__DOT__CREG9 = vlTOPp->v__DOT__myFFT_module__DOT__CREG9;
    __Vdly__v__DOT__myFFT_module__DOT__CREG13 = vlTOPp->v__DOT__myFFT_module__DOT__CREG13;
    __Vdly__v__DOT__myFFT_module__DOT__CREG0 = vlTOPp->v__DOT__myFFT_module__DOT__CREG0;
    __Vdly__v__DOT__myFFT_module__DOT__CREG4 = vlTOPp->v__DOT__myFFT_module__DOT__CREG4;
    __Vdly__v__DOT__myFFT_module__DOT__CREG8 = vlTOPp->v__DOT__myFFT_module__DOT__CREG8;
    __Vdly__v__DOT__myFFT_module__DOT__CREG12 = vlTOPp->v__DOT__myFFT_module__DOT__CREG12;
    __Vdly__v__DOT__myFFT_module__DOT__cnt3 = vlTOPp->v__DOT__myFFT_module__DOT__cnt3;
    __Vdly__v__DOT__myFFT_module__DOT__stage_3_start_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__stage_3_start_flg;
    __Vdly__v__DOT__myFFT_module__DOT__C0 = vlTOPp->v__DOT__myFFT_module__DOT__C0;
    __Vdly__v__DOT__myFFT_module__DOT__C1 = vlTOPp->v__DOT__myFFT_module__DOT__C1;
    __Vdly__v__DOT__myFFT_module__DOT__C2 = vlTOPp->v__DOT__myFFT_module__DOT__C2;
    __Vdly__v__DOT__myFFT_module__DOT__C3 = vlTOPp->v__DOT__myFFT_module__DOT__C3;
    __Vdly__v__DOT__myFFT_module__DOT__C4 = vlTOPp->v__DOT__myFFT_module__DOT__C4;
    __Vdly__v__DOT__myFFT_module__DOT__C5 = vlTOPp->v__DOT__myFFT_module__DOT__C5;
    __Vdly__v__DOT__myFFT_module__DOT__C6 = vlTOPp->v__DOT__myFFT_module__DOT__C6;
    __Vdly__v__DOT__myFFT_module__DOT__C7 = vlTOPp->v__DOT__myFFT_module__DOT__C7;
    __Vdly__v__DOT__myFFT_module__DOT__C8 = vlTOPp->v__DOT__myFFT_module__DOT__C8;
    __Vdly__v__DOT__myFFT_module__DOT__C9 = vlTOPp->v__DOT__myFFT_module__DOT__C9;
    __Vdly__v__DOT__myFFT_module__DOT__C10 = vlTOPp->v__DOT__myFFT_module__DOT__C10;
    __Vdly__v__DOT__myFFT_module__DOT__C11 = vlTOPp->v__DOT__myFFT_module__DOT__C11;
    __Vdly__v__DOT__myFFT_module__DOT__C12 = vlTOPp->v__DOT__myFFT_module__DOT__C12;
    __Vdly__v__DOT__myFFT_module__DOT__C13 = vlTOPp->v__DOT__myFFT_module__DOT__C13;
    __Vdly__v__DOT__myFFT_module__DOT__C14 = vlTOPp->v__DOT__myFFT_module__DOT__C14;
    __Vdly__v__DOT__myFFT_module__DOT__C15 = vlTOPp->v__DOT__myFFT_module__DOT__C15;
    __Vdly__v__DOT__myFFT_module__DOT__C16 = vlTOPp->v__DOT__myFFT_module__DOT__C16;
    __Vdly__v__DOT__myFFT_module__DOT__C17 = vlTOPp->v__DOT__myFFT_module__DOT__C17;
    __Vdly__v__DOT__myFFT_module__DOT__C18 = vlTOPp->v__DOT__myFFT_module__DOT__C18;
    __Vdly__v__DOT__myFFT_module__DOT__C19 = vlTOPp->v__DOT__myFFT_module__DOT__C19;
    __Vdly__v__DOT__myFFT_module__DOT__C20 = vlTOPp->v__DOT__myFFT_module__DOT__C20;
    __Vdly__v__DOT__myFFT_module__DOT__C21 = vlTOPp->v__DOT__myFFT_module__DOT__C21;
    __Vdly__v__DOT__myFFT_module__DOT__C22 = vlTOPp->v__DOT__myFFT_module__DOT__C22;
    __Vdly__v__DOT__myFFT_module__DOT__C23 = vlTOPp->v__DOT__myFFT_module__DOT__C23;
    __Vdly__v__DOT__myFFT_module__DOT__C24 = vlTOPp->v__DOT__myFFT_module__DOT__C24;
    __Vdly__v__DOT__myFFT_module__DOT__C25 = vlTOPp->v__DOT__myFFT_module__DOT__C25;
    __Vdly__v__DOT__myFFT_module__DOT__C26 = vlTOPp->v__DOT__myFFT_module__DOT__C26;
    __Vdly__v__DOT__myFFT_module__DOT__C27 = vlTOPp->v__DOT__myFFT_module__DOT__C27;
    __Vdly__v__DOT__myFFT_module__DOT__C28 = vlTOPp->v__DOT__myFFT_module__DOT__C28;
    __Vdly__v__DOT__myFFT_module__DOT__C29 = vlTOPp->v__DOT__myFFT_module__DOT__C29;
    __Vdly__v__DOT__myFFT_module__DOT__C30 = vlTOPp->v__DOT__myFFT_module__DOT__C30;
    __Vdly__v__DOT__myFFT_module__DOT__C31 = vlTOPp->v__DOT__myFFT_module__DOT__C31;
    __Vdly__v__DOT__myFFT_module__DOT__C32 = vlTOPp->v__DOT__myFFT_module__DOT__C32;
    __Vdly__v__DOT__myFFT_module__DOT__C33 = vlTOPp->v__DOT__myFFT_module__DOT__C33;
    __Vdly__v__DOT__myFFT_module__DOT__C34 = vlTOPp->v__DOT__myFFT_module__DOT__C34;
    __Vdly__v__DOT__myFFT_module__DOT__C35 = vlTOPp->v__DOT__myFFT_module__DOT__C35;
    __Vdly__v__DOT__myFFT_module__DOT__C36 = vlTOPp->v__DOT__myFFT_module__DOT__C36;
    __Vdly__v__DOT__myFFT_module__DOT__C37 = vlTOPp->v__DOT__myFFT_module__DOT__C37;
    __Vdly__v__DOT__myFFT_module__DOT__C38 = vlTOPp->v__DOT__myFFT_module__DOT__C38;
    __Vdly__v__DOT__myFFT_module__DOT__C39 = vlTOPp->v__DOT__myFFT_module__DOT__C39;
    __Vdly__v__DOT__myFFT_module__DOT__C40 = vlTOPp->v__DOT__myFFT_module__DOT__C40;
    __Vdly__v__DOT__myFFT_module__DOT__C41 = vlTOPp->v__DOT__myFFT_module__DOT__C41;
    __Vdly__v__DOT__myFFT_module__DOT__C42 = vlTOPp->v__DOT__myFFT_module__DOT__C42;
    __Vdly__v__DOT__myFFT_module__DOT__C43 = vlTOPp->v__DOT__myFFT_module__DOT__C43;
    __Vdly__v__DOT__myFFT_module__DOT__C44 = vlTOPp->v__DOT__myFFT_module__DOT__C44;
    __Vdly__v__DOT__myFFT_module__DOT__C45 = vlTOPp->v__DOT__myFFT_module__DOT__C45;
    __Vdly__v__DOT__myFFT_module__DOT__C46 = vlTOPp->v__DOT__myFFT_module__DOT__C46;
    __Vdly__v__DOT__myFFT_module__DOT__C47 = vlTOPp->v__DOT__myFFT_module__DOT__C47;
    __Vdly__v__DOT__myFFT_module__DOT__C48 = vlTOPp->v__DOT__myFFT_module__DOT__C48;
    __Vdly__v__DOT__myFFT_module__DOT__C49 = vlTOPp->v__DOT__myFFT_module__DOT__C49;
    __Vdly__v__DOT__myFFT_module__DOT__C50 = vlTOPp->v__DOT__myFFT_module__DOT__C50;
    __Vdly__v__DOT__myFFT_module__DOT__C51 = vlTOPp->v__DOT__myFFT_module__DOT__C51;
    __Vdly__v__DOT__myFFT_module__DOT__C52 = vlTOPp->v__DOT__myFFT_module__DOT__C52;
    __Vdly__v__DOT__myFFT_module__DOT__C53 = vlTOPp->v__DOT__myFFT_module__DOT__C53;
    __Vdly__v__DOT__myFFT_module__DOT__C54 = vlTOPp->v__DOT__myFFT_module__DOT__C54;
    __Vdly__v__DOT__myFFT_module__DOT__C55 = vlTOPp->v__DOT__myFFT_module__DOT__C55;
    __Vdly__v__DOT__myFFT_module__DOT__C56 = vlTOPp->v__DOT__myFFT_module__DOT__C56;
    __Vdly__v__DOT__myFFT_module__DOT__C57 = vlTOPp->v__DOT__myFFT_module__DOT__C57;
    __Vdly__v__DOT__myFFT_module__DOT__C58 = vlTOPp->v__DOT__myFFT_module__DOT__C58;
    __Vdly__v__DOT__myFFT_module__DOT__C59 = vlTOPp->v__DOT__myFFT_module__DOT__C59;
    __Vdly__v__DOT__myFFT_module__DOT__C60 = vlTOPp->v__DOT__myFFT_module__DOT__C60;
    __Vdly__v__DOT__myFFT_module__DOT__C61 = vlTOPp->v__DOT__myFFT_module__DOT__C61;
    __Vdly__v__DOT__myFFT_module__DOT__C62 = vlTOPp->v__DOT__myFFT_module__DOT__C62;
    __Vdly__v__DOT__myFFT_module__DOT__C63 = vlTOPp->v__DOT__myFFT_module__DOT__C63;
    __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3 
	= vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3;
    __Vdly__v__DOT__myFFT_module__DOT__D60 = vlTOPp->v__DOT__myFFT_module__DOT__D60;
    __Vdly__v__DOT__myFFT_module__DOT__D61 = vlTOPp->v__DOT__myFFT_module__DOT__D61;
    __Vdly__v__DOT__myFFT_module__DOT__D62 = vlTOPp->v__DOT__myFFT_module__DOT__D62;
    __Vdly__v__DOT__myFFT_module__DOT__D63 = vlTOPp->v__DOT__myFFT_module__DOT__D63;
    __Vdly__v__DOT__myFFT_module__DOT__D56 = vlTOPp->v__DOT__myFFT_module__DOT__D56;
    __Vdly__v__DOT__myFFT_module__DOT__D57 = vlTOPp->v__DOT__myFFT_module__DOT__D57;
    __Vdly__v__DOT__myFFT_module__DOT__D58 = vlTOPp->v__DOT__myFFT_module__DOT__D58;
    __Vdly__v__DOT__myFFT_module__DOT__D59 = vlTOPp->v__DOT__myFFT_module__DOT__D59;
    __Vdly__v__DOT__myFFT_module__DOT__D52 = vlTOPp->v__DOT__myFFT_module__DOT__D52;
    __Vdly__v__DOT__myFFT_module__DOT__D53 = vlTOPp->v__DOT__myFFT_module__DOT__D53;
    __Vdly__v__DOT__myFFT_module__DOT__D54 = vlTOPp->v__DOT__myFFT_module__DOT__D54;
    __Vdly__v__DOT__myFFT_module__DOT__D55 = vlTOPp->v__DOT__myFFT_module__DOT__D55;
    __Vdly__v__DOT__myFFT_module__DOT__D48 = vlTOPp->v__DOT__myFFT_module__DOT__D48;
    __Vdly__v__DOT__myFFT_module__DOT__D49 = vlTOPp->v__DOT__myFFT_module__DOT__D49;
    __Vdly__v__DOT__myFFT_module__DOT__D50 = vlTOPp->v__DOT__myFFT_module__DOT__D50;
    __Vdly__v__DOT__myFFT_module__DOT__D51 = vlTOPp->v__DOT__myFFT_module__DOT__D51;
    __Vdly__v__DOT__myFFT_module__DOT__D44 = vlTOPp->v__DOT__myFFT_module__DOT__D44;
    __Vdly__v__DOT__myFFT_module__DOT__D45 = vlTOPp->v__DOT__myFFT_module__DOT__D45;
    __Vdly__v__DOT__myFFT_module__DOT__D46 = vlTOPp->v__DOT__myFFT_module__DOT__D46;
    __Vdly__v__DOT__myFFT_module__DOT__D47 = vlTOPp->v__DOT__myFFT_module__DOT__D47;
    __Vdly__v__DOT__myFFT_module__DOT__D40 = vlTOPp->v__DOT__myFFT_module__DOT__D40;
    __Vdly__v__DOT__myFFT_module__DOT__D41 = vlTOPp->v__DOT__myFFT_module__DOT__D41;
    __Vdly__v__DOT__myFFT_module__DOT__D42 = vlTOPp->v__DOT__myFFT_module__DOT__D42;
    __Vdly__v__DOT__myFFT_module__DOT__D43 = vlTOPp->v__DOT__myFFT_module__DOT__D43;
    __Vdly__v__DOT__myFFT_module__DOT__D36 = vlTOPp->v__DOT__myFFT_module__DOT__D36;
    __Vdly__v__DOT__myFFT_module__DOT__D37 = vlTOPp->v__DOT__myFFT_module__DOT__D37;
    __Vdly__v__DOT__myFFT_module__DOT__D38 = vlTOPp->v__DOT__myFFT_module__DOT__D38;
    __Vdly__v__DOT__myFFT_module__DOT__D39 = vlTOPp->v__DOT__myFFT_module__DOT__D39;
    __Vdly__v__DOT__myFFT_module__DOT__D32 = vlTOPp->v__DOT__myFFT_module__DOT__D32;
    __Vdly__v__DOT__myFFT_module__DOT__D33 = vlTOPp->v__DOT__myFFT_module__DOT__D33;
    __Vdly__v__DOT__myFFT_module__DOT__D34 = vlTOPp->v__DOT__myFFT_module__DOT__D34;
    __Vdly__v__DOT__myFFT_module__DOT__D35 = vlTOPp->v__DOT__myFFT_module__DOT__D35;
    __Vdly__v__DOT__myFFT_module__DOT__D28 = vlTOPp->v__DOT__myFFT_module__DOT__D28;
    __Vdly__v__DOT__myFFT_module__DOT__D29 = vlTOPp->v__DOT__myFFT_module__DOT__D29;
    __Vdly__v__DOT__myFFT_module__DOT__D30 = vlTOPp->v__DOT__myFFT_module__DOT__D30;
    __Vdly__v__DOT__myFFT_module__DOT__D31 = vlTOPp->v__DOT__myFFT_module__DOT__D31;
    __Vdly__v__DOT__myFFT_module__DOT__D24 = vlTOPp->v__DOT__myFFT_module__DOT__D24;
    __Vdly__v__DOT__myFFT_module__DOT__D25 = vlTOPp->v__DOT__myFFT_module__DOT__D25;
    __Vdly__v__DOT__myFFT_module__DOT__D26 = vlTOPp->v__DOT__myFFT_module__DOT__D26;
    __Vdly__v__DOT__myFFT_module__DOT__D27 = vlTOPp->v__DOT__myFFT_module__DOT__D27;
    __Vdly__v__DOT__myFFT_module__DOT__D20 = vlTOPp->v__DOT__myFFT_module__DOT__D20;
    __Vdly__v__DOT__myFFT_module__DOT__D21 = vlTOPp->v__DOT__myFFT_module__DOT__D21;
    __Vdly__v__DOT__myFFT_module__DOT__D22 = vlTOPp->v__DOT__myFFT_module__DOT__D22;
    __Vdly__v__DOT__myFFT_module__DOT__D23 = vlTOPp->v__DOT__myFFT_module__DOT__D23;
    __Vdly__v__DOT__myFFT_module__DOT__D16 = vlTOPp->v__DOT__myFFT_module__DOT__D16;
    __Vdly__v__DOT__myFFT_module__DOT__D17 = vlTOPp->v__DOT__myFFT_module__DOT__D17;
    __Vdly__v__DOT__myFFT_module__DOT__D18 = vlTOPp->v__DOT__myFFT_module__DOT__D18;
    __Vdly__v__DOT__myFFT_module__DOT__D19 = vlTOPp->v__DOT__myFFT_module__DOT__D19;
    __Vdly__v__DOT__myFFT_module__DOT__D12 = vlTOPp->v__DOT__myFFT_module__DOT__D12;
    __Vdly__v__DOT__myFFT_module__DOT__D13 = vlTOPp->v__DOT__myFFT_module__DOT__D13;
    __Vdly__v__DOT__myFFT_module__DOT__D14 = vlTOPp->v__DOT__myFFT_module__DOT__D14;
    __Vdly__v__DOT__myFFT_module__DOT__D15 = vlTOPp->v__DOT__myFFT_module__DOT__D15;
    __Vdly__v__DOT__myFFT_module__DOT__D8 = vlTOPp->v__DOT__myFFT_module__DOT__D8;
    __Vdly__v__DOT__myFFT_module__DOT__D9 = vlTOPp->v__DOT__myFFT_module__DOT__D9;
    __Vdly__v__DOT__myFFT_module__DOT__D10 = vlTOPp->v__DOT__myFFT_module__DOT__D10;
    __Vdly__v__DOT__myFFT_module__DOT__D11 = vlTOPp->v__DOT__myFFT_module__DOT__D11;
    __Vdly__v__DOT__myFFT_module__DOT__D4 = vlTOPp->v__DOT__myFFT_module__DOT__D4;
    __Vdly__v__DOT__myFFT_module__DOT__D5 = vlTOPp->v__DOT__myFFT_module__DOT__D5;
    __Vdly__v__DOT__myFFT_module__DOT__D6 = vlTOPp->v__DOT__myFFT_module__DOT__D6;
    __Vdly__v__DOT__myFFT_module__DOT__D7 = vlTOPp->v__DOT__myFFT_module__DOT__D7;
    __Vdly__v__DOT__myFFT_module__DOT__D0 = vlTOPp->v__DOT__myFFT_module__DOT__D0;
    __Vdly__v__DOT__myFFT_module__DOT__D1 = vlTOPp->v__DOT__myFFT_module__DOT__D1;
    __Vdly__v__DOT__myFFT_module__DOT__D2 = vlTOPp->v__DOT__myFFT_module__DOT__D2;
    __Vdly__v__DOT__myFFT_module__DOT__D3 = vlTOPp->v__DOT__myFFT_module__DOT__D3;
    __Vdly__v__DOT__myFFT_module__DOT__stage_4_start_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__stage_4_start_flg;
    __Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg 
	= vlTOPp->v__DOT__myFFT_module__DOT__stage_5_start_flg;
    __Vdly__v__DOT__A0 = vlTOPp->v__DOT__A0;
    __Vdly__v__DOT__A1 = vlTOPp->v__DOT__A1;
    __Vdly__v__DOT__A2 = vlTOPp->v__DOT__A2;
    __Vdly__v__DOT__A3 = vlTOPp->v__DOT__A3;
    __Vdly__v__DOT__A4 = vlTOPp->v__DOT__A4;
    __Vdly__v__DOT__A5 = vlTOPp->v__DOT__A5;
    __Vdly__v__DOT__A6 = vlTOPp->v__DOT__A6;
    __Vdly__v__DOT__A7 = vlTOPp->v__DOT__A7;
    __Vdly__v__DOT__A8 = vlTOPp->v__DOT__A8;
    __Vdly__v__DOT__A9 = vlTOPp->v__DOT__A9;
    __Vdly__v__DOT__A10 = vlTOPp->v__DOT__A10;
    __Vdly__v__DOT__A11 = vlTOPp->v__DOT__A11;
    __Vdly__v__DOT__A12 = vlTOPp->v__DOT__A12;
    __Vdly__v__DOT__A13 = vlTOPp->v__DOT__A13;
    __Vdly__v__DOT__A14 = vlTOPp->v__DOT__A14;
    __Vdly__v__DOT__A15 = vlTOPp->v__DOT__A15;
    __Vdly__v__DOT__A16 = vlTOPp->v__DOT__A16;
    __Vdly__v__DOT__A17 = vlTOPp->v__DOT__A17;
    __Vdly__v__DOT__A18 = vlTOPp->v__DOT__A18;
    __Vdly__v__DOT__A19 = vlTOPp->v__DOT__A19;
    __Vdly__v__DOT__A20 = vlTOPp->v__DOT__A20;
    __Vdly__v__DOT__A21 = vlTOPp->v__DOT__A21;
    __Vdly__v__DOT__A22 = vlTOPp->v__DOT__A22;
    __Vdly__v__DOT__A23 = vlTOPp->v__DOT__A23;
    __Vdly__v__DOT__A24 = vlTOPp->v__DOT__A24;
    __Vdly__v__DOT__A25 = vlTOPp->v__DOT__A25;
    __Vdly__v__DOT__A26 = vlTOPp->v__DOT__A26;
    __Vdly__v__DOT__A27 = vlTOPp->v__DOT__A27;
    __Vdly__v__DOT__A28 = vlTOPp->v__DOT__A28;
    __Vdly__v__DOT__A29 = vlTOPp->v__DOT__A29;
    __Vdly__v__DOT__A30 = vlTOPp->v__DOT__A30;
    __Vdly__v__DOT__A31 = vlTOPp->v__DOT__A31;
    __Vdly__v__DOT__A32 = vlTOPp->v__DOT__A32;
    __Vdly__v__DOT__A33 = vlTOPp->v__DOT__A33;
    __Vdly__v__DOT__A34 = vlTOPp->v__DOT__A34;
    __Vdly__v__DOT__A35 = vlTOPp->v__DOT__A35;
    __Vdly__v__DOT__A36 = vlTOPp->v__DOT__A36;
    __Vdly__v__DOT__A37 = vlTOPp->v__DOT__A37;
    __Vdly__v__DOT__A38 = vlTOPp->v__DOT__A38;
    __Vdly__v__DOT__A39 = vlTOPp->v__DOT__A39;
    __Vdly__v__DOT__A40 = vlTOPp->v__DOT__A40;
    __Vdly__v__DOT__A41 = vlTOPp->v__DOT__A41;
    __Vdly__v__DOT__A42 = vlTOPp->v__DOT__A42;
    __Vdly__v__DOT__A43 = vlTOPp->v__DOT__A43;
    __Vdly__v__DOT__A44 = vlTOPp->v__DOT__A44;
    __Vdly__v__DOT__A45 = vlTOPp->v__DOT__A45;
    __Vdly__v__DOT__A46 = vlTOPp->v__DOT__A46;
    __Vdly__v__DOT__A47 = vlTOPp->v__DOT__A47;
    __Vdly__v__DOT__A48 = vlTOPp->v__DOT__A48;
    __Vdly__v__DOT__A49 = vlTOPp->v__DOT__A49;
    __Vdly__v__DOT__A50 = vlTOPp->v__DOT__A50;
    __Vdly__v__DOT__A51 = vlTOPp->v__DOT__A51;
    __Vdly__v__DOT__A52 = vlTOPp->v__DOT__A52;
    __Vdly__v__DOT__A53 = vlTOPp->v__DOT__A53;
    __Vdly__v__DOT__A54 = vlTOPp->v__DOT__A54;
    __Vdly__v__DOT__A55 = vlTOPp->v__DOT__A55;
    __Vdly__v__DOT__A56 = vlTOPp->v__DOT__A56;
    __Vdly__v__DOT__A57 = vlTOPp->v__DOT__A57;
    __Vdly__v__DOT__A58 = vlTOPp->v__DOT__A58;
    __Vdly__v__DOT__A59 = vlTOPp->v__DOT__A59;
    __Vdly__v__DOT__A60 = vlTOPp->v__DOT__A60;
    __Vdly__v__DOT__A61 = vlTOPp->v__DOT__A61;
    __Vdly__v__DOT__A62 = vlTOPp->v__DOT__A62;
    __Vdly__v__DOT__A63 = vlTOPp->v__DOT__A63;
    __Vdly__v__DOT__start = vlTOPp->v__DOT__start;
    __Vdly__v__DOT__start_fft_flg = vlTOPp->v__DOT__start_fft_flg;
    __Vdly__v__DOT__cnt = vlTOPp->v__DOT__cnt;
    __Vdly__v__DOT__AREG63 = vlTOPp->v__DOT__AREG63;
    __Vdly__v__DOT__AREG62 = vlTOPp->v__DOT__AREG62;
    __Vdly__v__DOT__AREG61 = vlTOPp->v__DOT__AREG61;
    __Vdly__v__DOT__AREG60 = vlTOPp->v__DOT__AREG60;
    __Vdly__v__DOT__AREG59 = vlTOPp->v__DOT__AREG59;
    __Vdly__v__DOT__AREG58 = vlTOPp->v__DOT__AREG58;
    __Vdly__v__DOT__AREG57 = vlTOPp->v__DOT__AREG57;
    __Vdly__v__DOT__AREG56 = vlTOPp->v__DOT__AREG56;
    __Vdly__v__DOT__AREG55 = vlTOPp->v__DOT__AREG55;
    __Vdly__v__DOT__AREG54 = vlTOPp->v__DOT__AREG54;
    __Vdly__v__DOT__AREG53 = vlTOPp->v__DOT__AREG53;
    __Vdly__v__DOT__AREG52 = vlTOPp->v__DOT__AREG52;
    __Vdly__v__DOT__AREG51 = vlTOPp->v__DOT__AREG51;
    __Vdly__v__DOT__AREG50 = vlTOPp->v__DOT__AREG50;
    __Vdly__v__DOT__AREG49 = vlTOPp->v__DOT__AREG49;
    __Vdly__v__DOT__AREG48 = vlTOPp->v__DOT__AREG48;
    __Vdly__v__DOT__AREG47 = vlTOPp->v__DOT__AREG47;
    __Vdly__v__DOT__AREG46 = vlTOPp->v__DOT__AREG46;
    __Vdly__v__DOT__AREG45 = vlTOPp->v__DOT__AREG45;
    __Vdly__v__DOT__AREG44 = vlTOPp->v__DOT__AREG44;
    __Vdly__v__DOT__AREG43 = vlTOPp->v__DOT__AREG43;
    __Vdly__v__DOT__AREG42 = vlTOPp->v__DOT__AREG42;
    __Vdly__v__DOT__AREG41 = vlTOPp->v__DOT__AREG41;
    __Vdly__v__DOT__AREG40 = vlTOPp->v__DOT__AREG40;
    __Vdly__v__DOT__AREG39 = vlTOPp->v__DOT__AREG39;
    __Vdly__v__DOT__AREG38 = vlTOPp->v__DOT__AREG38;
    __Vdly__v__DOT__AREG37 = vlTOPp->v__DOT__AREG37;
    __Vdly__v__DOT__AREG36 = vlTOPp->v__DOT__AREG36;
    __Vdly__v__DOT__AREG35 = vlTOPp->v__DOT__AREG35;
    __Vdly__v__DOT__AREG34 = vlTOPp->v__DOT__AREG34;
    __Vdly__v__DOT__AREG33 = vlTOPp->v__DOT__AREG33;
    __Vdly__v__DOT__AREG32 = vlTOPp->v__DOT__AREG32;
    __Vdly__v__DOT__AREG31 = vlTOPp->v__DOT__AREG31;
    __Vdly__v__DOT__AREG30 = vlTOPp->v__DOT__AREG30;
    __Vdly__v__DOT__AREG29 = vlTOPp->v__DOT__AREG29;
    __Vdly__v__DOT__AREG28 = vlTOPp->v__DOT__AREG28;
    __Vdly__v__DOT__AREG27 = vlTOPp->v__DOT__AREG27;
    __Vdly__v__DOT__AREG26 = vlTOPp->v__DOT__AREG26;
    __Vdly__v__DOT__AREG25 = vlTOPp->v__DOT__AREG25;
    __Vdly__v__DOT__AREG24 = vlTOPp->v__DOT__AREG24;
    __Vdly__v__DOT__AREG23 = vlTOPp->v__DOT__AREG23;
    __Vdly__v__DOT__AREG22 = vlTOPp->v__DOT__AREG22;
    __Vdly__v__DOT__AREG21 = vlTOPp->v__DOT__AREG21;
    __Vdly__v__DOT__AREG20 = vlTOPp->v__DOT__AREG20;
    __Vdly__v__DOT__AREG19 = vlTOPp->v__DOT__AREG19;
    __Vdly__v__DOT__AREG18 = vlTOPp->v__DOT__AREG18;
    __Vdly__v__DOT__AREG17 = vlTOPp->v__DOT__AREG17;
    __Vdly__v__DOT__AREG16 = vlTOPp->v__DOT__AREG16;
    __Vdly__v__DOT__AREG15 = vlTOPp->v__DOT__AREG15;
    __Vdly__v__DOT__AREG14 = vlTOPp->v__DOT__AREG14;
    __Vdly__v__DOT__AREG13 = vlTOPp->v__DOT__AREG13;
    __Vdly__v__DOT__AREG12 = vlTOPp->v__DOT__AREG12;
    __Vdly__v__DOT__AREG11 = vlTOPp->v__DOT__AREG11;
    __Vdly__v__DOT__AREG10 = vlTOPp->v__DOT__AREG10;
    __Vdly__v__DOT__AREG9 = vlTOPp->v__DOT__AREG9;
    __Vdly__v__DOT__AREG8 = vlTOPp->v__DOT__AREG8;
    __Vdly__v__DOT__AREG7 = vlTOPp->v__DOT__AREG7;
    __Vdly__v__DOT__AREG6 = vlTOPp->v__DOT__AREG6;
    __Vdly__v__DOT__AREG5 = vlTOPp->v__DOT__AREG5;
    __Vdly__v__DOT__AREG4 = vlTOPp->v__DOT__AREG4;
    __Vdly__v__DOT__AREG3 = vlTOPp->v__DOT__AREG3;
    __Vdly__v__DOT__AREG2 = vlTOPp->v__DOT__AREG2;
    __Vdly__v__DOT__AREG1 = vlTOPp->v__DOT__AREG1;
    __Vdly__v__DOT__AREG0 = vlTOPp->v__DOT__AREG0;
    __Vdly__v__DOT__fin_fft_flg = vlTOPp->v__DOT__fin_fft_flg;
    __Vdly__v__DOT__cnt_o = vlTOPp->v__DOT__cnt_o;
    // ALWAYS at ../fft64.v:34
    if (vlTOPp->RST) {
	if (vlTOPp->v__DOT__start_fft_flg) {
	    if ((1 & (~ (IData)(vlTOPp->v__DOT__start)))) {
		__Vdly__v__DOT__A0 = vlTOPp->v__DOT__AREG0;
		__Vdly__v__DOT__A1 = vlTOPp->v__DOT__AREG1;
		__Vdly__v__DOT__A2 = vlTOPp->v__DOT__AREG2;
		__Vdly__v__DOT__A3 = vlTOPp->v__DOT__AREG3;
		__Vdly__v__DOT__A4 = vlTOPp->v__DOT__AREG4;
		__Vdly__v__DOT__A5 = vlTOPp->v__DOT__AREG5;
		__Vdly__v__DOT__A6 = vlTOPp->v__DOT__AREG6;
		__Vdly__v__DOT__A7 = vlTOPp->v__DOT__AREG7;
		__Vdly__v__DOT__A8 = vlTOPp->v__DOT__AREG8;
		__Vdly__v__DOT__A9 = vlTOPp->v__DOT__AREG9;
		__Vdly__v__DOT__A10 = vlTOPp->v__DOT__AREG10;
		__Vdly__v__DOT__A11 = vlTOPp->v__DOT__AREG11;
		__Vdly__v__DOT__A12 = vlTOPp->v__DOT__AREG12;
		__Vdly__v__DOT__A13 = vlTOPp->v__DOT__AREG13;
		__Vdly__v__DOT__A14 = vlTOPp->v__DOT__AREG14;
		__Vdly__v__DOT__A15 = vlTOPp->v__DOT__AREG15;
		__Vdly__v__DOT__A16 = vlTOPp->v__DOT__AREG16;
		__Vdly__v__DOT__A17 = vlTOPp->v__DOT__AREG17;
		__Vdly__v__DOT__A18 = vlTOPp->v__DOT__AREG18;
		__Vdly__v__DOT__A19 = vlTOPp->v__DOT__AREG19;
		__Vdly__v__DOT__A20 = vlTOPp->v__DOT__AREG20;
		__Vdly__v__DOT__A21 = vlTOPp->v__DOT__AREG21;
		__Vdly__v__DOT__A22 = vlTOPp->v__DOT__AREG22;
		__Vdly__v__DOT__A23 = vlTOPp->v__DOT__AREG23;
		__Vdly__v__DOT__A24 = vlTOPp->v__DOT__AREG24;
		__Vdly__v__DOT__A25 = vlTOPp->v__DOT__AREG25;
		__Vdly__v__DOT__A26 = vlTOPp->v__DOT__AREG26;
		__Vdly__v__DOT__A27 = vlTOPp->v__DOT__AREG27;
		__Vdly__v__DOT__A28 = vlTOPp->v__DOT__AREG28;
		__Vdly__v__DOT__A29 = vlTOPp->v__DOT__AREG29;
		__Vdly__v__DOT__A30 = vlTOPp->v__DOT__AREG30;
		__Vdly__v__DOT__A31 = vlTOPp->v__DOT__AREG31;
		__Vdly__v__DOT__A32 = vlTOPp->v__DOT__AREG32;
		__Vdly__v__DOT__A33 = vlTOPp->v__DOT__AREG33;
		__Vdly__v__DOT__A34 = vlTOPp->v__DOT__AREG34;
		__Vdly__v__DOT__A35 = vlTOPp->v__DOT__AREG35;
		__Vdly__v__DOT__A36 = vlTOPp->v__DOT__AREG36;
		__Vdly__v__DOT__A37 = vlTOPp->v__DOT__AREG37;
		__Vdly__v__DOT__A38 = vlTOPp->v__DOT__AREG38;
		__Vdly__v__DOT__A39 = vlTOPp->v__DOT__AREG39;
		__Vdly__v__DOT__A40 = vlTOPp->v__DOT__AREG40;
		__Vdly__v__DOT__A41 = vlTOPp->v__DOT__AREG41;
		__Vdly__v__DOT__A42 = vlTOPp->v__DOT__AREG42;
		__Vdly__v__DOT__A43 = vlTOPp->v__DOT__AREG43;
		__Vdly__v__DOT__A44 = vlTOPp->v__DOT__AREG44;
		__Vdly__v__DOT__A45 = vlTOPp->v__DOT__AREG45;
		__Vdly__v__DOT__A46 = vlTOPp->v__DOT__AREG46;
		__Vdly__v__DOT__A47 = vlTOPp->v__DOT__AREG47;
		__Vdly__v__DOT__A48 = vlTOPp->v__DOT__AREG48;
		__Vdly__v__DOT__A49 = vlTOPp->v__DOT__AREG49;
		__Vdly__v__DOT__A50 = vlTOPp->v__DOT__AREG50;
		__Vdly__v__DOT__A51 = vlTOPp->v__DOT__AREG51;
		__Vdly__v__DOT__A52 = vlTOPp->v__DOT__AREG52;
		__Vdly__v__DOT__A53 = vlTOPp->v__DOT__AREG53;
		__Vdly__v__DOT__A54 = vlTOPp->v__DOT__AREG54;
		__Vdly__v__DOT__A55 = vlTOPp->v__DOT__AREG55;
		__Vdly__v__DOT__A56 = vlTOPp->v__DOT__AREG56;
		__Vdly__v__DOT__A57 = vlTOPp->v__DOT__AREG57;
		__Vdly__v__DOT__A58 = vlTOPp->v__DOT__AREG58;
		__Vdly__v__DOT__A59 = vlTOPp->v__DOT__AREG59;
		__Vdly__v__DOT__A60 = vlTOPp->v__DOT__AREG60;
		__Vdly__v__DOT__A61 = vlTOPp->v__DOT__AREG61;
		__Vdly__v__DOT__A62 = vlTOPp->v__DOT__AREG62;
		__Vdly__v__DOT__A63 = vlTOPp->v__DOT__AREG63;
		__Vdly__v__DOT__start = 1;
	    }
	    if (vlTOPp->v__DOT__input_succeed_flg) {
		__Vdly__v__DOT__start = 0;
		__Vdly__v__DOT__start_fft_flg = 0;
		__Vdly__v__DOT__cnt = 0;
	    }
	} else {
	    if (vlTOPp->valid_a) {
		if ((0x40 & (IData)(vlTOPp->v__DOT__cnt))) {
		    __Vdly__v__DOT__cnt = vlTOPp->v__DOT__cnt;
		} else {
		    if ((0x20 & (IData)(vlTOPp->v__DOT__cnt))) {
			if ((0x10 & (IData)(vlTOPp->v__DOT__cnt))) {
			    if ((8 & (IData)(vlTOPp->v__DOT__cnt))) {
				if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG63 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG62 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG61 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG60 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG59 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG58 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG57 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG56 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				}
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG55 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG54 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG53 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG52 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG51 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG50 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG49 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG48 
						= (
						   ((IData)(vlTOPp->ar) 
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
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG47 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG46 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG45 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG44 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG43 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG42 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG41 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG40 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				}
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG39 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG38 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG37 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG36 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG35 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG34 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG33 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG32 
						= (
						   ((IData)(vlTOPp->ar) 
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
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG31 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG30 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG29 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG28 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG27 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG26 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG25 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG24 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				}
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG23 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG22 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG21 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG20 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG19 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG18 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG17 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG16 
						= (
						   ((IData)(vlTOPp->ar) 
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
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG15 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG14 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG13 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG12 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG11 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG10 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG9 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG8 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				}
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__cnt))) {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG7 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG6 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG5 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG4 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    }
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__cnt))) {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG3 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG2 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					}
				    } else {
					if ((1 & (IData)(vlTOPp->v__DOT__cnt))) {
					    __Vdly__v__DOT__AREG1 
						= (
						   ((IData)(vlTOPp->ar) 
						    << 0xb) 
						   | (IData)(vlTOPp->ai));
					} else {
					    __Vdly__v__DOT__AREG0 
						= (
						   ((IData)(vlTOPp->ar) 
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
	if (((IData)(vlTOPp->v__DOT__cnt) > 0x3f)) {
	    __Vdly__v__DOT__start_fft_flg = 1;
	    __Vdly__v__DOT__cnt = 0;
	    vlTOPp->v__DOT__fft_culculating_flg = 1;
	}
	if (vlTOPp->v__DOT__valid_o_from_myFFT) {
	    __Vdly__v__DOT__fin_fft_flg = 1;
	}
	if (vlTOPp->v__DOT__fin_fft_flg) {
	    vlTOPp->valid_o = 1;
	    vlTOPp->v__DOT__fft_culculating_flg = 0;
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
    } else {
	__Vdly__v__DOT__start = 0;
	__Vdly__v__DOT__cnt_o = 0;
	__Vdly__v__DOT__cnt = 0;
	vlTOPp->valid_o = 0;
	__Vdly__v__DOT__start_fft_flg = 0;
	vlTOPp->v__DOT__fft_culculating_flg = 0;
    }
    vlTOPp->v__DOT__start_fft_flg = __Vdly__v__DOT__start_fft_flg;
    vlTOPp->v__DOT__AREG0 = __Vdly__v__DOT__AREG0;
    vlTOPp->v__DOT__AREG1 = __Vdly__v__DOT__AREG1;
    vlTOPp->v__DOT__AREG2 = __Vdly__v__DOT__AREG2;
    vlTOPp->v__DOT__AREG3 = __Vdly__v__DOT__AREG3;
    vlTOPp->v__DOT__AREG4 = __Vdly__v__DOT__AREG4;
    vlTOPp->v__DOT__AREG5 = __Vdly__v__DOT__AREG5;
    vlTOPp->v__DOT__AREG6 = __Vdly__v__DOT__AREG6;
    vlTOPp->v__DOT__AREG7 = __Vdly__v__DOT__AREG7;
    vlTOPp->v__DOT__AREG8 = __Vdly__v__DOT__AREG8;
    vlTOPp->v__DOT__AREG9 = __Vdly__v__DOT__AREG9;
    vlTOPp->v__DOT__AREG10 = __Vdly__v__DOT__AREG10;
    vlTOPp->v__DOT__AREG11 = __Vdly__v__DOT__AREG11;
    vlTOPp->v__DOT__AREG12 = __Vdly__v__DOT__AREG12;
    vlTOPp->v__DOT__AREG13 = __Vdly__v__DOT__AREG13;
    vlTOPp->v__DOT__AREG14 = __Vdly__v__DOT__AREG14;
    vlTOPp->v__DOT__AREG15 = __Vdly__v__DOT__AREG15;
    vlTOPp->v__DOT__AREG16 = __Vdly__v__DOT__AREG16;
    vlTOPp->v__DOT__AREG17 = __Vdly__v__DOT__AREG17;
    vlTOPp->v__DOT__AREG18 = __Vdly__v__DOT__AREG18;
    vlTOPp->v__DOT__AREG19 = __Vdly__v__DOT__AREG19;
    vlTOPp->v__DOT__AREG20 = __Vdly__v__DOT__AREG20;
    vlTOPp->v__DOT__AREG21 = __Vdly__v__DOT__AREG21;
    vlTOPp->v__DOT__AREG22 = __Vdly__v__DOT__AREG22;
    vlTOPp->v__DOT__AREG23 = __Vdly__v__DOT__AREG23;
    vlTOPp->v__DOT__AREG24 = __Vdly__v__DOT__AREG24;
    vlTOPp->v__DOT__AREG25 = __Vdly__v__DOT__AREG25;
    vlTOPp->v__DOT__AREG26 = __Vdly__v__DOT__AREG26;
    vlTOPp->v__DOT__AREG27 = __Vdly__v__DOT__AREG27;
    vlTOPp->v__DOT__AREG28 = __Vdly__v__DOT__AREG28;
    vlTOPp->v__DOT__AREG29 = __Vdly__v__DOT__AREG29;
    vlTOPp->v__DOT__AREG30 = __Vdly__v__DOT__AREG30;
    vlTOPp->v__DOT__AREG31 = __Vdly__v__DOT__AREG31;
    vlTOPp->v__DOT__AREG32 = __Vdly__v__DOT__AREG32;
    vlTOPp->v__DOT__AREG33 = __Vdly__v__DOT__AREG33;
    vlTOPp->v__DOT__AREG34 = __Vdly__v__DOT__AREG34;
    vlTOPp->v__DOT__AREG35 = __Vdly__v__DOT__AREG35;
    vlTOPp->v__DOT__AREG36 = __Vdly__v__DOT__AREG36;
    vlTOPp->v__DOT__AREG37 = __Vdly__v__DOT__AREG37;
    vlTOPp->v__DOT__AREG38 = __Vdly__v__DOT__AREG38;
    vlTOPp->v__DOT__AREG39 = __Vdly__v__DOT__AREG39;
    vlTOPp->v__DOT__AREG40 = __Vdly__v__DOT__AREG40;
    vlTOPp->v__DOT__AREG41 = __Vdly__v__DOT__AREG41;
    vlTOPp->v__DOT__AREG42 = __Vdly__v__DOT__AREG42;
    vlTOPp->v__DOT__AREG43 = __Vdly__v__DOT__AREG43;
    vlTOPp->v__DOT__AREG44 = __Vdly__v__DOT__AREG44;
    vlTOPp->v__DOT__AREG45 = __Vdly__v__DOT__AREG45;
    vlTOPp->v__DOT__AREG46 = __Vdly__v__DOT__AREG46;
    vlTOPp->v__DOT__AREG47 = __Vdly__v__DOT__AREG47;
    vlTOPp->v__DOT__AREG48 = __Vdly__v__DOT__AREG48;
    vlTOPp->v__DOT__AREG49 = __Vdly__v__DOT__AREG49;
    vlTOPp->v__DOT__AREG50 = __Vdly__v__DOT__AREG50;
    vlTOPp->v__DOT__AREG51 = __Vdly__v__DOT__AREG51;
    vlTOPp->v__DOT__AREG52 = __Vdly__v__DOT__AREG52;
    vlTOPp->v__DOT__AREG53 = __Vdly__v__DOT__AREG53;
    vlTOPp->v__DOT__AREG54 = __Vdly__v__DOT__AREG54;
    vlTOPp->v__DOT__AREG55 = __Vdly__v__DOT__AREG55;
    vlTOPp->v__DOT__AREG56 = __Vdly__v__DOT__AREG56;
    vlTOPp->v__DOT__AREG57 = __Vdly__v__DOT__AREG57;
    vlTOPp->v__DOT__AREG58 = __Vdly__v__DOT__AREG58;
    vlTOPp->v__DOT__AREG59 = __Vdly__v__DOT__AREG59;
    vlTOPp->v__DOT__AREG60 = __Vdly__v__DOT__AREG60;
    vlTOPp->v__DOT__AREG61 = __Vdly__v__DOT__AREG61;
    vlTOPp->v__DOT__AREG62 = __Vdly__v__DOT__AREG62;
    vlTOPp->v__DOT__AREG63 = __Vdly__v__DOT__AREG63;
    vlTOPp->v__DOT__cnt = __Vdly__v__DOT__cnt;
    vlTOPp->v__DOT__fin_fft_flg = __Vdly__v__DOT__fin_fft_flg;
    vlTOPp->v__DOT__cnt_o = __Vdly__v__DOT__cnt_o;
    // ALWAYS at ../myfft.v:39
    if (vlTOPp->RST) {
	if ((1 & (~ (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage_1_start_flg)))) {
	    if (vlTOPp->v__DOT__start) {
		__Vdly__v__DOT__myFFT_module__DOT__stage = 1;
		__Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg = 1;
		__Vdly__v__DOT__myFFT_module__DOT__cnt = 0;
		vlTOPp->v__DOT__input_succeed_flg = 1;
	    }
	}
	if (vlTOPp->v__DOT__myFFT_module__DOT__stage_1_start_flg) {
	    vlTOPp->v__DOT__input_succeed_flg = 0;
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG15 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG31 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG47 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG63 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__BREG14 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG30 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG46 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG62 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__BREG13 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG29 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG45 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG61 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__BREG12 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG28 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG44 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG60 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG11 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG27 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG43 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG59 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__BREG10 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG26 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG42 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG58 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__BREG9 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG25 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG41 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG57 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__BREG8 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG24 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG40 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG56 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG7 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG23 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG39 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG55 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__BREG6 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG22 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG38 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG54 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__BREG5 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG21 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG37 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG53 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__BREG4 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG20 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG36 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG52 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG3 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG19 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG35 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG51 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__BREG2 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG18 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG34 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG50 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt))) {
						__Vdly__v__DOT__myFFT_module__DOT__BREG1 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG17 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG33 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG49 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__BREG0 
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
						__Vdly__v__DOT__myFFT_module__DOT__BREG16 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG32 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__BREG48 
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
	    if (((IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt) 
		 > 0xf)) {
		if ((1 & (~ (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage_2_start_flg)))) {
		    __Vdly__v__DOT__myFFT_module__DOT__stage 
			= (0xf & ((IData)(1) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage)));
		    __Vdly__v__DOT__myFFT_module__DOT__cnt2 = 0;
		    __Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg = 0;
		    __Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg = 1;
		    vlTOPp->v__DOT__myFFT_module__DOT__k2 = 0;
		    __Vdly__v__DOT__myFFT_module__DOT__B0 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG0;
		    __Vdly__v__DOT__myFFT_module__DOT__B1 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG1;
		    __Vdly__v__DOT__myFFT_module__DOT__B2 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG2;
		    __Vdly__v__DOT__myFFT_module__DOT__B3 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG3;
		    __Vdly__v__DOT__myFFT_module__DOT__B4 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG4;
		    __Vdly__v__DOT__myFFT_module__DOT__B5 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG5;
		    __Vdly__v__DOT__myFFT_module__DOT__B6 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG6;
		    __Vdly__v__DOT__myFFT_module__DOT__B7 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG7;
		    __Vdly__v__DOT__myFFT_module__DOT__B8 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG8;
		    __Vdly__v__DOT__myFFT_module__DOT__B9 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG9;
		    __Vdly__v__DOT__myFFT_module__DOT__B10 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG10;
		    __Vdly__v__DOT__myFFT_module__DOT__B11 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG11;
		    __Vdly__v__DOT__myFFT_module__DOT__B12 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG12;
		    __Vdly__v__DOT__myFFT_module__DOT__B13 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG13;
		    __Vdly__v__DOT__myFFT_module__DOT__B14 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG14;
		    __Vdly__v__DOT__myFFT_module__DOT__B15 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG15;
		    __Vdly__v__DOT__myFFT_module__DOT__B16 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG16;
		    __Vdly__v__DOT__myFFT_module__DOT__B17 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG17;
		    __Vdly__v__DOT__myFFT_module__DOT__B18 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG18;
		    __Vdly__v__DOT__myFFT_module__DOT__B19 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG19;
		    __Vdly__v__DOT__myFFT_module__DOT__B20 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG20;
		    __Vdly__v__DOT__myFFT_module__DOT__B21 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG21;
		    __Vdly__v__DOT__myFFT_module__DOT__B22 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG22;
		    __Vdly__v__DOT__myFFT_module__DOT__B23 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG23;
		    __Vdly__v__DOT__myFFT_module__DOT__B24 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG24;
		    __Vdly__v__DOT__myFFT_module__DOT__B25 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG25;
		    __Vdly__v__DOT__myFFT_module__DOT__B26 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG26;
		    __Vdly__v__DOT__myFFT_module__DOT__B27 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG27;
		    __Vdly__v__DOT__myFFT_module__DOT__B28 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG28;
		    __Vdly__v__DOT__myFFT_module__DOT__B29 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG29;
		    __Vdly__v__DOT__myFFT_module__DOT__B30 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG30;
		    __Vdly__v__DOT__myFFT_module__DOT__B31 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG31;
		    __Vdly__v__DOT__myFFT_module__DOT__B32 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG32;
		    __Vdly__v__DOT__myFFT_module__DOT__B33 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG33;
		    __Vdly__v__DOT__myFFT_module__DOT__B34 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG34;
		    __Vdly__v__DOT__myFFT_module__DOT__B35 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG35;
		    __Vdly__v__DOT__myFFT_module__DOT__B36 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG36;
		    __Vdly__v__DOT__myFFT_module__DOT__B37 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG37;
		    __Vdly__v__DOT__myFFT_module__DOT__B38 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG38;
		    __Vdly__v__DOT__myFFT_module__DOT__B39 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG39;
		    __Vdly__v__DOT__myFFT_module__DOT__B40 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG40;
		    __Vdly__v__DOT__myFFT_module__DOT__B41 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG41;
		    __Vdly__v__DOT__myFFT_module__DOT__B42 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG42;
		    __Vdly__v__DOT__myFFT_module__DOT__B43 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG43;
		    __Vdly__v__DOT__myFFT_module__DOT__B44 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG44;
		    __Vdly__v__DOT__myFFT_module__DOT__B45 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG45;
		    __Vdly__v__DOT__myFFT_module__DOT__B46 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG46;
		    __Vdly__v__DOT__myFFT_module__DOT__B47 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG47;
		    __Vdly__v__DOT__myFFT_module__DOT__B48 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG48;
		    __Vdly__v__DOT__myFFT_module__DOT__B49 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG49;
		    __Vdly__v__DOT__myFFT_module__DOT__B50 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG50;
		    __Vdly__v__DOT__myFFT_module__DOT__B51 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG51;
		    __Vdly__v__DOT__myFFT_module__DOT__B52 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG52;
		    __Vdly__v__DOT__myFFT_module__DOT__B53 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG53;
		    __Vdly__v__DOT__myFFT_module__DOT__B54 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG54;
		    __Vdly__v__DOT__myFFT_module__DOT__B55 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG55;
		    __Vdly__v__DOT__myFFT_module__DOT__B56 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG56;
		    __Vdly__v__DOT__myFFT_module__DOT__B57 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG57;
		    __Vdly__v__DOT__myFFT_module__DOT__B58 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG58;
		    __Vdly__v__DOT__myFFT_module__DOT__B59 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG59;
		    __Vdly__v__DOT__myFFT_module__DOT__B60 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG60;
		    __Vdly__v__DOT__myFFT_module__DOT__B61 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG61;
		    __Vdly__v__DOT__myFFT_module__DOT__B62 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG62;
		    __Vdly__v__DOT__myFFT_module__DOT__B63 
			= vlTOPp->v__DOT__myFFT_module__DOT__BREG63;
		}
	    }
	}
	if (vlTOPp->v__DOT__myFFT_module__DOT__stage_2_start_flg) {
	    if (vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2) {
		vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_2 = 0;
		if (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.valid_o) {
		    __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2 = 0;
		    if ((0x40 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
			__Vdly__v__DOT__myFFT_module__DOT__cnt 
			    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
		    } else {
			if ((0x20 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
			    if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					__Vdly__v__DOT__myFFT_module__DOT__cnt 
					    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
						__Vdly__v__DOT__myFFT_module__DOT__CREG51 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG55 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG59 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG63 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__CREG50 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG54 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG58 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG62 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
						__Vdly__v__DOT__myFFT_module__DOT__CREG49 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG53 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG57 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG61 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__CREG48 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG52 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG56 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG60 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					}
				    }
				}
			    } else {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					__Vdly__v__DOT__myFFT_module__DOT__cnt 
					    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
						__Vdly__v__DOT__myFFT_module__DOT__CREG35 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG39 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG43 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG47 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__CREG34 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG38 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG42 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG46 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
						__Vdly__v__DOT__myFFT_module__DOT__CREG33 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG37 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG41 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG45 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__CREG32 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG36 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG40 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG44 
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
			    if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					__Vdly__v__DOT__myFFT_module__DOT__cnt 
					    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
						__Vdly__v__DOT__myFFT_module__DOT__CREG19 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG23 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG27 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG31 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__CREG18 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG22 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG26 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG30 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
						__Vdly__v__DOT__myFFT_module__DOT__CREG17 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG21 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG25 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG29 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__CREG16 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG20 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG24 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG28 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					}
				    }
				}
			    } else {
				if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				} else {
				    if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					__Vdly__v__DOT__myFFT_module__DOT__cnt 
					    = vlTOPp->v__DOT__myFFT_module__DOT__cnt;
				    } else {
					if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
						__Vdly__v__DOT__myFFT_module__DOT__CREG3 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG7 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG11 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG15 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__CREG2 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG6 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG10 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG14 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    }
					} else {
					    if ((1 
						 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
						__Vdly__v__DOT__myFFT_module__DOT__CREG1 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG5 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG9 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG13 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI));
					    } else {
						__Vdly__v__DOT__myFFT_module__DOT__CREG0 
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
						__Vdly__v__DOT__myFFT_module__DOT__CREG4 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG8 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__CREG12 
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
		    __Vdly__v__DOT__myFFT_module__DOT__cnt2 
			= (0x7f & ((IData)(1) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2)));
		    if ((0 == VL_MODDIV_III(32, ((IData)(1) 
						 + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2)), (IData)(4)))) {
			__Vdly__v__DOT__myFFT_module__DOT__cnt2 
			    = (0x7f & ((IData)(0xd) 
				       + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2)));
		    }
		}
	    } else {
		if ((0x40 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
		    __Vdly__v__DOT__myFFT_module__DOT__cnt2 
			= vlTOPp->v__DOT__myFFT_module__DOT__cnt2;
		} else {
		    if ((0x20 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
			if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				__Vdly__v__DOT__myFFT_module__DOT__cnt2 
				    = vlTOPp->v__DOT__myFFT_module__DOT__cnt2;
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt2 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt2;
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
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
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
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
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				__Vdly__v__DOT__myFFT_module__DOT__cnt2 
				    = vlTOPp->v__DOT__myFFT_module__DOT__cnt2;
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt2 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt2;
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
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
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
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
			if ((0x10 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				__Vdly__v__DOT__myFFT_module__DOT__cnt2 
				    = vlTOPp->v__DOT__myFFT_module__DOT__cnt2;
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt2 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt2;
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
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
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
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
			    if ((8 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				__Vdly__v__DOT__myFFT_module__DOT__cnt2 
				    = vlTOPp->v__DOT__myFFT_module__DOT__cnt2;
			    } else {
				if ((4 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
				    __Vdly__v__DOT__myFFT_module__DOT__cnt2 
					= vlTOPp->v__DOT__myFFT_module__DOT__cnt2;
				} else {
				    if ((2 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
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
					if ((1 & (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2))) {
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
		    = (0x7f & (VL_MODDIV_III(32, (IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2), (IData)(0x10)) 
			       << 2));
	    }
	    if (((IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt2) 
		 > 0x33)) {
		if ((1 & (~ (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage_3_start_flg)))) {
		    __Vdly__v__DOT__myFFT_module__DOT__stage 
			= (0xf & ((IData)(1) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage)));
		    __Vdly__v__DOT__myFFT_module__DOT__cnt3 = 0;
		    __Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg = 0;
		    __Vdly__v__DOT__myFFT_module__DOT__stage_3_start_flg = 1;
		    vlTOPp->v__DOT__myFFT_module__DOT__k3 = 0;
		    __Vdly__v__DOT__myFFT_module__DOT__C0 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG0;
		    __Vdly__v__DOT__myFFT_module__DOT__C1 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG1;
		    __Vdly__v__DOT__myFFT_module__DOT__C2 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG2;
		    __Vdly__v__DOT__myFFT_module__DOT__C3 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG3;
		    __Vdly__v__DOT__myFFT_module__DOT__C4 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG4;
		    __Vdly__v__DOT__myFFT_module__DOT__C5 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG5;
		    __Vdly__v__DOT__myFFT_module__DOT__C6 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG6;
		    __Vdly__v__DOT__myFFT_module__DOT__C7 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG7;
		    __Vdly__v__DOT__myFFT_module__DOT__C8 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG8;
		    __Vdly__v__DOT__myFFT_module__DOT__C9 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG9;
		    __Vdly__v__DOT__myFFT_module__DOT__C10 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG10;
		    __Vdly__v__DOT__myFFT_module__DOT__C11 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG11;
		    __Vdly__v__DOT__myFFT_module__DOT__C12 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG12;
		    __Vdly__v__DOT__myFFT_module__DOT__C13 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG13;
		    __Vdly__v__DOT__myFFT_module__DOT__C14 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG14;
		    __Vdly__v__DOT__myFFT_module__DOT__C15 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG15;
		    __Vdly__v__DOT__myFFT_module__DOT__C16 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG16;
		    __Vdly__v__DOT__myFFT_module__DOT__C17 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG17;
		    __Vdly__v__DOT__myFFT_module__DOT__C18 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG18;
		    __Vdly__v__DOT__myFFT_module__DOT__C19 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG19;
		    __Vdly__v__DOT__myFFT_module__DOT__C20 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG20;
		    __Vdly__v__DOT__myFFT_module__DOT__C21 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG21;
		    __Vdly__v__DOT__myFFT_module__DOT__C22 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG22;
		    __Vdly__v__DOT__myFFT_module__DOT__C23 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG23;
		    __Vdly__v__DOT__myFFT_module__DOT__C24 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG24;
		    __Vdly__v__DOT__myFFT_module__DOT__C25 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG25;
		    __Vdly__v__DOT__myFFT_module__DOT__C26 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG26;
		    __Vdly__v__DOT__myFFT_module__DOT__C27 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG27;
		    __Vdly__v__DOT__myFFT_module__DOT__C28 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG28;
		    __Vdly__v__DOT__myFFT_module__DOT__C29 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG29;
		    __Vdly__v__DOT__myFFT_module__DOT__C30 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG30;
		    __Vdly__v__DOT__myFFT_module__DOT__C31 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG31;
		    __Vdly__v__DOT__myFFT_module__DOT__C32 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG32;
		    __Vdly__v__DOT__myFFT_module__DOT__C33 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG33;
		    __Vdly__v__DOT__myFFT_module__DOT__C34 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG34;
		    __Vdly__v__DOT__myFFT_module__DOT__C35 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG35;
		    __Vdly__v__DOT__myFFT_module__DOT__C36 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG36;
		    __Vdly__v__DOT__myFFT_module__DOT__C37 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG37;
		    __Vdly__v__DOT__myFFT_module__DOT__C38 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG38;
		    __Vdly__v__DOT__myFFT_module__DOT__C39 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG39;
		    __Vdly__v__DOT__myFFT_module__DOT__C40 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG40;
		    __Vdly__v__DOT__myFFT_module__DOT__C41 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG41;
		    __Vdly__v__DOT__myFFT_module__DOT__C42 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG42;
		    __Vdly__v__DOT__myFFT_module__DOT__C43 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG43;
		    __Vdly__v__DOT__myFFT_module__DOT__C44 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG44;
		    __Vdly__v__DOT__myFFT_module__DOT__C45 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG45;
		    __Vdly__v__DOT__myFFT_module__DOT__C46 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG46;
		    __Vdly__v__DOT__myFFT_module__DOT__C47 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG47;
		    __Vdly__v__DOT__myFFT_module__DOT__C48 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG48;
		    __Vdly__v__DOT__myFFT_module__DOT__C49 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG49;
		    __Vdly__v__DOT__myFFT_module__DOT__C50 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG50;
		    __Vdly__v__DOT__myFFT_module__DOT__C51 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG51;
		    __Vdly__v__DOT__myFFT_module__DOT__C52 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG52;
		    __Vdly__v__DOT__myFFT_module__DOT__C53 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG53;
		    __Vdly__v__DOT__myFFT_module__DOT__C54 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG54;
		    __Vdly__v__DOT__myFFT_module__DOT__C55 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG55;
		    __Vdly__v__DOT__myFFT_module__DOT__C56 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG56;
		    __Vdly__v__DOT__myFFT_module__DOT__C57 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG57;
		    __Vdly__v__DOT__myFFT_module__DOT__C58 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG58;
		    __Vdly__v__DOT__myFFT_module__DOT__C59 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG59;
		    __Vdly__v__DOT__myFFT_module__DOT__C60 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG60;
		    __Vdly__v__DOT__myFFT_module__DOT__C61 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG61;
		    __Vdly__v__DOT__myFFT_module__DOT__C62 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG62;
		    __Vdly__v__DOT__myFFT_module__DOT__C63 
			= vlTOPp->v__DOT__myFFT_module__DOT__CREG63;
		}
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
						__Vdly__v__DOT__myFFT_module__DOT__D60 
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
						__Vdly__v__DOT__myFFT_module__DOT__D61 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D62 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D63 
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
						__Vdly__v__DOT__myFFT_module__DOT__D56 
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
						__Vdly__v__DOT__myFFT_module__DOT__D57 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D58 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D59 
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
						__Vdly__v__DOT__myFFT_module__DOT__D52 
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
						__Vdly__v__DOT__myFFT_module__DOT__D53 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D54 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D55 
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
						__Vdly__v__DOT__myFFT_module__DOT__D48 
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
						__Vdly__v__DOT__myFFT_module__DOT__D49 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D50 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D51 
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
						__Vdly__v__DOT__myFFT_module__DOT__D44 
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
						__Vdly__v__DOT__myFFT_module__DOT__D45 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D46 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D47 
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
						__Vdly__v__DOT__myFFT_module__DOT__D40 
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
						__Vdly__v__DOT__myFFT_module__DOT__D41 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D42 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D43 
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
						__Vdly__v__DOT__myFFT_module__DOT__D36 
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
						__Vdly__v__DOT__myFFT_module__DOT__D37 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D38 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D39 
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
						__Vdly__v__DOT__myFFT_module__DOT__D32 
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
						__Vdly__v__DOT__myFFT_module__DOT__D33 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D34 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D35 
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
						__Vdly__v__DOT__myFFT_module__DOT__D28 
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
						__Vdly__v__DOT__myFFT_module__DOT__D29 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D30 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D31 
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
						__Vdly__v__DOT__myFFT_module__DOT__D24 
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
						__Vdly__v__DOT__myFFT_module__DOT__D25 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D26 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D27 
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
						__Vdly__v__DOT__myFFT_module__DOT__D20 
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
						__Vdly__v__DOT__myFFT_module__DOT__D21 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D22 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D23 
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
						__Vdly__v__DOT__myFFT_module__DOT__D16 
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
						__Vdly__v__DOT__myFFT_module__DOT__D17 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D18 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D19 
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
						__Vdly__v__DOT__myFFT_module__DOT__D12 
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
						__Vdly__v__DOT__myFFT_module__DOT__D13 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D14 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D15 
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
						__Vdly__v__DOT__myFFT_module__DOT__D8 
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
						__Vdly__v__DOT__myFFT_module__DOT__D9 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D10 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D11 
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
						__Vdly__v__DOT__myFFT_module__DOT__D4 
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
						__Vdly__v__DOT__myFFT_module__DOT__D5 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D6 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D7 
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
						__Vdly__v__DOT__myFFT_module__DOT__D0 
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
						__Vdly__v__DOT__myFFT_module__DOT__D1 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D2 
						    = 
						    (((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
						      << 0xb) 
						     | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI));
						__Vdly__v__DOT__myFFT_module__DOT__D3 
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
	    if (((IData)(vlTOPp->v__DOT__myFFT_module__DOT__cnt3) 
		 > 0x3c)) {
		if ((1 & (~ (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage_4_start_flg)))) {
		    __Vdly__v__DOT__myFFT_module__DOT__stage 
			= (0xf & ((IData)(1) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage)));
		    __Vdly__v__DOT__myFFT_module__DOT__cnt3 = 0;
		    __Vdly__v__DOT__myFFT_module__DOT__stage_3_start_flg = 0;
		    __Vdly__v__DOT__myFFT_module__DOT__stage_4_start_flg = 1;
		}
	    }
	}
	if (vlTOPp->v__DOT__myFFT_module__DOT__stage_4_start_flg) {
	    vlTOPp->v__DOT__Y0 = vlTOPp->v__DOT__myFFT_module__DOT__D0;
	    vlTOPp->v__DOT__Y1 = vlTOPp->v__DOT__myFFT_module__DOT__D16;
	    vlTOPp->v__DOT__Y2 = vlTOPp->v__DOT__myFFT_module__DOT__D32;
	    vlTOPp->v__DOT__Y3 = vlTOPp->v__DOT__myFFT_module__DOT__D48;
	    vlTOPp->v__DOT__Y4 = vlTOPp->v__DOT__myFFT_module__DOT__D4;
	    vlTOPp->v__DOT__Y5 = vlTOPp->v__DOT__myFFT_module__DOT__D20;
	    vlTOPp->v__DOT__Y6 = vlTOPp->v__DOT__myFFT_module__DOT__D36;
	    vlTOPp->v__DOT__Y7 = vlTOPp->v__DOT__myFFT_module__DOT__D52;
	    vlTOPp->v__DOT__Y8 = vlTOPp->v__DOT__myFFT_module__DOT__D8;
	    vlTOPp->v__DOT__Y9 = vlTOPp->v__DOT__myFFT_module__DOT__D24;
	    vlTOPp->v__DOT__Y10 = vlTOPp->v__DOT__myFFT_module__DOT__D40;
	    vlTOPp->v__DOT__Y11 = vlTOPp->v__DOT__myFFT_module__DOT__D56;
	    vlTOPp->v__DOT__Y12 = vlTOPp->v__DOT__myFFT_module__DOT__D12;
	    vlTOPp->v__DOT__Y13 = vlTOPp->v__DOT__myFFT_module__DOT__D28;
	    vlTOPp->v__DOT__Y14 = vlTOPp->v__DOT__myFFT_module__DOT__D44;
	    vlTOPp->v__DOT__Y15 = vlTOPp->v__DOT__myFFT_module__DOT__D60;
	    vlTOPp->v__DOT__Y16 = vlTOPp->v__DOT__myFFT_module__DOT__D1;
	    vlTOPp->v__DOT__Y17 = vlTOPp->v__DOT__myFFT_module__DOT__D17;
	    vlTOPp->v__DOT__Y18 = vlTOPp->v__DOT__myFFT_module__DOT__D33;
	    vlTOPp->v__DOT__Y19 = vlTOPp->v__DOT__myFFT_module__DOT__D49;
	    vlTOPp->v__DOT__Y20 = vlTOPp->v__DOT__myFFT_module__DOT__D5;
	    vlTOPp->v__DOT__Y21 = vlTOPp->v__DOT__myFFT_module__DOT__D21;
	    vlTOPp->v__DOT__Y22 = vlTOPp->v__DOT__myFFT_module__DOT__D37;
	    vlTOPp->v__DOT__Y23 = vlTOPp->v__DOT__myFFT_module__DOT__D53;
	    vlTOPp->v__DOT__Y24 = vlTOPp->v__DOT__myFFT_module__DOT__D9;
	    vlTOPp->v__DOT__Y25 = vlTOPp->v__DOT__myFFT_module__DOT__D25;
	    vlTOPp->v__DOT__Y26 = vlTOPp->v__DOT__myFFT_module__DOT__D41;
	    vlTOPp->v__DOT__Y27 = vlTOPp->v__DOT__myFFT_module__DOT__D57;
	    vlTOPp->v__DOT__Y28 = vlTOPp->v__DOT__myFFT_module__DOT__D13;
	    vlTOPp->v__DOT__Y29 = vlTOPp->v__DOT__myFFT_module__DOT__D29;
	    vlTOPp->v__DOT__Y30 = vlTOPp->v__DOT__myFFT_module__DOT__D45;
	    vlTOPp->v__DOT__Y31 = vlTOPp->v__DOT__myFFT_module__DOT__D61;
	    vlTOPp->v__DOT__Y32 = vlTOPp->v__DOT__myFFT_module__DOT__D2;
	    vlTOPp->v__DOT__Y33 = vlTOPp->v__DOT__myFFT_module__DOT__D18;
	    vlTOPp->v__DOT__Y34 = vlTOPp->v__DOT__myFFT_module__DOT__D34;
	    vlTOPp->v__DOT__Y35 = vlTOPp->v__DOT__myFFT_module__DOT__D50;
	    vlTOPp->v__DOT__Y36 = vlTOPp->v__DOT__myFFT_module__DOT__D6;
	    vlTOPp->v__DOT__Y37 = vlTOPp->v__DOT__myFFT_module__DOT__D22;
	    vlTOPp->v__DOT__Y38 = vlTOPp->v__DOT__myFFT_module__DOT__D38;
	    vlTOPp->v__DOT__Y39 = vlTOPp->v__DOT__myFFT_module__DOT__D54;
	    vlTOPp->v__DOT__Y40 = vlTOPp->v__DOT__myFFT_module__DOT__D10;
	    vlTOPp->v__DOT__Y41 = vlTOPp->v__DOT__myFFT_module__DOT__D26;
	    vlTOPp->v__DOT__Y42 = vlTOPp->v__DOT__myFFT_module__DOT__D42;
	    vlTOPp->v__DOT__Y43 = vlTOPp->v__DOT__myFFT_module__DOT__D58;
	    vlTOPp->v__DOT__Y44 = vlTOPp->v__DOT__myFFT_module__DOT__D14;
	    vlTOPp->v__DOT__Y45 = vlTOPp->v__DOT__myFFT_module__DOT__D30;
	    vlTOPp->v__DOT__Y46 = vlTOPp->v__DOT__myFFT_module__DOT__D46;
	    vlTOPp->v__DOT__Y47 = vlTOPp->v__DOT__myFFT_module__DOT__D62;
	    vlTOPp->v__DOT__Y48 = vlTOPp->v__DOT__myFFT_module__DOT__D3;
	    vlTOPp->v__DOT__Y49 = vlTOPp->v__DOT__myFFT_module__DOT__D19;
	    vlTOPp->v__DOT__Y50 = vlTOPp->v__DOT__myFFT_module__DOT__D35;
	    vlTOPp->v__DOT__Y51 = vlTOPp->v__DOT__myFFT_module__DOT__D51;
	    vlTOPp->v__DOT__Y52 = vlTOPp->v__DOT__myFFT_module__DOT__D7;
	    vlTOPp->v__DOT__Y53 = vlTOPp->v__DOT__myFFT_module__DOT__D23;
	    vlTOPp->v__DOT__Y54 = vlTOPp->v__DOT__myFFT_module__DOT__D39;
	    vlTOPp->v__DOT__Y55 = vlTOPp->v__DOT__myFFT_module__DOT__D55;
	    vlTOPp->v__DOT__Y56 = vlTOPp->v__DOT__myFFT_module__DOT__D11;
	    vlTOPp->v__DOT__Y57 = vlTOPp->v__DOT__myFFT_module__DOT__D27;
	    vlTOPp->v__DOT__Y58 = vlTOPp->v__DOT__myFFT_module__DOT__D43;
	    vlTOPp->v__DOT__Y59 = vlTOPp->v__DOT__myFFT_module__DOT__D59;
	    vlTOPp->v__DOT__Y60 = vlTOPp->v__DOT__myFFT_module__DOT__D15;
	    vlTOPp->v__DOT__Y61 = vlTOPp->v__DOT__myFFT_module__DOT__D31;
	    vlTOPp->v__DOT__Y62 = vlTOPp->v__DOT__myFFT_module__DOT__D47;
	    vlTOPp->v__DOT__Y63 = vlTOPp->v__DOT__myFFT_module__DOT__D63;
	    if ((1 & (~ (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage_5_start_flg)))) {
		__Vdly__v__DOT__myFFT_module__DOT__stage 
		    = (0xf & ((IData)(1) + (IData)(vlTOPp->v__DOT__myFFT_module__DOT__stage)));
		__Vdly__v__DOT__myFFT_module__DOT__stage_4_start_flg = 0;
		__Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg = 1;
		vlTOPp->v__DOT__valid_o_from_myFFT = 1;
		vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly = 0;
	    }
	}
	if (vlTOPp->v__DOT__myFFT_module__DOT__stage_5_start_flg) {
	    vlTOPp->v__DOT__valid_o_from_myFFT = 0;
	    __Vdly__v__DOT__myFFT_module__DOT__stage = 0;
	    __Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg = 0;
	    vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly = 0;
	}
    } else {
	__Vdly__v__DOT__myFFT_module__DOT__stage = 0;
	__Vdly__v__DOT__myFFT_module__DOT__cnt = 0;
	vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly = 0;
	vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_2 = 0;
	vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_3 = 0;
	vlTOPp->v__DOT__input_succeed_flg = 0;
	vlTOPp->v__DOT__valid_o_from_myFFT = 0;
	vlTOPp->v__DOT__myFFT_module__DOT__k1 = 0;
	__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg = 0;
	__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2 = 0;
	__Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3 = 0;
	__Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg = 0;
	__Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg = 0;
	__Vdly__v__DOT__myFFT_module__DOT__stage_3_start_flg = 0;
	__Vdly__v__DOT__myFFT_module__DOT__stage_4_start_flg = 0;
	__Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg = 0;
    }
    vlTOPp->v__DOT__myFFT_module__DOT__stage_1_start_flg 
	= __Vdly__v__DOT__myFFT_module__DOT__stage_1_start_flg;
    vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg 
	= __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg;
    vlTOPp->v__DOT__myFFT_module__DOT__cnt = __Vdly__v__DOT__myFFT_module__DOT__cnt;
    vlTOPp->v__DOT__A15 = __Vdly__v__DOT__A15;
    vlTOPp->v__DOT__A31 = __Vdly__v__DOT__A31;
    vlTOPp->v__DOT__A47 = __Vdly__v__DOT__A47;
    vlTOPp->v__DOT__A63 = __Vdly__v__DOT__A63;
    vlTOPp->v__DOT__A14 = __Vdly__v__DOT__A14;
    vlTOPp->v__DOT__A30 = __Vdly__v__DOT__A30;
    vlTOPp->v__DOT__A46 = __Vdly__v__DOT__A46;
    vlTOPp->v__DOT__A62 = __Vdly__v__DOT__A62;
    vlTOPp->v__DOT__A13 = __Vdly__v__DOT__A13;
    vlTOPp->v__DOT__A29 = __Vdly__v__DOT__A29;
    vlTOPp->v__DOT__A45 = __Vdly__v__DOT__A45;
    vlTOPp->v__DOT__A61 = __Vdly__v__DOT__A61;
    vlTOPp->v__DOT__A12 = __Vdly__v__DOT__A12;
    vlTOPp->v__DOT__A28 = __Vdly__v__DOT__A28;
    vlTOPp->v__DOT__A44 = __Vdly__v__DOT__A44;
    vlTOPp->v__DOT__A60 = __Vdly__v__DOT__A60;
    vlTOPp->v__DOT__A11 = __Vdly__v__DOT__A11;
    vlTOPp->v__DOT__A27 = __Vdly__v__DOT__A27;
    vlTOPp->v__DOT__A43 = __Vdly__v__DOT__A43;
    vlTOPp->v__DOT__A59 = __Vdly__v__DOT__A59;
    vlTOPp->v__DOT__A10 = __Vdly__v__DOT__A10;
    vlTOPp->v__DOT__A26 = __Vdly__v__DOT__A26;
    vlTOPp->v__DOT__A42 = __Vdly__v__DOT__A42;
    vlTOPp->v__DOT__A58 = __Vdly__v__DOT__A58;
    vlTOPp->v__DOT__A9 = __Vdly__v__DOT__A9;
    vlTOPp->v__DOT__A25 = __Vdly__v__DOT__A25;
    vlTOPp->v__DOT__A41 = __Vdly__v__DOT__A41;
    vlTOPp->v__DOT__A57 = __Vdly__v__DOT__A57;
    vlTOPp->v__DOT__A8 = __Vdly__v__DOT__A8;
    vlTOPp->v__DOT__A24 = __Vdly__v__DOT__A24;
    vlTOPp->v__DOT__A40 = __Vdly__v__DOT__A40;
    vlTOPp->v__DOT__A56 = __Vdly__v__DOT__A56;
    vlTOPp->v__DOT__A7 = __Vdly__v__DOT__A7;
    vlTOPp->v__DOT__A23 = __Vdly__v__DOT__A23;
    vlTOPp->v__DOT__A39 = __Vdly__v__DOT__A39;
    vlTOPp->v__DOT__A55 = __Vdly__v__DOT__A55;
    vlTOPp->v__DOT__A6 = __Vdly__v__DOT__A6;
    vlTOPp->v__DOT__A22 = __Vdly__v__DOT__A22;
    vlTOPp->v__DOT__A38 = __Vdly__v__DOT__A38;
    vlTOPp->v__DOT__A54 = __Vdly__v__DOT__A54;
    vlTOPp->v__DOT__A5 = __Vdly__v__DOT__A5;
    vlTOPp->v__DOT__A21 = __Vdly__v__DOT__A21;
    vlTOPp->v__DOT__A37 = __Vdly__v__DOT__A37;
    vlTOPp->v__DOT__A53 = __Vdly__v__DOT__A53;
    vlTOPp->v__DOT__A4 = __Vdly__v__DOT__A4;
    vlTOPp->v__DOT__A20 = __Vdly__v__DOT__A20;
    vlTOPp->v__DOT__A36 = __Vdly__v__DOT__A36;
    vlTOPp->v__DOT__A52 = __Vdly__v__DOT__A52;
    vlTOPp->v__DOT__A3 = __Vdly__v__DOT__A3;
    vlTOPp->v__DOT__A19 = __Vdly__v__DOT__A19;
    vlTOPp->v__DOT__A35 = __Vdly__v__DOT__A35;
    vlTOPp->v__DOT__A51 = __Vdly__v__DOT__A51;
    vlTOPp->v__DOT__A2 = __Vdly__v__DOT__A2;
    vlTOPp->v__DOT__A18 = __Vdly__v__DOT__A18;
    vlTOPp->v__DOT__A34 = __Vdly__v__DOT__A34;
    vlTOPp->v__DOT__A50 = __Vdly__v__DOT__A50;
    vlTOPp->v__DOT__A1 = __Vdly__v__DOT__A1;
    vlTOPp->v__DOT__A17 = __Vdly__v__DOT__A17;
    vlTOPp->v__DOT__A33 = __Vdly__v__DOT__A33;
    vlTOPp->v__DOT__A49 = __Vdly__v__DOT__A49;
    vlTOPp->v__DOT__A0 = __Vdly__v__DOT__A0;
    vlTOPp->v__DOT__A16 = __Vdly__v__DOT__A16;
    vlTOPp->v__DOT__A32 = __Vdly__v__DOT__A32;
    vlTOPp->v__DOT__A48 = __Vdly__v__DOT__A48;
    vlTOPp->v__DOT__myFFT_module__DOT__stage_2_start_flg 
	= __Vdly__v__DOT__myFFT_module__DOT__stage_2_start_flg;
    vlTOPp->v__DOT__myFFT_module__DOT__stage = __Vdly__v__DOT__myFFT_module__DOT__stage;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG0 = __Vdly__v__DOT__myFFT_module__DOT__BREG0;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG1 = __Vdly__v__DOT__myFFT_module__DOT__BREG1;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG2 = __Vdly__v__DOT__myFFT_module__DOT__BREG2;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG3 = __Vdly__v__DOT__myFFT_module__DOT__BREG3;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG4 = __Vdly__v__DOT__myFFT_module__DOT__BREG4;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG5 = __Vdly__v__DOT__myFFT_module__DOT__BREG5;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG6 = __Vdly__v__DOT__myFFT_module__DOT__BREG6;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG7 = __Vdly__v__DOT__myFFT_module__DOT__BREG7;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG8 = __Vdly__v__DOT__myFFT_module__DOT__BREG8;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG9 = __Vdly__v__DOT__myFFT_module__DOT__BREG9;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG10 = __Vdly__v__DOT__myFFT_module__DOT__BREG10;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG11 = __Vdly__v__DOT__myFFT_module__DOT__BREG11;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG12 = __Vdly__v__DOT__myFFT_module__DOT__BREG12;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG13 = __Vdly__v__DOT__myFFT_module__DOT__BREG13;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG14 = __Vdly__v__DOT__myFFT_module__DOT__BREG14;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG15 = __Vdly__v__DOT__myFFT_module__DOT__BREG15;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG16 = __Vdly__v__DOT__myFFT_module__DOT__BREG16;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG17 = __Vdly__v__DOT__myFFT_module__DOT__BREG17;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG18 = __Vdly__v__DOT__myFFT_module__DOT__BREG18;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG19 = __Vdly__v__DOT__myFFT_module__DOT__BREG19;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG20 = __Vdly__v__DOT__myFFT_module__DOT__BREG20;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG21 = __Vdly__v__DOT__myFFT_module__DOT__BREG21;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG22 = __Vdly__v__DOT__myFFT_module__DOT__BREG22;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG23 = __Vdly__v__DOT__myFFT_module__DOT__BREG23;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG24 = __Vdly__v__DOT__myFFT_module__DOT__BREG24;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG25 = __Vdly__v__DOT__myFFT_module__DOT__BREG25;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG26 = __Vdly__v__DOT__myFFT_module__DOT__BREG26;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG27 = __Vdly__v__DOT__myFFT_module__DOT__BREG27;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG28 = __Vdly__v__DOT__myFFT_module__DOT__BREG28;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG29 = __Vdly__v__DOT__myFFT_module__DOT__BREG29;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG30 = __Vdly__v__DOT__myFFT_module__DOT__BREG30;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG31 = __Vdly__v__DOT__myFFT_module__DOT__BREG31;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG32 = __Vdly__v__DOT__myFFT_module__DOT__BREG32;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG33 = __Vdly__v__DOT__myFFT_module__DOT__BREG33;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG34 = __Vdly__v__DOT__myFFT_module__DOT__BREG34;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG35 = __Vdly__v__DOT__myFFT_module__DOT__BREG35;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG36 = __Vdly__v__DOT__myFFT_module__DOT__BREG36;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG37 = __Vdly__v__DOT__myFFT_module__DOT__BREG37;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG38 = __Vdly__v__DOT__myFFT_module__DOT__BREG38;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG39 = __Vdly__v__DOT__myFFT_module__DOT__BREG39;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG40 = __Vdly__v__DOT__myFFT_module__DOT__BREG40;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG41 = __Vdly__v__DOT__myFFT_module__DOT__BREG41;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG42 = __Vdly__v__DOT__myFFT_module__DOT__BREG42;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG43 = __Vdly__v__DOT__myFFT_module__DOT__BREG43;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG44 = __Vdly__v__DOT__myFFT_module__DOT__BREG44;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG45 = __Vdly__v__DOT__myFFT_module__DOT__BREG45;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG46 = __Vdly__v__DOT__myFFT_module__DOT__BREG46;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG47 = __Vdly__v__DOT__myFFT_module__DOT__BREG47;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG48 = __Vdly__v__DOT__myFFT_module__DOT__BREG48;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG49 = __Vdly__v__DOT__myFFT_module__DOT__BREG49;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG50 = __Vdly__v__DOT__myFFT_module__DOT__BREG50;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG51 = __Vdly__v__DOT__myFFT_module__DOT__BREG51;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG52 = __Vdly__v__DOT__myFFT_module__DOT__BREG52;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG53 = __Vdly__v__DOT__myFFT_module__DOT__BREG53;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG54 = __Vdly__v__DOT__myFFT_module__DOT__BREG54;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG55 = __Vdly__v__DOT__myFFT_module__DOT__BREG55;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG56 = __Vdly__v__DOT__myFFT_module__DOT__BREG56;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG57 = __Vdly__v__DOT__myFFT_module__DOT__BREG57;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG58 = __Vdly__v__DOT__myFFT_module__DOT__BREG58;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG59 = __Vdly__v__DOT__myFFT_module__DOT__BREG59;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG60 = __Vdly__v__DOT__myFFT_module__DOT__BREG60;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG61 = __Vdly__v__DOT__myFFT_module__DOT__BREG61;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG62 = __Vdly__v__DOT__myFFT_module__DOT__BREG62;
    vlTOPp->v__DOT__myFFT_module__DOT__BREG63 = __Vdly__v__DOT__myFFT_module__DOT__BREG63;
    vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2 
	= __Vdly__v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2;
    vlTOPp->v__DOT__myFFT_module__DOT__cnt2 = __Vdly__v__DOT__myFFT_module__DOT__cnt2;
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
    vlTOPp->v__DOT__myFFT_module__DOT__CREG0 = __Vdly__v__DOT__myFFT_module__DOT__CREG0;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG1 = __Vdly__v__DOT__myFFT_module__DOT__CREG1;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG2 = __Vdly__v__DOT__myFFT_module__DOT__CREG2;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG3 = __Vdly__v__DOT__myFFT_module__DOT__CREG3;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG4 = __Vdly__v__DOT__myFFT_module__DOT__CREG4;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG5 = __Vdly__v__DOT__myFFT_module__DOT__CREG5;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG6 = __Vdly__v__DOT__myFFT_module__DOT__CREG6;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG7 = __Vdly__v__DOT__myFFT_module__DOT__CREG7;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG8 = __Vdly__v__DOT__myFFT_module__DOT__CREG8;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG9 = __Vdly__v__DOT__myFFT_module__DOT__CREG9;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG10 = __Vdly__v__DOT__myFFT_module__DOT__CREG10;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG11 = __Vdly__v__DOT__myFFT_module__DOT__CREG11;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG12 = __Vdly__v__DOT__myFFT_module__DOT__CREG12;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG13 = __Vdly__v__DOT__myFFT_module__DOT__CREG13;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG14 = __Vdly__v__DOT__myFFT_module__DOT__CREG14;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG15 = __Vdly__v__DOT__myFFT_module__DOT__CREG15;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG16 = __Vdly__v__DOT__myFFT_module__DOT__CREG16;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG17 = __Vdly__v__DOT__myFFT_module__DOT__CREG17;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG18 = __Vdly__v__DOT__myFFT_module__DOT__CREG18;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG19 = __Vdly__v__DOT__myFFT_module__DOT__CREG19;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG20 = __Vdly__v__DOT__myFFT_module__DOT__CREG20;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG21 = __Vdly__v__DOT__myFFT_module__DOT__CREG21;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG22 = __Vdly__v__DOT__myFFT_module__DOT__CREG22;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG23 = __Vdly__v__DOT__myFFT_module__DOT__CREG23;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG24 = __Vdly__v__DOT__myFFT_module__DOT__CREG24;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG25 = __Vdly__v__DOT__myFFT_module__DOT__CREG25;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG26 = __Vdly__v__DOT__myFFT_module__DOT__CREG26;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG27 = __Vdly__v__DOT__myFFT_module__DOT__CREG27;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG28 = __Vdly__v__DOT__myFFT_module__DOT__CREG28;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG29 = __Vdly__v__DOT__myFFT_module__DOT__CREG29;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG30 = __Vdly__v__DOT__myFFT_module__DOT__CREG30;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG31 = __Vdly__v__DOT__myFFT_module__DOT__CREG31;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG32 = __Vdly__v__DOT__myFFT_module__DOT__CREG32;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG33 = __Vdly__v__DOT__myFFT_module__DOT__CREG33;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG34 = __Vdly__v__DOT__myFFT_module__DOT__CREG34;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG35 = __Vdly__v__DOT__myFFT_module__DOT__CREG35;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG36 = __Vdly__v__DOT__myFFT_module__DOT__CREG36;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG37 = __Vdly__v__DOT__myFFT_module__DOT__CREG37;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG38 = __Vdly__v__DOT__myFFT_module__DOT__CREG38;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG39 = __Vdly__v__DOT__myFFT_module__DOT__CREG39;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG40 = __Vdly__v__DOT__myFFT_module__DOT__CREG40;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG41 = __Vdly__v__DOT__myFFT_module__DOT__CREG41;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG42 = __Vdly__v__DOT__myFFT_module__DOT__CREG42;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG43 = __Vdly__v__DOT__myFFT_module__DOT__CREG43;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG44 = __Vdly__v__DOT__myFFT_module__DOT__CREG44;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG45 = __Vdly__v__DOT__myFFT_module__DOT__CREG45;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG46 = __Vdly__v__DOT__myFFT_module__DOT__CREG46;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG47 = __Vdly__v__DOT__myFFT_module__DOT__CREG47;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG48 = __Vdly__v__DOT__myFFT_module__DOT__CREG48;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG49 = __Vdly__v__DOT__myFFT_module__DOT__CREG49;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG50 = __Vdly__v__DOT__myFFT_module__DOT__CREG50;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG51 = __Vdly__v__DOT__myFFT_module__DOT__CREG51;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG52 = __Vdly__v__DOT__myFFT_module__DOT__CREG52;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG53 = __Vdly__v__DOT__myFFT_module__DOT__CREG53;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG54 = __Vdly__v__DOT__myFFT_module__DOT__CREG54;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG55 = __Vdly__v__DOT__myFFT_module__DOT__CREG55;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG56 = __Vdly__v__DOT__myFFT_module__DOT__CREG56;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG57 = __Vdly__v__DOT__myFFT_module__DOT__CREG57;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG58 = __Vdly__v__DOT__myFFT_module__DOT__CREG58;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG59 = __Vdly__v__DOT__myFFT_module__DOT__CREG59;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG60 = __Vdly__v__DOT__myFFT_module__DOT__CREG60;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG61 = __Vdly__v__DOT__myFFT_module__DOT__CREG61;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG62 = __Vdly__v__DOT__myFFT_module__DOT__CREG62;
    vlTOPp->v__DOT__myFFT_module__DOT__CREG63 = __Vdly__v__DOT__myFFT_module__DOT__CREG63;
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
    vlTOPp->v__DOT__myFFT_module__DOT__D0 = __Vdly__v__DOT__myFFT_module__DOT__D0;
    vlTOPp->v__DOT__myFFT_module__DOT__D16 = __Vdly__v__DOT__myFFT_module__DOT__D16;
    vlTOPp->v__DOT__myFFT_module__DOT__D32 = __Vdly__v__DOT__myFFT_module__DOT__D32;
    vlTOPp->v__DOT__myFFT_module__DOT__D48 = __Vdly__v__DOT__myFFT_module__DOT__D48;
    vlTOPp->v__DOT__myFFT_module__DOT__D4 = __Vdly__v__DOT__myFFT_module__DOT__D4;
    vlTOPp->v__DOT__myFFT_module__DOT__D20 = __Vdly__v__DOT__myFFT_module__DOT__D20;
    vlTOPp->v__DOT__myFFT_module__DOT__D36 = __Vdly__v__DOT__myFFT_module__DOT__D36;
    vlTOPp->v__DOT__myFFT_module__DOT__D52 = __Vdly__v__DOT__myFFT_module__DOT__D52;
    vlTOPp->v__DOT__myFFT_module__DOT__D8 = __Vdly__v__DOT__myFFT_module__DOT__D8;
    vlTOPp->v__DOT__myFFT_module__DOT__D24 = __Vdly__v__DOT__myFFT_module__DOT__D24;
    vlTOPp->v__DOT__myFFT_module__DOT__D40 = __Vdly__v__DOT__myFFT_module__DOT__D40;
    vlTOPp->v__DOT__myFFT_module__DOT__D56 = __Vdly__v__DOT__myFFT_module__DOT__D56;
    vlTOPp->v__DOT__myFFT_module__DOT__D12 = __Vdly__v__DOT__myFFT_module__DOT__D12;
    vlTOPp->v__DOT__myFFT_module__DOT__D28 = __Vdly__v__DOT__myFFT_module__DOT__D28;
    vlTOPp->v__DOT__myFFT_module__DOT__D44 = __Vdly__v__DOT__myFFT_module__DOT__D44;
    vlTOPp->v__DOT__myFFT_module__DOT__D60 = __Vdly__v__DOT__myFFT_module__DOT__D60;
    vlTOPp->v__DOT__myFFT_module__DOT__D1 = __Vdly__v__DOT__myFFT_module__DOT__D1;
    vlTOPp->v__DOT__myFFT_module__DOT__D17 = __Vdly__v__DOT__myFFT_module__DOT__D17;
    vlTOPp->v__DOT__myFFT_module__DOT__D33 = __Vdly__v__DOT__myFFT_module__DOT__D33;
    vlTOPp->v__DOT__myFFT_module__DOT__D49 = __Vdly__v__DOT__myFFT_module__DOT__D49;
    vlTOPp->v__DOT__myFFT_module__DOT__D5 = __Vdly__v__DOT__myFFT_module__DOT__D5;
    vlTOPp->v__DOT__myFFT_module__DOT__D21 = __Vdly__v__DOT__myFFT_module__DOT__D21;
    vlTOPp->v__DOT__myFFT_module__DOT__D37 = __Vdly__v__DOT__myFFT_module__DOT__D37;
    vlTOPp->v__DOT__myFFT_module__DOT__D53 = __Vdly__v__DOT__myFFT_module__DOT__D53;
    vlTOPp->v__DOT__myFFT_module__DOT__D9 = __Vdly__v__DOT__myFFT_module__DOT__D9;
    vlTOPp->v__DOT__myFFT_module__DOT__D25 = __Vdly__v__DOT__myFFT_module__DOT__D25;
    vlTOPp->v__DOT__myFFT_module__DOT__D41 = __Vdly__v__DOT__myFFT_module__DOT__D41;
    vlTOPp->v__DOT__myFFT_module__DOT__D57 = __Vdly__v__DOT__myFFT_module__DOT__D57;
    vlTOPp->v__DOT__myFFT_module__DOT__D13 = __Vdly__v__DOT__myFFT_module__DOT__D13;
    vlTOPp->v__DOT__myFFT_module__DOT__D29 = __Vdly__v__DOT__myFFT_module__DOT__D29;
    vlTOPp->v__DOT__myFFT_module__DOT__D45 = __Vdly__v__DOT__myFFT_module__DOT__D45;
    vlTOPp->v__DOT__myFFT_module__DOT__D61 = __Vdly__v__DOT__myFFT_module__DOT__D61;
    vlTOPp->v__DOT__myFFT_module__DOT__D2 = __Vdly__v__DOT__myFFT_module__DOT__D2;
    vlTOPp->v__DOT__myFFT_module__DOT__D18 = __Vdly__v__DOT__myFFT_module__DOT__D18;
    vlTOPp->v__DOT__myFFT_module__DOT__D34 = __Vdly__v__DOT__myFFT_module__DOT__D34;
    vlTOPp->v__DOT__myFFT_module__DOT__D50 = __Vdly__v__DOT__myFFT_module__DOT__D50;
    vlTOPp->v__DOT__myFFT_module__DOT__D6 = __Vdly__v__DOT__myFFT_module__DOT__D6;
    vlTOPp->v__DOT__myFFT_module__DOT__D22 = __Vdly__v__DOT__myFFT_module__DOT__D22;
    vlTOPp->v__DOT__myFFT_module__DOT__D38 = __Vdly__v__DOT__myFFT_module__DOT__D38;
    vlTOPp->v__DOT__myFFT_module__DOT__D54 = __Vdly__v__DOT__myFFT_module__DOT__D54;
    vlTOPp->v__DOT__myFFT_module__DOT__D10 = __Vdly__v__DOT__myFFT_module__DOT__D10;
    vlTOPp->v__DOT__myFFT_module__DOT__D26 = __Vdly__v__DOT__myFFT_module__DOT__D26;
    vlTOPp->v__DOT__myFFT_module__DOT__D42 = __Vdly__v__DOT__myFFT_module__DOT__D42;
    vlTOPp->v__DOT__myFFT_module__DOT__D58 = __Vdly__v__DOT__myFFT_module__DOT__D58;
    vlTOPp->v__DOT__myFFT_module__DOT__D14 = __Vdly__v__DOT__myFFT_module__DOT__D14;
    vlTOPp->v__DOT__myFFT_module__DOT__D30 = __Vdly__v__DOT__myFFT_module__DOT__D30;
    vlTOPp->v__DOT__myFFT_module__DOT__D46 = __Vdly__v__DOT__myFFT_module__DOT__D46;
    vlTOPp->v__DOT__myFFT_module__DOT__D62 = __Vdly__v__DOT__myFFT_module__DOT__D62;
    vlTOPp->v__DOT__myFFT_module__DOT__D3 = __Vdly__v__DOT__myFFT_module__DOT__D3;
    vlTOPp->v__DOT__myFFT_module__DOT__D19 = __Vdly__v__DOT__myFFT_module__DOT__D19;
    vlTOPp->v__DOT__myFFT_module__DOT__D35 = __Vdly__v__DOT__myFFT_module__DOT__D35;
    vlTOPp->v__DOT__myFFT_module__DOT__D51 = __Vdly__v__DOT__myFFT_module__DOT__D51;
    vlTOPp->v__DOT__myFFT_module__DOT__D7 = __Vdly__v__DOT__myFFT_module__DOT__D7;
    vlTOPp->v__DOT__myFFT_module__DOT__D23 = __Vdly__v__DOT__myFFT_module__DOT__D23;
    vlTOPp->v__DOT__myFFT_module__DOT__D39 = __Vdly__v__DOT__myFFT_module__DOT__D39;
    vlTOPp->v__DOT__myFFT_module__DOT__D55 = __Vdly__v__DOT__myFFT_module__DOT__D55;
    vlTOPp->v__DOT__myFFT_module__DOT__D11 = __Vdly__v__DOT__myFFT_module__DOT__D11;
    vlTOPp->v__DOT__myFFT_module__DOT__D27 = __Vdly__v__DOT__myFFT_module__DOT__D27;
    vlTOPp->v__DOT__myFFT_module__DOT__D43 = __Vdly__v__DOT__myFFT_module__DOT__D43;
    vlTOPp->v__DOT__myFFT_module__DOT__D59 = __Vdly__v__DOT__myFFT_module__DOT__D59;
    vlTOPp->v__DOT__myFFT_module__DOT__D15 = __Vdly__v__DOT__myFFT_module__DOT__D15;
    vlTOPp->v__DOT__myFFT_module__DOT__D31 = __Vdly__v__DOT__myFFT_module__DOT__D31;
    vlTOPp->v__DOT__myFFT_module__DOT__D47 = __Vdly__v__DOT__myFFT_module__DOT__D47;
    vlTOPp->v__DOT__myFFT_module__DOT__D63 = __Vdly__v__DOT__myFFT_module__DOT__D63;
    vlTOPp->v__DOT__myFFT_module__DOT__stage_5_start_flg 
	= __Vdly__v__DOT__myFFT_module__DOT__stage_5_start_flg;
    vlTOPp->v__DOT__start = __Vdly__v__DOT__start;
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
