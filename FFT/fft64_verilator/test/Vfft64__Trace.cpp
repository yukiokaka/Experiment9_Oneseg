// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfft64__Syms.h"


//======================

void Vfft64::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vfft64* t=(Vfft64*)userthis;
    Vfft64__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vfft64::traceChgThis(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vfft64::traceChgThis__2(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+17,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W1KR),17);
	vcdp->chgBus  (c+18,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W1KI),17);
	vcdp->chgBus  (c+19,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W2KR),17);
	vcdp->chgBus  (c+20,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W2KI),17);
	vcdp->chgBus  (c+21,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W3KR),17);
	vcdp->chgBus  (c+22,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__W3KI),17);
	vcdp->chgBus  (c+12,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3),22);
	vcdp->chgBus  (c+23,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3 
				       >> 0xb))),11);
	vcdp->chgBus  (c+24,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3)),11);
	vcdp->chgBus  (c+25,((0x7ff & VL_NEGATE_I(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3))),11);
	vcdp->chgBus  (c+1,(((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B0 
					    >> 0xb) 
					   + (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B1 
					      >> 0xb)) 
					  << 0xb)) 
			     | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B0 
					 + vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B1)))),22);
	vcdp->chgBus  (c+26,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B0 
				       >> 0xb))),11);
	vcdp->chgBus  (c+27,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B0)),11);
	vcdp->chgBus  (c+28,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B1 
				       >> 0xb))),11);
	vcdp->chgBus  (c+29,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B1)),11);
	vcdp->chgBus  (c+30,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B0 
					>> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B1 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+31,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B0 
				       + vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B1))),11);
	vcdp->chgBus  (c+32,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B2 
				       >> 0xb))),11);
	vcdp->chgBus  (c+33,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B2)),11);
	vcdp->chgBus  (c+34,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3J 
				       >> 0xb))),11);
	vcdp->chgBus  (c+35,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3J)),11);
	vcdp->chgBus  (c+36,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B2 
					>> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3J 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+37,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B2 
				       - vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3J))),11);
	vcdp->chgBus  (c+9,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B0),22);
	vcdp->chgBus  (c+10,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B1),22);
	vcdp->chgBus  (c+38,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B0 
					>> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B1 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+39,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B0 
				       - vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B1))),11);
	vcdp->chgBus  (c+11,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B2),22);
	vcdp->chgBus  (c+13,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3J),22);
	vcdp->chgBus  (c+40,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B2 
					>> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3J 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+41,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B2 
				       + vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__B3J))),11);
	vcdp->chgBus  (c+14,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C1),22);
	vcdp->chgBus  (c+2,(vlTOPp->v__DOT__myFFT_module__DOT__Y1),22);
	vcdp->chgBus  (c+42,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C1 
				       >> 0xb))),11);
	vcdp->chgBus  (c+43,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C1)),11);
	vcdp->chgBus  (c+15,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C2),22);
	vcdp->chgBus  (c+3,(vlTOPp->v__DOT__myFFT_module__DOT__Y2),22);
	vcdp->chgBus  (c+44,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C2 
				       >> 0xb))),11);
	vcdp->chgBus  (c+45,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C2)),11);
	vcdp->chgBus  (c+16,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C3),22);
	vcdp->chgBus  (c+4,(vlTOPp->v__DOT__myFFT_module__DOT__Y3),22);
	vcdp->chgBus  (c+46,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C3 
				       >> 0xb))),11);
	vcdp->chgBus  (c+47,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__C3)),11);
	vcdp->chgBus  (c+56,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W1KR),17);
	vcdp->chgBus  (c+57,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W1KI),17);
	vcdp->chgBus  (c+58,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W2KR),17);
	vcdp->chgBus  (c+59,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W2KI),17);
	vcdp->chgBus  (c+60,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W3KR),17);
	vcdp->chgBus  (c+61,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__W3KI),17);
	vcdp->chgBus  (c+51,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3),22);
	vcdp->chgBus  (c+62,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3 
				       >> 0xb))),11);
	vcdp->chgBus  (c+63,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3)),11);
	vcdp->chgBus  (c+64,((0x7ff & VL_NEGATE_I(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3))),11);
	vcdp->chgBus  (c+5,(((0x3ff800 & (((vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B0 
					    >> 0xb) 
					   + (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B1 
					      >> 0xb)) 
					  << 0xb)) 
			     | (0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B0 
					 + vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B1)))),22);
	vcdp->chgBus  (c+65,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B0 
				       >> 0xb))),11);
	vcdp->chgBus  (c+66,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B0)),11);
	vcdp->chgBus  (c+67,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B1 
				       >> 0xb))),11);
	vcdp->chgBus  (c+68,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B1)),11);
	vcdp->chgBus  (c+69,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B0 
					>> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B1 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+70,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B0 
				       + vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B1))),11);
	vcdp->chgBus  (c+71,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B2 
				       >> 0xb))),11);
	vcdp->chgBus  (c+72,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B2)),11);
	vcdp->chgBus  (c+73,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3J 
				       >> 0xb))),11);
	vcdp->chgBus  (c+74,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3J)),11);
	vcdp->chgBus  (c+75,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B2 
					>> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3J 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+76,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B2 
				       - vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3J))),11);
	vcdp->chgBus  (c+48,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B0),22);
	vcdp->chgBus  (c+49,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B1),22);
	vcdp->chgBus  (c+77,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B0 
					>> 0xb) - (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B1 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+78,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B0 
				       - vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B1))),11);
	vcdp->chgBus  (c+50,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B2),22);
	vcdp->chgBus  (c+52,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3J),22);
	vcdp->chgBus  (c+79,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B2 
					>> 0xb) + (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3J 
						   >> 0xb)))),11);
	vcdp->chgBus  (c+80,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B2 
				       + vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__B3J))),11);
	vcdp->chgBus  (c+53,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C1),22);
	vcdp->chgBus  (c+6,(vlTOPp->v__DOT__myFFT_module__DOT__Y9),22);
	vcdp->chgBus  (c+81,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C1 
				       >> 0xb))),11);
	vcdp->chgBus  (c+82,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C1)),11);
	vcdp->chgBus  (c+54,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C2),22);
	vcdp->chgBus  (c+7,(vlTOPp->v__DOT__myFFT_module__DOT__Y10),22);
	vcdp->chgBus  (c+83,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C2 
				       >> 0xb))),11);
	vcdp->chgBus  (c+84,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C2)),11);
	vcdp->chgBus  (c+55,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C3),22);
	vcdp->chgBus  (c+8,(vlTOPp->v__DOT__myFFT_module__DOT__Y11),22);
	vcdp->chgBus  (c+85,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C3 
				       >> 0xb))),11);
	vcdp->chgBus  (c+86,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__C3)),11);
    }
}

