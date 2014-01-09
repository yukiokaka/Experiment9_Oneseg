// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfft64.h for the primary calling header

#include "Vfft64_radix4_batterfly.h" // For This
#include "Vfft64__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfft64_radix4_batterfly) {
    // Reset internal values
    // Reset structure values
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    k = VL_RAND_RESET_I(7);
    A0 = VL_RAND_RESET_I(22);
    A1 = VL_RAND_RESET_I(22);
    A2 = VL_RAND_RESET_I(22);
    A3 = VL_RAND_RESET_I(22);
    valid_i = VL_RAND_RESET_I(1);
    Y0 = VL_RAND_RESET_I(22);
    Y1 = VL_RAND_RESET_I(22);
    Y2 = VL_RAND_RESET_I(22);
    Y3 = VL_RAND_RESET_I(22);
    valid_o = VL_RAND_RESET_I(1);
    __PVT__B0 = VL_RAND_RESET_I(22);
    __PVT__B1 = VL_RAND_RESET_I(22);
    __PVT__B2 = VL_RAND_RESET_I(22);
    __PVT__B3 = VL_RAND_RESET_I(22);
    __PVT__B3J = VL_RAND_RESET_I(22);
    __PVT__C1 = VL_RAND_RESET_I(22);
    __PVT__C2 = VL_RAND_RESET_I(22);
    __PVT__C3 = VL_RAND_RESET_I(22);
    __PVT__W1KR = VL_RAND_RESET_I(17);
    __PVT__W1KI = VL_RAND_RESET_I(17);
    __PVT__W2KR = VL_RAND_RESET_I(17);
    __PVT__W2KI = VL_RAND_RESET_I(17);
    __PVT__W3KR = VL_RAND_RESET_I(17);
    __PVT__W3KI = VL_RAND_RESET_I(17);
    __PVT__cnt = VL_RAND_RESET_I(4);
    __PVT__u10__DOT__YR = VL_RAND_RESET_I(11);
    __PVT__u10__DOT__YI = VL_RAND_RESET_I(11);
    __PVT__u10__DOT__YR1 = VL_RAND_RESET_Q(45);
    __PVT__u10__DOT__YR2 = VL_RAND_RESET_Q(45);
    __PVT__u10__DOT__YI1 = VL_RAND_RESET_Q(45);
    __PVT__u10__DOT__YI2 = VL_RAND_RESET_Q(45);
    __PVT__u11__DOT__YR = VL_RAND_RESET_I(11);
    __PVT__u11__DOT__YI = VL_RAND_RESET_I(11);
    __PVT__u11__DOT__YR1 = VL_RAND_RESET_Q(45);
    __PVT__u11__DOT__YR2 = VL_RAND_RESET_Q(45);
    __PVT__u11__DOT__YI1 = VL_RAND_RESET_Q(45);
    __PVT__u11__DOT__YI2 = VL_RAND_RESET_Q(45);
    __PVT__u12__DOT__YR = VL_RAND_RESET_I(11);
    __PVT__u12__DOT__YI = VL_RAND_RESET_I(11);
    __PVT__u12__DOT__YR1 = VL_RAND_RESET_Q(45);
    __PVT__u12__DOT__YR2 = VL_RAND_RESET_Q(45);
    __PVT__u12__DOT__YI1 = VL_RAND_RESET_Q(45);
    __PVT__u12__DOT__YI2 = VL_RAND_RESET_Q(45);
    __Vfunc_func_k1_sin__0__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k1_sin__0__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k2_sin__1__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k2_sin__1__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k3_sin__2__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k3_sin__2__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k1_cos__3__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k1_cos__3__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k2_cos__4__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k2_cos__4__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k3_cos__5__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k3_cos__5__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k1_sin__6__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k1_sin__6__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k2_sin__7__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k2_sin__7__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k3_sin__8__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k3_sin__8__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k1_cos__9__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k1_cos__9__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k2_cos__10__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k2_cos__10__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k3_cos__11__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k3_cos__11__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k1_sin__12__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k1_sin__12__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k2_sin__13__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k2_sin__13__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k3_sin__14__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k3_sin__14__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k1_cos__15__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k1_cos__15__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k2_cos__16__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k2_cos__16__select = VL_RAND_RESET_I(7);
    __Vfunc_func_k3_cos__17__Vfuncout = VL_RAND_RESET_I(17);
    __Vfunc_func_k3_cos__17__select = VL_RAND_RESET_I(7);
    __Vdly__cnt = VL_RAND_RESET_I(4);
    __Vdly__u10__DOT__YR1 = VL_RAND_RESET_Q(45);
    __Vdly__u10__DOT__YR2 = VL_RAND_RESET_Q(45);
    __Vdly__u10__DOT__YI1 = VL_RAND_RESET_Q(45);
    __Vdly__u10__DOT__YI2 = VL_RAND_RESET_Q(45);
    __Vdly__u11__DOT__YR1 = VL_RAND_RESET_Q(45);
    __Vdly__u11__DOT__YR2 = VL_RAND_RESET_Q(45);
    __Vdly__u11__DOT__YI1 = VL_RAND_RESET_Q(45);
    __Vdly__u11__DOT__YI2 = VL_RAND_RESET_Q(45);
    __Vdly__u12__DOT__YR1 = VL_RAND_RESET_Q(45);
    __Vdly__u12__DOT__YR2 = VL_RAND_RESET_Q(45);
    __Vdly__u12__DOT__YI1 = VL_RAND_RESET_Q(45);
    __Vdly__u12__DOT__YI2 = VL_RAND_RESET_Q(45);
}

