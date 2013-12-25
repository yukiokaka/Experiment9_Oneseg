// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter.h for the primary calling header

#include "Vcounter.h"          // For This
#include "Vcounter__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcounter) {
    Vcounter__Syms* __restrict vlSymsp = __VlSymsp = new Vcounter__Syms(this, name());
    Vcounter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    cen = VL_RAND_RESET_I(1);
    wen = VL_RAND_RESET_I(1);
    dat = VL_RAND_RESET_I(8);
    o_p = VL_RAND_RESET_I(8);
    o_n = VL_RAND_RESET_I(8);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__rst = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vcounter::__Vconfigure(Vcounter__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcounter::~Vcounter() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vcounter::eval() {
    Vcounter__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vcounter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vcounter::eval\n"); );
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

void Vcounter::_eval_initial_loop(Vcounter__Syms* __restrict vlSymsp) {
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

void Vcounter::_sequent__TOP__1(Vcounter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcounter::_sequent__TOP__1\n"); );
    Vcounter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__o_p,7,0);
    //char	__VpadToAlign5[3];
    // Body
    __Vdly__o_p = vlTOPp->o_p;
    // ALWAYS at counter.v:16
    __Vdly__o_p = (0xff & ((IData)(vlTOPp->rst) ? 0
			    : ((IData)(vlTOPp->wen)
			        ? (IData)(vlTOPp->dat)
			        : ((IData)(vlTOPp->o_p) 
				   + (IData)(vlTOPp->cen)))));
    vlTOPp->o_p = __Vdly__o_p;
}

void Vcounter::_sequent__TOP__2(Vcounter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcounter::_sequent__TOP__2\n"); );
    Vcounter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__o_n,7,0);
    //char	__VpadToAlign29[3];
    // Body
    __Vdly__o_n = vlTOPp->o_n;
    // ALWAYS at counter.v:21
    __Vdly__o_n = (0xff & ((IData)(vlTOPp->rst) ? 0
			    : ((IData)(vlTOPp->wen)
			        ? (IData)(vlTOPp->dat)
			        : ((IData)(vlTOPp->o_n) 
				   + (IData)(vlTOPp->cen)))));
    vlTOPp->o_n = __Vdly__o_n;
}

void Vcounter::_eval(Vcounter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcounter::_eval\n"); );
    Vcounter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk)) 
	 | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vcounter::_eval_initial(Vcounter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcounter::_eval_initial\n"); );
    Vcounter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcounter::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vcounter::final\n"); );
    // Variables
    Vcounter__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcounter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcounter::_eval_settle(Vcounter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcounter::_eval_settle\n"); );
    Vcounter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

IData Vcounter::_change_request(Vcounter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcounter::_change_request\n"); );
    Vcounter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    IData __req = false;  // Logically a bool
    return __req;
}
