// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfft64__Syms.h"
#include "Vfft64.h"
#include "Vfft64_radix4_batterfly.h"

// FUNCTIONS
Vfft64__Syms::Vfft64__Syms(Vfft64* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1 (Verilated::catName(topp->name(),"v.myFFT_module.radix4_batterfly_module1"))
	, TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2 (Verilated::catName(topp->name(),"v.myFFT_module.radix4_batterfly_module2"))
	, TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3 (Verilated::catName(topp->name(),"v.myFFT_module.radix4_batterfly_module3"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__v__DOT__myFFT_module__DOT__radix4_batterfly_module1  = &TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1;
    TOPp->__PVT__v__DOT__myFFT_module__DOT__radix4_batterfly_module2  = &TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2;
    TOPp->__PVT__v__DOT__myFFT_module__DOT__radix4_batterfly_module3  = &TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1.__Vconfigure(this, true);
    TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2.__Vconfigure(this, false);
    TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3.__Vconfigure(this, false);
    // Setup scope names
}
