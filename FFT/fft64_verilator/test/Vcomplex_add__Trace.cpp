// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcomplex_add__Syms.h"


//======================

void Vcomplex_add::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcomplex_add* t=(Vcomplex_add*)userthis;
    Vcomplex_add__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vcomplex_add::traceChgThis(Vcomplex_add__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcomplex_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 1))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0;
}

void Vcomplex_add::traceChgThis__2(Vcomplex_add__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcomplex_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+12,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W1KR),17);
	vcdp->chgBus  (c+13,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W1KI),17);
	vcdp->chgBus  (c+14,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W2KR),17);
	vcdp->chgBus  (c+15,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W2KI),17);
	vcdp->chgBus  (c+16,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W3KR),17);
	vcdp->chgBus  (c+17,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__W3KI),17);
	vcdp->chgBus  (c+7,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3),22);
	vcdp->chgBus  (c+18,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3 
				       >> 0xb))),11);
	vcdp->chgBus  (c+19,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3)),11);
	vcdp->chgBus  (c+20,((0x7ff & VL_NEGATE_I(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3))),11);
	vcdp->chgBus  (c+1,(((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
					    >> 0xb) 
					   + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
					      >> 0xb)) 
					  << 0xb)) 
			     | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
					 + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)))),22);
	vcdp->chgBus  (c+21,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
				       >> 0xb))),11);
	vcdp->chgBus  (c+22,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0)),11);
	vcdp->chgBus  (c+23,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
				       >> 0xb))),11);
	vcdp->chgBus  (c+24,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1)),11);
	vcdp->chgBus  (c+25,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
					>> 0xb) + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+26,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
				       + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1))),11);
	vcdp->chgBus  (c+27,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
				       >> 0xb))),11);
	vcdp->chgBus  (c+28,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2)),11);
	vcdp->chgBus  (c+29,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J 
				       >> 0xb))),11);
	vcdp->chgBus  (c+30,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J)),11);
	vcdp->chgBus  (c+31,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
					>> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+32,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
				       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J))),11);
	vcdp->chgBus  (c+4,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0),22);
	vcdp->chgBus  (c+5,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1),22);
	vcdp->chgBus  (c+33,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
					>> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+34,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B0 
				       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B1))),11);
	vcdp->chgBus  (c+6,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2),22);
	vcdp->chgBus  (c+8,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J),22);
	vcdp->chgBus  (c+35,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
					>> 0xb) + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+36,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B2 
				       + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__B3J))),11);
	vcdp->chgBus  (c+9,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C1),22);
	vcdp->chgBus  (c+37,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C1 
				       >> 0xb))),11);
	vcdp->chgBus  (c+38,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C1)),11);
	vcdp->chgBus  (c+10,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C2),22);
	vcdp->chgBus  (c+39,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C2 
				       >> 0xb))),11);
	vcdp->chgBus  (c+40,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C2)),11);
	vcdp->chgBus  (c+11,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C3),22);
	vcdp->chgBus  (c+41,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C3 
				       >> 0xb))),11);
	vcdp->chgBus  (c+42,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__C3)),11);
	vcdp->chgBus  (c+51,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W1KR),17);
	vcdp->chgBus  (c+52,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W1KI),17);
	vcdp->chgBus  (c+53,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W2KR),17);
	vcdp->chgBus  (c+54,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W2KI),17);
	vcdp->chgBus  (c+55,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W3KR),17);
	vcdp->chgBus  (c+56,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__W3KI),17);
	vcdp->chgBus  (c+46,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3),22);
	vcdp->chgBus  (c+57,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3 
				       >> 0xb))),11);
	vcdp->chgBus  (c+58,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3)),11);
	vcdp->chgBus  (c+59,((0x7ff & VL_NEGATE_I(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3))),11);
	vcdp->chgBus  (c+2,(((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
					    >> 0xb) 
					   + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
					      >> 0xb)) 
					  << 0xb)) 
			     | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
					 + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)))),22);
	vcdp->chgBus  (c+60,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
				       >> 0xb))),11);
	vcdp->chgBus  (c+61,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0)),11);
	vcdp->chgBus  (c+62,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
				       >> 0xb))),11);
	vcdp->chgBus  (c+63,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1)),11);
	vcdp->chgBus  (c+64,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
					>> 0xb) + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+65,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
				       + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1))),11);
	vcdp->chgBus  (c+66,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
				       >> 0xb))),11);
	vcdp->chgBus  (c+67,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2)),11);
	vcdp->chgBus  (c+68,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J 
				       >> 0xb))),11);
	vcdp->chgBus  (c+69,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J)),11);
	vcdp->chgBus  (c+70,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
					>> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+71,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
				       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J))),11);
	vcdp->chgBus  (c+43,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0),22);
	vcdp->chgBus  (c+44,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1),22);
	vcdp->chgBus  (c+72,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
					>> 0xb) - (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+73,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B0 
				       - vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B1))),11);
	vcdp->chgBus  (c+45,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2),22);
	vcdp->chgBus  (c+47,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J),22);
	vcdp->chgBus  (c+74,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
					>> 0xb) + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+75,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B2 
				       + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__B3J))),11);
	vcdp->chgBus  (c+48,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C1),22);
	vcdp->chgBus  (c+76,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C1 
				       >> 0xb))),11);
	vcdp->chgBus  (c+77,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C1)),11);
	vcdp->chgBus  (c+49,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C2),22);
	vcdp->chgBus  (c+78,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C2 
				       >> 0xb))),11);
	vcdp->chgBus  (c+79,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C2)),11);
	vcdp->chgBus  (c+50,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C3),22);
	vcdp->chgBus  (c+80,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C3 
				       >> 0xb))),11);
	vcdp->chgBus  (c+81,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__C3)),11);
	vcdp->chgBus  (c+90,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W1KR),17);
	vcdp->chgBus  (c+91,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W1KI),17);
	vcdp->chgBus  (c+92,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W2KR),17);
	vcdp->chgBus  (c+93,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W2KI),17);
	vcdp->chgBus  (c+94,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W3KR),17);
	vcdp->chgBus  (c+95,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__W3KI),17);
	vcdp->chgBus  (c+85,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3),22);
	vcdp->chgBus  (c+96,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3 
				       >> 0xb))),11);
	vcdp->chgBus  (c+97,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3)),11);
	vcdp->chgBus  (c+98,((0x7ff & VL_NEGATE_I(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3))),11);
	vcdp->chgBus  (c+3,(((0x3ff800 & (((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
					    >> 0xb) 
					   + (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
					      >> 0xb)) 
					  << 0xb)) 
			     | (0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
					 + vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)))),22);
	vcdp->chgBus  (c+99,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
				       >> 0xb))),11);
	vcdp->chgBus  (c+100,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0)),11);
	vcdp->chgBus  (c+101,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
					>> 0xb))),11);
	vcdp->chgBus  (c+102,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1)),11);
	vcdp->chgBus  (c+103,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
					 >> 0xb) + 
					(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+104,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
					+ vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1))),11);
	vcdp->chgBus  (c+105,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
					>> 0xb))),11);
	vcdp->chgBus  (c+106,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2)),11);
	vcdp->chgBus  (c+107,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J 
					>> 0xb))),11);
	vcdp->chgBus  (c+108,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J)),11);
	vcdp->chgBus  (c+109,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
					 >> 0xb) - 
					(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+110,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
					- vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J))),11);
	vcdp->chgBus  (c+82,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0),22);
	vcdp->chgBus  (c+83,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1),22);
	vcdp->chgBus  (c+111,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
					 >> 0xb) - 
					(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+112,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B0 
					- vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B1))),11);
	vcdp->chgBus  (c+84,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2),22);
	vcdp->chgBus  (c+86,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J),22);
	vcdp->chgBus  (c+113,((0x7ff & ((vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
					 >> 0xb) + 
					(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+114,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B2 
					+ vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__B3J))),11);
	vcdp->chgBus  (c+87,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C1),22);
	vcdp->chgBus  (c+115,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C1 
					>> 0xb))),11);
	vcdp->chgBus  (c+116,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C1)),11);
	vcdp->chgBus  (c+88,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C2),22);
	vcdp->chgBus  (c+117,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C2 
					>> 0xb))),11);
	vcdp->chgBus  (c+118,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C2)),11);
	vcdp->chgBus  (c+89,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C3),22);
	vcdp->chgBus  (c+119,((0x7ff & (vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C3 
					>> 0xb))),11);
	vcdp->chgBus  (c+120,((0x7ff & vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__C3)),11);
    }
}

