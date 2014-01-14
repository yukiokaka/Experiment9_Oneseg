// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcomplex_add.h for the primary calling header

#ifndef _Vcomplex_add_radix4_batterfly_H_
#define _Vcomplex_add_radix4_batterfly_H_

#include "verilated.h"
class Vcomplex_add__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vcomplex_add_radix4_batterfly) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(k,6,0);
    VL_IN8(valid_i,0,0);
    VL_OUT8(valid_o,0,0);
    //char	__VpadToAlign5[3];
    VL_IN(A0,21,0);
    VL_IN(A1,21,0);
    VL_IN(A2,21,0);
    VL_IN(A3,21,0);
    VL_OUT(Y0,21,0);
    VL_OUT(Y1,21,0);
    VL_OUT(Y2,21,0);
    VL_OUT(Y3,21,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__cnt,3,0);
    //char	__VpadToAlign45[1];
    VL_SIG16(__PVT__u10__DOT__YR,10,0);
    VL_SIG16(__PVT__u10__DOT__YI,10,0);
    VL_SIG16(__PVT__u11__DOT__YR,10,0);
    VL_SIG16(__PVT__u11__DOT__YI,10,0);
    VL_SIG16(__PVT__u12__DOT__YR,10,0);
    VL_SIG16(__PVT__u12__DOT__YI,10,0);
    //char	__VpadToAlign58[2];
    VL_SIG(__PVT__B0,21,0);
    VL_SIG(__PVT__B1,21,0);
    VL_SIG(__PVT__B2,21,0);
    VL_SIG(__PVT__B3,21,0);
    VL_SIG(__PVT__B3J,21,0);
    VL_SIG(__PVT__C1,21,0);
    VL_SIG(__PVT__C2,21,0);
    VL_SIG(__PVT__C3,21,0);
    VL_SIG(__PVT__W1KR,16,0);
    VL_SIG(__PVT__W1KI,16,0);
    VL_SIG(__PVT__W2KR,16,0);
    VL_SIG(__PVT__W2KI,16,0);
    VL_SIG(__PVT__W3KR,16,0);
    VL_SIG(__PVT__W3KI,16,0);
    //char	__VpadToAlign116[4];
    VL_SIG64(__PVT__u10__DOT__YR1,44,0);
    VL_SIG64(__PVT__u10__DOT__YR2,44,0);
    VL_SIG64(__PVT__u10__DOT__YI1,44,0);
    VL_SIG64(__PVT__u10__DOT__YI2,44,0);
    VL_SIG64(__PVT__u11__DOT__YR1,44,0);
    VL_SIG64(__PVT__u11__DOT__YR2,44,0);
    VL_SIG64(__PVT__u11__DOT__YI1,44,0);
    VL_SIG64(__PVT__u11__DOT__YI2,44,0);
    VL_SIG64(__PVT__u12__DOT__YR1,44,0);
    VL_SIG64(__PVT__u12__DOT__YR2,44,0);
    VL_SIG64(__PVT__u12__DOT__YI1,44,0);
    VL_SIG64(__PVT__u12__DOT__YI2,44,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vfunc_func_k1_sin__0__select,6,0);
    VL_SIG8(__Vfunc_func_k2_sin__1__select,6,0);
    VL_SIG8(__Vfunc_func_k3_sin__2__select,6,0);
    VL_SIG8(__Vfunc_func_k1_cos__3__select,6,0);
    VL_SIG8(__Vfunc_func_k2_cos__4__select,6,0);
    VL_SIG8(__Vfunc_func_k3_cos__5__select,6,0);
    VL_SIG8(__Vfunc_func_k1_sin__6__select,6,0);
    VL_SIG8(__Vfunc_func_k2_sin__7__select,6,0);
    VL_SIG8(__Vfunc_func_k3_sin__8__select,6,0);
    VL_SIG8(__Vfunc_func_k1_cos__9__select,6,0);
    VL_SIG8(__Vfunc_func_k2_cos__10__select,6,0);
    VL_SIG8(__Vfunc_func_k3_cos__11__select,6,0);
    VL_SIG8(__Vfunc_func_k1_sin__12__select,6,0);
    VL_SIG8(__Vfunc_func_k2_sin__13__select,6,0);
    VL_SIG8(__Vfunc_func_k3_sin__14__select,6,0);
    VL_SIG8(__Vfunc_func_k1_cos__15__select,6,0);
    VL_SIG8(__Vfunc_func_k2_cos__16__select,6,0);
    VL_SIG8(__Vfunc_func_k3_cos__17__select,6,0);
    VL_SIG8(__Vdly__cnt,3,0);
    //char	__VpadToAlign239[1];
    VL_SIG(__Vfunc_func_k1_sin__0__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k2_sin__1__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k3_sin__2__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k1_cos__3__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k2_cos__4__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k3_cos__5__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k1_sin__6__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k2_sin__7__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k3_sin__8__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k1_cos__9__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k2_cos__10__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k3_cos__11__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k1_sin__12__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k2_sin__13__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k3_sin__14__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k1_cos__15__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k2_cos__16__Vfuncout,16,0);
    VL_SIG(__Vfunc_func_k3_cos__17__Vfuncout,16,0);
    VL_SIG64(__Vdly__u10__DOT__YR1,44,0);
    VL_SIG64(__Vdly__u10__DOT__YR2,44,0);
    VL_SIG64(__Vdly__u10__DOT__YI1,44,0);
    VL_SIG64(__Vdly__u10__DOT__YI2,44,0);
    VL_SIG64(__Vdly__u11__DOT__YR1,44,0);
    VL_SIG64(__Vdly__u11__DOT__YR2,44,0);
    VL_SIG64(__Vdly__u11__DOT__YI1,44,0);
    VL_SIG64(__Vdly__u11__DOT__YI2,44,0);
    VL_SIG64(__Vdly__u12__DOT__YR1,44,0);
    VL_SIG64(__Vdly__u12__DOT__YR2,44,0);
    VL_SIG64(__Vdly__u12__DOT__YI1,44,0);
    VL_SIG64(__Vdly__u12__DOT__YI2,44,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign412[4];
    Vcomplex_add__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcomplex_add_radix4_batterfly& operator= (const Vcomplex_add_radix4_batterfly&);	///< Copying not allowed
    Vcomplex_add_radix4_batterfly(const Vcomplex_add_radix4_batterfly&);	///< Copying not allowed
  public:
    Vcomplex_add_radix4_batterfly(const char* name="TOP");
    ~Vcomplex_add_radix4_batterfly();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcomplex_add__Syms* symsp, bool first);
    static void	_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__1(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__10(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__4(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__11(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__2(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__5(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__12(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__3(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__6(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__13(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1__7(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__14(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2__8(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__15(Vcomplex_add__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3__9(Vcomplex_add__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
