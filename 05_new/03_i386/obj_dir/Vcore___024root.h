// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset_n,0,0);
        VL_IN8(ce,0,0);
        VL_IN8(i,7,0);
        VL_OUT8(o,7,0);
        VL_OUT8(w,0,0);
        VL_IN8(intr,0,0);
        VL_IN8(intn,7,0);
        VL_OUT8(port_w,0,0);
        VL_OUT8(port_r,0,0);
        VL_IN8(port_i,7,0);
        VL_OUT8(port_o,7,0);
        VL_OUT8(halt,0,0);
        VL_OUT8(m0,0,0);
        VL_OUT8(ud,0,0);
        CData/*5:0*/ core__DOT__t;
        CData/*5:0*/ core__DOT__m;
        CData/*2:0*/ core__DOT__r;
        CData/*2:0*/ core__DOT__next;
        CData/*2:0*/ core__DOT__mi;
        CData/*7:0*/ core__DOT__opc;
        CData/*7:0*/ core__DOT__modrm;
        CData/*7:0*/ core__DOT__interrupt;
        CData/*0:0*/ core__DOT__cp;
        CData/*0:0*/ core__DOT__size;
        CData/*0:0*/ core__DOT__dir;
        CData/*0:0*/ core__DOT__cpen;
        CData/*0:0*/ core__DOT__cpm;
        CData/*0:0*/ core__DOT__intrack;
        CData/*0:0*/ core__DOT__term;
        CData/*1:0*/ core__DOT__rep;
        CData/*0:0*/ core__DOT__over;
        CData/*3:0*/ core__DOT__alu;
        CData/*7:0*/ core__DOT__opcode;
        CData/*5:0*/ core__DOT__tn;
        CData/*0:0*/ core__DOT__repa;
        CData/*0:0*/ core__DOT__repb;
        CData/*7:0*/ core__DOT__branch;
        CData/*0:0*/ core__DOT__imulw;
        CData/*0:0*/ core__DOT__multzf;
        CData/*0:0*/ core__DOT__multcf;
        CData/*0:0*/ core__DOT__daa_a;
        CData/*0:0*/ core__DOT__sign;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(port_a,15,0);
        VL_OUT16(flags,11,0);
        SData/*15:0*/ core__DOT__ax;
        SData/*15:0*/ core__DOT__cx;
        SData/*15:0*/ core__DOT__dx;
        SData/*15:0*/ core__DOT__bx;
        SData/*15:0*/ core__DOT__sp;
        SData/*15:0*/ core__DOT__bp;
        SData/*15:0*/ core__DOT__si;
        SData/*15:0*/ core__DOT__di;
        SData/*15:0*/ core__DOT__es;
        SData/*15:0*/ core__DOT__cs;
        SData/*15:0*/ core__DOT__ss;
        SData/*15:0*/ core__DOT__ds;
        SData/*15:0*/ core__DOT__ip;
        SData/*15:0*/ core__DOT__sgn;
        SData/*15:0*/ core__DOT__t16;
    };
    struct {
        SData/*15:0*/ core__DOT__ea;
        SData/*15:0*/ core__DOT__wb;
        SData/*15:0*/ core__DOT__op1;
        SData/*15:0*/ core__DOT__op2;
        SData/*15:0*/ core__DOT__signex;
        SData/*15:0*/ core__DOT__ean;
        SData/*15:0*/ core__DOT__sinc;
        SData/*15:0*/ core__DOT__dinc;
        SData/*15:0*/ core__DOT__repc;
        SData/*15:0*/ core__DOT__r20;
        SData/*15:0*/ core__DOT__r53;
        SData/*15:0*/ core__DOT__r16;
        SData/*11:0*/ core__DOT__alu_f;
        SData/*15:0*/ core__DOT__daa_r;
        SData/*11:0*/ core__DOT__daa_f;
        SData/*15:0*/ core__DOT__aaa_r;
        SData/*11:0*/ core__DOT__aaa_f;
        SData/*15:0*/ core__DOT__barr;
        SData/*11:0*/ core__DOT__barf;
        SData/*15:0*/ core__DOT____VdfgRegularize_h47660625_1_12;
        SData/*15:0*/ core__DOT____VdfgRegularize_h47660625_1_14;
        SData/*15:0*/ core__DOT____VdfgRegularize_h47660625_1_16;
        SData/*15:0*/ core__DOT____VdfgRegularize_h47660625_1_18;
        SData/*15:0*/ core__DOT____VdfgRegularize_h47660625_1_20;
        SData/*15:0*/ core__DOT____VdfgRegularize_h47660625_1_22;
        SData/*15:0*/ core__DOT____VdfgRegularize_h47660625_1_24;
        SData/*15:0*/ core__DOT____VdfgRegularize_h47660625_1_25;
        VL_OUT(a,19,0);
        IData/*31:0*/ core__DOT__mult;
        IData/*16:0*/ core__DOT__alu_r;
        IData/*31:0*/ core__DOT__diva;
        IData/*31:0*/ core__DOT__divb;
        IData/*31:0*/ core__DOT__divr;
        IData/*31:0*/ core__DOT__divi;
        IData/*31:0*/ core__DOT__div4;
        IData/*31:0*/ core__DOT__div4a;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ core__DOT__div4c;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore___024root(Vcore__Syms* symsp, const char* v__name);
    ~Vcore___024root();
    VL_UNCOPYABLE(Vcore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