void Vcomplex_add::traceChgThis__3(Vcomplex_add__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcomplex_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+121,(vlTOPp->v__DOT__cnt),7);
	vcdp->chgBus  (c+122,(vlTOPp->v__DOT__cnt_o),7);
	vcdp->chgBus  (c+123,(vlTOPp->v__DOT__A0),22);
	vcdp->chgBus  (c+124,(vlTOPp->v__DOT__A1),22);
	vcdp->chgBus  (c+125,(vlTOPp->v__DOT__A2),22);
	vcdp->chgBus  (c+126,(vlTOPp->v__DOT__A3),22);
	vcdp->chgBus  (c+127,(vlTOPp->v__DOT__A4),22);
	vcdp->chgBus  (c+128,(vlTOPp->v__DOT__A5),22);
	vcdp->chgBus  (c+129,(vlTOPp->v__DOT__A6),22);
	vcdp->chgBus  (c+130,(vlTOPp->v__DOT__A7),22);
	vcdp->chgBus  (c+131,(vlTOPp->v__DOT__A8),22);
	vcdp->chgBus  (c+132,(vlTOPp->v__DOT__A9),22);
	vcdp->chgBus  (c+133,(vlTOPp->v__DOT__A10),22);
	vcdp->chgBus  (c+134,(vlTOPp->v__DOT__A11),22);
	vcdp->chgBus  (c+135,(vlTOPp->v__DOT__A12),22);
	vcdp->chgBus  (c+136,(vlTOPp->v__DOT__A13),22);
	vcdp->chgBus  (c+137,(vlTOPp->v__DOT__A14),22);
	vcdp->chgBus  (c+138,(vlTOPp->v__DOT__A15),22);
	vcdp->chgBus  (c+139,(vlTOPp->v__DOT__A16),22);
	vcdp->chgBus  (c+140,(vlTOPp->v__DOT__A17),22);
	vcdp->chgBus  (c+141,(vlTOPp->v__DOT__A18),22);
	vcdp->chgBus  (c+142,(vlTOPp->v__DOT__A19),22);
	vcdp->chgBus  (c+143,(vlTOPp->v__DOT__A20),22);
	vcdp->chgBus  (c+144,(vlTOPp->v__DOT__A21),22);
	vcdp->chgBus  (c+145,(vlTOPp->v__DOT__A22),22);
	vcdp->chgBus  (c+146,(vlTOPp->v__DOT__A23),22);
	vcdp->chgBus  (c+147,(vlTOPp->v__DOT__A24),22);
	vcdp->chgBus  (c+148,(vlTOPp->v__DOT__A25),22);
	vcdp->chgBus  (c+149,(vlTOPp->v__DOT__A26),22);
	vcdp->chgBus  (c+150,(vlTOPp->v__DOT__A27),22);
	vcdp->chgBus  (c+151,(vlTOPp->v__DOT__A28),22);
	vcdp->chgBus  (c+152,(vlTOPp->v__DOT__A29),22);
	vcdp->chgBus  (c+153,(vlTOPp->v__DOT__A30),22);
	vcdp->chgBus  (c+154,(vlTOPp->v__DOT__A31),22);
	vcdp->chgBus  (c+155,(vlTOPp->v__DOT__A32),22);
	vcdp->chgBus  (c+156,(vlTOPp->v__DOT__A33),22);
	vcdp->chgBus  (c+157,(vlTOPp->v__DOT__A34),22);
	vcdp->chgBus  (c+158,(vlTOPp->v__DOT__A35),22);
	vcdp->chgBus  (c+159,(vlTOPp->v__DOT__A36),22);
	vcdp->chgBus  (c+160,(vlTOPp->v__DOT__A37),22);
	vcdp->chgBus  (c+161,(vlTOPp->v__DOT__A38),22);
	vcdp->chgBus  (c+162,(vlTOPp->v__DOT__A39),22);
	vcdp->chgBus  (c+163,(vlTOPp->v__DOT__A40),22);
	vcdp->chgBus  (c+164,(vlTOPp->v__DOT__A41),22);
	vcdp->chgBus  (c+165,(vlTOPp->v__DOT__A42),22);
	vcdp->chgBus  (c+166,(vlTOPp->v__DOT__A43),22);
	vcdp->chgBus  (c+167,(vlTOPp->v__DOT__A44),22);
	vcdp->chgBus  (c+168,(vlTOPp->v__DOT__A45),22);
	vcdp->chgBus  (c+169,(vlTOPp->v__DOT__A46),22);
	vcdp->chgBus  (c+170,(vlTOPp->v__DOT__A47),22);
	vcdp->chgBus  (c+171,(vlTOPp->v__DOT__A48),22);
	vcdp->chgBus  (c+172,(vlTOPp->v__DOT__A49),22);
	vcdp->chgBus  (c+173,(vlTOPp->v__DOT__A50),22);
	vcdp->chgBus  (c+174,(vlTOPp->v__DOT__A51),22);
	vcdp->chgBus  (c+175,(vlTOPp->v__DOT__A52),22);
	vcdp->chgBus  (c+176,(vlTOPp->v__DOT__A53),22);
	vcdp->chgBus  (c+177,(vlTOPp->v__DOT__A54),22);
	vcdp->chgBus  (c+178,(vlTOPp->v__DOT__A55),22);
	vcdp->chgBus  (c+179,(vlTOPp->v__DOT__A56),22);
	vcdp->chgBus  (c+180,(vlTOPp->v__DOT__A57),22);
	vcdp->chgBus  (c+181,(vlTOPp->v__DOT__A58),22);
	vcdp->chgBus  (c+182,(vlTOPp->v__DOT__A59),22);
	vcdp->chgBus  (c+183,(vlTOPp->v__DOT__A60),22);
	vcdp->chgBus  (c+184,(vlTOPp->v__DOT__A61),22);
	vcdp->chgBus  (c+185,(vlTOPp->v__DOT__A62),22);
	vcdp->chgBus  (c+186,(vlTOPp->v__DOT__A63),22);
	vcdp->chgBus  (c+187,(vlTOPp->v__DOT__Y0),22);
	vcdp->chgBus  (c+188,(vlTOPp->v__DOT__Y1),22);
	vcdp->chgBus  (c+189,(vlTOPp->v__DOT__Y2),22);
	vcdp->chgBus  (c+190,(vlTOPp->v__DOT__Y3),22);
	vcdp->chgBus  (c+191,(vlTOPp->v__DOT__Y4),22);
	vcdp->chgBus  (c+192,(vlTOPp->v__DOT__Y5),22);
	vcdp->chgBus  (c+193,(vlTOPp->v__DOT__Y6),22);
	vcdp->chgBus  (c+194,(vlTOPp->v__DOT__Y7),22);
	vcdp->chgBus  (c+195,(vlTOPp->v__DOT__Y8),22);
	vcdp->chgBus  (c+196,(vlTOPp->v__DOT__Y9),22);
	vcdp->chgBus  (c+197,(vlTOPp->v__DOT__Y10),22);
	vcdp->chgBus  (c+198,(vlTOPp->v__DOT__Y11),22);
	vcdp->chgBus  (c+199,(vlTOPp->v__DOT__Y12),22);
	vcdp->chgBus  (c+200,(vlTOPp->v__DOT__Y13),22);
	vcdp->chgBus  (c+201,(vlTOPp->v__DOT__Y14),22);
	vcdp->chgBus  (c+202,(vlTOPp->v__DOT__Y15),22);
	vcdp->chgBus  (c+203,(vlTOPp->v__DOT__Y16),22);
	vcdp->chgBus  (c+204,(vlTOPp->v__DOT__Y17),22);
	vcdp->chgBus  (c+205,(vlTOPp->v__DOT__Y18),22);
	vcdp->chgBus  (c+206,(vlTOPp->v__DOT__Y19),22);
	vcdp->chgBus  (c+207,(vlTOPp->v__DOT__Y20),22);
	vcdp->chgBus  (c+208,(vlTOPp->v__DOT__Y21),22);
	vcdp->chgBus  (c+209,(vlTOPp->v__DOT__Y22),22);
	vcdp->chgBus  (c+210,(vlTOPp->v__DOT__Y23),22);
	vcdp->chgBus  (c+211,(vlTOPp->v__DOT__Y24),22);
	vcdp->chgBus  (c+212,(vlTOPp->v__DOT__Y25),22);
	vcdp->chgBus  (c+213,(vlTOPp->v__DOT__Y26),22);
	vcdp->chgBus  (c+214,(vlTOPp->v__DOT__Y27),22);
	vcdp->chgBus  (c+215,(vlTOPp->v__DOT__Y28),22);
	vcdp->chgBus  (c+216,(vlTOPp->v__DOT__Y29),22);
	vcdp->chgBus  (c+217,(vlTOPp->v__DOT__Y30),22);
	vcdp->chgBus  (c+218,(vlTOPp->v__DOT__Y31),22);
	vcdp->chgBus  (c+219,(vlTOPp->v__DOT__Y32),22);
	vcdp->chgBus  (c+220,(vlTOPp->v__DOT__Y33),22);
	vcdp->chgBus  (c+221,(vlTOPp->v__DOT__Y34),22);
	vcdp->chgBus  (c+222,(vlTOPp->v__DOT__Y35),22);
	vcdp->chgBus  (c+223,(vlTOPp->v__DOT__Y36),22);
	vcdp->chgBus  (c+224,(vlTOPp->v__DOT__Y37),22);
	vcdp->chgBus  (c+225,(vlTOPp->v__DOT__Y38),22);
	vcdp->chgBus  (c+226,(vlTOPp->v__DOT__Y39),22);
	vcdp->chgBus  (c+227,(vlTOPp->v__DOT__Y40),22);
	vcdp->chgBus  (c+228,(vlTOPp->v__DOT__Y41),22);
	vcdp->chgBus  (c+229,(vlTOPp->v__DOT__Y42),22);
	vcdp->chgBus  (c+230,(vlTOPp->v__DOT__Y43),22);
	vcdp->chgBus  (c+231,(vlTOPp->v__DOT__Y44),22);
	vcdp->chgBus  (c+232,(vlTOPp->v__DOT__Y45),22);
	vcdp->chgBus  (c+233,(vlTOPp->v__DOT__Y46),22);
	vcdp->chgBus  (c+234,(vlTOPp->v__DOT__Y47),22);
	vcdp->chgBus  (c+235,(vlTOPp->v__DOT__Y48),22);
	vcdp->chgBus  (c+236,(vlTOPp->v__DOT__Y49),22);
	vcdp->chgBus  (c+237,(vlTOPp->v__DOT__Y50),22);
	vcdp->chgBus  (c+238,(vlTOPp->v__DOT__Y51),22);
	vcdp->chgBus  (c+239,(vlTOPp->v__DOT__Y52),22);
	vcdp->chgBus  (c+240,(vlTOPp->v__DOT__Y53),22);
	vcdp->chgBus  (c+241,(vlTOPp->v__DOT__Y54),22);
	vcdp->chgBus  (c+242,(vlTOPp->v__DOT__Y55),22);
	vcdp->chgBus  (c+243,(vlTOPp->v__DOT__Y56),22);
	vcdp->chgBus  (c+244,(vlTOPp->v__DOT__Y57),22);
	vcdp->chgBus  (c+245,(vlTOPp->v__DOT__Y58),22);
	vcdp->chgBus  (c+246,(vlTOPp->v__DOT__Y59),22);
	vcdp->chgBus  (c+247,(vlTOPp->v__DOT__Y60),22);
	vcdp->chgBus  (c+248,(vlTOPp->v__DOT__Y61),22);
	vcdp->chgBus  (c+249,(vlTOPp->v__DOT__Y62),22);
	vcdp->chgBus  (c+250,(vlTOPp->v__DOT__Y63),22);
	vcdp->chgBit  (c+251,(vlTOPp->v__DOT__start));
	vcdp->chgBit  (c+252,(vlTOPp->v__DOT__start_fft_flg));
	vcdp->chgBit  (c+253,(vlTOPp->v__DOT__fin_fft_flg));
	vcdp->chgBit  (c+254,(vlTOPp->v__DOT__valid_o_from_myFFT));
	vcdp->chgBit  (c+255,(vlTOPp->v__DOT__fft_culculating_flg));
	vcdp->chgBus  (c+256,(vlTOPp->v__DOT__myFFT_module__DOT__B0),22);
	vcdp->chgBus  (c+257,(vlTOPp->v__DOT__myFFT_module__DOT__B1),22);
	vcdp->chgBus  (c+258,(vlTOPp->v__DOT__myFFT_module__DOT__B2),22);
	vcdp->chgBus  (c+259,(vlTOPp->v__DOT__myFFT_module__DOT__B3),22);
	vcdp->chgBus  (c+260,(vlTOPp->v__DOT__myFFT_module__DOT__B4),22);
	vcdp->chgBus  (c+261,(vlTOPp->v__DOT__myFFT_module__DOT__B5),22);
	vcdp->chgBus  (c+262,(vlTOPp->v__DOT__myFFT_module__DOT__B6),22);
	vcdp->chgBus  (c+263,(vlTOPp->v__DOT__myFFT_module__DOT__B7),22);
	vcdp->chgBus  (c+264,(vlTOPp->v__DOT__myFFT_module__DOT__B8),22);
	vcdp->chgBus  (c+265,(vlTOPp->v__DOT__myFFT_module__DOT__B9),22);
	vcdp->chgBus  (c+266,(vlTOPp->v__DOT__myFFT_module__DOT__B10),22);
	vcdp->chgBus  (c+267,(vlTOPp->v__DOT__myFFT_module__DOT__B11),22);
	vcdp->chgBus  (c+268,(vlTOPp->v__DOT__myFFT_module__DOT__B12),22);
	vcdp->chgBus  (c+269,(vlTOPp->v__DOT__myFFT_module__DOT__B13),22);
	vcdp->chgBus  (c+270,(vlTOPp->v__DOT__myFFT_module__DOT__B14),22);
	vcdp->chgBus  (c+271,(vlTOPp->v__DOT__myFFT_module__DOT__B15),22);
	vcdp->chgBus  (c+272,(vlTOPp->v__DOT__myFFT_module__DOT__B16),22);
	vcdp->chgBus  (c+273,(vlTOPp->v__DOT__myFFT_module__DOT__B17),22);
	vcdp->chgBus  (c+274,(vlTOPp->v__DOT__myFFT_module__DOT__B18),22);
	vcdp->chgBus  (c+275,(vlTOPp->v__DOT__myFFT_module__DOT__B19),22);
	vcdp->chgBus  (c+276,(vlTOPp->v__DOT__myFFT_module__DOT__B20),22);
	vcdp->chgBus  (c+277,(vlTOPp->v__DOT__myFFT_module__DOT__B21),22);
	vcdp->chgBus  (c+278,(vlTOPp->v__DOT__myFFT_module__DOT__B22),22);
	vcdp->chgBus  (c+279,(vlTOPp->v__DOT__myFFT_module__DOT__B23),22);
	vcdp->chgBus  (c+280,(vlTOPp->v__DOT__myFFT_module__DOT__B24),22);
	vcdp->chgBus  (c+281,(vlTOPp->v__DOT__myFFT_module__DOT__B25),22);
	vcdp->chgBus  (c+282,(vlTOPp->v__DOT__myFFT_module__DOT__B26),22);
	vcdp->chgBus  (c+283,(vlTOPp->v__DOT__myFFT_module__DOT__B27),22);
	vcdp->chgBus  (c+284,(vlTOPp->v__DOT__myFFT_module__DOT__B28),22);
	vcdp->chgBus  (c+285,(vlTOPp->v__DOT__myFFT_module__DOT__B29),22);
	vcdp->chgBus  (c+286,(vlTOPp->v__DOT__myFFT_module__DOT__B30),22);
	vcdp->chgBus  (c+287,(vlTOPp->v__DOT__myFFT_module__DOT__B31),22);
	vcdp->chgBus  (c+288,(vlTOPp->v__DOT__myFFT_module__DOT__B32),22);
	vcdp->chgBus  (c+289,(vlTOPp->v__DOT__myFFT_module__DOT__B33),22);
	vcdp->chgBus  (c+290,(vlTOPp->v__DOT__myFFT_module__DOT__B34),22);
	vcdp->chgBus  (c+291,(vlTOPp->v__DOT__myFFT_module__DOT__B35),22);
	vcdp->chgBus  (c+292,(vlTOPp->v__DOT__myFFT_module__DOT__B36),22);
	vcdp->chgBus  (c+293,(vlTOPp->v__DOT__myFFT_module__DOT__B37),22);
	vcdp->chgBus  (c+294,(vlTOPp->v__DOT__myFFT_module__DOT__B38),22);
	vcdp->chgBus  (c+295,(vlTOPp->v__DOT__myFFT_module__DOT__B39),22);
	vcdp->chgBus  (c+296,(vlTOPp->v__DOT__myFFT_module__DOT__B40),22);
	vcdp->chgBus  (c+297,(vlTOPp->v__DOT__myFFT_module__DOT__B41),22);
	vcdp->chgBus  (c+298,(vlTOPp->v__DOT__myFFT_module__DOT__B42),22);
	vcdp->chgBus  (c+299,(vlTOPp->v__DOT__myFFT_module__DOT__B43),22);
	vcdp->chgBus  (c+300,(vlTOPp->v__DOT__myFFT_module__DOT__B44),22);
	vcdp->chgBus  (c+301,(vlTOPp->v__DOT__myFFT_module__DOT__B45),22);
	vcdp->chgBus  (c+302,(vlTOPp->v__DOT__myFFT_module__DOT__B46),22);
	vcdp->chgBus  (c+303,(vlTOPp->v__DOT__myFFT_module__DOT__B47),22);
	vcdp->chgBus  (c+304,(vlTOPp->v__DOT__myFFT_module__DOT__B48),22);
	vcdp->chgBus  (c+305,(vlTOPp->v__DOT__myFFT_module__DOT__B49),22);
	vcdp->chgBus  (c+306,(vlTOPp->v__DOT__myFFT_module__DOT__B50),22);
	vcdp->chgBus  (c+307,(vlTOPp->v__DOT__myFFT_module__DOT__B51),22);
	vcdp->chgBus  (c+308,(vlTOPp->v__DOT__myFFT_module__DOT__B52),22);
	vcdp->chgBus  (c+309,(vlTOPp->v__DOT__myFFT_module__DOT__B53),22);
	vcdp->chgBus  (c+310,(vlTOPp->v__DOT__myFFT_module__DOT__B54),22);
	vcdp->chgBus  (c+311,(vlTOPp->v__DOT__myFFT_module__DOT__B55),22);
	vcdp->chgBus  (c+312,(vlTOPp->v__DOT__myFFT_module__DOT__B56),22);
	vcdp->chgBus  (c+313,(vlTOPp->v__DOT__myFFT_module__DOT__B57),22);
	vcdp->chgBus  (c+314,(vlTOPp->v__DOT__myFFT_module__DOT__B58),22);
	vcdp->chgBus  (c+315,(vlTOPp->v__DOT__myFFT_module__DOT__B59),22);
	vcdp->chgBus  (c+316,(vlTOPp->v__DOT__myFFT_module__DOT__B60),22);
	vcdp->chgBus  (c+317,(vlTOPp->v__DOT__myFFT_module__DOT__B61),22);
	vcdp->chgBus  (c+318,(vlTOPp->v__DOT__myFFT_module__DOT__B62),22);
	vcdp->chgBus  (c+319,(vlTOPp->v__DOT__myFFT_module__DOT__B63),22);
	vcdp->chgBus  (c+320,(vlTOPp->v__DOT__myFFT_module__DOT__C0),22);
	vcdp->chgBus  (c+321,(vlTOPp->v__DOT__myFFT_module__DOT__C1),22);
	vcdp->chgBus  (c+322,(vlTOPp->v__DOT__myFFT_module__DOT__C2),22);
	vcdp->chgBus  (c+323,(vlTOPp->v__DOT__myFFT_module__DOT__C3),22);
	vcdp->chgBus  (c+324,(vlTOPp->v__DOT__myFFT_module__DOT__C4),22);
	vcdp->chgBus  (c+325,(vlTOPp->v__DOT__myFFT_module__DOT__C5),22);
	vcdp->chgBus  (c+326,(vlTOPp->v__DOT__myFFT_module__DOT__C6),22);
	vcdp->chgBus  (c+327,(vlTOPp->v__DOT__myFFT_module__DOT__C7),22);
	vcdp->chgBus  (c+328,(vlTOPp->v__DOT__myFFT_module__DOT__C8),22);
	vcdp->chgBus  (c+329,(vlTOPp->v__DOT__myFFT_module__DOT__C9),22);
	vcdp->chgBus  (c+330,(vlTOPp->v__DOT__myFFT_module__DOT__C10),22);
	vcdp->chgBus  (c+331,(vlTOPp->v__DOT__myFFT_module__DOT__C11),22);
	vcdp->chgBus  (c+332,(vlTOPp->v__DOT__myFFT_module__DOT__C12),22);
	vcdp->chgBus  (c+333,(vlTOPp->v__DOT__myFFT_module__DOT__C13),22);
	vcdp->chgBus  (c+334,(vlTOPp->v__DOT__myFFT_module__DOT__C14),22);
	vcdp->chgBus  (c+335,(vlTOPp->v__DOT__myFFT_module__DOT__C15),22);
	vcdp->chgBus  (c+336,(vlTOPp->v__DOT__myFFT_module__DOT__C16),22);
	vcdp->chgBus  (c+337,(vlTOPp->v__DOT__myFFT_module__DOT__C17),22);
	vcdp->chgBus  (c+338,(vlTOPp->v__DOT__myFFT_module__DOT__C18),22);
	vcdp->chgBus  (c+339,(vlTOPp->v__DOT__myFFT_module__DOT__C19),22);
	vcdp->chgBus  (c+340,(vlTOPp->v__DOT__myFFT_module__DOT__C20),22);
	vcdp->chgBus  (c+341,(vlTOPp->v__DOT__myFFT_module__DOT__C21),22);
	vcdp->chgBus  (c+342,(vlTOPp->v__DOT__myFFT_module__DOT__C22),22);
	vcdp->chgBus  (c+343,(vlTOPp->v__DOT__myFFT_module__DOT__C23),22);
	vcdp->chgBus  (c+344,(vlTOPp->v__DOT__myFFT_module__DOT__C24),22);
	vcdp->chgBus  (c+345,(vlTOPp->v__DOT__myFFT_module__DOT__C25),22);
	vcdp->chgBus  (c+346,(vlTOPp->v__DOT__myFFT_module__DOT__C26),22);
	vcdp->chgBus  (c+347,(vlTOPp->v__DOT__myFFT_module__DOT__C27),22);
	vcdp->chgBus  (c+348,(vlTOPp->v__DOT__myFFT_module__DOT__C28),22);
	vcdp->chgBus  (c+349,(vlTOPp->v__DOT__myFFT_module__DOT__C29),22);
	vcdp->chgBus  (c+350,(vlTOPp->v__DOT__myFFT_module__DOT__C30),22);
	vcdp->chgBus  (c+351,(vlTOPp->v__DOT__myFFT_module__DOT__C31),22);
	vcdp->chgBus  (c+352,(vlTOPp->v__DOT__myFFT_module__DOT__C32),22);
	vcdp->chgBus  (c+353,(vlTOPp->v__DOT__myFFT_module__DOT__C33),22);
	vcdp->chgBus  (c+354,(vlTOPp->v__DOT__myFFT_module__DOT__C34),22);
	vcdp->chgBus  (c+355,(vlTOPp->v__DOT__myFFT_module__DOT__C35),22);
	vcdp->chgBus  (c+356,(vlTOPp->v__DOT__myFFT_module__DOT__C36),22);
	vcdp->chgBus  (c+357,(vlTOPp->v__DOT__myFFT_module__DOT__C37),22);
	vcdp->chgBus  (c+358,(vlTOPp->v__DOT__myFFT_module__DOT__C38),22);
	vcdp->chgBus  (c+359,(vlTOPp->v__DOT__myFFT_module__DOT__C39),22);
	vcdp->chgBus  (c+360,(vlTOPp->v__DOT__myFFT_module__DOT__C40),22);
	vcdp->chgBus  (c+361,(vlTOPp->v__DOT__myFFT_module__DOT__C41),22);
	vcdp->chgBus  (c+362,(vlTOPp->v__DOT__myFFT_module__DOT__C42),22);
	vcdp->chgBus  (c+363,(vlTOPp->v__DOT__myFFT_module__DOT__C43),22);
	vcdp->chgBus  (c+364,(vlTOPp->v__DOT__myFFT_module__DOT__C44),22);
	vcdp->chgBus  (c+365,(vlTOPp->v__DOT__myFFT_module__DOT__C45),22);
	vcdp->chgBus  (c+366,(vlTOPp->v__DOT__myFFT_module__DOT__C46),22);
	vcdp->chgBus  (c+367,(vlTOPp->v__DOT__myFFT_module__DOT__C47),22);
	vcdp->chgBus  (c+368,(vlTOPp->v__DOT__myFFT_module__DOT__C48),22);
	vcdp->chgBus  (c+369,(vlTOPp->v__DOT__myFFT_module__DOT__C49),22);
	vcdp->chgBus  (c+370,(vlTOPp->v__DOT__myFFT_module__DOT__C50),22);
	vcdp->chgBus  (c+371,(vlTOPp->v__DOT__myFFT_module__DOT__C51),22);
	vcdp->chgBus  (c+372,(vlTOPp->v__DOT__myFFT_module__DOT__C52),22);
	vcdp->chgBus  (c+373,(vlTOPp->v__DOT__myFFT_module__DOT__C53),22);
	vcdp->chgBus  (c+374,(vlTOPp->v__DOT__myFFT_module__DOT__C54),22);
	vcdp->chgBus  (c+375,(vlTOPp->v__DOT__myFFT_module__DOT__C55),22);
	vcdp->chgBus  (c+376,(vlTOPp->v__DOT__myFFT_module__DOT__C56),22);
	vcdp->chgBus  (c+377,(vlTOPp->v__DOT__myFFT_module__DOT__C57),22);
	vcdp->chgBus  (c+378,(vlTOPp->v__DOT__myFFT_module__DOT__C58),22);
	vcdp->chgBus  (c+379,(vlTOPp->v__DOT__myFFT_module__DOT__C59),22);
	vcdp->chgBus  (c+380,(vlTOPp->v__DOT__myFFT_module__DOT__C60),22);
	vcdp->chgBus  (c+381,(vlTOPp->v__DOT__myFFT_module__DOT__C61),22);
	vcdp->chgBus  (c+382,(vlTOPp->v__DOT__myFFT_module__DOT__C62),22);
	vcdp->chgBus  (c+383,(vlTOPp->v__DOT__myFFT_module__DOT__C63),22);
	vcdp->chgBus  (c+393,(vlTOPp->v__DOT__myFFT_module__DOT__stage),4);
	vcdp->chgBit  (c+394,(vlTOPp->v__DOT__myFFT_module__DOT__stage_1_start_flg));
	vcdp->chgBit  (c+395,(vlTOPp->v__DOT__myFFT_module__DOT__stage_2_start_flg));
	vcdp->chgBit  (c+396,(vlTOPp->v__DOT__myFFT_module__DOT__stage_3_start_flg));
	vcdp->chgBit  (c+397,(vlTOPp->v__DOT__myFFT_module__DOT__stage_4_start_flg));
	vcdp->chgBit  (c+398,(vlTOPp->v__DOT__myFFT_module__DOT__stage_5_start_flg));
	vcdp->chgBus  (c+411,(vlTOPp->v__DOT__myFFT_module__DOT__cnt),7);
	vcdp->chgBus  (c+412,(vlTOPp->v__DOT__myFFT_module__DOT__cnt2),7);
	vcdp->chgBus  (c+413,(vlTOPp->v__DOT__myFFT_module__DOT__cnt3),7);
	vcdp->chgBit  (c+414,(vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly));
	vcdp->chgBit  (c+415,(vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg));
	vcdp->chgBit  (c+416,(vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_2));
	vcdp->chgBit  (c+417,(vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_2));
	vcdp->chgBit  (c+418,(vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly_3));
	vcdp->chgBit  (c+419,(vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg_3));
	vcdp->chgBus  (c+420,(vlTOPp->v__DOT__myFFT_module__DOT__k1),7);
	vcdp->chgBus  (c+421,(vlTOPp->v__DOT__myFFT_module__DOT__k2),7);
	vcdp->chgBus  (c+422,(vlTOPp->v__DOT__myFFT_module__DOT__k3),7);
	vcdp->chgBit  (c+423,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.valid_o));
	vcdp->chgBit  (c+424,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.valid_o));
	vcdp->chgBit  (c+425,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.valid_o));
	vcdp->chgBus  (c+426,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__cnt),4);
	vcdp->chgBus  (c+427,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
					>> 0xb))),11);
	vcdp->chgBus  (c+428,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN0)),11);
	vcdp->chgBus  (c+429,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
					>> 0xb))),11);
	vcdp->chgBus  (c+430,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN2)),11);
	vcdp->chgBus  (c+431,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
					 >> 0xb) + 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+432,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
					+ vlTOPp->v__DOT__myFFT_module__DOT__AIN2))),11);
	vcdp->chgBus  (c+433,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
					>> 0xb))),11);
	vcdp->chgBus  (c+434,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN1)),11);
	vcdp->chgBus  (c+435,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
					>> 0xb))),11);
	vcdp->chgBus  (c+436,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN3)),11);
	vcdp->chgBus  (c+437,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
					 >> 0xb) + 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+438,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
					+ vlTOPp->v__DOT__myFFT_module__DOT__AIN3))),11);
	vcdp->chgBus  (c+399,(vlTOPp->v__DOT__myFFT_module__DOT__AIN0),22);
	vcdp->chgBus  (c+401,(vlTOPp->v__DOT__myFFT_module__DOT__AIN2),22);
	vcdp->chgBus  (c+439,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
					 >> 0xb) - 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+440,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
					- vlTOPp->v__DOT__myFFT_module__DOT__AIN2))),11);
	vcdp->chgBus  (c+400,(vlTOPp->v__DOT__myFFT_module__DOT__AIN1),22);
	vcdp->chgBus  (c+402,(vlTOPp->v__DOT__myFFT_module__DOT__AIN3),22);
	vcdp->chgBus  (c+441,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
					 >> 0xb) - 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+442,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
					- vlTOPp->v__DOT__myFFT_module__DOT__AIN3))),11);
	vcdp->chgBus  (c+384,((((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR) 
				<< 0xb) | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI))),22);
	vcdp->chgBus  (c+443,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR),11);
	vcdp->chgBus  (c+444,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI),11);
	vcdp->chgQuad (c+445,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR1),45);
	vcdp->chgQuad (c+447,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YR2),45);
	vcdp->chgQuad (c+449,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI1),45);
	vcdp->chgQuad (c+451,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u10__DOT__YI2),45);
	vcdp->chgBus  (c+385,((((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR) 
				<< 0xb) | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI))),22);
	vcdp->chgBus  (c+453,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR),11);
	vcdp->chgBus  (c+454,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI),11);
	vcdp->chgQuad (c+455,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR1),45);
	vcdp->chgQuad (c+457,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YR2),45);
	vcdp->chgQuad (c+459,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI1),45);
	vcdp->chgQuad (c+461,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u11__DOT__YI2),45);
	vcdp->chgBus  (c+386,((((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR) 
				<< 0xb) | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI))),22);
	vcdp->chgBus  (c+463,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR),11);
	vcdp->chgBus  (c+464,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI),11);
	vcdp->chgQuad (c+465,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR1),45);
	vcdp->chgQuad (c+467,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YR2),45);
	vcdp->chgQuad (c+469,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI1),45);
	vcdp->chgQuad (c+471,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__PVT__u12__DOT__YI2),45);
	vcdp->chgBus  (c+473,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__cnt),4);
	vcdp->chgBus  (c+474,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
					>> 0xb))),11);
	vcdp->chgBus  (c+475,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN4)),11);
	vcdp->chgBus  (c+476,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
					>> 0xb))),11);
	vcdp->chgBus  (c+477,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN6)),11);
	vcdp->chgBus  (c+478,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
					 >> 0xb) + 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+479,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
					+ vlTOPp->v__DOT__myFFT_module__DOT__AIN6))),11);
	vcdp->chgBus  (c+480,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
					>> 0xb))),11);
	vcdp->chgBus  (c+481,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN5)),11);
	vcdp->chgBus  (c+482,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
					>> 0xb))),11);
	vcdp->chgBus  (c+483,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN7)),11);
	vcdp->chgBus  (c+484,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
					 >> 0xb) + 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+485,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
					+ vlTOPp->v__DOT__myFFT_module__DOT__AIN7))),11);
	vcdp->chgBus  (c+403,(vlTOPp->v__DOT__myFFT_module__DOT__AIN4),22);
	vcdp->chgBus  (c+405,(vlTOPp->v__DOT__myFFT_module__DOT__AIN6),22);
	vcdp->chgBus  (c+486,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
					 >> 0xb) - 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN6 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+487,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN4 
					- vlTOPp->v__DOT__myFFT_module__DOT__AIN6))),11);
	vcdp->chgBus  (c+404,(vlTOPp->v__DOT__myFFT_module__DOT__AIN5),22);
	vcdp->chgBus  (c+406,(vlTOPp->v__DOT__myFFT_module__DOT__AIN7),22);
	vcdp->chgBus  (c+488,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
					 >> 0xb) - 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN7 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+489,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN5 
					- vlTOPp->v__DOT__myFFT_module__DOT__AIN7))),11);
	vcdp->chgBus  (c+387,((((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR) 
				<< 0xb) | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI))),22);
	vcdp->chgBus  (c+490,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR),11);
	vcdp->chgBus  (c+491,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI),11);
	vcdp->chgQuad (c+492,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR1),45);
	vcdp->chgQuad (c+494,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YR2),45);
	vcdp->chgQuad (c+496,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI1),45);
	vcdp->chgQuad (c+498,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u10__DOT__YI2),45);
	vcdp->chgBus  (c+388,((((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR) 
				<< 0xb) | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI))),22);
	vcdp->chgBus  (c+500,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR),11);
	vcdp->chgBus  (c+501,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI),11);
	vcdp->chgQuad (c+502,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR1),45);
	vcdp->chgQuad (c+504,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YR2),45);
	vcdp->chgQuad (c+506,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI1),45);
	vcdp->chgQuad (c+508,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u11__DOT__YI2),45);
	vcdp->chgBus  (c+389,((((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR) 
				<< 0xb) | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI))),22);
	vcdp->chgBus  (c+510,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR),11);
	vcdp->chgBus  (c+511,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI),11);
	vcdp->chgQuad (c+512,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR1),45);
	vcdp->chgQuad (c+514,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YR2),45);
	vcdp->chgQuad (c+516,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI1),45);
	vcdp->chgQuad (c+518,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__PVT__u12__DOT__YI2),45);
	vcdp->chgBus  (c+520,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__cnt),4);
	vcdp->chgBus  (c+521,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
					>> 0xb))),11);
	vcdp->chgBus  (c+522,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN8)),11);
	vcdp->chgBus  (c+523,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
					>> 0xb))),11);
	vcdp->chgBus  (c+524,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN10)),11);
	vcdp->chgBus  (c+525,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
					 >> 0xb) + 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+526,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
					+ vlTOPp->v__DOT__myFFT_module__DOT__AIN10))),11);
	vcdp->chgBus  (c+527,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
					>> 0xb))),11);
	vcdp->chgBus  (c+528,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN9)),11);
	vcdp->chgBus  (c+529,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
					>> 0xb))),11);
	vcdp->chgBus  (c+530,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN11)),11);
	vcdp->chgBus  (c+531,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
					 >> 0xb) + 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+532,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
					+ vlTOPp->v__DOT__myFFT_module__DOT__AIN11))),11);
	vcdp->chgBus  (c+407,(vlTOPp->v__DOT__myFFT_module__DOT__AIN8),22);
	vcdp->chgBus  (c+409,(vlTOPp->v__DOT__myFFT_module__DOT__AIN10),22);
	vcdp->chgBus  (c+533,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
					 >> 0xb) - 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+534,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
					- vlTOPp->v__DOT__myFFT_module__DOT__AIN10))),11);
	vcdp->chgBus  (c+408,(vlTOPp->v__DOT__myFFT_module__DOT__AIN9),22);
	vcdp->chgBus  (c+410,(vlTOPp->v__DOT__myFFT_module__DOT__AIN11),22);
	vcdp->chgBus  (c+535,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
					 >> 0xb) - 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+536,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
					- vlTOPp->v__DOT__myFFT_module__DOT__AIN11))),11);
	vcdp->chgBus  (c+390,((((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR) 
				<< 0xb) | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI))),22);
	vcdp->chgBus  (c+537,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR),11);
	vcdp->chgBus  (c+538,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI),11);
	vcdp->chgQuad (c+539,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR1),45);
	vcdp->chgQuad (c+541,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YR2),45);
	vcdp->chgQuad (c+543,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI1),45);
	vcdp->chgQuad (c+545,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u10__DOT__YI2),45);
	vcdp->chgBus  (c+391,((((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR) 
				<< 0xb) | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI))),22);
	vcdp->chgBus  (c+547,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR),11);
	vcdp->chgBus  (c+548,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI),11);
	vcdp->chgQuad (c+549,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR1),45);
	vcdp->chgQuad (c+551,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YR2),45);
	vcdp->chgQuad (c+553,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI1),45);
	vcdp->chgQuad (c+555,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u11__DOT__YI2),45);
	vcdp->chgBus  (c+392,((((IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR) 
				<< 0xb) | (IData)(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI))),22);
	vcdp->chgBus  (c+557,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR),11);
	vcdp->chgBus  (c+558,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI),11);
	vcdp->chgQuad (c+559,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR1),45);
	vcdp->chgQuad (c+561,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YR2),45);
	vcdp->chgQuad (c+563,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI1),45);
	vcdp->chgQuad (c+565,(vlSymsp->TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__PVT__u12__DOT__YI2),45);
    }
}

void Vcomplex_add::traceChgThis__4(Vcomplex_add__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcomplex_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+569,(vlTOPp->valid_a));
	vcdp->chgBus  (c+570,(vlTOPp->ar),11);
	vcdp->chgBus  (c+571,(vlTOPp->ai),11);
	vcdp->chgBit  (c+572,(vlTOPp->valid_o));
	vcdp->chgBit  (c+573,(vlTOPp->rd_en));
	vcdp->chgBit  (c+574,(vlTOPp->full));
	vcdp->chgBus  (c+575,(vlTOPp->xr),11);
	vcdp->chgBus  (c+576,(vlTOPp->xi),11);
	vcdp->chgBit  (c+567,(vlTOPp->CLK));
	vcdp->chgBit  (c+568,(vlTOPp->RST));
    }
}