void Vfft64::traceChgThis__3(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+87,(vlTOPp->v__DOT__cnt),7);
	vcdp->chgBus  (c+88,(vlTOPp->v__DOT__cnt_o),7);
	vcdp->chgBus  (c+89,(vlTOPp->v__DOT__A0),22);
	vcdp->chgBus  (c+90,(vlTOPp->v__DOT__A1),22);
	vcdp->chgBus  (c+91,(vlTOPp->v__DOT__A2),22);
	vcdp->chgBus  (c+92,(vlTOPp->v__DOT__A3),22);
	vcdp->chgBus  (c+93,(vlTOPp->v__DOT__A4),22);
	vcdp->chgBus  (c+94,(vlTOPp->v__DOT__A5),22);
	vcdp->chgBus  (c+95,(vlTOPp->v__DOT__A6),22);
	vcdp->chgBus  (c+96,(vlTOPp->v__DOT__A7),22);
	vcdp->chgBus  (c+97,(vlTOPp->v__DOT__A8),22);
	vcdp->chgBus  (c+98,(vlTOPp->v__DOT__A9),22);
	vcdp->chgBus  (c+99,(vlTOPp->v__DOT__A10),22);
	vcdp->chgBus  (c+100,(vlTOPp->v__DOT__A11),22);
	vcdp->chgBus  (c+101,(vlTOPp->v__DOT__A12),22);
	vcdp->chgBus  (c+102,(vlTOPp->v__DOT__A13),22);
	vcdp->chgBus  (c+103,(vlTOPp->v__DOT__A14),22);
	vcdp->chgBus  (c+104,(vlTOPp->v__DOT__A15),22);
	vcdp->chgBus  (c+105,(vlTOPp->v__DOT__A16),22);
	vcdp->chgBus  (c+106,(vlTOPp->v__DOT__A17),22);
	vcdp->chgBus  (c+107,(vlTOPp->v__DOT__A18),22);
	vcdp->chgBus  (c+108,(vlTOPp->v__DOT__A19),22);
	vcdp->chgBus  (c+109,(vlTOPp->v__DOT__A20),22);
	vcdp->chgBus  (c+110,(vlTOPp->v__DOT__A21),22);
	vcdp->chgBus  (c+111,(vlTOPp->v__DOT__A22),22);
	vcdp->chgBus  (c+112,(vlTOPp->v__DOT__A23),22);
	vcdp->chgBus  (c+113,(vlTOPp->v__DOT__A24),22);
	vcdp->chgBus  (c+114,(vlTOPp->v__DOT__A25),22);
	vcdp->chgBus  (c+115,(vlTOPp->v__DOT__A26),22);
	vcdp->chgBus  (c+116,(vlTOPp->v__DOT__A27),22);
	vcdp->chgBus  (c+117,(vlTOPp->v__DOT__A28),22);
	vcdp->chgBus  (c+118,(vlTOPp->v__DOT__A29),22);
	vcdp->chgBus  (c+119,(vlTOPp->v__DOT__A30),22);
	vcdp->chgBus  (c+120,(vlTOPp->v__DOT__A31),22);
	vcdp->chgBus  (c+121,(vlTOPp->v__DOT__A32),22);
	vcdp->chgBus  (c+122,(vlTOPp->v__DOT__A33),22);
	vcdp->chgBus  (c+123,(vlTOPp->v__DOT__A34),22);
	vcdp->chgBus  (c+124,(vlTOPp->v__DOT__A35),22);
	vcdp->chgBus  (c+125,(vlTOPp->v__DOT__A36),22);
	vcdp->chgBus  (c+126,(vlTOPp->v__DOT__A37),22);
	vcdp->chgBus  (c+127,(vlTOPp->v__DOT__A38),22);
	vcdp->chgBus  (c+128,(vlTOPp->v__DOT__A39),22);
	vcdp->chgBus  (c+129,(vlTOPp->v__DOT__A40),22);
	vcdp->chgBus  (c+130,(vlTOPp->v__DOT__A41),22);
	vcdp->chgBus  (c+131,(vlTOPp->v__DOT__A42),22);
	vcdp->chgBus  (c+132,(vlTOPp->v__DOT__A43),22);
	vcdp->chgBus  (c+133,(vlTOPp->v__DOT__A44),22);
	vcdp->chgBus  (c+134,(vlTOPp->v__DOT__A45),22);
	vcdp->chgBus  (c+135,(vlTOPp->v__DOT__A46),22);
	vcdp->chgBus  (c+136,(vlTOPp->v__DOT__A47),22);
	vcdp->chgBus  (c+137,(vlTOPp->v__DOT__A48),22);
	vcdp->chgBus  (c+138,(vlTOPp->v__DOT__A49),22);
	vcdp->chgBus  (c+139,(vlTOPp->v__DOT__A50),22);
	vcdp->chgBus  (c+140,(vlTOPp->v__DOT__A51),22);
	vcdp->chgBus  (c+141,(vlTOPp->v__DOT__A52),22);
	vcdp->chgBus  (c+142,(vlTOPp->v__DOT__A53),22);
	vcdp->chgBus  (c+143,(vlTOPp->v__DOT__A54),22);
	vcdp->chgBus  (c+144,(vlTOPp->v__DOT__A55),22);
	vcdp->chgBus  (c+145,(vlTOPp->v__DOT__A56),22);
	vcdp->chgBus  (c+146,(vlTOPp->v__DOT__A57),22);
	vcdp->chgBus  (c+147,(vlTOPp->v__DOT__A58),22);
	vcdp->chgBus  (c+148,(vlTOPp->v__DOT__A59),22);
	vcdp->chgBus  (c+149,(vlTOPp->v__DOT__A60),22);
	vcdp->chgBus  (c+150,(vlTOPp->v__DOT__A61),22);
	vcdp->chgBus  (c+151,(vlTOPp->v__DOT__A62),22);
	vcdp->chgBus  (c+152,(vlTOPp->v__DOT__A63),22);
	vcdp->chgBus  (c+153,(vlTOPp->v__DOT__Y0),22);
	vcdp->chgBus  (c+154,(vlTOPp->v__DOT__Y1),22);
	vcdp->chgBus  (c+155,(vlTOPp->v__DOT__Y2),22);
	vcdp->chgBus  (c+156,(vlTOPp->v__DOT__Y3),22);
	vcdp->chgBus  (c+157,(vlTOPp->v__DOT__Y4),22);
	vcdp->chgBus  (c+158,(vlTOPp->v__DOT__Y5),22);
	vcdp->chgBus  (c+159,(vlTOPp->v__DOT__Y6),22);
	vcdp->chgBus  (c+160,(vlTOPp->v__DOT__Y7),22);
	vcdp->chgBus  (c+161,(vlTOPp->v__DOT__Y8),22);
	vcdp->chgBus  (c+162,(vlTOPp->v__DOT__Y9),22);
	vcdp->chgBus  (c+163,(vlTOPp->v__DOT__Y10),22);
	vcdp->chgBus  (c+164,(vlTOPp->v__DOT__Y11),22);
	vcdp->chgBus  (c+165,(vlTOPp->v__DOT__Y12),22);
	vcdp->chgBus  (c+166,(vlTOPp->v__DOT__Y13),22);
	vcdp->chgBus  (c+167,(vlTOPp->v__DOT__Y14),22);
	vcdp->chgBus  (c+168,(vlTOPp->v__DOT__Y15),22);
	vcdp->chgBus  (c+169,(vlTOPp->v__DOT__Y16),22);
	vcdp->chgBus  (c+170,(vlTOPp->v__DOT__Y17),22);
	vcdp->chgBus  (c+171,(vlTOPp->v__DOT__Y18),22);
	vcdp->chgBus  (c+172,(vlTOPp->v__DOT__Y19),22);
	vcdp->chgBus  (c+173,(vlTOPp->v__DOT__Y20),22);
	vcdp->chgBus  (c+174,(vlTOPp->v__DOT__Y21),22);
	vcdp->chgBus  (c+175,(vlTOPp->v__DOT__Y22),22);
	vcdp->chgBus  (c+176,(vlTOPp->v__DOT__Y23),22);
	vcdp->chgBus  (c+177,(vlTOPp->v__DOT__Y24),22);
	vcdp->chgBus  (c+178,(vlTOPp->v__DOT__Y25),22);
	vcdp->chgBus  (c+179,(vlTOPp->v__DOT__Y26),22);
	vcdp->chgBus  (c+180,(vlTOPp->v__DOT__Y27),22);
	vcdp->chgBus  (c+181,(vlTOPp->v__DOT__Y28),22);
	vcdp->chgBus  (c+182,(vlTOPp->v__DOT__Y29),22);
	vcdp->chgBus  (c+183,(vlTOPp->v__DOT__Y30),22);
	vcdp->chgBus  (c+184,(vlTOPp->v__DOT__Y31),22);
	vcdp->chgBus  (c+185,(vlTOPp->v__DOT__Y32),22);
	vcdp->chgBus  (c+186,(vlTOPp->v__DOT__Y33),22);
	vcdp->chgBus  (c+187,(vlTOPp->v__DOT__Y34),22);
	vcdp->chgBus  (c+188,(vlTOPp->v__DOT__Y35),22);
	vcdp->chgBus  (c+189,(vlTOPp->v__DOT__Y36),22);
	vcdp->chgBus  (c+190,(vlTOPp->v__DOT__Y37),22);
	vcdp->chgBus  (c+191,(vlTOPp->v__DOT__Y38),22);
	vcdp->chgBus  (c+192,(vlTOPp->v__DOT__Y39),22);
	vcdp->chgBus  (c+193,(vlTOPp->v__DOT__Y40),22);
	vcdp->chgBus  (c+194,(vlTOPp->v__DOT__Y41),22);
	vcdp->chgBus  (c+195,(vlTOPp->v__DOT__Y42),22);
	vcdp->chgBus  (c+196,(vlTOPp->v__DOT__Y43),22);
	vcdp->chgBus  (c+197,(vlTOPp->v__DOT__Y44),22);
	vcdp->chgBus  (c+198,(vlTOPp->v__DOT__Y45),22);
	vcdp->chgBus  (c+199,(vlTOPp->v__DOT__Y46),22);
	vcdp->chgBus  (c+200,(vlTOPp->v__DOT__Y47),22);
	vcdp->chgBus  (c+201,(vlTOPp->v__DOT__Y48),22);
	vcdp->chgBus  (c+202,(vlTOPp->v__DOT__Y49),22);
	vcdp->chgBus  (c+203,(vlTOPp->v__DOT__Y50),22);
	vcdp->chgBus  (c+204,(vlTOPp->v__DOT__Y51),22);
	vcdp->chgBus  (c+205,(vlTOPp->v__DOT__Y52),22);
	vcdp->chgBus  (c+206,(vlTOPp->v__DOT__Y53),22);
	vcdp->chgBus  (c+207,(vlTOPp->v__DOT__Y54),22);
	vcdp->chgBus  (c+208,(vlTOPp->v__DOT__Y55),22);
	vcdp->chgBus  (c+209,(vlTOPp->v__DOT__Y56),22);
	vcdp->chgBus  (c+210,(vlTOPp->v__DOT__Y57),22);
	vcdp->chgBus  (c+211,(vlTOPp->v__DOT__Y58),22);
	vcdp->chgBus  (c+212,(vlTOPp->v__DOT__Y59),22);
	vcdp->chgBus  (c+213,(vlTOPp->v__DOT__Y60),22);
	vcdp->chgBus  (c+214,(vlTOPp->v__DOT__Y61),22);
	vcdp->chgBus  (c+215,(vlTOPp->v__DOT__Y62),22);
	vcdp->chgBus  (c+216,(vlTOPp->v__DOT__Y63),22);
	vcdp->chgBit  (c+217,(vlTOPp->v__DOT__start));
	vcdp->chgBit  (c+218,(vlTOPp->v__DOT__start_fft_flg));
	vcdp->chgBit  (c+219,(vlTOPp->v__DOT__fin_fft_flg));
	vcdp->chgBit  (c+220,(vlTOPp->v__DOT__valid_o_from_myFFT));
	vcdp->chgBit  (c+221,(vlTOPp->v__DOT__fft_culculating_flg));
	vcdp->chgBus  (c+222,(vlTOPp->v__DOT__myFFT_module__DOT__B0),22);
	vcdp->chgBus  (c+223,(vlTOPp->v__DOT__myFFT_module__DOT__B1),22);
	vcdp->chgBus  (c+224,(vlTOPp->v__DOT__myFFT_module__DOT__B2),22);
	vcdp->chgBus  (c+225,(vlTOPp->v__DOT__myFFT_module__DOT__B3),22);
	vcdp->chgBus  (c+226,(vlTOPp->v__DOT__myFFT_module__DOT__B4),22);
	vcdp->chgBus  (c+227,(vlTOPp->v__DOT__myFFT_module__DOT__B5),22);
	vcdp->chgBus  (c+228,(vlTOPp->v__DOT__myFFT_module__DOT__B6),22);
	vcdp->chgBus  (c+229,(vlTOPp->v__DOT__myFFT_module__DOT__B7),22);
	vcdp->chgBus  (c+230,(vlTOPp->v__DOT__myFFT_module__DOT__B8),22);
	vcdp->chgBus  (c+231,(vlTOPp->v__DOT__myFFT_module__DOT__B9),22);
	vcdp->chgBus  (c+232,(vlTOPp->v__DOT__myFFT_module__DOT__B10),22);
	vcdp->chgBus  (c+233,(vlTOPp->v__DOT__myFFT_module__DOT__B11),22);
	vcdp->chgBus  (c+234,(vlTOPp->v__DOT__myFFT_module__DOT__B12),22);
	vcdp->chgBus  (c+235,(vlTOPp->v__DOT__myFFT_module__DOT__B13),22);
	vcdp->chgBus  (c+236,(vlTOPp->v__DOT__myFFT_module__DOT__B14),22);
	vcdp->chgBus  (c+237,(vlTOPp->v__DOT__myFFT_module__DOT__B15),22);
	vcdp->chgBus  (c+238,(vlTOPp->v__DOT__myFFT_module__DOT__B16),22);
	vcdp->chgBus  (c+239,(vlTOPp->v__DOT__myFFT_module__DOT__B17),22);
	vcdp->chgBus  (c+240,(vlTOPp->v__DOT__myFFT_module__DOT__B18),22);
	vcdp->chgBus  (c+241,(vlTOPp->v__DOT__myFFT_module__DOT__B19),22);
	vcdp->chgBus  (c+242,(vlTOPp->v__DOT__myFFT_module__DOT__B20),22);
	vcdp->chgBus  (c+243,(vlTOPp->v__DOT__myFFT_module__DOT__B21),22);
	vcdp->chgBus  (c+244,(vlTOPp->v__DOT__myFFT_module__DOT__B22),22);
	vcdp->chgBus  (c+245,(vlTOPp->v__DOT__myFFT_module__DOT__B23),22);
	vcdp->chgBus  (c+246,(vlTOPp->v__DOT__myFFT_module__DOT__B24),22);
	vcdp->chgBus  (c+247,(vlTOPp->v__DOT__myFFT_module__DOT__B25),22);
	vcdp->chgBus  (c+248,(vlTOPp->v__DOT__myFFT_module__DOT__B26),22);
	vcdp->chgBus  (c+249,(vlTOPp->v__DOT__myFFT_module__DOT__B27),22);
	vcdp->chgBus  (c+250,(vlTOPp->v__DOT__myFFT_module__DOT__B28),22);
	vcdp->chgBus  (c+251,(vlTOPp->v__DOT__myFFT_module__DOT__B29),22);
	vcdp->chgBus  (c+252,(vlTOPp->v__DOT__myFFT_module__DOT__B30),22);
	vcdp->chgBus  (c+253,(vlTOPp->v__DOT__myFFT_module__DOT__B31),22);
	vcdp->chgBus  (c+254,(vlTOPp->v__DOT__myFFT_module__DOT__B32),22);
	vcdp->chgBus  (c+255,(vlTOPp->v__DOT__myFFT_module__DOT__B33),22);
	vcdp->chgBus  (c+256,(vlTOPp->v__DOT__myFFT_module__DOT__B34),22);
	vcdp->chgBus  (c+257,(vlTOPp->v__DOT__myFFT_module__DOT__B35),22);
	vcdp->chgBus  (c+258,(vlTOPp->v__DOT__myFFT_module__DOT__B36),22);
	vcdp->chgBus  (c+259,(vlTOPp->v__DOT__myFFT_module__DOT__B37),22);
	vcdp->chgBus  (c+260,(vlTOPp->v__DOT__myFFT_module__DOT__B38),22);
	vcdp->chgBus  (c+261,(vlTOPp->v__DOT__myFFT_module__DOT__B39),22);
	vcdp->chgBus  (c+262,(vlTOPp->v__DOT__myFFT_module__DOT__B40),22);
	vcdp->chgBus  (c+263,(vlTOPp->v__DOT__myFFT_module__DOT__B41),22);
	vcdp->chgBus  (c+264,(vlTOPp->v__DOT__myFFT_module__DOT__B42),22);
	vcdp->chgBus  (c+265,(vlTOPp->v__DOT__myFFT_module__DOT__B43),22);
	vcdp->chgBus  (c+266,(vlTOPp->v__DOT__myFFT_module__DOT__B44),22);
	vcdp->chgBus  (c+267,(vlTOPp->v__DOT__myFFT_module__DOT__B45),22);
	vcdp->chgBus  (c+268,(vlTOPp->v__DOT__myFFT_module__DOT__B46),22);
	vcdp->chgBus  (c+269,(vlTOPp->v__DOT__myFFT_module__DOT__B47),22);
	vcdp->chgBus  (c+270,(vlTOPp->v__DOT__myFFT_module__DOT__B48),22);
	vcdp->chgBus  (c+271,(vlTOPp->v__DOT__myFFT_module__DOT__B49),22);
	vcdp->chgBus  (c+272,(vlTOPp->v__DOT__myFFT_module__DOT__B50),22);
	vcdp->chgBus  (c+273,(vlTOPp->v__DOT__myFFT_module__DOT__B51),22);
	vcdp->chgBus  (c+274,(vlTOPp->v__DOT__myFFT_module__DOT__B52),22);
	vcdp->chgBus  (c+275,(vlTOPp->v__DOT__myFFT_module__DOT__B53),22);
	vcdp->chgBus  (c+276,(vlTOPp->v__DOT__myFFT_module__DOT__B54),22);
	vcdp->chgBus  (c+277,(vlTOPp->v__DOT__myFFT_module__DOT__B55),22);
	vcdp->chgBus  (c+278,(vlTOPp->v__DOT__myFFT_module__DOT__B56),22);
	vcdp->chgBus  (c+279,(vlTOPp->v__DOT__myFFT_module__DOT__B57),22);
	vcdp->chgBus  (c+280,(vlTOPp->v__DOT__myFFT_module__DOT__B58),22);
	vcdp->chgBus  (c+281,(vlTOPp->v__DOT__myFFT_module__DOT__B59),22);
	vcdp->chgBus  (c+282,(vlTOPp->v__DOT__myFFT_module__DOT__B60),22);
	vcdp->chgBus  (c+283,(vlTOPp->v__DOT__myFFT_module__DOT__B61),22);
	vcdp->chgBus  (c+284,(vlTOPp->v__DOT__myFFT_module__DOT__B62),22);
	vcdp->chgBus  (c+285,(vlTOPp->v__DOT__myFFT_module__DOT__B63),22);
	vcdp->chgBus  (c+286,(vlTOPp->v__DOT__myFFT_module__DOT__C0),22);
	vcdp->chgBus  (c+287,(vlTOPp->v__DOT__myFFT_module__DOT__C1),22);
	vcdp->chgBus  (c+288,(vlTOPp->v__DOT__myFFT_module__DOT__C2),22);
	vcdp->chgBus  (c+289,(vlTOPp->v__DOT__myFFT_module__DOT__C3),22);
	vcdp->chgBus  (c+290,(vlTOPp->v__DOT__myFFT_module__DOT__C4),22);
	vcdp->chgBus  (c+291,(vlTOPp->v__DOT__myFFT_module__DOT__C5),22);
	vcdp->chgBus  (c+292,(vlTOPp->v__DOT__myFFT_module__DOT__C6),22);
	vcdp->chgBus  (c+293,(vlTOPp->v__DOT__myFFT_module__DOT__C7),22);
	vcdp->chgBus  (c+294,(vlTOPp->v__DOT__myFFT_module__DOT__C8),22);
	vcdp->chgBus  (c+295,(vlTOPp->v__DOT__myFFT_module__DOT__C9),22);
	vcdp->chgBus  (c+296,(vlTOPp->v__DOT__myFFT_module__DOT__C10),22);
	vcdp->chgBus  (c+297,(vlTOPp->v__DOT__myFFT_module__DOT__C11),22);
	vcdp->chgBus  (c+298,(vlTOPp->v__DOT__myFFT_module__DOT__C12),22);
	vcdp->chgBus  (c+299,(vlTOPp->v__DOT__myFFT_module__DOT__C13),22);
	vcdp->chgBus  (c+300,(vlTOPp->v__DOT__myFFT_module__DOT__C14),22);
	vcdp->chgBus  (c+301,(vlTOPp->v__DOT__myFFT_module__DOT__C15),22);
	vcdp->chgBus  (c+302,(vlTOPp->v__DOT__myFFT_module__DOT__C16),22);
	vcdp->chgBus  (c+303,(vlTOPp->v__DOT__myFFT_module__DOT__C17),22);
	vcdp->chgBus  (c+304,(vlTOPp->v__DOT__myFFT_module__DOT__C18),22);
	vcdp->chgBus  (c+305,(vlTOPp->v__DOT__myFFT_module__DOT__C19),22);
	vcdp->chgBus  (c+306,(vlTOPp->v__DOT__myFFT_module__DOT__C20),22);
	vcdp->chgBus  (c+307,(vlTOPp->v__DOT__myFFT_module__DOT__C21),22);
	vcdp->chgBus  (c+308,(vlTOPp->v__DOT__myFFT_module__DOT__C22),22);
	vcdp->chgBus  (c+309,(vlTOPp->v__DOT__myFFT_module__DOT__C23),22);
	vcdp->chgBus  (c+310,(vlTOPp->v__DOT__myFFT_module__DOT__C24),22);
	vcdp->chgBus  (c+311,(vlTOPp->v__DOT__myFFT_module__DOT__C25),22);
	vcdp->chgBus  (c+312,(vlTOPp->v__DOT__myFFT_module__DOT__C26),22);
	vcdp->chgBus  (c+313,(vlTOPp->v__DOT__myFFT_module__DOT__C27),22);
	vcdp->chgBus  (c+314,(vlTOPp->v__DOT__myFFT_module__DOT__C28),22);
	vcdp->chgBus  (c+315,(vlTOPp->v__DOT__myFFT_module__DOT__C29),22);
	vcdp->chgBus  (c+316,(vlTOPp->v__DOT__myFFT_module__DOT__C30),22);
	vcdp->chgBus  (c+317,(vlTOPp->v__DOT__myFFT_module__DOT__C31),22);
	vcdp->chgBus  (c+318,(vlTOPp->v__DOT__myFFT_module__DOT__C32),22);
	vcdp->chgBus  (c+319,(vlTOPp->v__DOT__myFFT_module__DOT__C33),22);
	vcdp->chgBus  (c+320,(vlTOPp->v__DOT__myFFT_module__DOT__C34),22);
	vcdp->chgBus  (c+321,(vlTOPp->v__DOT__myFFT_module__DOT__C35),22);
	vcdp->chgBus  (c+322,(vlTOPp->v__DOT__myFFT_module__DOT__C36),22);
	vcdp->chgBus  (c+323,(vlTOPp->v__DOT__myFFT_module__DOT__C37),22);
	vcdp->chgBus  (c+324,(vlTOPp->v__DOT__myFFT_module__DOT__C38),22);
	vcdp->chgBus  (c+325,(vlTOPp->v__DOT__myFFT_module__DOT__C39),22);
	vcdp->chgBus  (c+326,(vlTOPp->v__DOT__myFFT_module__DOT__C40),22);
	vcdp->chgBus  (c+327,(vlTOPp->v__DOT__myFFT_module__DOT__C41),22);
	vcdp->chgBus  (c+328,(vlTOPp->v__DOT__myFFT_module__DOT__C42),22);
	vcdp->chgBus  (c+329,(vlTOPp->v__DOT__myFFT_module__DOT__C43),22);
	vcdp->chgBus  (c+330,(vlTOPp->v__DOT__myFFT_module__DOT__C44),22);
	vcdp->chgBus  (c+331,(vlTOPp->v__DOT__myFFT_module__DOT__C45),22);
	vcdp->chgBus  (c+332,(vlTOPp->v__DOT__myFFT_module__DOT__C46),22);
	vcdp->chgBus  (c+333,(vlTOPp->v__DOT__myFFT_module__DOT__C47),22);
	vcdp->chgBus  (c+334,(vlTOPp->v__DOT__myFFT_module__DOT__C48),22);
	vcdp->chgBus  (c+335,(vlTOPp->v__DOT__myFFT_module__DOT__C49),22);
	vcdp->chgBus  (c+336,(vlTOPp->v__DOT__myFFT_module__DOT__C50),22);
	vcdp->chgBus  (c+337,(vlTOPp->v__DOT__myFFT_module__DOT__C51),22);
	vcdp->chgBus  (c+338,(vlTOPp->v__DOT__myFFT_module__DOT__C52),22);
	vcdp->chgBus  (c+339,(vlTOPp->v__DOT__myFFT_module__DOT__C53),22);
	vcdp->chgBus  (c+340,(vlTOPp->v__DOT__myFFT_module__DOT__C54),22);
	vcdp->chgBus  (c+341,(vlTOPp->v__DOT__myFFT_module__DOT__C55),22);
	vcdp->chgBus  (c+342,(vlTOPp->v__DOT__myFFT_module__DOT__C56),22);
	vcdp->chgBus  (c+343,(vlTOPp->v__DOT__myFFT_module__DOT__C57),22);
	vcdp->chgBus  (c+344,(vlTOPp->v__DOT__myFFT_module__DOT__C58),22);
	vcdp->chgBus  (c+345,(vlTOPp->v__DOT__myFFT_module__DOT__C59),22);
	vcdp->chgBus  (c+346,(vlTOPp->v__DOT__myFFT_module__DOT__C60),22);
	vcdp->chgBus  (c+347,(vlTOPp->v__DOT__myFFT_module__DOT__C61),22);
	vcdp->chgBus  (c+348,(vlTOPp->v__DOT__myFFT_module__DOT__C62),22);
	vcdp->chgBus  (c+349,(vlTOPp->v__DOT__myFFT_module__DOT__C63),22);
	vcdp->chgBus  (c+350,(vlTOPp->v__DOT__myFFT_module__DOT__stage),4);
	vcdp->chgBit  (c+351,(vlTOPp->v__DOT__myFFT_module__DOT__stage_1_start_flg));
	vcdp->chgBit  (c+352,(vlTOPp->v__DOT__myFFT_module__DOT__stage_2_start_flg));
	vcdp->chgBit  (c+353,(vlTOPp->v__DOT__myFFT_module__DOT__stage_3_start_flg));
	vcdp->chgBit  (c+354,(vlTOPp->v__DOT__myFFT_module__DOT__stage_4_start_flg));
	vcdp->chgBit  (c+355,(vlTOPp->v__DOT__myFFT_module__DOT__stage_5_start_flg));
	vcdp->chgBus  (c+364,(vlTOPp->v__DOT__myFFT_module__DOT__cnt),7);
	vcdp->chgBit  (c+366,(vlTOPp->v__DOT__myFFT_module__DOT__calculating_batterfly_flg));
	vcdp->chgBit  (c+368,(vlTOPp->v__DOT__myFFT_module__DOT__fin_batterfly));
	vcdp->chgBit  (c+369,(vlTOPp->v__DOT__myFFT_module__DOT__fin_batterfly_3));
	vcdp->chgBus  (c+370,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__cnt),4);
	vcdp->chgBus  (c+371,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
					>> 0xb))),11);
	vcdp->chgBus  (c+372,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN0)),11);
	vcdp->chgBus  (c+373,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
					>> 0xb))),11);
	vcdp->chgBus  (c+374,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN2)),11);
	vcdp->chgBus  (c+375,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
					 >> 0xb) + 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+376,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
					+ vlTOPp->v__DOT__myFFT_module__DOT__AIN2))),11);
	vcdp->chgBus  (c+377,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
					>> 0xb))),11);
	vcdp->chgBus  (c+378,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN1)),11);
	vcdp->chgBus  (c+379,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
					>> 0xb))),11);
	vcdp->chgBus  (c+380,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN3)),11);
	vcdp->chgBus  (c+381,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
					 >> 0xb) + 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+382,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
					+ vlTOPp->v__DOT__myFFT_module__DOT__AIN3))),11);
	vcdp->chgBus  (c+356,(vlTOPp->v__DOT__myFFT_module__DOT__AIN0),22);
	vcdp->chgBus  (c+358,(vlTOPp->v__DOT__myFFT_module__DOT__AIN2),22);
	vcdp->chgBus  (c+383,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
					 >> 0xb) - 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN2 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+384,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN0 
					- vlTOPp->v__DOT__myFFT_module__DOT__AIN2))),11);
	vcdp->chgBus  (c+357,(vlTOPp->v__DOT__myFFT_module__DOT__AIN1),22);
	vcdp->chgBus  (c+359,(vlTOPp->v__DOT__myFFT_module__DOT__AIN3),22);
	vcdp->chgBus  (c+385,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
					 >> 0xb) - 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN3 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+386,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN1 
					- vlTOPp->v__DOT__myFFT_module__DOT__AIN3))),11);
	vcdp->chgBus  (c+387,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YR),11);
	vcdp->chgBus  (c+388,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YI),11);
	vcdp->chgQuad (c+389,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YR1),45);
	vcdp->chgQuad (c+391,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YR2),45);
	vcdp->chgQuad (c+393,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YI1),45);
	vcdp->chgQuad (c+395,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u10__DOT__YI2),45);
	vcdp->chgBus  (c+397,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YR),11);
	vcdp->chgBus  (c+398,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YI),11);
	vcdp->chgQuad (c+399,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YR1),45);
	vcdp->chgQuad (c+401,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YR2),45);
	vcdp->chgQuad (c+403,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YI1),45);
	vcdp->chgQuad (c+405,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u11__DOT__YI2),45);
	vcdp->chgBus  (c+407,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YR),11);
	vcdp->chgBus  (c+408,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YI),11);
	vcdp->chgQuad (c+409,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YR1),45);
	vcdp->chgQuad (c+411,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YR2),45);
	vcdp->chgQuad (c+413,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YI1),45);
	vcdp->chgQuad (c+415,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module1__DOT__u12__DOT__YI2),45);
	vcdp->chgBus  (c+367,(vlTOPp->v__DOT__myFFT_module__DOT__k1),7);
	vcdp->chgBit  (c+365,(vlTOPp->v__DOT__myFFT_module__DOT__start_batterfly));
	vcdp->chgBus  (c+417,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__cnt),4);
	vcdp->chgBus  (c+418,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
					>> 0xb))),11);
	vcdp->chgBus  (c+419,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN8)),11);
	vcdp->chgBus  (c+420,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
					>> 0xb))),11);
	vcdp->chgBus  (c+421,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN10)),11);
	vcdp->chgBus  (c+422,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
					 >> 0xb) + 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+423,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
					+ vlTOPp->v__DOT__myFFT_module__DOT__AIN10))),11);
	vcdp->chgBus  (c+424,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
					>> 0xb))),11);
	vcdp->chgBus  (c+425,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN9)),11);
	vcdp->chgBus  (c+426,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
					>> 0xb))),11);
	vcdp->chgBus  (c+427,((0x7ff & vlTOPp->v__DOT__myFFT_module__DOT__AIN11)),11);
	vcdp->chgBus  (c+428,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
					 >> 0xb) + 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+429,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
					+ vlTOPp->v__DOT__myFFT_module__DOT__AIN11))),11);
	vcdp->chgBus  (c+360,(vlTOPp->v__DOT__myFFT_module__DOT__AIN8),22);
	vcdp->chgBus  (c+362,(vlTOPp->v__DOT__myFFT_module__DOT__AIN10),22);
	vcdp->chgBus  (c+430,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
					 >> 0xb) - 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN10 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+431,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN8 
					- vlTOPp->v__DOT__myFFT_module__DOT__AIN10))),11);
	vcdp->chgBus  (c+361,(vlTOPp->v__DOT__myFFT_module__DOT__AIN9),22);
	vcdp->chgBus  (c+363,(vlTOPp->v__DOT__myFFT_module__DOT__AIN11),22);
	vcdp->chgBus  (c+432,((0x7ff & ((vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
					 >> 0xb) - 
					(vlTOPp->v__DOT__myFFT_module__DOT__AIN11 
					 >> 0xb)))),11);
	vcdp->chgBus  (c+433,((0x7ff & (vlTOPp->v__DOT__myFFT_module__DOT__AIN9 
					- vlTOPp->v__DOT__myFFT_module__DOT__AIN11))),11);
	vcdp->chgBus  (c+434,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YR),11);
	vcdp->chgBus  (c+435,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YI),11);
	vcdp->chgQuad (c+436,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YR1),45);
	vcdp->chgQuad (c+438,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YR2),45);
	vcdp->chgQuad (c+440,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YI1),45);
	vcdp->chgQuad (c+442,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u10__DOT__YI2),45);
	vcdp->chgBus  (c+444,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YR),11);
	vcdp->chgBus  (c+445,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YI),11);
	vcdp->chgQuad (c+446,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YR1),45);
	vcdp->chgQuad (c+448,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YR2),45);
	vcdp->chgQuad (c+450,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YI1),45);
	vcdp->chgQuad (c+452,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u11__DOT__YI2),45);
	vcdp->chgBus  (c+454,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YR),11);
	vcdp->chgBus  (c+455,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YI),11);
	vcdp->chgQuad (c+456,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YR1),45);
	vcdp->chgQuad (c+458,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YR2),45);
	vcdp->chgQuad (c+460,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YI1),45);
	vcdp->chgQuad (c+462,(vlTOPp->v__DOT__myFFT_module__DOT__radix4_batterfly_module2__DOT__u12__DOT__YI2),45);
    }
}

void Vfft64::traceChgThis__4(Vfft64__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfft64* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+466,(vlTOPp->valid_a));
	vcdp->chgBus  (c+467,(vlTOPp->ar),11);
	vcdp->chgBus  (c+468,(vlTOPp->ai),11);
	vcdp->chgBit  (c+469,(vlTOPp->valid_o));
	vcdp->chgBit  (c+470,(vlTOPp->rd_en));
	vcdp->chgBit  (c+471,(vlTOPp->full));
	vcdp->chgBus  (c+472,(vlTOPp->xr),11);
	vcdp->chgBus  (c+473,(vlTOPp->xi),11);
	vcdp->chgBit  (c+464,(vlTOPp->CLK));
	vcdp->chgBit  (c+465,(vlTOPp->RST));
    }
}
