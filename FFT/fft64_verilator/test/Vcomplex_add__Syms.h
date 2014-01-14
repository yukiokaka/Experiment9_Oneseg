// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vcomplex_add__Syms_H_
#define _Vcomplex_add__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vcomplex_add.h"
#include "Vcomplex_add_radix4_batterfly.h"

// SYMS CLASS
class Vcomplex_add__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vcomplex_add*                  TOPp;
    Vcomplex_add_radix4_batterfly  TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module1;
    Vcomplex_add_radix4_batterfly  TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module2;
    Vcomplex_add_radix4_batterfly  TOP__v__DOT__myFFT_module__DOT__radix4_batterfly_module3;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    Vcomplex_add__Syms(Vcomplex_add* topp, const char* namep);
    ~Vcomplex_add__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