void Vfft64_radix4_batterfly::__Vconfigure(Vfft64__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfft64_radix4_batterfly::~Vfft64_radix4_batterfly() {
}

//--------------------
// Internal Methods

void Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__1(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__1\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__cnt 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__cnt;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI2;
}

void Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__4(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__4\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN2)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN2)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN3)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN3)));
    // ALWAYS at ../radix4_batterfly.v:110
    if (vlTOPp->RST) {
	if (vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly) {
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__cnt = 1;
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.valid_o = 0;
	}
	if ((1 == (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__cnt))) {
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__cnt 
		= (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__cnt)));
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.valid_o = 1;
	}
	if ((2 == (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__cnt))) {
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__cnt = 0;
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.valid_o = 0;
	}
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.valid_o = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__cnt = 0;
    }
    // ALWAYS at ../twiddler.v:20
    if (vlTOPp->RST) {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR1 
				    - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI1 
				    + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YR1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C1 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W1KR))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YR2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C1))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W1KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YI1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C1 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W1KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YI2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C1))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W1KR))));
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI = 0;
    }
    // ALWAYS at ../twiddler.v:20
    if (vlTOPp->RST) {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR1 
				    - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI1 
				    + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YR1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C2 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W2KR))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YR2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C2))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W2KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YI1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C2 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W2KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YI2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C2))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W2KR))));
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI = 0;
    }
    // ALWAYS at ../twiddler.v:20
    if (vlTOPp->RST) {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR1 
				    - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI1 
				    + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YR1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C3 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W3KR))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YR2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C3))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W3KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YI1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C3 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W3KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YI2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C3))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W3KR))));
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI = 0;
    }
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__cnt 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__cnt;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u10__DOT__YI2;
    // ALWAYS at ../radix4_batterfly.v:105
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1917 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1013d : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1e6e9 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xfec3 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W1KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:102
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xfec3 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1917 : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1013d : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1e6e9 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W1KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__Vfuncout;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u11__DOT__YI2;
    // ALWAYS at ../radix4_batterfly.v:106
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xfb13 : 0xffff)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xfb13 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W2KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:103
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x1ce0f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x1ce0f : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W2KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__Vfuncout;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vdly__u12__DOT__YI2;
    // ALWAYS at ../radix4_batterfly.v:107
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1b5b1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x10b07 : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x4a4f : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xf4f9 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W3KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:104
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x10b07 : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x4a4f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xf4f9 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1b5b1 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W3KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__Vfuncout;
}

void Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__7(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__7\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN2)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN2)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN3)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN3)));
    // ALWAYS at ../radix4_batterfly.v:105
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1917 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1013d : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1e6e9 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__select))
				        ? 0xfec3 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W1KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_cos__3__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:102
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xfec3 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1917 : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1013d : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__select))
				        ? 0x1e6e9 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W1KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k1_sin__0__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:106
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xfb13 : 0xffff)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__select))
				        ? 0xfb13 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W2KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_cos__4__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:103
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x1ce0f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__select))
				        ? 0x1ce0f : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W2KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k2_sin__1__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:107
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1b5b1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x10b07 : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x4a4f : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__select))
				        ? 0xf4f9 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W3KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_cos__5__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:104
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x10b07 : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x4a4f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xf4f9 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__select))
				        ? 0x1b5b1 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W3KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vfunc_func_k3_sin__2__Vfuncout;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C2 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J 
	= ((0x3ff800 & (VL_NEGATE_I(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3) 
			<< 0xb)) | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3 
					     >> 0xb)));
}

void Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__10(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__10\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C2 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J 
	= ((0x3ff800 & (VL_NEGATE_I(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3) 
			<< 0xb)) | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3 
					     >> 0xb)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C1 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C3 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
			  >> 0xb) + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
		       + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J)));
}

void Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__13(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__13\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C1 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C3 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
			  >> 0xb) + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
		       + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J)));
}

void Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__2(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__2\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__cnt 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__cnt;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI2;
}

void Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__5(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__5\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN6)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN6)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN7)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN7)));
    // ALWAYS at ../radix4_batterfly.v:110
    if (vlTOPp->RST) {
	if (vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_2) {
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__cnt = 1;
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.valid_o = 0;
	}
	if ((1 == (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__cnt))) {
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__cnt 
		= (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__cnt)));
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.valid_o = 1;
	}
	if ((2 == (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__cnt))) {
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__cnt = 0;
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.valid_o = 0;
	}
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.valid_o = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__cnt = 0;
    }
    // ALWAYS at ../twiddler.v:20
    if (vlTOPp->RST) {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR1 
				    - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI1 
				    + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YR1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C1 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W1KR))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YR2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C1))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W1KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YI1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C1 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W1KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YI2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C1))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W1KR))));
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI = 0;
    }
    // ALWAYS at ../twiddler.v:20
    if (vlTOPp->RST) {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR1 
				    - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI1 
				    + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YR1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C2 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W2KR))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YR2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C2))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W2KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YI1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C2 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W2KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YI2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C2))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W2KR))));
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI = 0;
    }
    // ALWAYS at ../twiddler.v:20
    if (vlTOPp->RST) {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR1 
				    - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI1 
				    + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YR1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C3 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W3KR))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YR2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C3))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W3KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YI1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C3 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W3KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YI2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C3))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W3KR))));
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI = 0;
    }
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__cnt 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__cnt;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u10__DOT__YI2;
    // ALWAYS at ../radix4_batterfly.v:105
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1917 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1013d : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1e6e9 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xfec3 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W1KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:102
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xfec3 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1917 : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1013d : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1e6e9 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W1KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__Vfuncout;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u11__DOT__YI2;
    // ALWAYS at ../radix4_batterfly.v:106
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xfb13 : 0xffff)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xfb13 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W2KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:103
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x1ce0f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x1ce0f : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W2KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__Vfuncout;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vdly__u12__DOT__YI2;
    // ALWAYS at ../radix4_batterfly.v:107
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1b5b1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x10b07 : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x4a4f : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xf4f9 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W3KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:104
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x10b07 : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x4a4f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xf4f9 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1b5b1 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W3KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__Vfuncout;
}

void Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__8(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__8\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN6)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN6)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN7)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN7)));
    // ALWAYS at ../radix4_batterfly.v:105
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1917 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1013d : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1e6e9 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__select))
				        ? 0xfec3 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W1KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_cos__9__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:102
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xfec3 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1917 : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1013d : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__select))
				        ? 0x1e6e9 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W1KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k1_sin__6__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:106
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xfb13 : 0xffff)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__select))
				        ? 0xfb13 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W2KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_cos__10__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:103
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x1ce0f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__select))
				        ? 0x1ce0f : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W2KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k2_sin__7__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:107
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1b5b1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x10b07 : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x4a4f : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__select))
				        ? 0xf4f9 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W3KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_cos__11__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:104
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x10b07 : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x4a4f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xf4f9 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__select))
				        ? 0x1b5b1 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W3KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vfunc_func_k3_sin__8__Vfuncout;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C2 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J 
	= ((0x3ff800 & (VL_NEGATE_I(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3) 
			<< 0xb)) | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3 
					     >> 0xb)));
}

void Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__11(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__11\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C2 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J 
	= ((0x3ff800 & (VL_NEGATE_I(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3) 
			<< 0xb)) | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3 
					     >> 0xb)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C1 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C3 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
			  >> 0xb) + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
		       + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J)));
}

void Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__14(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__14\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C1 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C3 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
			  >> 0xb) + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
		       + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J)));
}

void Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__3(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__3\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__cnt 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__cnt;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI2;
}

void Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__6(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__6\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN10)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN10)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN11)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN11)));
    // ALWAYS at ../radix4_batterfly.v:110
    if (vlTOPp->RST) {
	if (vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_3) {
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__cnt = 1;
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.valid_o = 0;
	}
	if ((1 == (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__cnt))) {
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__cnt 
		= (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__cnt)));
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.valid_o = 1;
	}
	if ((2 == (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__cnt))) {
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__cnt = 0;
	    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.valid_o = 0;
	}
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.valid_o = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__cnt = 0;
    }
    // ALWAYS at ../twiddler.v:20
    if (vlTOPp->RST) {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR1 
				    - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI1 
				    + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YR1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C1 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W1KR))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YR2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C1))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W1KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YI1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C1 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W1KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YI2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C1))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W1KR))));
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI = 0;
    }
    // ALWAYS at ../twiddler.v:20
    if (vlTOPp->RST) {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR1 
				    - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI1 
				    + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YR1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C2 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W2KR))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YR2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C2))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W2KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YI1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C2 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W2KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YI2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C2))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W2KR))));
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI = 0;
    }
    // ALWAYS at ../twiddler.v:20
    if (vlTOPp->RST) {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR1 
				    - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI 
	    = (0x7ff & (IData)((VL_ULL(0x1fffffff) 
				& ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI1 
				    + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI2) 
				   >> 0x10))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YR1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C3 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W3KR))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YR2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C3))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W3KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YI1 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C3 
									 >> 0xb)))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W3KI))));
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YI2 
	    = (VL_ULL(0x1fffffffffff) & VL_MULS_QQQ(45,45,45, 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,11, 
								     (0x7ff 
								      & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C3))), 
						    (VL_ULL(0x1fffffffffff) 
						     & VL_EXTENDS_QI(45,17, vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W3KR))));
    } else {
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR = 0;
	vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI = 0;
    }
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__cnt 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__cnt;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u10__DOT__YI2;
    // ALWAYS at ../radix4_batterfly.v:105
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1917 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1013d : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1e6e9 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xfec3 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W1KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:102
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xfec3 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1917 : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1013d : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1e6e9 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W1KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__Vfuncout;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u11__DOT__YI2;
    // ALWAYS at ../radix4_batterfly.v:106
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xfb13 : 0xffff)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xfb13 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W2KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:103
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x1ce0f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x1ce0f : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W2KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__Vfuncout;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YR1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YR2;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI1 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YI1;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI2 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vdly__u12__DOT__YI2;
    // ALWAYS at ../radix4_batterfly.v:107
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1b5b1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x10b07 : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x4a4f : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xf4f9 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W3KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:104
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x10b07 : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x4a4f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xf4f9 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1b5b1 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W3KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__Vfuncout;
}

void Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__9(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__9\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN10)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN10)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
			  >> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
		       + vlTOPp->v__DOT__myFFT_module__DOT__AIN11)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3 
	= ((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
			  >> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
		       - vlTOPp->v__DOT__myFFT_module__DOT__AIN11)));
    // ALWAYS at ../radix4_batterfly.v:105
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1917 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1013d : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1e6e9 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__select))
				        ? 0xfec3 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W1KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_cos__15__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:102
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1917 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x4a4f : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x78ac : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xa266 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xc5e3 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xe1c4 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xf4f9 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xfec3 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xf4f9 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xe1c4 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xc5e3 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0xa266 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x78ac : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x4a4f : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1917 : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1e6e9 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1b5b1 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x18754 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x15d9a : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x13a1d : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x11e3c : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x10b07 : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1013d : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x10b07 : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x11e3c : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x13a1d : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x15d9a : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x18754 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1b5b1 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__select))
				        ? 0x1e6e9 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W1KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k1_sin__12__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:106
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xfb13 : 0xffff)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x31f1 : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x104ed : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x1ce0f : 0)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__select))
				        ? 0xfb13 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W2KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_cos__16__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:103
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x1ce0f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x31f1 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x8e39 : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xd4da : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xfb13 : 0xffff)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xfb13 : 0xec82)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0xd4da : 0xb504))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x8e39 : 0x61f7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x31f1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x1ce0f : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x171c7 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x12b26 : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x104ed : 0x10001)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x104ed : 0x1137e)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x12b26 : 0x14afc))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x171c7 : 0x19e09)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__select))
				        ? 0x1ce0f : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W2KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k2_sin__13__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:107
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1b5b1 : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x10b07 : 0x10001)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x4a4f : 0))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__select))
				        ? 0xf4f9 : 0xffff)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W3KR 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_cos__17__Vfuncout;
    // ALWAYS at ../radix4_batterfly.v:104
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select 
	= vlTOPp->v__DOT__myFFT_module__DOT__k3;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__Vfuncout 
	= ((0x40 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
	    ? 0 : ((0x20 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
		    ? ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x4a4f : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xc5e3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xfec3 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xe1c4 : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x78ac : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1e6e9 : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x15d9a : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x10b07 : 0x10001))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x10b07 : 0x12b26)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x15d9a : 0x19e09))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1e6e9 : 0x31f1)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x78ac : 0xb504)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xe1c4 : 0xfb13)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xfec3 : 0xec82))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xc5e3 : 0x8e39)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x4a4f : 0)))))
		    : ((0x10 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
		        ? ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1b5b1 : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x13a1d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1013d : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x11e3c : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x18754 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1917 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xa266 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xf4f9 : 0xffff))))
		        : ((8 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			    ? ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xf4f9 : 0xd4da)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0xa266 : 0x61f7))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1917 : 0x1ce0f)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x18754 : 0x14afc)))
			    : ((4 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
			        ? ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x11e3c : 0x104ed)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1013d : 0x1137e))
			        : ((2 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				    ? ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x13a1d : 0x171c7)
				    : ((1 & (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__select))
				        ? 0x1b5b1 : 0)))))));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W3KI 
	= vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vfunc_func_k3_sin__14__Vfuncout;
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C2 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J 
	= ((0x3ff800 & (VL_NEGATE_I(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3) 
			<< 0xb)) | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3 
					     >> 0xb)));
}

void Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__12(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__12\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C2 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J 
	= ((0x3ff800 & (VL_NEGATE_I(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3) 
			<< 0xb)) | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3 
					     >> 0xb)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C1 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C3 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
			  >> 0xb) + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
		       + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J)));
}

void Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__15(Vfft64__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vfft64_radix4_batterfly::_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__15\n"); );
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C1 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
			  >> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
		       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J)));
    vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C3 
	= ((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
			  >> 0xb) + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J 
				     >> 0xb)) << 0xb)) 
	   | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
		       + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J)));
}
