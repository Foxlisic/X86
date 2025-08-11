// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore___024root.h"

void Vcore___024root___ico_sequent__TOP__0(Vcore___024root* vlSelf);

void Vcore___024root___eval_ico(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcore___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcore___024root___ico_sequent__TOP__0(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ core__DOT__daa_x;
    core__DOT__daa_x = 0;
    SData/*8:0*/ core__DOT__daa_i;
    core__DOT__daa_i = 0;
    // Body
    vlSelfRef.core__DOT__signex = ((0xff00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.i) 
                                                              >> 7U)))) 
                                               << 8U)) 
                                   | (IData)(vlSelfRef.i));
    vlSelfRef.core__DOT__repc = (0xffffU & (((1U & (IData)(vlSelfRef.i))
                                              ? 2U : 1U) 
                                            * ((2U 
                                                & (IData)(vlSelfRef.core__DOT__rep))
                                                ? ((IData)(vlSelfRef.core__DOT__cx) 
                                                   - (IData)(1U))
                                                : 0U)));
    if ((0U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__ax;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_12;
    } else if ((1U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__cx;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_14;
    } else if ((2U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__dx;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_16;
    } else if ((3U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__bx;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_18;
    } else if ((4U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__sp;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_20;
    } else if ((5U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__bp;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_22;
    } else if ((6U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__si;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_24;
    } else {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__di;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_25;
    }
    vlSelfRef.core__DOT__r53 = ((0U == (7U & ((IData)(vlSelfRef.i) 
                                              >> 3U)))
                                 ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_12)
                                 : ((1U == (7U & ((IData)(vlSelfRef.i) 
                                                  >> 3U)))
                                     ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_14)
                                     : ((2U == (7U 
                                                & ((IData)(vlSelfRef.i) 
                                                   >> 3U)))
                                         ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_16)
                                         : ((3U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.i) 
                                               >> 3U)))
                                             ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_18)
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.i) 
                                                     >> 3U)))
                                                 ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_20)
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.i) 
                                                      >> 3U)))
                                                  ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_22)
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.i) 
                                                       >> 3U)))
                                                   ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_24)
                                                   : (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_25))))))));
    vlSelfRef.core__DOT__opcode = ((0U != (IData)(vlSelfRef.core__DOT__t))
                                    ? (IData)(vlSelfRef.core__DOT__opc)
                                    : (IData)(vlSelfRef.i));
    if (vlSelfRef.core__DOT__daa_a) {
        vlSelfRef.core__DOT__aaa_r = ((0xff00U & (((IData)(vlSelfRef.core__DOT__daa_a)
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.core__DOT__opcode))
                                                     ? 
                                                    ((0xffU 
                                                      & ((IData)(vlSelfRef.core__DOT__ax) 
                                                         >> 8U)) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(vlSelfRef.core__DOT__ax) 
                                                         >> 8U))))
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.core__DOT__ax) 
                                                       >> 8U))) 
                                                  << 8U)) 
                                      | (0xfU & ((IData)(vlSelfRef.core__DOT__daa_a)
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.core__DOT__opcode))
                                                   ? 
                                                  ((0xfU 
                                                    & (IData)(vlSelfRef.core__DOT__ax)) 
                                                   - (IData)(6U))
                                                   : 
                                                  ((IData)(6U) 
                                                   + 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.core__DOT__ax))))
                                                  : 
                                                 (0xffU 
                                                  & (IData)(vlSelfRef.core__DOT__ax)))));
        core__DOT__daa_i = (0x1ffU & ((8U & (IData)(vlSelfRef.core__DOT__opcode))
                                       ? ((0xffU & (IData)(vlSelfRef.core__DOT__ax)) 
                                          - (IData)(6U))
                                       : ((IData)(6U) 
                                          + (0xffU 
                                             & (IData)(vlSelfRef.core__DOT__ax)))));
    } else {
        vlSelfRef.core__DOT__aaa_r = vlSelfRef.core__DOT__ax;
        core__DOT__daa_i = (0x1ffU & (0xffU & (IData)(vlSelfRef.core__DOT__ax)));
    }
    core__DOT__daa_x = (1U & ((0x9fU < (0xffU & (IData)(core__DOT__daa_i))) 
                              | ((IData)(vlSelfRef.core__DOT__daa_a)
                                  ? ((IData)(core__DOT__daa_i) 
                                     >> 8U) : (IData)(vlSelfRef.flags))));
    vlSelfRef.core__DOT__daa_r = (0xffffU & ((IData)(core__DOT__daa_x)
                                              ? ((8U 
                                                  & (IData)(vlSelfRef.core__DOT__opcode))
                                                  ? 
                                                 ((0xffU 
                                                   & (IData)(core__DOT__daa_i)) 
                                                  - (IData)(0x60U))
                                                  : 
                                                 ((IData)(0x60U) 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(core__DOT__daa_i))))
                                              : (0xffU 
                                                 & (IData)(core__DOT__daa_i))));
    vlSelfRef.core__DOT__daa_f = (2U | ((0xf00U & (IData)(vlSelfRef.flags)) 
                                        | ((0x80U & (IData)(vlSelfRef.core__DOT__daa_r)) 
                                           | (((0U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelfRef.core__DOT__daa_r))) 
                                               << 6U) 
                                              | (((IData)(vlSelfRef.core__DOT__daa_a) 
                                                  << 4U) 
                                                 | ((4U 
                                                     & ((~ 
                                                         VL_REDXOR_32(
                                                                      (0xffU 
                                                                       & (IData)(vlSelfRef.core__DOT__daa_r)))) 
                                                        << 2U)) 
                                                    | (IData)(core__DOT__daa_x)))))));
}

void Vcore___024root___eval_triggers__ico(Vcore___024root* vlSelf);

bool Vcore___024root___eval_phase__ico(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcore___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcore___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcore___024root___eval_act(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf);

void Vcore___024root___eval_nba(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ core__DOT___sf;
    core__DOT___sf = 0;
    CData/*0:0*/ core__DOT__daa_x;
    core__DOT__daa_x = 0;
    SData/*8:0*/ core__DOT__daa_i;
    core__DOT__daa_i = 0;
    SData/*15:0*/ core__DOT__ri;
    core__DOT__ri = 0;
    CData/*3:0*/ core__DOT__rs;
    core__DOT__rs = 0;
    QData/*32:0*/ core__DOT___rol;
    core__DOT___rol = 0;
    QData/*32:0*/ core__DOT___ror;
    core__DOT___ror = 0;
    QData/*32:0*/ core__DOT___rcl;
    core__DOT___rcl = 0;
    QData/*32:0*/ core__DOT___rcr;
    core__DOT___rcr = 0;
    IData/*16:0*/ core__DOT___shr;
    core__DOT___shr = 0;
    QData/*32:0*/ core__DOT___sar;
    core__DOT___sar = 0;
    CData/*0:0*/ core__DOT__rtfl;
    core__DOT__rtfl = 0;
    IData/*31:0*/ core__DOT__div1;
    core__DOT__div1 = 0;
    IData/*31:0*/ core__DOT__div2;
    core__DOT__div2 = 0;
    IData/*31:0*/ core__DOT__div3;
    core__DOT__div3 = 0;
    QData/*32:0*/ core__DOT__div1c;
    core__DOT__div1c = 0;
    QData/*32:0*/ core__DOT__div2c;
    core__DOT__div2c = 0;
    QData/*32:0*/ core__DOT__div3c;
    core__DOT__div3c = 0;
    CData/*0:0*/ core__DOT____VdfgRegularize_h47660625_1_5;
    core__DOT____VdfgRegularize_h47660625_1_5 = 0;
    IData/*16:0*/ core__DOT____VdfgRegularize_h47660625_1_28;
    core__DOT____VdfgRegularize_h47660625_1_28 = 0;
    IData/*16:0*/ core__DOT____VdfgRegularize_h47660625_1_32;
    core__DOT____VdfgRegularize_h47660625_1_32 = 0;
    CData/*0:0*/ core__DOT____VdfgRegularize_h47660625_1_35;
    core__DOT____VdfgRegularize_h47660625_1_35 = 0;
    CData/*0:0*/ core__DOT____VdfgRegularize_h47660625_1_36;
    core__DOT____VdfgRegularize_h47660625_1_36 = 0;
    CData/*0:0*/ core__DOT____VdfgRegularize_h47660625_1_48;
    core__DOT____VdfgRegularize_h47660625_1_48 = 0;
    CData/*2:0*/ __Vdly__core__DOT__r;
    __Vdly__core__DOT__r = 0;
    CData/*7:0*/ __Vdly__core__DOT__interrupt;
    __Vdly__core__DOT__interrupt = 0;
    CData/*0:0*/ __Vdly__core__DOT__over;
    __Vdly__core__DOT__over = 0;
    CData/*1:0*/ __Vdly__core__DOT__rep;
    __Vdly__core__DOT__rep = 0;
    SData/*15:0*/ __Vdly__core__DOT__sgn;
    __Vdly__core__DOT__sgn = 0;
    SData/*15:0*/ __Vdly__core__DOT__ip;
    __Vdly__core__DOT__ip = 0;
    CData/*5:0*/ __Vdly__core__DOT__t;
    __Vdly__core__DOT__t = 0;
    CData/*7:0*/ __Vdly__core__DOT__opc;
    __Vdly__core__DOT__opc = 0;
    CData/*0:0*/ __Vdly__core__DOT__cpen;
    __Vdly__core__DOT__cpen = 0;
    CData/*0:0*/ __Vdly__core__DOT__cpm;
    __Vdly__core__DOT__cpm = 0;
    CData/*2:0*/ __Vdly__core__DOT__next;
    __Vdly__core__DOT__next = 0;
    CData/*3:0*/ __Vdly__core__DOT__alu;
    __Vdly__core__DOT__alu = 0;
    CData/*0:0*/ __Vdly__core__DOT__dir;
    __Vdly__core__DOT__dir = 0;
    CData/*0:0*/ __Vdly__core__DOT__size;
    __Vdly__core__DOT__size = 0;
    SData/*15:0*/ __Vdly__core__DOT__op2;
    __Vdly__core__DOT__op2 = 0;
    SData/*15:0*/ __Vdly__core__DOT__wb;
    __Vdly__core__DOT__wb = 0;
    SData/*11:0*/ __Vdly__flags;
    __Vdly__flags = 0;
    SData/*15:0*/ __Vdly__core__DOT__ea;
    __Vdly__core__DOT__ea = 0;
    SData/*15:0*/ __Vdly__core__DOT__op1;
    __Vdly__core__DOT__op1 = 0;
    SData/*15:0*/ __Vdly__core__DOT__cs;
    __Vdly__core__DOT__cs = 0;
    SData/*15:0*/ __Vdly__core__DOT__dx;
    __Vdly__core__DOT__dx = 0;
    SData/*15:0*/ __Vdly__core__DOT__ax;
    __Vdly__core__DOT__ax = 0;
    IData/*31:0*/ __Vdly__core__DOT__divr;
    __Vdly__core__DOT__divr = 0;
    CData/*0:0*/ __Vdly__core__DOT__sign;
    __Vdly__core__DOT__sign = 0;
    IData/*31:0*/ __Vdly__core__DOT__diva;
    __Vdly__core__DOT__diva = 0;
    SData/*15:0*/ __Vdly__port_a;
    __Vdly__port_a = 0;
    SData/*15:0*/ __Vdly__core__DOT__cx;
    __Vdly__core__DOT__cx = 0;
    SData/*15:0*/ __Vdly__core__DOT__sp;
    __Vdly__core__DOT__sp = 0;
    SData/*15:0*/ __Vdly__core__DOT__ds;
    __Vdly__core__DOT__ds = 0;
    SData/*15:0*/ __Vdly__core__DOT__es;
    __Vdly__core__DOT__es = 0;
    SData/*15:0*/ __Vdly__core__DOT__t16;
    __Vdly__core__DOT__t16 = 0;
    CData/*7:0*/ __Vdly__core__DOT__modrm;
    __Vdly__core__DOT__modrm = 0;
    SData/*15:0*/ __Vdly__core__DOT__di;
    __Vdly__core__DOT__di = 0;
    SData/*15:0*/ __Vdly__core__DOT__si;
    __Vdly__core__DOT__si = 0;
    SData/*15:0*/ __Vdly__core__DOT__ss;
    __Vdly__core__DOT__ss = 0;
    SData/*15:0*/ __Vdly__core__DOT__bp;
    __Vdly__core__DOT__bp = 0;
    SData/*15:0*/ __Vdly__core__DOT__bx;
    __Vdly__core__DOT__bx = 0;
    CData/*5:0*/ __Vdly__core__DOT__m;
    __Vdly__core__DOT__m = 0;
    CData/*2:0*/ __Vdly__core__DOT__mi;
    __Vdly__core__DOT__mi = 0;
    // Body
    __Vdly__core__DOT__mi = vlSelfRef.core__DOT__mi;
    __Vdly__core__DOT__m = vlSelfRef.core__DOT__m;
    __Vdly__core__DOT__ss = vlSelfRef.core__DOT__ss;
    __Vdly__core__DOT__modrm = vlSelfRef.core__DOT__modrm;
    __Vdly__core__DOT__t16 = vlSelfRef.core__DOT__t16;
    __Vdly__core__DOT__es = vlSelfRef.core__DOT__es;
    __Vdly__core__DOT__ds = vlSelfRef.core__DOT__ds;
    __Vdly__port_a = vlSelfRef.port_a;
    __Vdly__core__DOT__sign = vlSelfRef.core__DOT__sign;
    __Vdly__core__DOT__wb = vlSelfRef.core__DOT__wb;
    __Vdly__core__DOT__dir = vlSelfRef.core__DOT__dir;
    __Vdly__core__DOT__next = vlSelfRef.core__DOT__next;
    __Vdly__core__DOT__cpm = vlSelfRef.core__DOT__cpm;
    __Vdly__core__DOT__cpen = vlSelfRef.core__DOT__cpen;
    __Vdly__core__DOT__over = vlSelfRef.core__DOT__over;
    __Vdly__core__DOT__interrupt = vlSelfRef.core__DOT__interrupt;
    __Vdly__core__DOT__r = vlSelfRef.core__DOT__r;
    __Vdly__core__DOT__cs = vlSelfRef.core__DOT__cs;
    __Vdly__core__DOT__ip = vlSelfRef.core__DOT__ip;
    __Vdly__core__DOT__sgn = vlSelfRef.core__DOT__sgn;
    __Vdly__core__DOT__ea = vlSelfRef.core__DOT__ea;
    __Vdly__core__DOT__rep = vlSelfRef.core__DOT__rep;
    __Vdly__core__DOT__bp = vlSelfRef.core__DOT__bp;
    __Vdly__core__DOT__sp = vlSelfRef.core__DOT__sp;
    __Vdly__core__DOT__si = vlSelfRef.core__DOT__si;
    __Vdly__core__DOT__di = vlSelfRef.core__DOT__di;
    __Vdly__core__DOT__opc = vlSelfRef.core__DOT__opc;
    __Vdly__core__DOT__bx = vlSelfRef.core__DOT__bx;
    __Vdly__core__DOT__t = vlSelfRef.core__DOT__t;
    __Vdly__core__DOT__dx = vlSelfRef.core__DOT__dx;
    __Vdly__core__DOT__cx = vlSelfRef.core__DOT__cx;
    __Vdly__core__DOT__alu = vlSelfRef.core__DOT__alu;
    __Vdly__core__DOT__ax = vlSelfRef.core__DOT__ax;
    __Vdly__core__DOT__divr = vlSelfRef.core__DOT__divr;
    __Vdly__flags = vlSelfRef.flags;
    __Vdly__core__DOT__diva = vlSelfRef.core__DOT__diva;
    __Vdly__core__DOT__op2 = vlSelfRef.core__DOT__op2;
    __Vdly__core__DOT__op1 = vlSelfRef.core__DOT__op1;
    __Vdly__core__DOT__size = vlSelfRef.core__DOT__size;
    if (vlSelfRef.reset_n) {
        if (vlSelfRef.ce) {
            vlSelfRef.w = 0U;
            vlSelfRef.port_r = 0U;
            vlSelfRef.port_w = 0U;
            if ((0U == (IData)(vlSelfRef.core__DOT__r))) {
                if (((((IData)(vlSelfRef.flags) >> 9U) 
                      & ((IData)(vlSelfRef.intr) ^ (IData)(vlSelfRef.core__DOT__intrack))) 
                     & (0U == (IData)(vlSelfRef.core__DOT__t)))) {
                    __Vdly__core__DOT__r = 5U;
                    vlSelfRef.core__DOT__intrack = vlSelfRef.intr;
                    __Vdly__core__DOT__interrupt = vlSelfRef.intn;
                } else {
                    if (vlSelfRef.core__DOT__term) {
                        vlSelfRef.core__DOT__term = 0U;
                        __Vdly__core__DOT__over = 0U;
                        __Vdly__core__DOT__rep = 0U;
                        __Vdly__core__DOT__sgn = vlSelfRef.core__DOT__ds;
                    }
                    if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                        __Vdly__core__DOT__ip = (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.core__DOT__ip)));
                        __Vdly__core__DOT__t = 1U;
                        __Vdly__core__DOT__opc = vlSelfRef.i;
                        __Vdly__core__DOT__cpen = 1U;
                        __Vdly__core__DOT__cpm = 1U;
                        __Vdly__core__DOT__next = 0U;
                        __Vdly__core__DOT__alu = (7U 
                                                  & ((IData)(vlSelfRef.i) 
                                                     >> 3U));
                        __Vdly__core__DOT__dir = (1U 
                                                  & (((IData)(vlSelfRef.i) 
                                                      >> 1U) 
                                                     | (0xeU 
                                                        & ((IData)(vlSelfRef.i) 
                                                           >> 2U))));
                        __Vdly__core__DOT__size = (1U 
                                                   & ((0x1cU 
                                                       & ((IData)(vlSelfRef.i) 
                                                          >> 1U)) 
                                                      | (3U 
                                                         & (IData)(vlSelfRef.i))));
                    }
                    if ((0x100U & (IData)(vlSelfRef.core__DOT__opcode))) {
                        __Vdly__core__DOT__ip = vlSelfRef.core__DOT__ip;
                        __Vdly__core__DOT__r = 6U;
                        vlSelfRef.ud = 1U;
                    } else if ((0x80U & (IData)(vlSelfRef.core__DOT__opcode))) {
                        if ((0x40U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((0x20U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((0x10U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                            if ((2U 
                                                 & (IData)(vlSelfRef.core__DOT__opcode))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelfRef.core__DOT__t))) {
                                                    __Vdly__core__DOT__r = 1U;
                                                    __Vdly__core__DOT__cpm = 0U;
                                                    __Vdly__core__DOT__dir = 0U;
                                                } else if (
                                                           ((0U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                                 >> 3U))) 
                                                            || (1U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                                    >> 3U))))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelfRef.core__DOT__t))) {
                                                        __Vdly__core__DOT__t 
                                                            = vlSelfRef.core__DOT__tn;
                                                        __Vdly__core__DOT__op2 = 1U;
                                                        __Vdly__core__DOT__alu 
                                                            = 
                                                            ((8U 
                                                              & (IData)(vlSelfRef.core__DOT__modrm))
                                                              ? 5U
                                                              : 0U);
                                                    } else if (
                                                               (2U 
                                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                                        __Vdly__core__DOT__r = 2U;
                                                        __Vdly__core__DOT__wb 
                                                            = 
                                                            (0xffffU 
                                                             & vlSelfRef.core__DOT__alu_r);
                                                        __Vdly__flags 
                                                            = vlSelfRef.core__DOT__alu_f;
                                                        __Vdly__core__DOT__t = 0U;
                                                        vlSelfRef.core__DOT__term = 1U;
                                                    }
                                                } else if (
                                                           (2U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                                >> 3U)))) {
                                                    __Vdly__core__DOT__ip 
                                                        = vlSelfRef.core__DOT__op1;
                                                    __Vdly__core__DOT__wb 
                                                        = vlSelfRef.core__DOT__ip;
                                                    __Vdly__core__DOT__r 
                                                        = 
                                                        ((IData)(vlSelfRef.core__DOT__size)
                                                          ? 3U
                                                          : 6U);
                                                    __Vdly__core__DOT__t = 0U;
                                                    vlSelfRef.core__DOT__term = 1U;
                                                } else if (
                                                           (3U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                                >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelfRef.core__DOT__t))) {
                                                        __Vdly__core__DOT__ea 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(2U) 
                                                                + (IData)(vlSelfRef.core__DOT__ea)));
                                                        __Vdly__core__DOT__ip 
                                                            = vlSelfRef.core__DOT__op1;
                                                        __Vdly__core__DOT__t 
                                                            = vlSelfRef.core__DOT__tn;
                                                        __Vdly__core__DOT__op2 
                                                            = vlSelfRef.core__DOT__cs;
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                                            __Vdly__core__DOT__r = 6U;
                                                        }
                                                        __Vdly__core__DOT__op1 
                                                            = vlSelfRef.core__DOT__ip;
                                                    } else if (
                                                               (2U 
                                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                                        __Vdly__core__DOT__ea 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.core__DOT__ea)));
                                                        __Vdly__core__DOT__t 
                                                            = vlSelfRef.core__DOT__tn;
                                                        __Vdly__core__DOT__wb 
                                                            = vlSelfRef.i;
                                                    } else if (
                                                               (3U 
                                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                                        __Vdly__core__DOT__t 
                                                            = vlSelfRef.core__DOT__tn;
                                                        __Vdly__core__DOT__r = 3U;
                                                        __Vdly__core__DOT__cs 
                                                            = 
                                                            (((IData)(vlSelfRef.i) 
                                                              << 8U) 
                                                             | (0xffU 
                                                                & (IData)(vlSelfRef.core__DOT__wb)));
                                                        __Vdly__core__DOT__wb 
                                                            = vlSelfRef.core__DOT__op2;
                                                    } else if (
                                                               (4U 
                                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                                        __Vdly__core__DOT__t 
                                                            = vlSelfRef.core__DOT__tn;
                                                        __Vdly__core__DOT__r = 3U;
                                                        __Vdly__core__DOT__wb 
                                                            = vlSelfRef.core__DOT__op1;
                                                        vlSelfRef.core__DOT__term = 1U;
                                                        __Vdly__core__DOT__t = 0U;
                                                    }
                                                } else if (
                                                           (4U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                                >> 3U)))) {
                                                    __Vdly__core__DOT__ip 
                                                        = vlSelfRef.core__DOT__op1;
                                                    __Vdly__core__DOT__t = 0U;
                                                    vlSelfRef.core__DOT__term = 1U;
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                                        __Vdly__core__DOT__r = 6U;
                                                    }
                                                } else if (
                                                           (5U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                                >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlSelfRef.core__DOT__t))) {
                                                        __Vdly__core__DOT__ea 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(2U) 
                                                                + (IData)(vlSelfRef.core__DOT__ea)));
                                                        __Vdly__core__DOT__ip 
                                                            = vlSelfRef.core__DOT__op1;
                                                        __Vdly__core__DOT__t 
                                                            = vlSelfRef.core__DOT__tn;
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                                            __Vdly__core__DOT__r = 6U;
                                                        }
                                                    } else if (
                                                               (2U 
                                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                                        __Vdly__core__DOT__ea 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.core__DOT__ea)));
                                                        __Vdly__core__DOT__t 
                                                            = vlSelfRef.core__DOT__tn;
                                                        __Vdly__core__DOT__wb 
                                                            = vlSelfRef.i;
                                                    } else if (
                                                               (3U 
                                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                                        __Vdly__core__DOT__cs 
                                                            = 
                                                            (((IData)(vlSelfRef.i) 
                                                              << 8U) 
                                                             | (0xffU 
                                                                & (IData)(vlSelfRef.core__DOT__wb)));
                                                        __Vdly__core__DOT__t = 0U;
                                                        vlSelfRef.core__DOT__term = 1U;
                                                    }
                                                } else if (
                                                           (6U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                                >> 3U)))) {
                                                    __Vdly__core__DOT__r = 3U;
                                                    __Vdly__core__DOT__wb 
                                                        = vlSelfRef.core__DOT__op1;
                                                    __Vdly__core__DOT__t = 0U;
                                                    vlSelfRef.core__DOT__term = 1U;
                                                } else if (
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                                >> 3U)))) {
                                                    __Vdly__core__DOT__r = 6U;
                                                }
                                            } else {
                                                __Vdly__core__DOT__t = 0U;
                                                vlSelfRef.core__DOT__term = 1U;
                                                __Vdly__flags 
                                                    = 
                                                    ((0xbffU 
                                                      & (IData)(__Vdly__flags)) 
                                                     | (0x400U 
                                                        & ((IData)(vlSelfRef.i) 
                                                           << 0xaU)));
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.core__DOT__opcode))) {
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                            __Vdly__flags 
                                                = (
                                                   (0xdffU 
                                                    & (IData)(__Vdly__flags)) 
                                                   | (0x200U 
                                                      & ((IData)(vlSelfRef.i) 
                                                         << 9U)));
                                        } else {
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                            __Vdly__flags 
                                                = (
                                                   (0xffeU 
                                                    & (IData)(__Vdly__flags)) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.i)));
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.core__DOT__t))) {
                                                __Vdly__core__DOT__r = 1U;
                                                __Vdly__core__DOT__cpm = 0U;
                                                __Vdly__core__DOT__dir = 0U;
                                            } else if (
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                             >> 3U))) 
                                                        || (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                                >> 3U))))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.core__DOT__t))) {
                                                    __Vdly__core__DOT__t 
                                                        = vlSelfRef.core__DOT__tn;
                                                    __Vdly__core__DOT__alu = 4U;
                                                } else if (
                                                           (2U 
                                                            == (IData)(vlSelfRef.core__DOT__t))) {
                                                    __Vdly__core__DOT__ip 
                                                        = 
                                                        (0xffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.core__DOT__ip)));
                                                    __Vdly__core__DOT__op2 
                                                        = vlSelfRef.i;
                                                    __Vdly__core__DOT__t 
                                                        = 
                                                        ((IData)(vlSelfRef.core__DOT__size)
                                                          ? 3U
                                                          : 4U);
                                                } else if (
                                                           (3U 
                                                            == (IData)(vlSelfRef.core__DOT__t))) {
                                                    __Vdly__core__DOT__ip 
                                                        = 
                                                        (0xffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.core__DOT__ip)));
                                                    __Vdly__core__DOT__op2 
                                                        = 
                                                        ((0xffU 
                                                          & (IData)(__Vdly__core__DOT__op2)) 
                                                         | ((IData)(vlSelfRef.i) 
                                                            << 8U));
                                                    __Vdly__core__DOT__t 
                                                        = vlSelfRef.core__DOT__tn;
                                                } else if (
                                                           (4U 
                                                            == (IData)(vlSelfRef.core__DOT__t))) {
                                                    __Vdly__flags 
                                                        = vlSelfRef.core__DOT__alu_f;
                                                    __Vdly__core__DOT__t = 0U;
                                                    vlSelfRef.core__DOT__term = 1U;
                                                }
                                            } else if (
                                                       (2U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                            >> 3U)))) {
                                                __Vdly__core__DOT__wb 
                                                    = 
                                                    (0xffffU 
                                                     & (~ (IData)(vlSelfRef.core__DOT__op1)));
                                                __Vdly__core__DOT__r = 2U;
                                                __Vdly__core__DOT__t = 0U;
                                                vlSelfRef.core__DOT__term = 1U;
                                            } else if (
                                                       (3U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                            >> 3U)))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.core__DOT__t))) {
                                                    __Vdly__core__DOT__t 
                                                        = vlSelfRef.core__DOT__tn;
                                                    __Vdly__core__DOT__alu = 5U;
                                                    __Vdly__core__DOT__op2 
                                                        = vlSelfRef.core__DOT__op1;
                                                    __Vdly__core__DOT__op1 = 0U;
                                                } else if (
                                                           (2U 
                                                            == (IData)(vlSelfRef.core__DOT__t))) {
                                                    __Vdly__core__DOT__r = 2U;
                                                    __Vdly__core__DOT__wb 
                                                        = 
                                                        (0xffffU 
                                                         & vlSelfRef.core__DOT__alu_r);
                                                    __Vdly__flags 
                                                        = vlSelfRef.core__DOT__alu_f;
                                                    __Vdly__core__DOT__t = 0U;
                                                    vlSelfRef.core__DOT__term = 1U;
                                                }
                                            } else if (
                                                       ((4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                             >> 3U))) 
                                                        || (5U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                                >> 3U))))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.core__DOT__t))) {
                                                    __Vdly__core__DOT__op1 
                                                        = 
                                                        ((IData)(vlSelfRef.core__DOT__size)
                                                          ? (IData)(vlSelfRef.core__DOT__op1)
                                                          : 
                                                         ((((8U 
                                                             & (IData)(vlSelfRef.core__DOT__modrm))
                                                             ? 
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelfRef.core__DOT__op1) 
                                                                              >> 7U)))))
                                                             : 0U) 
                                                           << 8U) 
                                                          | (0xffU 
                                                             & (IData)(vlSelfRef.core__DOT__op1))));
                                                    __Vdly__core__DOT__op2 
                                                        = 
                                                        ((IData)(vlSelfRef.core__DOT__size)
                                                          ? (IData)(vlSelfRef.core__DOT__ax)
                                                          : 
                                                         ((((8U 
                                                             & (IData)(vlSelfRef.core__DOT__modrm))
                                                             ? 
                                                            (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelfRef.core__DOT__ax) 
                                                                              >> 7U)))))
                                                             : 0U) 
                                                           << 8U) 
                                                          | (0xffU 
                                                             & (IData)(vlSelfRef.core__DOT__ax))));
                                                    __Vdly__core__DOT__t 
                                                        = vlSelfRef.core__DOT__tn;
                                                    vlSelfRef.core__DOT__imulw 
                                                        = 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                            >> 3U));
                                                } else if (
                                                           (2U 
                                                            == (IData)(vlSelfRef.core__DOT__t))) {
                                                    if (vlSelfRef.core__DOT__size) {
                                                        __Vdly__core__DOT__dx 
                                                            = 
                                                            (vlSelfRef.core__DOT__mult 
                                                             >> 0x10U);
                                                        __Vdly__core__DOT__ax 
                                                            = 
                                                            (0xffffU 
                                                             & vlSelfRef.core__DOT__mult);
                                                    } else {
                                                        __Vdly__core__DOT__ax 
                                                            = 
                                                            (0xffffU 
                                                             & vlSelfRef.core__DOT__mult);
                                                    }
                                                    __Vdly__flags 
                                                        = 
                                                        ((0xfbfU 
                                                          & (IData)(__Vdly__flags)) 
                                                         | ((IData)(vlSelfRef.core__DOT__multzf) 
                                                            << 6U));
                                                    __Vdly__core__DOT__t = 0U;
                                                    vlSelfRef.core__DOT__term = 1U;
                                                    __Vdly__flags 
                                                        = 
                                                        ((0xffeU 
                                                          & (IData)(__Vdly__flags)) 
                                                         | (IData)(vlSelfRef.core__DOT__multcf));
                                                    __Vdly__flags 
                                                        = 
                                                        ((0x7ffU 
                                                          & (IData)(__Vdly__flags)) 
                                                         | ((IData)(vlSelfRef.core__DOT__multcf) 
                                                            << 0xbU));
                                                }
                                            } else if (
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                             >> 3U))) 
                                                        || (7U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                                >> 3U))))) {
                                                if (
                                                    (1U 
                                                     == (IData)(vlSelfRef.core__DOT__t))) {
                                                    __Vdly__core__DOT__op1 
                                                        = 
                                                        ((IData)(vlSelfRef.core__DOT__size)
                                                          ? 8U
                                                          : 4U);
                                                    __Vdly__core__DOT__t 
                                                        = vlSelfRef.core__DOT__tn;
                                                    __Vdly__core__DOT__r = 7U;
                                                    __Vdly__core__DOT__divr = 0U;
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelfRef.core__DOT__modrm))) {
                                                        __Vdly__core__DOT__sign 
                                                            = 
                                                            (1U 
                                                             & ((vlSelfRef.core__DOT__divi 
                                                                 >> 0x1fU) 
                                                                ^ 
                                                                ((IData)(vlSelfRef.core__DOT__op1) 
                                                                 >> 
                                                                 ((IData)(vlSelfRef.core__DOT__size)
                                                                   ? 0xfU
                                                                   : 7U))));
                                                        __Vdly__core__DOT__diva 
                                                            = 
                                                            ((vlSelfRef.core__DOT__divi 
                                                              >> 0x1fU)
                                                              ? 
                                                             (- vlSelfRef.core__DOT__divi)
                                                              : vlSelfRef.core__DOT__divi);
                                                        vlSelfRef.core__DOT__divb 
                                                            = 
                                                            ((IData)(vlSelfRef.core__DOT__size)
                                                              ? 
                                                             ((0x8000U 
                                                               & (IData)(vlSelfRef.core__DOT__op1))
                                                               ? 
                                                              (- (IData)(vlSelfRef.core__DOT__op1))
                                                               : (IData)(vlSelfRef.core__DOT__op1))
                                                              : 
                                                             ((0x80U 
                                                               & (IData)(vlSelfRef.core__DOT__op1))
                                                               ? 
                                                              (- 
                                                               (0xffU 
                                                                & (IData)(vlSelfRef.core__DOT__op1)))
                                                               : 
                                                              (0xffU 
                                                               & (IData)(vlSelfRef.core__DOT__op1))));
                                                    } else {
                                                        __Vdly__core__DOT__sign = 0U;
                                                        __Vdly__core__DOT__diva 
                                                            = vlSelfRef.core__DOT__divi;
                                                        vlSelfRef.core__DOT__divb 
                                                            = vlSelfRef.core__DOT__op1;
                                                    }
                                                } else if (
                                                           (2U 
                                                            == (IData)(vlSelfRef.core__DOT__t))) {
                                                    __Vdly__core__DOT__r 
                                                        = 
                                                        ((0U 
                                                          != 
                                                          (0xffffU 
                                                           & ((IData)(vlSelfRef.core__DOT__size)
                                                               ? 
                                                              (vlSelfRef.core__DOT__diva 
                                                               >> 0x10U)
                                                               : 
                                                              (0xffU 
                                                               & (vlSelfRef.core__DOT__diva 
                                                                  >> 8U)))))
                                                          ? 5U
                                                          : 0U);
                                                    __Vdly__core__DOT__interrupt = 0U;
                                                    __Vdly__core__DOT__t = 0U;
                                                    vlSelfRef.core__DOT__term = 1U;
                                                    if (vlSelfRef.core__DOT__size) {
                                                        __Vdly__core__DOT__dx 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(vlSelfRef.core__DOT__sign)
                                                                 ? 
                                                                (- vlSelfRef.core__DOT__divr)
                                                                 : vlSelfRef.core__DOT__divr));
                                                        __Vdly__core__DOT__ax 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(vlSelfRef.core__DOT__sign)
                                                                 ? 
                                                                (- vlSelfRef.core__DOT__diva)
                                                                 : vlSelfRef.core__DOT__diva));
                                                    } else {
                                                        __Vdly__core__DOT__ax 
                                                            = 
                                                            ((0xff00U 
                                                              & (((IData)(vlSelfRef.core__DOT__sign)
                                                                   ? 
                                                                  (- vlSelfRef.core__DOT__divr)
                                                                   : vlSelfRef.core__DOT__divr) 
                                                                 << 8U)) 
                                                             | (0xffU 
                                                                & ((IData)(vlSelfRef.core__DOT__sign)
                                                                    ? 
                                                                   (- vlSelfRef.core__DOT__diva)
                                                                    : vlSelfRef.core__DOT__diva)));
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.core__DOT__opcode))) {
                                            __Vdly__flags 
                                                = (
                                                   (0xffeU 
                                                    & (IData)(__Vdly__flags)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelfRef.flags))));
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        } else {
                                            __Vdly__core__DOT__ip 
                                                = vlSelfRef.core__DOT__ip;
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                            vlSelfRef.halt = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        __Vdly__core__DOT__t = 0U;
                                        __Vdly__core__DOT__rep 
                                            = (3U & (IData)(vlSelfRef.i));
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__r = 5U;
                                            __Vdly__core__DOT__interrupt = 1U;
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else {
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                            if ((1U 
                                                 == (IData)(vlSelfRef.core__DOT__t))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.core__DOT__opcode) 
                                                         >> 3U)))) {
                                                    __Vdly__core__DOT__ip 
                                                        = 
                                                        (0xffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.core__DOT__ip)));
                                                }
                                                __Vdly__core__DOT__t 
                                                    = vlSelfRef.core__DOT__tn;
                                                __Vdly__port_a 
                                                    = 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.core__DOT__opcode))
                                                      ? (IData)(vlSelfRef.core__DOT__dx)
                                                      : (IData)(vlSelfRef.i));
                                                vlSelfRef.port_o 
                                                    = 
                                                    (0xffU 
                                                     & (IData)(vlSelfRef.core__DOT__ax));
                                                vlSelfRef.port_w = 1U;
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                                    __Vdly__core__DOT__t = 0U;
                                                    vlSelfRef.core__DOT__term = 1U;
                                                }
                                            } else if (
                                                       (2U 
                                                        == (IData)(vlSelfRef.core__DOT__t))) {
                                                __Vdly__port_a 
                                                    = 
                                                    (0xffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.port_a)));
                                                vlSelfRef.port_o 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(vlSelfRef.core__DOT__ax) 
                                                        >> 8U));
                                                vlSelfRef.port_w = 1U;
                                                __Vdly__core__DOT__t = 0U;
                                                vlSelfRef.core__DOT__term = 1U;
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__t 
                                                = (0x3fU 
                                                   & ((IData)(vlSelfRef.core__DOT__tn) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.i) 
                                                          >> 3U))));
                                            __Vdly__port_a 
                                                = vlSelfRef.core__DOT__dx;
                                            vlSelfRef.port_r 
                                                = (1U 
                                                   & ((IData)(vlSelfRef.i) 
                                                      >> 3U));
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ip 
                                                = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.core__DOT__ip)));
                                            __Vdly__core__DOT__t 
                                                = vlSelfRef.core__DOT__tn;
                                            __Vdly__port_a 
                                                = vlSelfRef.i;
                                            vlSelfRef.port_r = 1U;
                                        } else if (
                                                   (2U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__t 
                                                = vlSelfRef.core__DOT__tn;
                                            if (vlSelfRef.core__DOT__size) {
                                                __Vdly__port_a 
                                                    = 
                                                    (0xffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.port_a)));
                                                vlSelfRef.port_r = 1U;
                                            }
                                        } else if (
                                                   (3U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__t 
                                                = vlSelfRef.core__DOT__tn;
                                            __Vdly__core__DOT__ax 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__core__DOT__ax)) 
                                                   | (IData)(vlSelfRef.port_i));
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                                __Vdly__core__DOT__t = 0U;
                                                vlSelfRef.core__DOT__term = 1U;
                                            }
                                        } else if (
                                                   (4U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ax 
                                                = (
                                                   (0xffU 
                                                    & (IData)(__Vdly__core__DOT__ax)) 
                                                   | ((IData)(vlSelfRef.port_i) 
                                                      << 8U));
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                            if ((1U 
                                                 == (IData)(vlSelfRef.core__DOT__t))) {
                                                __Vdly__core__DOT__ip 
                                                    = 
                                                    (0xffffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        ((IData)(vlSelfRef.core__DOT__ip) 
                                                         + (IData)(vlSelfRef.core__DOT__signex))));
                                                __Vdly__core__DOT__t = 0U;
                                                vlSelfRef.core__DOT__term = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ip 
                                                = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.core__DOT__ip)));
                                            __Vdly__core__DOT__ea 
                                                = vlSelfRef.i;
                                            __Vdly__core__DOT__t = 2U;
                                        } else if (
                                                   (2U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ip 
                                                = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.core__DOT__ip)));
                                            __Vdly__core__DOT__ea 
                                                = (
                                                   (0xffU 
                                                    & (IData)(__Vdly__core__DOT__ea)) 
                                                   | ((IData)(vlSelfRef.i) 
                                                      << 8U));
                                            __Vdly__core__DOT__t = 3U;
                                        } else if (
                                                   (3U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ip 
                                                = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.core__DOT__ip)));
                                            __Vdly__core__DOT__t = 4U;
                                            __Vdly__core__DOT__op1 
                                                = vlSelfRef.i;
                                        } else if (
                                                   (4U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ip 
                                                = vlSelfRef.core__DOT__ea;
                                            __Vdly__core__DOT__cs 
                                                = (
                                                   ((IData)(vlSelfRef.i) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (IData)(vlSelfRef.core__DOT__op1)));
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ea 
                                                = vlSelfRef.i;
                                            __Vdly__core__DOT__ip 
                                                = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.core__DOT__ip)));
                                            __Vdly__core__DOT__t = 2U;
                                        } else if (
                                                   (2U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ip 
                                                = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSelfRef.core__DOT__ip) 
                                                       + 
                                                       (((IData)(vlSelfRef.i) 
                                                         << 8U) 
                                                        | (0xffU 
                                                           & (IData)(vlSelfRef.core__DOT__ea))))));
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.i;
                                        __Vdly__core__DOT__t = 2U;
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__r = 3U;
                                        __Vdly__core__DOT__wb 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelfRef.core__DOT__ip) 
                                                   + 
                                                   (((IData)(vlSelfRef.i) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (IData)(vlSelfRef.core__DOT__ea))))));
                                    }
                                } else if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.core__DOT__opcode) 
                                                     >> 3U)))) {
                                                __Vdly__core__DOT__ip 
                                                    = 
                                                    (0xffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.core__DOT__ip)));
                                            }
                                            __Vdly__core__DOT__t 
                                                = vlSelfRef.core__DOT__tn;
                                            __Vdly__port_a 
                                                = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.core__DOT__opcode))
                                                    ? (IData)(vlSelfRef.core__DOT__dx)
                                                    : (IData)(vlSelfRef.i));
                                            vlSelfRef.port_o 
                                                = (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__ax));
                                            vlSelfRef.port_w = 1U;
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                                __Vdly__core__DOT__t = 0U;
                                                vlSelfRef.core__DOT__term = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__port_a 
                                                = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.port_a)));
                                            vlSelfRef.port_o 
                                                = (0xffU 
                                                   & ((IData)(vlSelfRef.core__DOT__ax) 
                                                      >> 8U));
                                            vlSelfRef.port_w = 1U;
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__t 
                                            = (0x3fU 
                                               & ((IData)(vlSelfRef.core__DOT__tn) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.i) 
                                                      >> 3U))));
                                        __Vdly__port_a 
                                            = vlSelfRef.core__DOT__dx;
                                        vlSelfRef.port_r 
                                            = (1U & 
                                               ((IData)(vlSelfRef.i) 
                                                >> 3U));
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__port_a 
                                            = vlSelfRef.i;
                                        vlSelfRef.port_r = 1U;
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        if (vlSelfRef.core__DOT__size) {
                                            __Vdly__port_a 
                                                = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.port_a)));
                                            vlSelfRef.port_r = 1U;
                                        }
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__core__DOT__ax 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__core__DOT__ax)) 
                                               | (IData)(vlSelfRef.port_i));
                                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((4U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ax 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__ax)) 
                                               | ((IData)(vlSelfRef.port_i) 
                                                  << 8U));
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.core__DOT__cx))) {
                                                __Vdly__core__DOT__ip 
                                                    = 
                                                    (0xffffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelfRef.core__DOT__ip)));
                                                __Vdly__core__DOT__t = 0U;
                                                vlSelfRef.core__DOT__term = 1U;
                                            }
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ip 
                                                = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSelfRef.core__DOT__ip) 
                                                       + (IData)(vlSelfRef.core__DOT__signex))));
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__cx 
                                            = (0xffffU 
                                               & ((IData)(vlSelfRef.core__DOT__cx) 
                                                  - (IData)(1U)));
                                        if ((1U & (
                                                   (1U 
                                                    == (IData)(vlSelfRef.core__DOT__cx)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.i) 
                                                        >> 1U)) 
                                                      & (((IData)(vlSelfRef.flags) 
                                                          >> 6U) 
                                                         ^ (IData)(vlSelfRef.i)))))) {
                                            __Vdly__core__DOT__ip 
                                                = (0xffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.core__DOT__ip)));
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelfRef.core__DOT__ip) 
                                                   + (IData)(vlSelfRef.core__DOT__signex))));
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__cx 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.core__DOT__cx) 
                                              - (IData)(1U)));
                                    if ((1U & ((1U 
                                                == (IData)(vlSelfRef.core__DOT__cx)) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.i) 
                                                    >> 1U)) 
                                                  & (((IData)(vlSelfRef.flags) 
                                                      >> 6U) 
                                                     ^ (IData)(vlSelfRef.i)))))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + ((IData)(vlSelfRef.core__DOT__ip) 
                                                 + (IData)(vlSelfRef.core__DOT__signex))));
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((0x10U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__r = 1U;
                                        __Vdly__core__DOT__cpen = 0U;
                                        __Vdly__core__DOT__dir = 0U;
                                        __Vdly__core__DOT__size = 0U;
                                        __Vdly__core__DOT__cpm = 0U;
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.core__DOT__t))) {
                                                __Vdly__core__DOT__ea 
                                                    = vlSelfRef.core__DOT__bx;
                                                vlSelfRef.core__DOT__cp = 1U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.core__DOT__t))) {
                                                __Vdly__core__DOT__ax 
                                                    = 
                                                    ((0xff00U 
                                                      & (IData)(__Vdly__core__DOT__ax)) 
                                                     | (IData)(vlSelfRef.i));
                                                vlSelfRef.core__DOT__cp = 0U;
                                                __Vdly__core__DOT__t = 0U;
                                                vlSelfRef.core__DOT__term = 1U;
                                            }
                                        } else {
                                            __Vdly__core__DOT__ax 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__core__DOT__ax)) 
                                                   | (0xffU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.flags))))));
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else {
                                        __Vdly__core__DOT__ip 
                                            = vlSelfRef.core__DOT__ip;
                                        __Vdly__core__DOT__r = 6U;
                                        vlSelfRef.ud = 1U;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 1U;
                                    __Vdly__core__DOT__dir = 0U;
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    __Vdly__core__DOT__alu 
                                        = (7U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                 >> 3U));
                                    __Vdly__core__DOT__op2 
                                        = ((2U & (IData)(vlSelfRef.core__DOT__opcode))
                                            ? (0xffU 
                                               & (IData)(vlSelfRef.core__DOT__cx))
                                            : 1U);
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 2U;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.core__DOT__barr;
                                    __Vdly__flags = vlSelfRef.core__DOT__barf;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                            if ((0U 
                                                 == (IData)(vlSelfRef.core__DOT__t))) {
                                                __Vdly__core__DOT__r = 4U;
                                            } else if (
                                                       (1U 
                                                        == (IData)(vlSelfRef.core__DOT__t))) {
                                                __Vdly__core__DOT__ip 
                                                    = vlSelfRef.core__DOT__wb;
                                                __Vdly__core__DOT__r = 4U;
                                                __Vdly__core__DOT__t 
                                                    = vlSelfRef.core__DOT__tn;
                                            } else if (
                                                       (2U 
                                                        == (IData)(vlSelfRef.core__DOT__t))) {
                                                __Vdly__core__DOT__r = 4U;
                                                __Vdly__core__DOT__t 
                                                    = vlSelfRef.core__DOT__tn;
                                                __Vdly__core__DOT__cs 
                                                    = vlSelfRef.core__DOT__wb;
                                            } else if (
                                                       (3U 
                                                        == (IData)(vlSelfRef.core__DOT__t))) {
                                                __Vdly__core__DOT__t = 0U;
                                                vlSelfRef.core__DOT__term = 1U;
                                                __Vdly__flags 
                                                    = 
                                                    (0xfffU 
                                                     & (2U 
                                                        | (IData)(vlSelfRef.core__DOT__wb)));
                                            }
                                        } else if (
                                                   (0U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__r 
                                                = (
                                                   (1U 
                                                    & ((((IData)(vlSelfRef.i) 
                                                         >> 1U) 
                                                        & ((IData)(vlSelfRef.flags) 
                                                           >> 0xbU)) 
                                                       | (~ 
                                                          ((IData)(vlSelfRef.i) 
                                                           >> 1U))))
                                                    ? 5U
                                                    : 0U);
                                            __Vdly__core__DOT__interrupt 
                                                = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.i))
                                                    ? 4U
                                                    : 3U);
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ip 
                                                = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.core__DOT__ip)));
                                            __Vdly__core__DOT__r = 5U;
                                            __Vdly__core__DOT__interrupt 
                                                = vlSelfRef.i;
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__r 
                                            = ((1U 
                                                & ((((IData)(vlSelfRef.i) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelfRef.flags) 
                                                       >> 0xbU)) 
                                                   | (~ 
                                                      ((IData)(vlSelfRef.i) 
                                                       >> 1U))))
                                                ? 5U
                                                : 0U);
                                        __Vdly__core__DOT__interrupt 
                                            = ((2U 
                                                & (IData)(vlSelfRef.i))
                                                ? 4U
                                                : 3U);
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__r = 4U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__r = 4U;
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__core__DOT__op1 
                                            = vlSelfRef.core__DOT__wb;
                                        __Vdly__core__DOT__op2 
                                            = vlSelfRef.i;
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = vlSelfRef.core__DOT__op1;
                                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__opcode)))) {
                                            __Vdly__core__DOT__sp 
                                                = (0xffffU 
                                                   & ((IData)(vlSelfRef.core__DOT__sp) 
                                                      + 
                                                      (((IData)(vlSelfRef.i) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & (IData)(vlSelfRef.core__DOT__op2)))));
                                        }
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                        __Vdly__core__DOT__cs 
                                            = vlSelfRef.core__DOT__wb;
                                    }
                                } else {
                                    __Vdly__core__DOT__ip 
                                        = vlSelfRef.core__DOT__ip;
                                    __Vdly__core__DOT__r = 6U;
                                    vlSelfRef.ud = 1U;
                                }
                            } else if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__r = 1U;
                                        __Vdly__core__DOT__cpm = 0U;
                                        __Vdly__core__DOT__cpen = 0U;
                                        __Vdly__core__DOT__dir = 0U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.i;
                                        if (vlSelfRef.core__DOT__size) {
                                            __Vdly__core__DOT__t = 2U;
                                        } else {
                                            __Vdly__core__DOT__r = 2U;
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__wb 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__wb)) 
                                               | ((IData)(vlSelfRef.i) 
                                                  << 8U));
                                        __Vdly__core__DOT__r = 2U;
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 1U;
                                    __Vdly__core__DOT__dir = 1U;
                                    __Vdly__core__DOT__size = 1U;
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = (0xffffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelfRef.core__DOT__ea)));
                                    __Vdly__core__DOT__t = 2U;
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t = 3U;
                                    __Vdly__core__DOT__wb 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__core__DOT__wb)) 
                                           | (IData)(vlSelfRef.i));
                                } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 2U;
                                    if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        __Vdly__core__DOT__ds 
                                            = (((IData)(vlSelfRef.i) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.core__DOT__wb)));
                                    } else {
                                        __Vdly__core__DOT__es 
                                            = (((IData)(vlSelfRef.i) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.core__DOT__wb)));
                                    }
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.core__DOT__op2;
                                }
                            } else if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 4U;
                                    __Vdly__core__DOT__t 
                                        = ((1U & (IData)(vlSelfRef.core__DOT__opcode))
                                            ? 3U : 1U);
                                    __Vdly__core__DOT__t16 = 0U;
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    __Vdly__core__DOT__t16 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__core__DOT__t16)) 
                                           | (IData)(vlSelfRef.i));
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    __Vdly__core__DOT__t16 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__t16)) 
                                           | ((IData)(vlSelfRef.i) 
                                              << 8U));
                                } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = vlSelfRef.core__DOT__wb;
                                    __Vdly__core__DOT__sp 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.core__DOT__sp) 
                                              + (IData)(vlSelfRef.core__DOT__t16)));
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__r = 1U;
                                __Vdly__core__DOT__dir = 0U;
                                __Vdly__core__DOT__cpm = 0U;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__ip 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                __Vdly__core__DOT__t 
                                    = vlSelfRef.core__DOT__tn;
                                __Vdly__core__DOT__op2 
                                    = vlSelfRef.i;
                                __Vdly__core__DOT__alu 
                                    = (7U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                             >> 3U));
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__r = 2U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__barr;
                                __Vdly__flags = vlSelfRef.core__DOT__barf;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((0x20U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((0x10U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.i;
                                    __Vdly__core__DOT__t = 2U;
                                    if ((1U & (~ ((IData)(vlSelfRef.core__DOT__opc) 
                                                  >> 3U)))) {
                                        __Vdly__core__DOT__r = 2U;
                                        __Vdly__core__DOT__dir = 1U;
                                        __Vdly__core__DOT__size = 0U;
                                        __Vdly__core__DOT__modrm 
                                            = ((0xc7U 
                                                & (IData)(__Vdly__core__DOT__modrm)) 
                                               | (0x38U 
                                                  & ((IData)(vlSelfRef.core__DOT__opc) 
                                                     << 3U)));
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__wb 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__wb)) 
                                           | ((IData)(vlSelfRef.i) 
                                              << 8U));
                                    __Vdly__core__DOT__r = 2U;
                                    __Vdly__core__DOT__dir = 1U;
                                    __Vdly__core__DOT__size = 1U;
                                    __Vdly__core__DOT__modrm 
                                        = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                           | (0x38U 
                                              & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                 << 3U)));
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ea 
                                                = vlSelfRef.core__DOT__di;
                                            __Vdly__core__DOT__t 
                                                = vlSelfRef.core__DOT__tn;
                                            vlSelfRef.core__DOT__cp 
                                                = vlSelfRef.core__DOT__repa;
                                            __Vdly__core__DOT__alu = 5U;
                                            __Vdly__core__DOT__sgn 
                                                = vlSelfRef.core__DOT__es;
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.core__DOT__repa)))) {
                                                __Vdly__core__DOT__t = 0U;
                                                vlSelfRef.core__DOT__term = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ea 
                                                = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.core__DOT__ea)));
                                            __Vdly__core__DOT__t 
                                                = ((IData)(vlSelfRef.core__DOT__size)
                                                    ? 3U
                                                    : 4U);
                                            __Vdly__core__DOT__op1 
                                                = ((IData)(vlSelfRef.core__DOT__size)
                                                    ? (IData)(vlSelfRef.core__DOT__ax)
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.core__DOT__ax)));
                                            __Vdly__core__DOT__op2 
                                                = vlSelfRef.i;
                                        } else if (
                                                   (3U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__t 
                                                = vlSelfRef.core__DOT__tn;
                                            __Vdly__core__DOT__op2 
                                                = (
                                                   (0xffU 
                                                    & (IData)(__Vdly__core__DOT__op2)) 
                                                   | ((IData)(vlSelfRef.i) 
                                                      << 8U));
                                            __Vdly__core__DOT__di 
                                                = vlSelfRef.core__DOT__dinc;
                                        } else if (
                                                   (4U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__ea 
                                                = vlSelfRef.core__DOT__dinc;
                                            __Vdly__core__DOT__t = 2U;
                                            __Vdly__flags 
                                                = vlSelfRef.core__DOT__alu_f;
                                            __Vdly__core__DOT__di 
                                                = vlSelfRef.core__DOT__dinc;
                                            __Vdly__core__DOT__cx 
                                                = (0xffffU 
                                                   & ((IData)(vlSelfRef.core__DOT__cx) 
                                                      - 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.core__DOT__rep) 
                                                          >> 1U))));
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.core__DOT__repb) 
                                                     & ((1U 
                                                         & (IData)(vlSelfRef.core__DOT__rep)) 
                                                        == 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.core__DOT__alu_f) 
                                                            >> 6U))))))) {
                                                __Vdly__core__DOT__t = 0U;
                                                vlSelfRef.core__DOT__term = 1U;
                                                vlSelfRef.core__DOT__cp = 0U;
                                            }
                                        }
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = (0xffffU 
                                               & ((0x400U 
                                                   & (IData)(vlSelfRef.flags))
                                                   ? 
                                                  ((IData)(vlSelfRef.core__DOT__si) 
                                                   - (IData)(vlSelfRef.core__DOT__repc))
                                                   : 
                                                  ((IData)(vlSelfRef.core__DOT__si) 
                                                   + (IData)(vlSelfRef.core__DOT__repc))));
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        vlSelfRef.core__DOT__cp 
                                            = vlSelfRef.core__DOT__repa;
                                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__repa)))) {
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__core__DOT__ax 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__core__DOT__ax)) 
                                               | (IData)(vlSelfRef.i));
                                        __Vdly__core__DOT__ea 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                                        __Vdly__core__DOT__si 
                                            = (0xffffU 
                                               & ((0x400U 
                                                   & (IData)(vlSelfRef.flags))
                                                   ? 
                                                  (((IData)(vlSelfRef.core__DOT__ea) 
                                                    - (IData)(1U)) 
                                                   - (IData)(vlSelfRef.core__DOT__size))
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.core__DOT__ea) 
                                                    + (IData)(vlSelfRef.core__DOT__size)))));
                                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ax 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__ax)) 
                                               | ((IData)(vlSelfRef.i) 
                                                  << 8U));
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                        vlSelfRef.core__DOT__cp = 0U;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        vlSelfRef.core__DOT__cp 
                                            = vlSelfRef.core__DOT__repa;
                                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__repa)))) {
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__di;
                                        __Vdly__core__DOT__t 
                                            = ((IData)(vlSelfRef.core__DOT__size)
                                                ? 3U
                                                : 2U);
                                        vlSelfRef.o 
                                            = (0xffU 
                                               & (IData)(vlSelfRef.core__DOT__ax));
                                        __Vdly__core__DOT__sgn 
                                            = vlSelfRef.core__DOT__es;
                                        vlSelfRef.w = 1U;
                                        __Vdly__core__DOT__di 
                                            = (0xffffU 
                                               & ((0x400U 
                                                   & (IData)(vlSelfRef.flags))
                                                   ? 
                                                  ((IData)(vlSelfRef.core__DOT__di) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.core__DOT__di))));
                                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                            __Vdly__core__DOT__cx 
                                                = (0xffffU 
                                                   & ((IData)(vlSelfRef.core__DOT__cx) 
                                                      - 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.core__DOT__rep) 
                                                          >> 1U))));
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.core__DOT__repb)))) {
                                                __Vdly__core__DOT__t = 4U;
                                            }
                                        }
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__di 
                                            = (0xffffU 
                                               & ((0x400U 
                                                   & (IData)(vlSelfRef.flags))
                                                   ? 
                                                  ((IData)(vlSelfRef.core__DOT__di) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.core__DOT__di))));
                                        __Vdly__core__DOT__cx 
                                            = (0xffffU 
                                               & ((IData)(vlSelfRef.core__DOT__cx) 
                                                  - 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.core__DOT__rep) 
                                                      >> 1U))));
                                        __Vdly__core__DOT__ea 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                                        __Vdly__core__DOT__t 
                                            = ((IData)(vlSelfRef.core__DOT__repb)
                                                ? 2U
                                                : 4U);
                                        vlSelfRef.w = 1U;
                                        vlSelfRef.o 
                                            = (0xffU 
                                               & ((IData)(vlSelfRef.core__DOT__ax) 
                                                  >> 8U));
                                    } else if ((4U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        vlSelfRef.core__DOT__cp = 0U;
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__alu = 4U;
                                    __Vdly__core__DOT__op1 
                                        = ((1U & (IData)(vlSelfRef.core__DOT__opcode))
                                            ? (IData)(vlSelfRef.core__DOT__ax)
                                            : (0xffU 
                                               & (IData)(vlSelfRef.core__DOT__ax)));
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__t 
                                        = ((IData)(vlSelfRef.core__DOT__size)
                                            ? 2U : 3U);
                                    __Vdly__core__DOT__op2 
                                        = vlSelfRef.i;
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__t = 3U;
                                    __Vdly__core__DOT__op2 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                           | ((IData)(vlSelfRef.i) 
                                              << 8U));
                                } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__si;
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        vlSelfRef.core__DOT__cp 
                                            = vlSelfRef.core__DOT__repa;
                                        __Vdly__core__DOT__alu = 5U;
                                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__repa)))) {
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__t16 
                                            = vlSelfRef.core__DOT__sgn;
                                        __Vdly__core__DOT__op1 
                                            = vlSelfRef.i;
                                        __Vdly__core__DOT__t 
                                            = ((IData)(vlSelfRef.core__DOT__size)
                                                ? 3U
                                                : 5U);
                                        __Vdly__core__DOT__ea 
                                            = (0xffffU 
                                               & ((IData)(vlSelfRef.core__DOT__size)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.core__DOT__ea))
                                                   : (IData)(vlSelfRef.core__DOT__di)));
                                        __Vdly__core__DOT__sgn 
                                            = ((IData)(vlSelfRef.core__DOT__size)
                                                ? (IData)(vlSelfRef.core__DOT__sgn)
                                                : (IData)(vlSelfRef.core__DOT__es));
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__di;
                                        __Vdly__core__DOT__t = 4U;
                                        __Vdly__core__DOT__op1 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__op1)) 
                                               | ((IData)(vlSelfRef.i) 
                                                  << 8U));
                                        __Vdly__core__DOT__sgn 
                                            = vlSelfRef.core__DOT__es;
                                    } else if ((4U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                                        __Vdly__core__DOT__t 
                                            = ((IData)(vlSelfRef.core__DOT__size)
                                                ? 5U
                                                : 6U);
                                        __Vdly__core__DOT__op2 
                                            = vlSelfRef.i;
                                    } else if ((5U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__t = 6U;
                                        __Vdly__core__DOT__op2 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__op2)) 
                                               | ((IData)(vlSelfRef.i) 
                                                  << 8U));
                                    } else if ((6U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__sinc;
                                        __Vdly__core__DOT__t = 2U;
                                        __Vdly__core__DOT__si 
                                            = vlSelfRef.core__DOT__sinc;
                                        __Vdly__core__DOT__di 
                                            = vlSelfRef.core__DOT__dinc;
                                        __Vdly__flags 
                                            = vlSelfRef.core__DOT__alu_f;
                                        __Vdly__core__DOT__sgn 
                                            = vlSelfRef.core__DOT__t16;
                                        __Vdly__core__DOT__cx 
                                            = (0xffffU 
                                               & ((IData)(vlSelfRef.core__DOT__cx) 
                                                  - 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.core__DOT__rep) 
                                                      >> 1U))));
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.core__DOT__repb) 
                                                    & ((1U 
                                                        & (IData)(vlSelfRef.core__DOT__rep)) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.core__DOT__alu_f) 
                                                           >> 6U))))))) {
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                            vlSelfRef.core__DOT__cp = 0U;
                                        }
                                    }
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__si;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.core__DOT__cp 
                                        = vlSelfRef.core__DOT__repa;
                                    __Vdly__core__DOT__op1 
                                        = vlSelfRef.core__DOT__sgn;
                                    if ((1U & (~ (IData)(vlSelfRef.core__DOT__repa)))) {
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__t 
                                        = ((IData)(vlSelfRef.core__DOT__size)
                                            ? 3U : 5U);
                                    if (vlSelfRef.core__DOT__size) {
                                        __Vdly__core__DOT__ea 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                                    } else {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__di;
                                        __Vdly__core__DOT__sgn 
                                            = vlSelfRef.core__DOT__es;
                                        vlSelfRef.w = 1U;
                                    }
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.i;
                                    vlSelfRef.o = vlSelfRef.i;
                                } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__di;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__wb));
                                    __Vdly__core__DOT__sgn 
                                        = vlSelfRef.core__DOT__es;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.i;
                                } else if ((4U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ea)));
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__wb));
                                } else if ((5U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__cx 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.core__DOT__cx) 
                                              - (1U 
                                                 & ((IData)(vlSelfRef.core__DOT__rep) 
                                                    >> 1U))));
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__sinc;
                                    __Vdly__core__DOT__t = 2U;
                                    __Vdly__core__DOT__sgn 
                                        = vlSelfRef.core__DOT__op1;
                                    __Vdly__core__DOT__si 
                                        = vlSelfRef.core__DOT__sinc;
                                    __Vdly__core__DOT__di 
                                        = vlSelfRef.core__DOT__dinc;
                                    if ((1U & (~ (IData)(vlSelfRef.core__DOT__repb)))) {
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                        vlSelfRef.core__DOT__cp = 0U;
                                    }
                                }
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__ea 
                                    = ((0xff00U & (IData)(__Vdly__core__DOT__ea)) 
                                       | (IData)(vlSelfRef.i));
                                __Vdly__core__DOT__ip 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                __Vdly__core__DOT__t = 2U;
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__ea 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__ea)) 
                                       | ((IData)(vlSelfRef.i) 
                                          << 8U));
                                __Vdly__core__DOT__ip 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                __Vdly__core__DOT__t 
                                    = ((IData)(vlSelfRef.core__DOT__dir)
                                        ? 3U : 6U);
                                vlSelfRef.core__DOT__cp = 1U;
                            } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                vlSelfRef.w = 1U;
                                vlSelfRef.o = (0xffU 
                                               & (IData)(vlSelfRef.core__DOT__ax));
                                __Vdly__core__DOT__t 
                                    = ((IData)(vlSelfRef.core__DOT__size)
                                        ? 4U : 5U);
                            } else if ((4U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__ea 
                                    = vlSelfRef.core__DOT__ean;
                                vlSelfRef.w = 1U;
                                vlSelfRef.o = (0xffU 
                                               & ((IData)(vlSelfRef.core__DOT__ax) 
                                                  >> 8U));
                                __Vdly__core__DOT__t = 5U;
                            } else if ((5U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                                vlSelfRef.core__DOT__cp = 0U;
                            } else if ((6U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__ea 
                                    = vlSelfRef.core__DOT__ean;
                                __Vdly__core__DOT__t = 7U;
                                __Vdly__core__DOT__ax 
                                    = ((0xff00U & (IData)(__Vdly__core__DOT__ax)) 
                                       | (IData)(vlSelfRef.i));
                                if ((1U & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                    vlSelfRef.core__DOT__cp = 0U;
                                }
                            } else if ((7U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                                __Vdly__core__DOT__ax 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__ax)) 
                                       | ((IData)(vlSelfRef.i) 
                                          << 8U));
                                vlSelfRef.core__DOT__cp = 0U;
                            }
                        } else if ((0x10U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                            __Vdly__core__DOT__ax 
                                                = (
                                                   (0xffU 
                                                    & (IData)(__Vdly__core__DOT__ax)) 
                                                   | (0xff00U 
                                                      & (0x200U 
                                                         | ((IData)(vlSelfRef.flags) 
                                                            << 8U))));
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        } else {
                                            __Vdly__flags 
                                                = (0xffU 
                                                   & ((IData)(vlSelfRef.core__DOT__ax) 
                                                      >> 8U));
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__r = 4U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__flags 
                                                = (0xfffU 
                                                   & (2U 
                                                      | (IData)(vlSelfRef.core__DOT__wb)));
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else {
                                        __Vdly__core__DOT__r = 3U;
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.flags;
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__next = 0U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__t = 2U;
                                        __Vdly__core__DOT__op1 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__core__DOT__op1)) 
                                               | (IData)(vlSelfRef.i));
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__t = 3U;
                                        __Vdly__core__DOT__op1 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__op1)) 
                                               | ((IData)(vlSelfRef.i) 
                                                  << 8U));
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__t = 4U;
                                        __Vdly__core__DOT__op2 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__core__DOT__op2)) 
                                               | (IData)(vlSelfRef.i));
                                    } else if ((4U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__t = 5U;
                                        __Vdly__core__DOT__op2 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__op2)) 
                                               | ((IData)(vlSelfRef.i) 
                                                  << 8U));
                                        __Vdly__core__DOT__r = 3U;
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.core__DOT__cs;
                                    } else if ((5U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__t = 6U;
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.core__DOT__ip;
                                        __Vdly__core__DOT__r = 3U;
                                    } else if ((6U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = vlSelfRef.core__DOT__op1;
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                        __Vdly__core__DOT__cs 
                                            = vlSelfRef.core__DOT__op2;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    __Vdly__core__DOT__dx 
                                        = (0xffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.core__DOT__ax) 
                                                            >> 0xfU)))));
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                } else {
                                    __Vdly__core__DOT__ax 
                                        = ((0xff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.core__DOT__ax) 
                                                              >> 7U)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (IData)(vlSelfRef.core__DOT__ax)));
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__ax;
                                __Vdly__core__DOT__r = 2U;
                                __Vdly__core__DOT__dir = 1U;
                                __Vdly__core__DOT__size = 1U;
                                __Vdly__core__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                   << 3U)));
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                                __Vdly__core__DOT__ax 
                                    = vlSelfRef.core__DOT__r16;
                            } else if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__ax;
                                __Vdly__core__DOT__r = 2U;
                                __Vdly__core__DOT__dir = 1U;
                                __Vdly__core__DOT__size = 1U;
                                __Vdly__core__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                   << 3U)));
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                                __Vdly__core__DOT__ax 
                                    = vlSelfRef.core__DOT__r16;
                            } else if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__ax;
                                __Vdly__core__DOT__r = 2U;
                                __Vdly__core__DOT__dir = 1U;
                                __Vdly__core__DOT__size = 1U;
                                __Vdly__core__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                   << 3U)));
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                                __Vdly__core__DOT__ax 
                                    = vlSelfRef.core__DOT__r16;
                            } else {
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__r = 4U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__r = 1U;
                                            __Vdly__core__DOT__t = 2U;
                                            __Vdly__core__DOT__cpen = 0U;
                                            __Vdly__core__DOT__dir = 0U;
                                        } else if (
                                                   (2U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__r = 2U;
                                            vlSelfRef.core__DOT__cp = 1U;
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__r = 1U;
                                        __Vdly__core__DOT__dir = 1U;
                                        __Vdly__core__DOT__size = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        if ((0U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.core__DOT__modrm) 
                                               >> 3U)))) {
                                            __Vdly__core__DOT__es 
                                                = vlSelfRef.core__DOT__op2;
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                        >> 3U)))) {
                                            __Vdly__core__DOT__ss 
                                                = vlSelfRef.core__DOT__op2;
                                        } else if (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                        >> 3U)))) {
                                            __Vdly__core__DOT__ds 
                                                = vlSelfRef.core__DOT__op2;
                                        }
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__r = 1U;
                                        __Vdly__core__DOT__cpen = 0U;
                                        __Vdly__core__DOT__dir = 1U;
                                        __Vdly__core__DOT__size = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__r = 2U;
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.core__DOT__ea;
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 1U;
                                    __Vdly__core__DOT__cpen = 0U;
                                    __Vdly__core__DOT__dir = 0U;
                                    __Vdly__core__DOT__size = 1U;
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 2U;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                    if ((0U == (7U 
                                                & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                   >> 3U)))) {
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.core__DOT__es;
                                    } else if ((1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                    >> 3U)))) {
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.core__DOT__cs;
                                    } else if ((2U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                    >> 3U)))) {
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.core__DOT__ss;
                                    } else if ((3U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                    >> 3U)))) {
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.core__DOT__ds;
                                    }
                                }
                            } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__r = 1U;
                                __Vdly__core__DOT__cpen 
                                    = (1U & ((IData)(vlSelfRef.i) 
                                             >> 1U));
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__r = 2U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__op2;
                                vlSelfRef.core__DOT__cp = 1U;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 1U;
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 2U;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.core__DOT__op2;
                                    __Vdly__core__DOT__t = 2U;
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 2U;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.core__DOT__op1;
                                    __Vdly__core__DOT__dir = 0U;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__r = 1U;
                                __Vdly__core__DOT__alu = 4U;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__r = 1U;
                            __Vdly__core__DOT__dir = 0U;
                            __Vdly__core__DOT__cpm = 0U;
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__ip = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ip)));
                            __Vdly__core__DOT__alu 
                                = (7U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                         >> 3U));
                            __Vdly__core__DOT__op2 
                                = ((3U == (3U & (IData)(vlSelfRef.core__DOT__opcode)))
                                    ? (IData)(vlSelfRef.core__DOT__signex)
                                    : (IData)(vlSelfRef.i));
                            __Vdly__core__DOT__t = 
                                ((1U == (3U & (IData)(vlSelfRef.core__DOT__opcode)))
                                  ? 2U : 3U);
                        } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__ip = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ip)));
                            __Vdly__core__DOT__t = 3U;
                            __Vdly__core__DOT__op2 
                                = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                   | ((IData)(vlSelfRef.i) 
                                      << 8U));
                        } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__r = 
                                ((7U == (IData)(vlSelfRef.core__DOT__alu))
                                  ? 0U : 2U);
                            __Vdly__core__DOT__wb = 
                                (0xffffU & vlSelfRef.core__DOT__alu_r);
                            __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                            __Vdly__core__DOT__t = 0U;
                            vlSelfRef.core__DOT__term = 1U;
                        }
                    } else if ((0x40U & (IData)(vlSelfRef.core__DOT__opcode))) {
                        if ((0x20U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((0x10U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    if (((1U & ((IData)(vlSelfRef.core__DOT__branch) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelfRef.i) 
                                                    >> 1U)))) 
                                         == (1U & (IData)(vlSelfRef.i)))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + ((IData)(vlSelfRef.core__DOT__ip) 
                                                 + (IData)(vlSelfRef.core__DOT__signex))));
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    __Vdly__core__DOT__ip 
                                        = vlSelfRef.core__DOT__ip;
                                    __Vdly__core__DOT__r = 6U;
                                    vlSelfRef.ud = 1U;
                                } else if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__r = 1U;
                                        __Vdly__core__DOT__dir = 1U;
                                        __Vdly__core__DOT__cpm = 0U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__t 
                                            = ((2U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))
                                                ? 3U
                                                : 2U);
                                        __Vdly__core__DOT__op2 
                                            = ((2U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))
                                                ? (IData)(vlSelfRef.core__DOT__signex)
                                                : (IData)(vlSelfRef.i));
                                        vlSelfRef.core__DOT__imulw = 1U;
                                        __Vdly__core__DOT__op1 
                                            = vlSelfRef.core__DOT__op2;
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__core__DOT__op2 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__op2)) 
                                               | ((IData)(vlSelfRef.i) 
                                                  << 8U));
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__wb 
                                            = (0xffffU 
                                               & vlSelfRef.core__DOT__mult);
                                        __Vdly__core__DOT__r = 2U;
                                        __Vdly__flags 
                                            = ((0xfbfU 
                                                & (IData)(__Vdly__flags)) 
                                               | ((IData)(vlSelfRef.core__DOT__multzf) 
                                                  << 6U));
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                        __Vdly__flags 
                                            = ((0xffeU 
                                                & (IData)(__Vdly__flags)) 
                                               | (IData)(vlSelfRef.core__DOT__multcf));
                                        __Vdly__flags 
                                            = ((0x7ffU 
                                                & (IData)(__Vdly__flags)) 
                                               | ((IData)(vlSelfRef.core__DOT__multcf) 
                                                  << 0xbU));
                                    }
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.core__DOT__signex;
                                    __Vdly__core__DOT__t = 2U;
                                    if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        __Vdly__core__DOT__r = 3U;
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__wb 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__wb)) 
                                           | ((IData)(vlSelfRef.i) 
                                              << 8U));
                                    __Vdly__core__DOT__r = 3U;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    __Vdly__core__DOT__ip 
                                        = vlSelfRef.core__DOT__ip;
                                    __Vdly__core__DOT__r = 6U;
                                    vlSelfRef.ud = 1U;
                                } else if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    __Vdly__core__DOT__r = 3U;
                                    __Vdly__core__DOT__wb = 0U;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                } else {
                                    __Vdly__core__DOT__r = 3U;
                                    __Vdly__core__DOT__wb = 0U;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                __Vdly__core__DOT__ip 
                                    = vlSelfRef.core__DOT__ip;
                                __Vdly__core__DOT__r = 6U;
                                vlSelfRef.ud = 1U;
                            } else if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if (((((((((0U == (IData)(vlSelfRef.core__DOT__t)) 
                                           | (1U == (IData)(vlSelfRef.core__DOT__t))) 
                                          | (2U == (IData)(vlSelfRef.core__DOT__t))) 
                                         | (3U == (IData)(vlSelfRef.core__DOT__t))) 
                                        | (4U == (IData)(vlSelfRef.core__DOT__t))) 
                                       | (5U == (IData)(vlSelfRef.core__DOT__t))) 
                                      | (6U == (IData)(vlSelfRef.core__DOT__t))) 
                                     | (7U == (IData)(vlSelfRef.core__DOT__t)))) {
                                    if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__sp;
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        vlSelfRef.core__DOT__cp = 1U;
                                        __Vdly__core__DOT__sgn 
                                            = vlSelfRef.core__DOT__ss;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__ean;
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__core__DOT__di 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__core__DOT__di)) 
                                               | (IData)(vlSelfRef.i));
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__ean;
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__core__DOT__di 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__di)) 
                                               | ((IData)(vlSelfRef.i) 
                                                  << 8U));
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__ean;
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__core__DOT__si 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__core__DOT__si)) 
                                               | (IData)(vlSelfRef.i));
                                    } else if ((4U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__ean;
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__core__DOT__si 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__si)) 
                                               | ((IData)(vlSelfRef.i) 
                                                  << 8U));
                                    } else if ((5U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__ean;
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__core__DOT__bp 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__core__DOT__bp)) 
                                               | (IData)(vlSelfRef.i));
                                    } else if ((6U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__ean;
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__core__DOT__bp 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__bp)) 
                                               | ((IData)(vlSelfRef.i) 
                                                  << 8U));
                                    } else {
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.core__DOT__ean;
                                        __Vdly__core__DOT__t 
                                            = vlSelfRef.core__DOT__tn;
                                        __Vdly__core__DOT__bx 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__core__DOT__bx)) 
                                               | (IData)(vlSelfRef.i));
                                    }
                                } else if ((8U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    __Vdly__core__DOT__bx 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__bx)) 
                                           | ((IData)(vlSelfRef.i) 
                                              << 8U));
                                } else if ((9U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    __Vdly__core__DOT__dx 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__core__DOT__dx)) 
                                           | (IData)(vlSelfRef.i));
                                } else if ((0xaU == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    __Vdly__core__DOT__dx 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__dx)) 
                                           | ((IData)(vlSelfRef.i) 
                                              << 8U));
                                } else if ((0xbU == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    __Vdly__core__DOT__cx 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__core__DOT__cx)) 
                                           | (IData)(vlSelfRef.i));
                                } else if ((0xcU == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    __Vdly__core__DOT__cx 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__cx)) 
                                           | ((IData)(vlSelfRef.i) 
                                              << 8U));
                                } else if ((0xdU == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    __Vdly__core__DOT__ax 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__core__DOT__ax)) 
                                           | (IData)(vlSelfRef.i));
                                } else if ((0xeU == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__sp 
                                        = (0xffffU 
                                           & ((IData)(0x10U) 
                                              + (IData)(vlSelfRef.core__DOT__sp)));
                                    vlSelfRef.core__DOT__cp = 0U;
                                    __Vdly__core__DOT__ax 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__ax)) 
                                           | ((IData)(vlSelfRef.i) 
                                              << 8U));
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if (((((((((0U == (IData)(vlSelfRef.core__DOT__t)) 
                                              | (1U 
                                                 == (IData)(vlSelfRef.core__DOT__t))) 
                                             | (2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) 
                                            | (3U == (IData)(vlSelfRef.core__DOT__t))) 
                                           | (4U == (IData)(vlSelfRef.core__DOT__t))) 
                                          | (5U == (IData)(vlSelfRef.core__DOT__t))) 
                                         | (6U == (IData)(vlSelfRef.core__DOT__t))) 
                                        | (7U == (IData)(vlSelfRef.core__DOT__t)))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.core__DOT__sp) 
                                              - (IData)(0x10U)));
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__di));
                                    vlSelfRef.core__DOT__cp = 1U;
                                    __Vdly__core__DOT__sgn 
                                        = vlSelfRef.core__DOT__ss;
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & ((IData)(vlSelfRef.core__DOT__di) 
                                                      >> 8U));
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__si));
                                } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & ((IData)(vlSelfRef.core__DOT__si) 
                                                      >> 8U));
                                } else if ((4U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__bp));
                                } else if ((5U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & ((IData)(vlSelfRef.core__DOT__bp) 
                                                      >> 8U));
                                } else if ((6U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__sp));
                                } else {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & ((IData)(vlSelfRef.core__DOT__sp) 
                                                      >> 8U));
                                }
                            } else if (((((((((8U == (IData)(vlSelfRef.core__DOT__t)) 
                                              | (9U 
                                                 == (IData)(vlSelfRef.core__DOT__t))) 
                                             | (0xaU 
                                                == (IData)(vlSelfRef.core__DOT__t))) 
                                            | (0xbU 
                                               == (IData)(vlSelfRef.core__DOT__t))) 
                                           | (0xcU 
                                              == (IData)(vlSelfRef.core__DOT__t))) 
                                          | (0xdU == (IData)(vlSelfRef.core__DOT__t))) 
                                         | (0xeU == (IData)(vlSelfRef.core__DOT__t))) 
                                        | (0xfU == (IData)(vlSelfRef.core__DOT__t)))) {
                                if ((8U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__bx));
                                } else if ((9U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & ((IData)(vlSelfRef.core__DOT__bx) 
                                                      >> 8U));
                                } else if ((0xaU == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__dx));
                                } else if ((0xbU == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & ((IData)(vlSelfRef.core__DOT__dx) 
                                                      >> 8U));
                                } else if ((0xcU == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__cx));
                                } else if ((0xdU == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & ((IData)(vlSelfRef.core__DOT__cx) 
                                                      >> 8U));
                                } else if ((0xeU == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__ax));
                                } else {
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.core__DOT__ean;
                                    __Vdly__core__DOT__t 
                                        = vlSelfRef.core__DOT__tn;
                                    vlSelfRef.w = 1U;
                                    vlSelfRef.o = (0xffU 
                                                   & ((IData)(vlSelfRef.core__DOT__ax) 
                                                      >> 8U));
                                }
                            } else if ((0x10U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__sp 
                                    = (0xffffU & ((IData)(vlSelfRef.core__DOT__sp) 
                                                  - (IData)(0x10U)));
                                vlSelfRef.core__DOT__cp = 0U;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((0x10U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                __Vdly__core__DOT__r = 4U;
                                __Vdly__core__DOT__next = 2U;
                                __Vdly__core__DOT__dir = 1U;
                                __Vdly__core__DOT__size = 1U;
                                __Vdly__core__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                   << 3U)));
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            } else {
                                __Vdly__core__DOT__r = 3U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__r16;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__op1 
                                = vlSelfRef.core__DOT__r16;
                            __Vdly__core__DOT__op2 = 1U;
                            __Vdly__core__DOT__alu 
                                = ((8U & (IData)(vlSelfRef.core__DOT__opcode))
                                    ? 5U : 0U);
                            __Vdly__core__DOT__dir = 1U;
                            __Vdly__core__DOT__size = 1U;
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__flags = ((0xffeU 
                                              & (IData)(vlSelfRef.core__DOT__alu_f)) 
                                             | (1U 
                                                & (IData)(vlSelfRef.flags)));
                            __Vdly__core__DOT__r = 2U;
                            __Vdly__core__DOT__wb = 
                                (0xffffU & vlSelfRef.core__DOT__alu_r);
                            __Vdly__core__DOT__modrm 
                                = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                   | (0x38U & ((IData)(vlSelfRef.core__DOT__opcode) 
                                               << 3U)));
                            __Vdly__core__DOT__t = 0U;
                            vlSelfRef.core__DOT__term = 1U;
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.core__DOT__opcode))) {
                        if ((0x10U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                            __Vdly__core__DOT__ax 
                                                = (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.core__DOT__opcode))
                                                    ? (IData)(vlSelfRef.core__DOT__aaa_r)
                                                    : (IData)(vlSelfRef.core__DOT__daa_r));
                                            __Vdly__flags 
                                                = (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.core__DOT__opcode))
                                                    ? (IData)(vlSelfRef.core__DOT__aaa_f)
                                                    : (IData)(vlSelfRef.core__DOT__daa_f));
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        } else {
                                            __Vdly__core__DOT__t = 0U;
                                            __Vdly__core__DOT__sgn 
                                                = vlSelfRef.core__DOT__ds;
                                        }
                                    } else if ((0U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__op1 
                                            = ((1U 
                                                & (IData)(vlSelfRef.i))
                                                ? (IData)(vlSelfRef.core__DOT__ax)
                                                : (0xffU 
                                                   & (IData)(vlSelfRef.core__DOT__ax)));
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__op2 
                                            = vlSelfRef.i;
                                        __Vdly__core__DOT__t 
                                            = ((IData)(vlSelfRef.core__DOT__size)
                                                ? 2U
                                                : 3U);
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                        __Vdly__core__DOT__op2 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__op2)) 
                                               | ((IData)(vlSelfRef.i) 
                                                  << 8U));
                                        __Vdly__core__DOT__t = 3U;
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        if ((7U != (IData)(vlSelfRef.core__DOT__alu))) {
                                            __Vdly__core__DOT__ax 
                                                = (0xffffU 
                                                   & ((IData)(vlSelfRef.core__DOT__size)
                                                       ? vlSelfRef.core__DOT__alu_r
                                                       : 
                                                      ((0xff00U 
                                                        & (IData)(vlSelfRef.core__DOT__ax)) 
                                                       | (0xffU 
                                                          & vlSelfRef.core__DOT__alu_r))));
                                        }
                                        __Vdly__flags 
                                            = vlSelfRef.core__DOT__alu_f;
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 1U;
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r 
                                        = ((7U == (IData)(vlSelfRef.core__DOT__alu))
                                            ? 0U : 2U);
                                    __Vdly__core__DOT__wb 
                                        = (0xffffU 
                                           & vlSelfRef.core__DOT__alu_r);
                                    __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        __Vdly__core__DOT__ax 
                                            = ((0x10U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))
                                                ? (IData)(vlSelfRef.core__DOT__aaa_r)
                                                : (IData)(vlSelfRef.core__DOT__daa_r));
                                        __Vdly__flags 
                                            = ((0x10U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))
                                                ? (IData)(vlSelfRef.core__DOT__aaa_f)
                                                : (IData)(vlSelfRef.core__DOT__daa_f));
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    } else {
                                        __Vdly__core__DOT__t = 0U;
                                        __Vdly__core__DOT__sgn 
                                            = vlSelfRef.core__DOT__ss;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__op1 
                                        = ((1U & (IData)(vlSelfRef.i))
                                            ? (IData)(vlSelfRef.core__DOT__ax)
                                            : (0xffU 
                                               & (IData)(vlSelfRef.core__DOT__ax)));
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__op2 
                                        = vlSelfRef.i;
                                    __Vdly__core__DOT__t 
                                        = ((IData)(vlSelfRef.core__DOT__size)
                                            ? 2U : 3U);
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__op2 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                           | ((IData)(vlSelfRef.i) 
                                              << 8U));
                                    __Vdly__core__DOT__t = 3U;
                                } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                    if ((7U != (IData)(vlSelfRef.core__DOT__alu))) {
                                        __Vdly__core__DOT__ax 
                                            = (0xffffU 
                                               & ((IData)(vlSelfRef.core__DOT__size)
                                                   ? vlSelfRef.core__DOT__alu_r
                                                   : 
                                                  ((0xff00U 
                                                    & (IData)(vlSelfRef.core__DOT__ax)) 
                                                   | (0xffU 
                                                      & vlSelfRef.core__DOT__alu_r))));
                                    }
                                    __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__r = 1U;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__r 
                                    = ((7U == (IData)(vlSelfRef.core__DOT__alu))
                                        ? 0U : 2U);
                                __Vdly__core__DOT__wb 
                                    = (0xffffU & vlSelfRef.core__DOT__alu_r);
                                __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        __Vdly__core__DOT__ax 
                                            = ((0x10U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))
                                                ? (IData)(vlSelfRef.core__DOT__aaa_r)
                                                : (IData)(vlSelfRef.core__DOT__daa_r));
                                        __Vdly__flags 
                                            = ((0x10U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))
                                                ? (IData)(vlSelfRef.core__DOT__aaa_f)
                                                : (IData)(vlSelfRef.core__DOT__daa_f));
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    } else {
                                        __Vdly__core__DOT__t = 0U;
                                        __Vdly__core__DOT__sgn 
                                            = vlSelfRef.core__DOT__cs;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__op1 
                                        = ((1U & (IData)(vlSelfRef.i))
                                            ? (IData)(vlSelfRef.core__DOT__ax)
                                            : (0xffU 
                                               & (IData)(vlSelfRef.core__DOT__ax)));
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__op2 
                                        = vlSelfRef.i;
                                    __Vdly__core__DOT__t 
                                        = ((IData)(vlSelfRef.core__DOT__size)
                                            ? 2U : 3U);
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__op2 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                           | ((IData)(vlSelfRef.i) 
                                              << 8U));
                                    __Vdly__core__DOT__t = 3U;
                                } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                    if ((7U != (IData)(vlSelfRef.core__DOT__alu))) {
                                        __Vdly__core__DOT__ax 
                                            = (0xffffU 
                                               & ((IData)(vlSelfRef.core__DOT__size)
                                                   ? vlSelfRef.core__DOT__alu_r
                                                   : 
                                                  ((0xff00U 
                                                    & (IData)(vlSelfRef.core__DOT__ax)) 
                                                   | (0xffU 
                                                      & vlSelfRef.core__DOT__alu_r))));
                                    }
                                    __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__r = 1U;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__r 
                                    = ((7U == (IData)(vlSelfRef.core__DOT__alu))
                                        ? 0U : 2U);
                                __Vdly__core__DOT__wb 
                                    = (0xffffU & vlSelfRef.core__DOT__alu_r);
                                __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    __Vdly__core__DOT__ax 
                                        = ((0x10U & (IData)(vlSelfRef.core__DOT__opcode))
                                            ? (IData)(vlSelfRef.core__DOT__aaa_r)
                                            : (IData)(vlSelfRef.core__DOT__daa_r));
                                    __Vdly__flags = 
                                        ((0x10U & (IData)(vlSelfRef.core__DOT__opcode))
                                          ? (IData)(vlSelfRef.core__DOT__aaa_f)
                                          : (IData)(vlSelfRef.core__DOT__daa_f));
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                } else {
                                    __Vdly__core__DOT__t = 0U;
                                    __Vdly__core__DOT__sgn 
                                        = vlSelfRef.core__DOT__es;
                                }
                            } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__op1 
                                    = ((1U & (IData)(vlSelfRef.i))
                                        ? (IData)(vlSelfRef.core__DOT__ax)
                                        : (0xffU & (IData)(vlSelfRef.core__DOT__ax)));
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__ip 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                __Vdly__core__DOT__op2 
                                    = vlSelfRef.i;
                                __Vdly__core__DOT__t 
                                    = ((IData)(vlSelfRef.core__DOT__size)
                                        ? 2U : 3U);
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__ip 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                __Vdly__core__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                       | ((IData)(vlSelfRef.i) 
                                          << 8U));
                                __Vdly__core__DOT__t = 3U;
                            } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                if ((7U != (IData)(vlSelfRef.core__DOT__alu))) {
                                    __Vdly__core__DOT__ax 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.core__DOT__size)
                                               ? vlSelfRef.core__DOT__alu_r
                                               : ((0xff00U 
                                                   & (IData)(vlSelfRef.core__DOT__ax)) 
                                                  | (0xffU 
                                                     & vlSelfRef.core__DOT__alu_r))));
                                }
                                __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__r = 1U;
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__r = 
                                ((7U == (IData)(vlSelfRef.core__DOT__alu))
                                  ? 0U : 2U);
                            __Vdly__core__DOT__wb = 
                                (0xffffU & vlSelfRef.core__DOT__alu_r);
                            __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                            __Vdly__core__DOT__t = 0U;
                            vlSelfRef.core__DOT__term = 1U;
                        }
                    } else if ((0x10U & (IData)(vlSelfRef.core__DOT__opcode))) {
                        if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                            __Vdly__core__DOT__r = 4U;
                                        } else if (
                                                   (1U 
                                                    == (IData)(vlSelfRef.core__DOT__t))) {
                                            if ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                     >> 3U)))) {
                                                __Vdly__core__DOT__es 
                                                    = vlSelfRef.core__DOT__wb;
                                            } else if (
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                            >> 3U)))) {
                                                __Vdly__core__DOT__ss 
                                                    = vlSelfRef.core__DOT__wb;
                                            } else if (
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                            >> 3U)))) {
                                                __Vdly__core__DOT__ds 
                                                    = vlSelfRef.core__DOT__wb;
                                            }
                                            __Vdly__core__DOT__t = 0U;
                                            vlSelfRef.core__DOT__term = 1U;
                                        }
                                    } else {
                                        __Vdly__core__DOT__r = 3U;
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.core__DOT__ds;
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__op1 
                                        = ((1U & (IData)(vlSelfRef.i))
                                            ? (IData)(vlSelfRef.core__DOT__ax)
                                            : (0xffU 
                                               & (IData)(vlSelfRef.core__DOT__ax)));
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__op2 
                                        = vlSelfRef.i;
                                    __Vdly__core__DOT__t 
                                        = ((IData)(vlSelfRef.core__DOT__size)
                                            ? 2U : 3U);
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__ip 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ip)));
                                    __Vdly__core__DOT__op2 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                           | ((IData)(vlSelfRef.i) 
                                              << 8U));
                                    __Vdly__core__DOT__t = 3U;
                                } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                    if ((7U != (IData)(vlSelfRef.core__DOT__alu))) {
                                        __Vdly__core__DOT__ax 
                                            = (0xffffU 
                                               & ((IData)(vlSelfRef.core__DOT__size)
                                                   ? vlSelfRef.core__DOT__alu_r
                                                   : 
                                                  ((0xff00U 
                                                    & (IData)(vlSelfRef.core__DOT__ax)) 
                                                   | (0xffU 
                                                      & vlSelfRef.core__DOT__alu_r))));
                                    }
                                    __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__r = 1U;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__r 
                                    = ((7U == (IData)(vlSelfRef.core__DOT__alu))
                                        ? 0U : 2U);
                                __Vdly__core__DOT__wb 
                                    = (0xffffU & vlSelfRef.core__DOT__alu_r);
                                __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__r = 4U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        if ((0U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.core__DOT__opcode) 
                                               >> 3U)))) {
                                            __Vdly__core__DOT__es 
                                                = vlSelfRef.core__DOT__wb;
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                        >> 3U)))) {
                                            __Vdly__core__DOT__ss 
                                                = vlSelfRef.core__DOT__wb;
                                        } else if (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                        >> 3U)))) {
                                            __Vdly__core__DOT__ds 
                                                = vlSelfRef.core__DOT__wb;
                                        }
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else {
                                    __Vdly__core__DOT__r = 3U;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.core__DOT__ss;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__op1 
                                    = ((1U & (IData)(vlSelfRef.i))
                                        ? (IData)(vlSelfRef.core__DOT__ax)
                                        : (0xffU & (IData)(vlSelfRef.core__DOT__ax)));
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__ip 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                __Vdly__core__DOT__op2 
                                    = vlSelfRef.i;
                                __Vdly__core__DOT__t 
                                    = ((IData)(vlSelfRef.core__DOT__size)
                                        ? 2U : 3U);
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__ip 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                __Vdly__core__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                       | ((IData)(vlSelfRef.i) 
                                          << 8U));
                                __Vdly__core__DOT__t = 3U;
                            } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                if ((7U != (IData)(vlSelfRef.core__DOT__alu))) {
                                    __Vdly__core__DOT__ax 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.core__DOT__size)
                                               ? vlSelfRef.core__DOT__alu_r
                                               : ((0xff00U 
                                                   & (IData)(vlSelfRef.core__DOT__ax)) 
                                                  | (0xffU 
                                                     & vlSelfRef.core__DOT__alu_r))));
                                }
                                __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__r = 1U;
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__r = 
                                ((7U == (IData)(vlSelfRef.core__DOT__alu))
                                  ? 0U : 2U);
                            __Vdly__core__DOT__wb = 
                                (0xffffU & vlSelfRef.core__DOT__alu_r);
                            __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                            __Vdly__core__DOT__t = 0U;
                            vlSelfRef.core__DOT__term = 1U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.core__DOT__opcode))) {
                        if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                        __Vdly__core__DOT__r = 4U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.core__DOT__t))) {
                                        if ((0U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.core__DOT__opcode) 
                                               >> 3U)))) {
                                            __Vdly__core__DOT__es 
                                                = vlSelfRef.core__DOT__wb;
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                        >> 3U)))) {
                                            __Vdly__core__DOT__ss 
                                                = vlSelfRef.core__DOT__wb;
                                        } else if (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                        >> 3U)))) {
                                            __Vdly__core__DOT__ds 
                                                = vlSelfRef.core__DOT__wb;
                                        }
                                        __Vdly__core__DOT__t = 0U;
                                        vlSelfRef.core__DOT__term = 1U;
                                    }
                                } else {
                                    __Vdly__core__DOT__r = 3U;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.core__DOT__cs;
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__op1 
                                    = ((1U & (IData)(vlSelfRef.i))
                                        ? (IData)(vlSelfRef.core__DOT__ax)
                                        : (0xffU & (IData)(vlSelfRef.core__DOT__ax)));
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__ip 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                __Vdly__core__DOT__op2 
                                    = vlSelfRef.i;
                                __Vdly__core__DOT__t 
                                    = ((IData)(vlSelfRef.core__DOT__size)
                                        ? 2U : 3U);
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                                __Vdly__core__DOT__ip 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ip)));
                                __Vdly__core__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                       | ((IData)(vlSelfRef.i) 
                                          << 8U));
                                __Vdly__core__DOT__t = 3U;
                            } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                                if ((7U != (IData)(vlSelfRef.core__DOT__alu))) {
                                    __Vdly__core__DOT__ax 
                                        = (0xffffU 
                                           & ((IData)(vlSelfRef.core__DOT__size)
                                               ? vlSelfRef.core__DOT__alu_r
                                               : ((0xff00U 
                                                   & (IData)(vlSelfRef.core__DOT__ax)) 
                                                  | (0xffU 
                                                     & vlSelfRef.core__DOT__alu_r))));
                                }
                                __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__r = 1U;
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__r = 
                                ((7U == (IData)(vlSelfRef.core__DOT__alu))
                                  ? 0U : 2U);
                            __Vdly__core__DOT__wb = 
                                (0xffffU & vlSelfRef.core__DOT__alu_r);
                            __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                            __Vdly__core__DOT__t = 0U;
                            vlSelfRef.core__DOT__term = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.core__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                                    __Vdly__core__DOT__r = 4U;
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                                    if ((0U == (3U 
                                                & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                   >> 3U)))) {
                                        __Vdly__core__DOT__es 
                                            = vlSelfRef.core__DOT__wb;
                                    } else if ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                    >> 3U)))) {
                                        __Vdly__core__DOT__ss 
                                            = vlSelfRef.core__DOT__wb;
                                    } else if ((3U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                    >> 3U)))) {
                                        __Vdly__core__DOT__ds 
                                            = vlSelfRef.core__DOT__wb;
                                    }
                                    __Vdly__core__DOT__t = 0U;
                                    vlSelfRef.core__DOT__term = 1U;
                                }
                            } else {
                                __Vdly__core__DOT__r = 3U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__es;
                                __Vdly__core__DOT__t = 0U;
                                vlSelfRef.core__DOT__term = 1U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__op1 
                                = ((1U & (IData)(vlSelfRef.i))
                                    ? (IData)(vlSelfRef.core__DOT__ax)
                                    : (0xffU & (IData)(vlSelfRef.core__DOT__ax)));
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__ip = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ip)));
                            __Vdly__core__DOT__op2 
                                = vlSelfRef.i;
                            __Vdly__core__DOT__t = 
                                ((IData)(vlSelfRef.core__DOT__size)
                                  ? 2U : 3U);
                        } else if ((2U == (IData)(vlSelfRef.core__DOT__t))) {
                            __Vdly__core__DOT__ip = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ip)));
                            __Vdly__core__DOT__op2 
                                = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                   | ((IData)(vlSelfRef.i) 
                                      << 8U));
                            __Vdly__core__DOT__t = 3U;
                        } else if ((3U == (IData)(vlSelfRef.core__DOT__t))) {
                            if ((7U != (IData)(vlSelfRef.core__DOT__alu))) {
                                __Vdly__core__DOT__ax 
                                    = (0xffffU & ((IData)(vlSelfRef.core__DOT__size)
                                                   ? vlSelfRef.core__DOT__alu_r
                                                   : 
                                                  ((0xff00U 
                                                    & (IData)(vlSelfRef.core__DOT__ax)) 
                                                   | (0xffU 
                                                      & vlSelfRef.core__DOT__alu_r))));
                            }
                            __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                            __Vdly__core__DOT__t = 0U;
                            vlSelfRef.core__DOT__term = 1U;
                        }
                    } else if ((0U == (IData)(vlSelfRef.core__DOT__t))) {
                        __Vdly__core__DOT__r = 1U;
                    } else if ((1U == (IData)(vlSelfRef.core__DOT__t))) {
                        __Vdly__core__DOT__r = ((7U 
                                                 == (IData)(vlSelfRef.core__DOT__alu))
                                                 ? 0U
                                                 : 2U);
                        __Vdly__core__DOT__wb = (0xffffU 
                                                 & vlSelfRef.core__DOT__alu_r);
                        __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                        __Vdly__core__DOT__t = 0U;
                        vlSelfRef.core__DOT__term = 1U;
                    }
                }
            } else if ((1U == (IData)(vlSelfRef.core__DOT__r))) {
                if ((0U == (IData)(vlSelfRef.core__DOT__m))) {
                    __Vdly__core__DOT__ip = (0xffffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.core__DOT__ip)));
                    __Vdly__core__DOT__ea = (0xffffU 
                                             & ((4U 
                                                 & (IData)(vlSelfRef.i))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.i))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.i))
                                                   ? (IData)(vlSelfRef.core__DOT__bx)
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.i) 
                                                        >> 6U)))
                                                    ? (IData)(vlSelfRef.core__DOT__bp)
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.i))
                                                   ? (IData)(vlSelfRef.core__DOT__di)
                                                   : (IData)(vlSelfRef.core__DOT__si)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.i))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.i))
                                                   ? 
                                                  ((IData)(vlSelfRef.core__DOT__bp) 
                                                   + (IData)(vlSelfRef.core__DOT__di))
                                                   : 
                                                  ((IData)(vlSelfRef.core__DOT__bp) 
                                                   + (IData)(vlSelfRef.core__DOT__si)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.i))
                                                   ? 
                                                  ((IData)(vlSelfRef.core__DOT__bx) 
                                                   + (IData)(vlSelfRef.core__DOT__di))
                                                   : 
                                                  ((IData)(vlSelfRef.core__DOT__bx) 
                                                   + (IData)(vlSelfRef.core__DOT__si))))));
                    if ((1U & (~ (IData)(vlSelfRef.core__DOT__over)))) {
                        if ((((2U == (6U & (IData)(vlSelfRef.i))) 
                              || (0x46U == (0xc7U & (IData)(vlSelfRef.i)))) 
                             || (0x86U == (0xc7U & (IData)(vlSelfRef.i))))) {
                            __Vdly__core__DOT__sgn 
                                = vlSelfRef.core__DOT__ss;
                        }
                    }
                    __Vdly__core__DOT__modrm = vlSelfRef.i;
                    if (vlSelfRef.core__DOT__dir) {
                        __Vdly__core__DOT__op1 = vlSelfRef.core__DOT__r53;
                        __Vdly__core__DOT__op2 = vlSelfRef.core__DOT__r20;
                    } else {
                        __Vdly__core__DOT__op1 = vlSelfRef.core__DOT__r20;
                        __Vdly__core__DOT__op2 = vlSelfRef.core__DOT__r53;
                    }
                    if ((6U == (0xc7U & (IData)(vlSelfRef.i)))) {
                        __Vdly__core__DOT__m = 2U;
                    } else if ((0U == (0xc0U & (IData)(vlSelfRef.i)))) {
                        if (vlSelfRef.core__DOT__cpen) {
                            __Vdly__core__DOT__m = 4U;
                            vlSelfRef.core__DOT__cp = 1U;
                        } else {
                            __Vdly__core__DOT__m = 0U;
                            vlSelfRef.core__DOT__cp = 0U;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__cpen)))) {
                            __Vdly__core__DOT__r = 0U;
                        }
                    } else if ((0x40U == (0xc0U & (IData)(vlSelfRef.i)))) {
                        __Vdly__core__DOT__m = 1U;
                    } else if ((0x80U == (0xc0U & (IData)(vlSelfRef.i)))) {
                        __Vdly__core__DOT__m = 2U;
                    } else if ((0xc0U == (0xc0U & (IData)(vlSelfRef.i)))) {
                        __Vdly__core__DOT__m = 0U;
                        __Vdly__core__DOT__r = 0U;
                    } else {
                        __Vdly__core__DOT__m = 1U;
                    }
                } else if ((1U == (IData)(vlSelfRef.core__DOT__m))) {
                    __Vdly__core__DOT__ip = (0xffffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.core__DOT__ip)));
                    __Vdly__core__DOT__ea = (0xffffU 
                                             & ((IData)(vlSelfRef.core__DOT__ea) 
                                                + (IData)(vlSelfRef.core__DOT__signex)));
                    __Vdly__core__DOT__m = 4U;
                    vlSelfRef.core__DOT__cp = vlSelfRef.core__DOT__cpen;
                    if ((1U & (~ (IData)(vlSelfRef.core__DOT__cpen)))) {
                        __Vdly__core__DOT__m = 0U;
                        __Vdly__core__DOT__r = 0U;
                    }
                } else if ((2U == (IData)(vlSelfRef.core__DOT__m))) {
                    __Vdly__core__DOT__ip = (0xffffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.core__DOT__ip)));
                    __Vdly__core__DOT__ea = (0xffffU 
                                             & ((IData)(vlSelfRef.core__DOT__ea) 
                                                + (IData)(vlSelfRef.i)));
                    __Vdly__core__DOT__m = 3U;
                } else if ((3U == (IData)(vlSelfRef.core__DOT__m))) {
                    __Vdly__core__DOT__ip = (0xffffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.core__DOT__ip)));
                    __Vdly__core__DOT__ea = (0xffffU 
                                             & ((IData)(vlSelfRef.core__DOT__ea) 
                                                + ((IData)(vlSelfRef.i) 
                                                   << 8U)));
                    __Vdly__core__DOT__m = 4U;
                    vlSelfRef.core__DOT__cp = vlSelfRef.core__DOT__cpen;
                    if ((1U & (~ (IData)(vlSelfRef.core__DOT__cpen)))) {
                        __Vdly__core__DOT__m = 0U;
                        __Vdly__core__DOT__r = 0U;
                    }
                } else if ((4U == (IData)(vlSelfRef.core__DOT__m))) {
                    if (vlSelfRef.core__DOT__dir) {
                        __Vdly__core__DOT__op2 = vlSelfRef.i;
                    } else {
                        __Vdly__core__DOT__op1 = vlSelfRef.i;
                    }
                    if (vlSelfRef.core__DOT__size) {
                        __Vdly__core__DOT__ea = vlSelfRef.core__DOT__ean;
                        __Vdly__core__DOT__m = 5U;
                    } else {
                        __Vdly__core__DOT__m = 0U;
                        __Vdly__core__DOT__r = 0U;
                        vlSelfRef.core__DOT__cp = vlSelfRef.core__DOT__cpm;
                    }
                } else if ((5U == (IData)(vlSelfRef.core__DOT__m))) {
                    __Vdly__core__DOT__ea = (0xffffU 
                                             & ((IData)(vlSelfRef.core__DOT__ea) 
                                                - (IData)(1U)));
                    if (vlSelfRef.core__DOT__dir) {
                        __Vdly__core__DOT__op2 = ((0xffU 
                                                   & (IData)(__Vdly__core__DOT__op2)) 
                                                  | ((IData)(vlSelfRef.i) 
                                                     << 8U));
                    } else {
                        __Vdly__core__DOT__op1 = ((0xffU 
                                                   & (IData)(__Vdly__core__DOT__op1)) 
                                                  | ((IData)(vlSelfRef.i) 
                                                     << 8U));
                    }
                    __Vdly__core__DOT__m = 0U;
                    __Vdly__core__DOT__r = 0U;
                    vlSelfRef.core__DOT__cp = vlSelfRef.core__DOT__cpm;
                }
            } else if ((2U == (IData)(vlSelfRef.core__DOT__r))) {
                if ((0U == (IData)(vlSelfRef.core__DOT__m))) {
                    if (((IData)(vlSelfRef.core__DOT__dir) 
                         | (3U == (3U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                         >> 6U))))) {
                        vlSelfRef.core__DOT__cp = 0U;
                        __Vdly__core__DOT__m = 0U;
                        __Vdly__core__DOT__r = ((2U 
                                                 == (IData)(vlSelfRef.core__DOT__next))
                                                 ? 0U
                                                 : 
                                                (7U 
                                                 & (IData)(vlSelfRef.core__DOT__next)));
                        if ((4U & ((IData)(vlSelfRef.core__DOT__dir)
                                    ? ((IData)(vlSelfRef.core__DOT__modrm) 
                                       >> 3U) : (IData)(vlSelfRef.core__DOT__modrm)))) {
                            if ((2U & ((IData)(vlSelfRef.core__DOT__dir)
                                        ? ((IData)(vlSelfRef.core__DOT__modrm) 
                                           >> 3U) : (IData)(vlSelfRef.core__DOT__modrm)))) {
                                if ((1U & ((IData)(vlSelfRef.core__DOT__dir)
                                            ? ((IData)(vlSelfRef.core__DOT__modrm) 
                                               >> 3U)
                                            : (IData)(vlSelfRef.core__DOT__modrm)))) {
                                    if (vlSelfRef.core__DOT__size) {
                                        __Vdly__core__DOT__di 
                                            = vlSelfRef.core__DOT__wb;
                                    } else {
                                        __Vdly__core__DOT__bx 
                                            = ((0xffU 
                                                & (IData)(__Vdly__core__DOT__bx)) 
                                               | (0xff00U 
                                                  & ((IData)(vlSelfRef.core__DOT__wb) 
                                                     << 8U)));
                                    }
                                } else if (vlSelfRef.core__DOT__size) {
                                    __Vdly__core__DOT__si 
                                        = vlSelfRef.core__DOT__wb;
                                } else {
                                    __Vdly__core__DOT__dx 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__dx)) 
                                           | (0xff00U 
                                              & ((IData)(vlSelfRef.core__DOT__wb) 
                                                 << 8U)));
                                }
                            } else if ((1U & ((IData)(vlSelfRef.core__DOT__dir)
                                               ? ((IData)(vlSelfRef.core__DOT__modrm) 
                                                  >> 3U)
                                               : (IData)(vlSelfRef.core__DOT__modrm)))) {
                                if (vlSelfRef.core__DOT__size) {
                                    __Vdly__core__DOT__bp 
                                        = vlSelfRef.core__DOT__wb;
                                } else {
                                    __Vdly__core__DOT__cx 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__cx)) 
                                           | (0xff00U 
                                              & ((IData)(vlSelfRef.core__DOT__wb) 
                                                 << 8U)));
                                }
                            } else if (vlSelfRef.core__DOT__size) {
                                __Vdly__core__DOT__sp 
                                    = vlSelfRef.core__DOT__wb;
                            } else {
                                __Vdly__core__DOT__ax 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__ax)) 
                                       | (0xff00U & 
                                          ((IData)(vlSelfRef.core__DOT__wb) 
                                           << 8U)));
                            }
                        } else if ((2U & ((IData)(vlSelfRef.core__DOT__dir)
                                           ? ((IData)(vlSelfRef.core__DOT__modrm) 
                                              >> 3U)
                                           : (IData)(vlSelfRef.core__DOT__modrm)))) {
                            if ((1U & ((IData)(vlSelfRef.core__DOT__dir)
                                        ? ((IData)(vlSelfRef.core__DOT__modrm) 
                                           >> 3U) : (IData)(vlSelfRef.core__DOT__modrm)))) {
                                if (vlSelfRef.core__DOT__size) {
                                    __Vdly__core__DOT__bx 
                                        = vlSelfRef.core__DOT__wb;
                                } else {
                                    __Vdly__core__DOT__bx 
                                        = ((0xff00U 
                                            & (IData)(__Vdly__core__DOT__bx)) 
                                           | (0xffU 
                                              & (IData)(vlSelfRef.core__DOT__wb)));
                                }
                            } else if (vlSelfRef.core__DOT__size) {
                                __Vdly__core__DOT__dx 
                                    = vlSelfRef.core__DOT__wb;
                            } else {
                                __Vdly__core__DOT__dx 
                                    = ((0xff00U & (IData)(__Vdly__core__DOT__dx)) 
                                       | (0xffU & (IData)(vlSelfRef.core__DOT__wb)));
                            }
                        } else if ((1U & ((IData)(vlSelfRef.core__DOT__dir)
                                           ? ((IData)(vlSelfRef.core__DOT__modrm) 
                                              >> 3U)
                                           : (IData)(vlSelfRef.core__DOT__modrm)))) {
                            if (vlSelfRef.core__DOT__size) {
                                __Vdly__core__DOT__cx 
                                    = vlSelfRef.core__DOT__wb;
                            } else {
                                __Vdly__core__DOT__cx 
                                    = ((0xff00U & (IData)(__Vdly__core__DOT__cx)) 
                                       | (0xffU & (IData)(vlSelfRef.core__DOT__wb)));
                            }
                        } else if (vlSelfRef.core__DOT__size) {
                            __Vdly__core__DOT__ax = vlSelfRef.core__DOT__wb;
                        } else {
                            __Vdly__core__DOT__ax = 
                                ((0xff00U & (IData)(__Vdly__core__DOT__ax)) 
                                 | (0xffU & (IData)(vlSelfRef.core__DOT__wb)));
                        }
                    } else {
                        vlSelfRef.o = (0xffU & (IData)(vlSelfRef.core__DOT__wb));
                        vlSelfRef.core__DOT__cp = 1U;
                        vlSelfRef.w = 1U;
                        __Vdly__core__DOT__m = 1U;
                    }
                } else if ((1U == (IData)(vlSelfRef.core__DOT__m))) {
                    if (vlSelfRef.core__DOT__size) {
                        __Vdly__core__DOT__size = 0U;
                        __Vdly__core__DOT__ea = vlSelfRef.core__DOT__ean;
                        vlSelfRef.w = 1U;
                        vlSelfRef.o = (0xffU & ((IData)(vlSelfRef.core__DOT__wb) 
                                                >> 8U));
                    } else {
                        __Vdly__core__DOT__m = 0U;
                        vlSelfRef.w = 0U;
                        vlSelfRef.core__DOT__cp = 0U;
                        __Vdly__core__DOT__r = ((2U 
                                                 == (IData)(vlSelfRef.core__DOT__next))
                                                 ? 0U
                                                 : 
                                                (7U 
                                                 & (IData)(vlSelfRef.core__DOT__next)));
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.core__DOT__r))) {
                if ((0U == (IData)(vlSelfRef.core__DOT__m))) {
                    __Vdly__core__DOT__ea = (0xffffU 
                                             & ((IData)(vlSelfRef.core__DOT__sp) 
                                                - (IData)(2U)));
                    __Vdly__core__DOT__sgn = vlSelfRef.core__DOT__ss;
                    __Vdly__core__DOT__m = 1U;
                    vlSelfRef.o = (0xffU & (IData)(vlSelfRef.core__DOT__wb));
                    vlSelfRef.core__DOT__cp = 1U;
                    __Vdly__core__DOT__t16 = vlSelfRef.core__DOT__sgn;
                    vlSelfRef.w = 1U;
                } else if ((1U == (IData)(vlSelfRef.core__DOT__m))) {
                    __Vdly__core__DOT__ea = vlSelfRef.core__DOT__ean;
                    __Vdly__core__DOT__m = 2U;
                    vlSelfRef.o = (0xffU & ((IData)(vlSelfRef.core__DOT__wb) 
                                            >> 8U));
                    vlSelfRef.w = 1U;
                } else if ((2U == (IData)(vlSelfRef.core__DOT__m))) {
                    __Vdly__core__DOT__sp = (0xffffU 
                                             & ((IData)(vlSelfRef.core__DOT__sp) 
                                                - (IData)(2U)));
                    __Vdly__core__DOT__sgn = vlSelfRef.core__DOT__t16;
                    __Vdly__core__DOT__m = 0U;
                    __Vdly__core__DOT__r = vlSelfRef.core__DOT__next;
                    vlSelfRef.core__DOT__cp = 0U;
                }
            } else if ((4U == (IData)(vlSelfRef.core__DOT__r))) {
                if ((0U == (IData)(vlSelfRef.core__DOT__m))) {
                    __Vdly__core__DOT__sgn = vlSelfRef.core__DOT__ss;
                    __Vdly__core__DOT__ea = vlSelfRef.core__DOT__sp;
                    __Vdly__core__DOT__m = 1U;
                    __Vdly__core__DOT__t16 = vlSelfRef.core__DOT__sgn;
                    vlSelfRef.core__DOT__cp = 1U;
                } else if ((1U == (IData)(vlSelfRef.core__DOT__m))) {
                    __Vdly__core__DOT__ea = vlSelfRef.core__DOT__ean;
                    __Vdly__core__DOT__m = 2U;
                    __Vdly__core__DOT__wb = ((0xff00U 
                                              & (IData)(__Vdly__core__DOT__wb)) 
                                             | (IData)(vlSelfRef.i));
                } else if ((2U == (IData)(vlSelfRef.core__DOT__m))) {
                    __Vdly__core__DOT__sp = (0xffffU 
                                             & ((IData)(2U) 
                                                + (IData)(vlSelfRef.core__DOT__sp)));
                    __Vdly__core__DOT__sgn = vlSelfRef.core__DOT__t16;
                    __Vdly__core__DOT__m = 0U;
                    __Vdly__core__DOT__wb = ((0xffU 
                                              & (IData)(__Vdly__core__DOT__wb)) 
                                             | ((IData)(vlSelfRef.i) 
                                                << 8U));
                    vlSelfRef.core__DOT__cp = 0U;
                    __Vdly__core__DOT__r = vlSelfRef.core__DOT__next;
                }
            } else if ((5U == (IData)(vlSelfRef.core__DOT__r))) {
                if (((((((((0U == (IData)(vlSelfRef.core__DOT__mi)) 
                           | (1U == (IData)(vlSelfRef.core__DOT__mi))) 
                          | (2U == (IData)(vlSelfRef.core__DOT__mi))) 
                         | (3U == (IData)(vlSelfRef.core__DOT__mi))) 
                        | (4U == (IData)(vlSelfRef.core__DOT__mi))) 
                       | (5U == (IData)(vlSelfRef.core__DOT__mi))) 
                      | (6U == (IData)(vlSelfRef.core__DOT__mi))) 
                     | (7U == (IData)(vlSelfRef.core__DOT__mi)))) {
                    if ((0U == (IData)(vlSelfRef.core__DOT__mi))) {
                        __Vdly__core__DOT__mi = 1U;
                        __Vdly__core__DOT__r = 3U;
                        __Vdly__core__DOT__wb = vlSelfRef.flags;
                        __Vdly__core__DOT__next = 5U;
                    } else if ((1U == (IData)(vlSelfRef.core__DOT__mi))) {
                        __Vdly__core__DOT__mi = 2U;
                        __Vdly__core__DOT__r = 3U;
                        __Vdly__core__DOT__wb = vlSelfRef.core__DOT__cs;
                    } else if ((2U == (IData)(vlSelfRef.core__DOT__mi))) {
                        __Vdly__core__DOT__mi = 3U;
                        __Vdly__core__DOT__r = 3U;
                        __Vdly__core__DOT__wb = vlSelfRef.core__DOT__ip;
                    } else if ((3U == (IData)(vlSelfRef.core__DOT__mi))) {
                        __Vdly__core__DOT__ea = ((IData)(vlSelfRef.core__DOT__interrupt) 
                                                 << 2U);
                        __Vdly__core__DOT__sgn = 0U;
                        __Vdly__core__DOT__mi = 4U;
                        vlSelfRef.core__DOT__cp = 1U;
                    } else if ((4U == (IData)(vlSelfRef.core__DOT__mi))) {
                        __Vdly__core__DOT__ip = ((0xff00U 
                                                  & (IData)(__Vdly__core__DOT__ip)) 
                                                 | (IData)(vlSelfRef.i));
                        __Vdly__core__DOT__ea = vlSelfRef.core__DOT__ean;
                        __Vdly__core__DOT__mi = 5U;
                    } else if ((5U == (IData)(vlSelfRef.core__DOT__mi))) {
                        __Vdly__core__DOT__ip = ((0xffU 
                                                  & (IData)(__Vdly__core__DOT__ip)) 
                                                 | ((IData)(vlSelfRef.i) 
                                                    << 8U));
                        __Vdly__core__DOT__ea = vlSelfRef.core__DOT__ean;
                        __Vdly__core__DOT__mi = 6U;
                    } else if ((6U == (IData)(vlSelfRef.core__DOT__mi))) {
                        __Vdly__core__DOT__ea = vlSelfRef.core__DOT__ean;
                        __Vdly__core__DOT__mi = 7U;
                        __Vdly__core__DOT__cs = ((0xff00U 
                                                  & (IData)(__Vdly__core__DOT__cs)) 
                                                 | (IData)(vlSelfRef.i));
                    } else {
                        __Vdly__core__DOT__mi = 0U;
                        __Vdly__core__DOT__cs = ((0xffU 
                                                  & (IData)(__Vdly__core__DOT__cs)) 
                                                 | ((IData)(vlSelfRef.i) 
                                                    << 8U));
                        vlSelfRef.core__DOT__cp = 0U;
                        __Vdly__core__DOT__r = 0U;
                        __Vdly__flags = (0xdffU & (IData)(__Vdly__flags));
                    }
                }
            } else if ((7U == (IData)(vlSelfRef.core__DOT__r))) {
                __Vdly__core__DOT__divr = ((1U & (IData)(
                                                         (vlSelfRef.core__DOT__div4c 
                                                          >> 0x20U)))
                                            ? vlSelfRef.core__DOT__div4
                                            : (IData)(vlSelfRef.core__DOT__div4c));
                __Vdly__core__DOT__diva = vlSelfRef.core__DOT__div4a;
                __Vdly__core__DOT__r = ((1U != (IData)(vlSelfRef.core__DOT__op1))
                                         ? 7U : 0U);
                __Vdly__core__DOT__op1 = (0xffffU & 
                                          ((IData)(vlSelfRef.core__DOT__op1) 
                                           - (IData)(1U)));
            }
        }
    } else {
        __Vdly__core__DOT__sgn = vlSelfRef.core__DOT__ds;
        __Vdly__core__DOT__rep = 0U;
        __Vdly__core__DOT__ip = 0x100U;
        __Vdly__core__DOT__r = 0U;
        __Vdly__core__DOT__t = 0U;
        __Vdly__core__DOT__m = 0U;
        __Vdly__core__DOT__mi = 0U;
        vlSelfRef.core__DOT__cp = 0U;
        vlSelfRef.ud = 0U;
        vlSelfRef.halt = 0U;
        vlSelfRef.core__DOT__intrack = 0U;
        vlSelfRef.core__DOT__term = 0U;
        __Vdly__core__DOT__over = 0U;
        __Vdly__core__DOT__cpen = 0U;
        __Vdly__flags = 3U;
        __Vdly__core__DOT__cs = 0U;
    }
    vlSelfRef.core__DOT__interrupt = __Vdly__core__DOT__interrupt;
    vlSelfRef.core__DOT__over = __Vdly__core__DOT__over;
    vlSelfRef.core__DOT__cpen = __Vdly__core__DOT__cpen;
    vlSelfRef.core__DOT__cpm = __Vdly__core__DOT__cpm;
    vlSelfRef.core__DOT__next = __Vdly__core__DOT__next;
    vlSelfRef.core__DOT__dir = __Vdly__core__DOT__dir;
    vlSelfRef.core__DOT__wb = __Vdly__core__DOT__wb;
    vlSelfRef.core__DOT__sign = __Vdly__core__DOT__sign;
    vlSelfRef.port_a = __Vdly__port_a;
    vlSelfRef.core__DOT__ds = __Vdly__core__DOT__ds;
    vlSelfRef.core__DOT__es = __Vdly__core__DOT__es;
    vlSelfRef.core__DOT__t16 = __Vdly__core__DOT__t16;
    vlSelfRef.core__DOT__modrm = __Vdly__core__DOT__modrm;
    vlSelfRef.core__DOT__ss = __Vdly__core__DOT__ss;
    vlSelfRef.core__DOT__m = __Vdly__core__DOT__m;
    vlSelfRef.core__DOT__mi = __Vdly__core__DOT__mi;
    vlSelfRef.core__DOT__r = __Vdly__core__DOT__r;
    vlSelfRef.core__DOT__sgn = __Vdly__core__DOT__sgn;
    vlSelfRef.core__DOT__ip = __Vdly__core__DOT__ip;
    vlSelfRef.core__DOT__cs = __Vdly__core__DOT__cs;
    vlSelfRef.core__DOT__ea = __Vdly__core__DOT__ea;
    vlSelfRef.core__DOT__rep = __Vdly__core__DOT__rep;
    vlSelfRef.core__DOT__sp = __Vdly__core__DOT__sp;
    vlSelfRef.core__DOT__bp = __Vdly__core__DOT__bp;
    vlSelfRef.core__DOT__di = __Vdly__core__DOT__di;
    vlSelfRef.core__DOT__si = __Vdly__core__DOT__si;
    vlSelfRef.core__DOT__opc = __Vdly__core__DOT__opc;
    vlSelfRef.core__DOT__bx = __Vdly__core__DOT__bx;
    vlSelfRef.core__DOT__t = __Vdly__core__DOT__t;
    vlSelfRef.core__DOT__dx = __Vdly__core__DOT__dx;
    vlSelfRef.core__DOT__cx = __Vdly__core__DOT__cx;
    vlSelfRef.core__DOT__alu = __Vdly__core__DOT__alu;
    vlSelfRef.core__DOT__ax = __Vdly__core__DOT__ax;
    vlSelfRef.core__DOT__divr = __Vdly__core__DOT__divr;
    vlSelfRef.flags = __Vdly__flags;
    vlSelfRef.core__DOT__diva = __Vdly__core__DOT__diva;
    vlSelfRef.core__DOT__op2 = __Vdly__core__DOT__op2;
    vlSelfRef.core__DOT__op1 = __Vdly__core__DOT__op1;
    vlSelfRef.core__DOT__size = __Vdly__core__DOT__size;
    vlSelfRef.core__DOT__ean = (0xffffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.core__DOT__ea)));
    vlSelfRef.a = (0xfffffU & ((IData)(vlSelfRef.core__DOT__cp)
                                ? (((IData)(vlSelfRef.core__DOT__sgn) 
                                    << 4U) + (IData)(vlSelfRef.core__DOT__ea))
                                : (((IData)(vlSelfRef.core__DOT__cs) 
                                    << 4U) + (IData)(vlSelfRef.core__DOT__ip))));
    vlSelfRef.core__DOT__tn = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.core__DOT__t)));
    vlSelfRef.m0 = ((0U == (IData)(vlSelfRef.core__DOT__t)) 
                    & (0U == (IData)(vlSelfRef.core__DOT__r)));
    vlSelfRef.core__DOT__opcode = ((0U != (IData)(vlSelfRef.core__DOT__t))
                                    ? (IData)(vlSelfRef.core__DOT__opc)
                                    : (IData)(vlSelfRef.i));
    vlSelfRef.core__DOT__repa = (1U & ((~ ((IData)(vlSelfRef.core__DOT__rep) 
                                           >> 1U)) 
                                       | (((IData)(vlSelfRef.core__DOT__rep) 
                                           >> 1U) & 
                                          (0U != (IData)(vlSelfRef.core__DOT__cx)))));
    vlSelfRef.core__DOT__repb = (((IData)(vlSelfRef.core__DOT__rep) 
                                  >> 1U) & (1U != (IData)(vlSelfRef.core__DOT__cx)));
    vlSelfRef.core__DOT__repc = (0xffffU & (((1U & (IData)(vlSelfRef.i))
                                              ? 2U : 1U) 
                                            * ((2U 
                                                & (IData)(vlSelfRef.core__DOT__rep))
                                                ? ((IData)(vlSelfRef.core__DOT__cx) 
                                                   - (IData)(1U))
                                                : 0U)));
    core__DOT____VdfgRegularize_h47660625_1_35 = (1U 
                                                  & (~ 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.core__DOT__alu)) 
                                                      | ((4U 
                                                          == (IData)(vlSelfRef.core__DOT__alu)) 
                                                         | (1U 
                                                            == (IData)(vlSelfRef.core__DOT__alu))))));
    core__DOT__rtfl = ((4U == (IData)(vlSelfRef.core__DOT__alu)) 
                       | ((5U == (IData)(vlSelfRef.core__DOT__alu)) 
                          | ((6U == (IData)(vlSelfRef.core__DOT__alu)) 
                             | (5U == (IData)(vlSelfRef.core__DOT__alu)))));
    core__DOT____VdfgRegularize_h47660625_1_5 = (1U 
                                                 & VL_REDXOR_16(
                                                                (0x880U 
                                                                 & (IData)(vlSelfRef.flags))));
    vlSelfRef.core__DOT__daa_a = (1U & ((9U < (0xfU 
                                               & (IData)(vlSelfRef.core__DOT__ax))) 
                                        | ((IData)(vlSelfRef.flags) 
                                           >> 4U)));
    core__DOT__div1 = ((vlSelfRef.core__DOT__divr << 1U) 
                       | (vlSelfRef.core__DOT__diva 
                          >> 0x1fU));
    vlSelfRef.core__DOT__mult = (((((IData)(vlSelfRef.core__DOT__imulw)
                                     ? (0xffffU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.core__DOT__op1) 
                                                                 >> 0xfU)))))
                                     : 0U) << 0x10U) 
                                  | (IData)(vlSelfRef.core__DOT__op1)) 
                                 * ((((IData)(vlSelfRef.core__DOT__imulw)
                                       ? (0xffffU & 
                                          (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.core__DOT__op2) 
                                                         >> 0xfU)))))
                                       : 0U) << 0x10U) 
                                    | (IData)(vlSelfRef.core__DOT__op2)));
    core__DOT____VdfgRegularize_h47660625_1_28 = (0x1ffffU 
                                                  & ((IData)(vlSelfRef.core__DOT__op1) 
                                                     + (IData)(vlSelfRef.core__DOT__op2)));
    core__DOT____VdfgRegularize_h47660625_1_32 = (0x1ffffU 
                                                  & ((IData)(vlSelfRef.core__DOT__op1) 
                                                     - (IData)(vlSelfRef.core__DOT__op2)));
    if ((0x400U & (IData)(vlSelfRef.flags))) {
        vlSelfRef.core__DOT__sinc = (0xffffU & ((IData)(vlSelfRef.core__DOT__si) 
                                                - ((IData)(vlSelfRef.core__DOT__size)
                                                    ? 2U
                                                    : 1U)));
        vlSelfRef.core__DOT__dinc = (0xffffU & ((IData)(vlSelfRef.core__DOT__di) 
                                                - ((IData)(vlSelfRef.core__DOT__size)
                                                    ? 2U
                                                    : 1U)));
    } else {
        vlSelfRef.core__DOT__sinc = (0xffffU & ((IData)(vlSelfRef.core__DOT__si) 
                                                + ((IData)(vlSelfRef.core__DOT__size)
                                                    ? 2U
                                                    : 1U)));
        vlSelfRef.core__DOT__dinc = (0xffffU & ((IData)(vlSelfRef.core__DOT__di) 
                                                + ((IData)(vlSelfRef.core__DOT__size)
                                                    ? 2U
                                                    : 1U)));
    }
    if (vlSelfRef.core__DOT__size) {
        vlSelfRef.core__DOT__divi = (((IData)(vlSelfRef.core__DOT__dx) 
                                      << 0x10U) | (IData)(vlSelfRef.core__DOT__ax));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_12 
            = vlSelfRef.core__DOT__ax;
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_14 
            = vlSelfRef.core__DOT__cx;
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_16 
            = vlSelfRef.core__DOT__dx;
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_18 
            = vlSelfRef.core__DOT__bx;
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_20 
            = (0xffffU & (IData)(vlSelfRef.core__DOT__sp));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_22 
            = (0xffffU & (IData)(vlSelfRef.core__DOT__bp));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_24 
            = (0xffffU & (IData)(vlSelfRef.core__DOT__si));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_25 
            = (0xffffU & (IData)(vlSelfRef.core__DOT__di));
    } else {
        vlSelfRef.core__DOT__divi = ((IData)(vlSelfRef.core__DOT__ax) 
                                     << 0x10U);
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_12 
            = (0xffU & (IData)(vlSelfRef.core__DOT__ax));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_14 
            = (0xffU & (IData)(vlSelfRef.core__DOT__cx));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_16 
            = (0xffU & (IData)(vlSelfRef.core__DOT__dx));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_18 
            = (0xffU & (IData)(vlSelfRef.core__DOT__bx));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_20 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.core__DOT__ax), 8U));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_22 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.core__DOT__cx), 8U));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_24 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.core__DOT__dx), 8U));
        vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_25 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.core__DOT__bx), 8U));
    }
    if ((0U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__ax;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_12;
    } else if ((1U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__cx;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_14;
    } else if ((2U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__dx;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_16;
    } else if ((3U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__bx;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_18;
    } else if ((4U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__sp;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_20;
    } else if ((5U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__bp;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_22;
    } else if ((6U == (7U & (IData)(vlSelfRef.i)))) {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__si;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_24;
    } else {
        vlSelfRef.core__DOT__r16 = vlSelfRef.core__DOT__di;
        vlSelfRef.core__DOT__r20 = vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_25;
    }
    if (vlSelfRef.core__DOT__size) {
        core__DOT__rs = (0xfU & (IData)(vlSelfRef.core__DOT__op2));
        core__DOT__ri = (0xffffU & (IData)(vlSelfRef.core__DOT__op1));
    } else {
        core__DOT__rs = (0xfU & (7U & (IData)(vlSelfRef.core__DOT__op2)));
        core__DOT__ri = (0xffffU & ((0xff00U & ((IData)(vlSelfRef.core__DOT__op1) 
                                                << 8U)) 
                                    | (0xffU & (IData)(vlSelfRef.core__DOT__op1))));
    }
    core__DOT____VdfgRegularize_h47660625_1_36 = (1U 
                                                  & ((IData)(vlSelfRef.core__DOT__op1) 
                                                     >> 
                                                     ((IData)(vlSelfRef.core__DOT__size)
                                                       ? 0xfU
                                                       : 7U)));
    vlSelfRef.core__DOT__branch = ((0x80U & (((IData)(core__DOT____VdfgRegularize_h47660625_1_5) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & ((IData)(vlSelfRef.flags) 
                                                   << 1U)))) 
                                   | (((IData)(core__DOT____VdfgRegularize_h47660625_1_5) 
                                       << 6U) | ((0x20U 
                                                  & ((IData)(vlSelfRef.flags) 
                                                     << 3U)) 
                                                 | ((0x10U 
                                                     & ((IData)(vlSelfRef.flags) 
                                                        >> 3U)) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x41U 
                                                                  & (IData)(vlSelfRef.flags)))) 
                                                        << 3U) 
                                                       | ((4U 
                                                           & ((IData)(vlSelfRef.flags) 
                                                              >> 4U)) 
                                                          | ((2U 
                                                              & ((IData)(vlSelfRef.flags) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.flags) 
                                                                   >> 0xbU)))))))));
    vlSelfRef.core__DOT__aaa_f = ((0xfe0U & (IData)(vlSelfRef.flags)) 
                                  | (((IData)(vlSelfRef.core__DOT__daa_a) 
                                      << 4U) | ((0xeU 
                                                 & (IData)(vlSelfRef.flags)) 
                                                | (IData)(vlSelfRef.core__DOT__daa_a))));
    if (vlSelfRef.core__DOT__daa_a) {
        vlSelfRef.core__DOT__aaa_r = ((0xff00U & (((IData)(vlSelfRef.core__DOT__daa_a)
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.core__DOT__opcode))
                                                     ? 
                                                    ((0xffU 
                                                      & ((IData)(vlSelfRef.core__DOT__ax) 
                                                         >> 8U)) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(vlSelfRef.core__DOT__ax) 
                                                         >> 8U))))
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.core__DOT__ax) 
                                                       >> 8U))) 
                                                  << 8U)) 
                                      | (0xfU & ((IData)(vlSelfRef.core__DOT__daa_a)
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.core__DOT__opcode))
                                                   ? 
                                                  ((0xfU 
                                                    & (IData)(vlSelfRef.core__DOT__ax)) 
                                                   - (IData)(6U))
                                                   : 
                                                  ((IData)(6U) 
                                                   + 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.core__DOT__ax))))
                                                  : 
                                                 (0xffU 
                                                  & (IData)(vlSelfRef.core__DOT__ax)))));
        core__DOT__daa_i = (0x1ffU & ((8U & (IData)(vlSelfRef.core__DOT__opcode))
                                       ? ((0xffU & (IData)(vlSelfRef.core__DOT__ax)) 
                                          - (IData)(6U))
                                       : ((IData)(6U) 
                                          + (0xffU 
                                             & (IData)(vlSelfRef.core__DOT__ax)))));
    } else {
        vlSelfRef.core__DOT__aaa_r = vlSelfRef.core__DOT__ax;
        core__DOT__daa_i = (0x1ffU & (0xffU & (IData)(vlSelfRef.core__DOT__ax)));
    }
    core__DOT__div1c = (0x1ffffffffULL & ((QData)((IData)(core__DOT__div1)) 
                                          - (QData)((IData)(vlSelfRef.core__DOT__divb))));
    vlSelfRef.core__DOT__multzf = (0U == ((IData)(vlSelfRef.core__DOT__size)
                                           ? vlSelfRef.core__DOT__mult
                                           : (0xffffU 
                                              & vlSelfRef.core__DOT__mult)));
    vlSelfRef.core__DOT__multcf = (0U != ((IData)(vlSelfRef.core__DOT__size)
                                           ? VL_SHIFTR_III(32,32,32, vlSelfRef.core__DOT__mult, 0x10U)
                                           : (0xffU 
                                              & (vlSelfRef.core__DOT__mult 
                                                 >> 8U))));
    vlSelfRef.core__DOT__r53 = ((0U == (7U & ((IData)(vlSelfRef.i) 
                                              >> 3U)))
                                 ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_12)
                                 : ((1U == (7U & ((IData)(vlSelfRef.i) 
                                                  >> 3U)))
                                     ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_14)
                                     : ((2U == (7U 
                                                & ((IData)(vlSelfRef.i) 
                                                   >> 3U)))
                                         ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_16)
                                         : ((3U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.i) 
                                               >> 3U)))
                                             ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_18)
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.i) 
                                                     >> 3U)))
                                                 ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_20)
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.i) 
                                                      >> 3U)))
                                                  ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_22)
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.i) 
                                                       >> 3U)))
                                                   ? (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_24)
                                                   : (IData)(vlSelfRef.core__DOT____VdfgRegularize_h47660625_1_25))))))));
    core__DOT___rol = (0x1ffffffffULL & ((((QData)((IData)(core__DOT__ri)) 
                                           << 0x10U) 
                                          | (QData)((IData)(core__DOT__ri))) 
                                         << (IData)(core__DOT__rs)));
    core__DOT___ror = (0x1ffffffffULL & (((QData)((IData)(
                                                          (((IData)(core__DOT__ri) 
                                                            << 0x10U) 
                                                           | (IData)(core__DOT__ri)))) 
                                          << 1U) >> (IData)(core__DOT__rs)));
    core__DOT___sar = (0x1ffffffffULL & VL_SHIFTR_QQI(33,33,8, 
                                                      ((QData)((IData)(
                                                                       (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(core__DOT__ri) 
                                                                                >> 0xfU)))) 
                                                                         << 0x10U) 
                                                                        | (IData)(core__DOT__ri)))) 
                                                       << 1U), 
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.core__DOT__op2))));
    core__DOT___rcl = (0x1ffffffffULL & ((((QData)((IData)(core__DOT__ri)) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            ((0x8000U 
                                                              & ((IData)(vlSelfRef.flags) 
                                                                 << 0xfU)) 
                                                             | (0x7fffU 
                                                                & ((IData)(core__DOT__ri) 
                                                                   >> 1U)))))) 
                                         << (IData)(core__DOT__rs)));
    core__DOT___rcr = (0x1ffffffffULL & ((((QData)((IData)(
                                                           (0x7fffU 
                                                            & (IData)(core__DOT__ri)))) 
                                           << 0x12U) 
                                          | (QData)((IData)(
                                                            ((0x20000U 
                                                              & ((IData)(vlSelfRef.flags) 
                                                                 << 0x11U)) 
                                                             | ((IData)(core__DOT__ri) 
                                                                << 1U))))) 
                                         >> (IData)(core__DOT__rs)));
    core__DOT___shr = (0x1ffffU & VL_SHIFTR_III(17,17,8, 
                                                (((IData)(core__DOT__ri) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.flags))), 
                                                (0xffU 
                                                 & (IData)(vlSelfRef.core__DOT__op2))));
    if ((0U == (IData)(vlSelfRef.core__DOT__alu))) {
        vlSelfRef.core__DOT__alu_r = (0x1ffffU & core__DOT____VdfgRegularize_h47660625_1_28);
        vlSelfRef.core__DOT__barr = (0xffffU & ((IData)(vlSelfRef.core__DOT__size)
                                                 ? (IData)(
                                                           (core__DOT___rol 
                                                            >> 0x10U))
                                                 : 
                                                (0xffU 
                                                 & (IData)(
                                                           (core__DOT___rol 
                                                            >> 0x10U)))));
    } else {
        vlSelfRef.core__DOT__alu_r = (0x1ffffU & ((1U 
                                                   == (IData)(vlSelfRef.core__DOT__alu))
                                                   ? 
                                                  ((IData)(vlSelfRef.core__DOT__op1) 
                                                   | (IData)(vlSelfRef.core__DOT__op2))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.core__DOT__alu))
                                                    ? 
                                                   (core__DOT____VdfgRegularize_h47660625_1_28 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlSelfRef.flags)))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.core__DOT__alu))
                                                     ? 
                                                    (core__DOT____VdfgRegularize_h47660625_1_32 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlSelfRef.flags)))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.core__DOT__alu))
                                                      ? 
                                                     ((IData)(vlSelfRef.core__DOT__op1) 
                                                      & (IData)(vlSelfRef.core__DOT__op2))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.core__DOT__alu))
                                                       ? 
                                                      ((IData)(vlSelfRef.core__DOT__op1) 
                                                       ^ (IData)(vlSelfRef.core__DOT__op2))
                                                       : core__DOT____VdfgRegularize_h47660625_1_32))))));
        vlSelfRef.core__DOT__barr = (0xffffU & ((2U 
                                                 == (IData)(vlSelfRef.core__DOT__alu))
                                                 ? 
                                                ((IData)(vlSelfRef.core__DOT__size)
                                                  ? (IData)(
                                                            (core__DOT___rcl 
                                                             >> 0x10U))
                                                  : 
                                                 (0xffU 
                                                  & (IData)(
                                                            (core__DOT___rcl 
                                                             >> 0x10U))))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.core__DOT__alu))
                                                  ? 
                                                 ((IData)(vlSelfRef.core__DOT__size)
                                                   ? (IData)(
                                                             (core__DOT___ror 
                                                              >> 1U))
                                                   : 
                                                  (0xffU 
                                                   & (IData)(
                                                             (core__DOT___ror 
                                                              >> 9U))))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.core__DOT__alu))
                                                   ? 
                                                  ((IData)(vlSelfRef.core__DOT__size)
                                                    ? (IData)(
                                                              (core__DOT___rcr 
                                                               >> 1U))
                                                    : 
                                                   (0xffU 
                                                    & (IData)(
                                                              (core__DOT___rcr 
                                                               >> 9U))))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.core__DOT__alu))
                                                    ? 
                                                   ((IData)(vlSelfRef.core__DOT__size)
                                                     ? 
                                                    (core__DOT___shr 
                                                     >> 1U)
                                                     : 
                                                    (0xffU 
                                                     & (core__DOT___shr 
                                                        >> 9U)))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.core__DOT__alu))
                                                     ? 
                                                    ((IData)(vlSelfRef.core__DOT__size)
                                                      ? (IData)(
                                                                (core__DOT___sar 
                                                                 >> 1U))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (core__DOT___sar 
                                                                 >> 9U))))
                                                     : 
                                                    ((IData)(vlSelfRef.core__DOT__size)
                                                      ? 
                                                     VL_SHIFTL_III(16,16,8, (IData)(core__DOT__ri), 
                                                                   (0xffU 
                                                                    & (IData)(vlSelfRef.core__DOT__op2)))
                                                      : 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,8, (IData)(core__DOT__ri), 
                                                                      (0xffU 
                                                                       & (IData)(vlSelfRef.core__DOT__op2)))))))))));
    }
    core__DOT__daa_x = (1U & ((0x9fU < (0xffU & (IData)(core__DOT__daa_i))) 
                              | ((IData)(vlSelfRef.core__DOT__daa_a)
                                  ? ((IData)(core__DOT__daa_i) 
                                     >> 8U) : (IData)(vlSelfRef.flags))));
    core__DOT__div2 = ((((1U & (IData)((core__DOT__div1c 
                                        >> 0x20U)))
                          ? core__DOT__div1 : (IData)(core__DOT__div1c)) 
                        << 1U) | (1U & (vlSelfRef.core__DOT__diva 
                                        >> 0x1eU)));
    core__DOT___sf = (1U & (vlSelfRef.core__DOT__alu_r 
                            >> ((IData)(vlSelfRef.core__DOT__size)
                                 ? 0xfU : 7U)));
    vlSelfRef.core__DOT__daa_r = (0xffffU & ((IData)(core__DOT__daa_x)
                                              ? ((8U 
                                                  & (IData)(vlSelfRef.core__DOT__opcode))
                                                  ? 
                                                 ((0xffU 
                                                   & (IData)(core__DOT__daa_i)) 
                                                  - (IData)(0x60U))
                                                  : 
                                                 ((IData)(0x60U) 
                                                  + 
                                                  (0xffU 
                                                   & (IData)(core__DOT__daa_i))))
                                              : (0xffU 
                                                 & (IData)(core__DOT__daa_i))));
    core__DOT__div2c = (0x1ffffffffULL & ((QData)((IData)(core__DOT__div2)) 
                                          - (QData)((IData)(vlSelfRef.core__DOT__divb))));
    vlSelfRef.core__DOT__alu_f = (2U | ((((IData)(core__DOT____VdfgRegularize_h47660625_1_35) 
                                          & (((IData)(core__DOT____VdfgRegularize_h47660625_1_36) 
                                              ^ (((IData)(vlSelfRef.core__DOT__op2) 
                                                  >> 
                                                  ((IData)(vlSelfRef.core__DOT__size)
                                                    ? 0xfU
                                                    : 7U)) 
                                                 ^ 
                                                 ((0U 
                                                   == (IData)(vlSelfRef.core__DOT__alu)) 
                                                  | (2U 
                                                     == (IData)(vlSelfRef.core__DOT__alu))))) 
                                             & ((IData)(core__DOT____VdfgRegularize_h47660625_1_36) 
                                                ^ (IData)(core__DOT___sf)))) 
                                         << 0xbU) | 
                                        ((0x700U & (IData)(vlSelfRef.flags)) 
                                         | (((IData)(core__DOT___sf) 
                                             << 7U) 
                                            | (((0U 
                                                 == 
                                                 ((IData)(vlSelfRef.core__DOT__size)
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelfRef.core__DOT__alu_r)
                                                   : 
                                                  (0xffU 
                                                   & vlSelfRef.core__DOT__alu_r))) 
                                                << 6U) 
                                               | ((0xfffffff0U 
                                                   & (((IData)(core__DOT____VdfgRegularize_h47660625_1_35) 
                                                       << 4U) 
                                                      & ((IData)(vlSelfRef.core__DOT__op1) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.core__DOT__op2) 
                                                          ^ vlSelfRef.core__DOT__alu_r)))) 
                                                  | ((4U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0xffU 
                                                                        & vlSelfRef.core__DOT__alu_r))) 
                                                         << 2U)) 
                                                     | ((IData)(core__DOT____VdfgRegularize_h47660625_1_35) 
                                                        & ((0x10U 
                                                            >= 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                ((IData)(vlSelfRef.core__DOT__size)
                                                                  ? 0xfU
                                                                  : 7U)))) 
                                                           && (1U 
                                                               & (vlSelfRef.core__DOT__alu_r 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      ((IData)(vlSelfRef.core__DOT__size)
                                                                        ? 0xfU
                                                                        : 7U))))))))))))));
    core__DOT____VdfgRegularize_h47660625_1_48 = (1U 
                                                  & ((IData)(vlSelfRef.core__DOT__barr) 
                                                     >> 
                                                     ((IData)(vlSelfRef.core__DOT__size)
                                                       ? 0xfU
                                                       : 7U)));
    vlSelfRef.core__DOT__daa_f = (2U | ((0xf00U & (IData)(vlSelfRef.flags)) 
                                        | ((0x80U & (IData)(vlSelfRef.core__DOT__daa_r)) 
                                           | (((0U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelfRef.core__DOT__daa_r))) 
                                               << 6U) 
                                              | (((IData)(vlSelfRef.core__DOT__daa_a) 
                                                  << 4U) 
                                                 | ((4U 
                                                     & ((~ 
                                                         VL_REDXOR_32(
                                                                      (0xffU 
                                                                       & (IData)(vlSelfRef.core__DOT__daa_r)))) 
                                                        << 2U)) 
                                                    | (IData)(core__DOT__daa_x)))))));
    core__DOT__div3 = ((((1U & (IData)((core__DOT__div2c 
                                        >> 0x20U)))
                          ? core__DOT__div2 : (IData)(core__DOT__div2c)) 
                        << 1U) | (1U & (vlSelfRef.core__DOT__diva 
                                        >> 0x1dU)));
    vlSelfRef.core__DOT__barf = (2U | ((((5U == (IData)(vlSelfRef.core__DOT__alu))
                                          ? (IData)(core__DOT____VdfgRegularize_h47660625_1_48)
                                          : ((7U != (IData)(vlSelfRef.core__DOT__alu)) 
                                             & (((IData)(vlSelfRef.core__DOT__barr) 
                                                 >> 
                                                 (0xfU 
                                                  & (((IData)(vlSelfRef.core__DOT__size)
                                                       ? 0xfU
                                                       : 7U) 
                                                     - (IData)(1U)))) 
                                                ^ (IData)(core__DOT____VdfgRegularize_h47660625_1_48)))) 
                                        << 0xbU) | 
                                       ((0x700U & (IData)(vlSelfRef.flags)) 
                                        | ((0x80U & 
                                            (((IData)(core__DOT__rtfl)
                                               ? (IData)(core__DOT____VdfgRegularize_h47660625_1_48)
                                               : ((IData)(vlSelfRef.flags) 
                                                  >> 7U)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & (((IData)(core__DOT__rtfl)
                                                    ? 
                                                   (0U 
                                                    == 
                                                    ((IData)(vlSelfRef.core__DOT__size)
                                                      ? (IData)(vlSelfRef.core__DOT__barr)
                                                      : 
                                                     (0xffU 
                                                      & (IData)(vlSelfRef.core__DOT__barr))))
                                                    : 
                                                   ((IData)(vlSelfRef.flags) 
                                                    >> 6U)) 
                                                  << 6U)) 
                                              | ((0x10U 
                                                  & (IData)(vlSelfRef.flags)) 
                                                 | ((4U 
                                                     & (((IData)(core__DOT__rtfl)
                                                          ? 
                                                         (~ 
                                                          VL_REDXOR_32(
                                                                       (0xffU 
                                                                        & (IData)(vlSelfRef.core__DOT__barr))))
                                                          : 
                                                         ((IData)(vlSelfRef.flags) 
                                                          >> 2U)) 
                                                        << 2U)) 
                                                    | (1U 
                                                       & ((0U 
                                                           == (IData)(vlSelfRef.core__DOT__alu))
                                                           ? (IData)(
                                                                     (core__DOT___rol 
                                                                      >> 0x20U))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelfRef.core__DOT__alu))
                                                            ? (IData)(
                                                                      (core__DOT___rcl 
                                                                       >> 0x20U))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelfRef.core__DOT__alu))
                                                             ? (IData)(core__DOT___ror)
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelfRef.core__DOT__alu))
                                                              ? (IData)(core__DOT___rcr)
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelfRef.core__DOT__alu))
                                                               ? 
                                                              (1U 
                                                               & (VL_SHIFTL_III(17,17,8, (IData)(core__DOT__ri), 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.core__DOT__op2))) 
                                                                  >> 0x10U))
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlSelfRef.core__DOT__alu))
                                                                ? core__DOT___shr
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlSelfRef.core__DOT__alu)) 
                                                                & (IData)(core__DOT___sar))))))))))))))));
    core__DOT__div3c = (0x1ffffffffULL & ((QData)((IData)(core__DOT__div3)) 
                                          - (QData)((IData)(vlSelfRef.core__DOT__divb))));
    vlSelfRef.core__DOT__div4 = ((((1U & (IData)((core__DOT__div3c 
                                                  >> 0x20U)))
                                    ? core__DOT__div3
                                    : (IData)(core__DOT__div3c)) 
                                  << 1U) | (1U & (vlSelfRef.core__DOT__diva 
                                                  >> 0x1cU)));
    vlSelfRef.core__DOT__div4c = (0x1ffffffffULL & 
                                  ((QData)((IData)(vlSelfRef.core__DOT__div4)) 
                                   - (QData)((IData)(vlSelfRef.core__DOT__divb))));
    vlSelfRef.core__DOT__div4a = ((vlSelfRef.core__DOT__diva 
                                   << 4U) | ((8U & 
                                              ((~ (IData)(
                                                          (core__DOT__div1c 
                                                           >> 0x20U))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & ((~ (IData)(
                                                               (core__DOT__div2c 
                                                                >> 0x20U))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((~ (IData)(
                                                                  (core__DOT__div3c 
                                                                   >> 0x20U))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(
                                                                   (vlSelfRef.core__DOT__div4c 
                                                                    >> 0x20U))))))));
}

void Vcore___024root___eval_triggers__act(Vcore___024root* vlSelf);

bool Vcore___024root___eval_phase__act(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcore___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcore___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcore___024root___eval_phase__nba(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcore___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__ico(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__nba(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vcore___024root___eval(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("core.v", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcore___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("core.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcore___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("core.v", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcore___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcore___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelfRef.ce & 0xfeU))) {
        Verilated::overWidthError("ce");}
    if (VL_UNLIKELY((vlSelfRef.intr & 0xfeU))) {
        Verilated::overWidthError("intr");}
}
#endif  // VL_DEBUG
