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
    // Body
    vlSelfRef.core__DOT__signex = ((0xff00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.in) 
                                                              >> 7U)))) 
                                               << 8U)) 
                                   | (IData)(vlSelfRef.in));
    vlSelfRef.core__DOT__repc = (0xffffU & (((1U & (IData)(vlSelfRef.in))
                                              ? 2U : 1U) 
                                            * ((2U 
                                                & (IData)(vlSelfRef.core__DOT__rep))
                                                ? ((IData)(vlSelfRef.cx) 
                                                   - (IData)(1U))
                                                : 0U)));
    vlSelfRef.core__DOT__rin = ((0U == (7U & (IData)(vlSelfRef.in)))
                                 ? (IData)(vlSelfRef.ax)
                                 : ((1U == (7U & (IData)(vlSelfRef.in)))
                                     ? (IData)(vlSelfRef.cx)
                                     : ((2U == (7U 
                                                & (IData)(vlSelfRef.in)))
                                         ? (IData)(vlSelfRef.dx)
                                         : ((3U == 
                                             (7U & (IData)(vlSelfRef.in)))
                                             ? (IData)(vlSelfRef.bx)
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelfRef.in)))
                                                 ? (IData)(vlSelfRef.sp)
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.in)))
                                                  ? (IData)(vlSelfRef.bp)
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.in)))
                                                   ? (IData)(vlSelfRef.si)
                                                   : (IData)(vlSelfRef.di))))))));
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
    CData/*0:0*/ core__DOT__alu_sf;
    core__DOT__alu_sf = 0;
    CData/*0:0*/ core__DOT____VdfgRegularize_h47660625_1_6;
    core__DOT____VdfgRegularize_h47660625_1_6 = 0;
    IData/*16:0*/ core__DOT____VdfgRegularize_h47660625_1_10;
    core__DOT____VdfgRegularize_h47660625_1_10 = 0;
    IData/*16:0*/ core__DOT____VdfgRegularize_h47660625_1_13;
    core__DOT____VdfgRegularize_h47660625_1_13 = 0;
    CData/*0:0*/ core__DOT____VdfgRegularize_h47660625_1_17;
    core__DOT____VdfgRegularize_h47660625_1_17 = 0;
    CData/*0:0*/ core__DOT____VdfgRegularize_h47660625_1_18;
    core__DOT____VdfgRegularize_h47660625_1_18 = 0;
    CData/*3:0*/ __Vdly__core__DOT__fn;
    __Vdly__core__DOT__fn = 0;
    CData/*3:0*/ __Vdly__core__DOT__fnext;
    __Vdly__core__DOT__fnext = 0;
    CData/*3:0*/ __Vdly__core__DOT__s1;
    __Vdly__core__DOT__s1 = 0;
    CData/*3:0*/ __Vdly__core__DOT__s2;
    __Vdly__core__DOT__s2 = 0;
    CData/*0:0*/ __Vdly__core__DOT__cp;
    __Vdly__core__DOT__cp = 0;
    CData/*0:0*/ __Vdly__core__DOT__cpen;
    __Vdly__core__DOT__cpen = 0;
    CData/*7:0*/ __Vdly__core__DOT__modrm;
    __Vdly__core__DOT__modrm = 0;
    SData/*15:0*/ __Vdly__core__DOT__segment;
    __Vdly__core__DOT__segment = 0;
    CData/*0:0*/ __Vdly__core__DOT__over;
    __Vdly__core__DOT__over = 0;
    CData/*1:0*/ __Vdly__core__DOT__rep;
    __Vdly__core__DOT__rep = 0;
    SData/*15:0*/ __Vdly__core__DOT__ea;
    __Vdly__core__DOT__ea = 0;
    SData/*15:0*/ __Vdly__core__DOT__wb;
    __Vdly__core__DOT__wb = 0;
    CData/*7:0*/ __Vdly__core__DOT__intr;
    __Vdly__core__DOT__intr = 0;
    CData/*7:0*/ __Vdly__core__DOT__opcode;
    __Vdly__core__DOT__opcode = 0;
    SData/*15:0*/ __Vdly__ip;
    __Vdly__ip = 0;
    CData/*0:0*/ __Vdly__core__DOT__size;
    __Vdly__core__DOT__size = 0;
    CData/*0:0*/ __Vdly__core__DOT__dir;
    __Vdly__core__DOT__dir = 0;
    CData/*2:0*/ __Vdly__core__DOT__alu;
    __Vdly__core__DOT__alu = 0;
    SData/*11:0*/ __Vdly__flags;
    __Vdly__flags = 0;
    SData/*15:0*/ __Vdly__cx;
    __Vdly__cx = 0;
    SData/*15:0*/ __Vdly__ax;
    __Vdly__ax = 0;
    SData/*15:0*/ __Vdly__core__DOT__op1;
    __Vdly__core__DOT__op1 = 0;
    SData/*15:0*/ __Vdly__dx;
    __Vdly__dx = 0;
    SData/*15:0*/ __Vdly__core__DOT__op2;
    __Vdly__core__DOT__op2 = 0;
    SData/*15:0*/ __Vdly__es;
    __Vdly__es = 0;
    SData/*15:0*/ __Vdly__cs;
    __Vdly__cs = 0;
    SData/*15:0*/ __Vdly__ss;
    __Vdly__ss = 0;
    SData/*15:0*/ __Vdly__ds;
    __Vdly__ds = 0;
    SData/*15:0*/ __Vdly__fs;
    __Vdly__fs = 0;
    SData/*15:0*/ __Vdly__gs;
    __Vdly__gs = 0;
    SData/*15:0*/ __Vdly__sp;
    __Vdly__sp = 0;
    SData/*15:0*/ __Vdly__port_a;
    __Vdly__port_a = 0;
    IData/*31:0*/ __Vdly__core__DOT__divr;
    __Vdly__core__DOT__divr = 0;
    CData/*0:0*/ __Vdly__core__DOT__sign;
    __Vdly__core__DOT__sign = 0;
    IData/*31:0*/ __Vdly__core__DOT__diva;
    __Vdly__core__DOT__diva = 0;
    SData/*15:0*/ __Vdly__di;
    __Vdly__di = 0;
    SData/*15:0*/ __Vdly__core__DOT__tmp16;
    __Vdly__core__DOT__tmp16 = 0;
    // Body
    __Vdly__core__DOT__tmp16 = vlSelfRef.core__DOT__tmp16;
    __Vdly__core__DOT__sign = vlSelfRef.core__DOT__sign;
    __Vdly__port_a = vlSelfRef.port_a;
    __Vdly__gs = vlSelfRef.gs;
    __Vdly__fs = vlSelfRef.fs;
    __Vdly__ds = vlSelfRef.ds;
    __Vdly__ss = vlSelfRef.ss;
    __Vdly__es = vlSelfRef.es;
    __Vdly__core__DOT__dir = vlSelfRef.core__DOT__dir;
    __Vdly__core__DOT__opcode = vlSelfRef.core__DOT__opcode;
    __Vdly__core__DOT__intr = vlSelfRef.core__DOT__intr;
    __Vdly__core__DOT__wb = vlSelfRef.core__DOT__wb;
    __Vdly__core__DOT__over = vlSelfRef.core__DOT__over;
    __Vdly__core__DOT__modrm = vlSelfRef.core__DOT__modrm;
    __Vdly__core__DOT__cpen = vlSelfRef.core__DOT__cpen;
    __Vdly__core__DOT__s2 = vlSelfRef.core__DOT__s2;
    __Vdly__core__DOT__s1 = vlSelfRef.core__DOT__s1;
    __Vdly__core__DOT__fnext = vlSelfRef.core__DOT__fnext;
    __Vdly__core__DOT__fn = vlSelfRef.core__DOT__fn;
    __Vdly__cs = vlSelfRef.cs;
    __Vdly__ip = vlSelfRef.ip;
    __Vdly__core__DOT__ea = vlSelfRef.core__DOT__ea;
    __Vdly__core__DOT__segment = vlSelfRef.core__DOT__segment;
    __Vdly__core__DOT__cp = vlSelfRef.core__DOT__cp;
    __Vdly__sp = vlSelfRef.sp;
    __Vdly__core__DOT__rep = vlSelfRef.core__DOT__rep;
    __Vdly__di = vlSelfRef.di;
    __Vdly__dx = vlSelfRef.dx;
    __Vdly__ax = vlSelfRef.ax;
    __Vdly__cx = vlSelfRef.cx;
    __Vdly__core__DOT__alu = vlSelfRef.core__DOT__alu;
    __Vdly__core__DOT__size = vlSelfRef.core__DOT__size;
    __Vdly__flags = vlSelfRef.flags;
    __Vdly__core__DOT__op2 = vlSelfRef.core__DOT__op2;
    __Vdly__core__DOT__op1 = vlSelfRef.core__DOT__op1;
    __Vdly__core__DOT__divr = vlSelfRef.core__DOT__divr;
    __Vdly__core__DOT__diva = vlSelfRef.core__DOT__diva;
    if (vlSelfRef.reset_n) {
        if (vlSelfRef.ce) {
            vlSelfRef.port_r = 0U;
            vlSelfRef.port_w = 0U;
            if (((((((((0U == (IData)(vlSelfRef.core__DOT__fn)) 
                       | (1U == (IData)(vlSelfRef.core__DOT__fn))) 
                      | (2U == (IData)(vlSelfRef.core__DOT__fn))) 
                     | (3U == (IData)(vlSelfRef.core__DOT__fn))) 
                    | (4U == (IData)(vlSelfRef.core__DOT__fn))) 
                   | (5U == (IData)(vlSelfRef.core__DOT__fn))) 
                  | (6U == (IData)(vlSelfRef.core__DOT__fn))) 
                 | (7U == (IData)(vlSelfRef.core__DOT__fn)))) {
                if ((0U == (IData)(vlSelfRef.core__DOT__fn))) {
                    __Vdly__core__DOT__fn = 1U;
                    __Vdly__core__DOT__fnext = 0U;
                    __Vdly__core__DOT__s1 = 0U;
                    __Vdly__core__DOT__s2 = 0U;
                    __Vdly__core__DOT__cp = 0U;
                    __Vdly__core__DOT__cpen = 1U;
                    __Vdly__core__DOT__modrm = 0U;
                    __Vdly__core__DOT__segment = vlSelfRef.ds;
                    __Vdly__core__DOT__over = 0U;
                    __Vdly__core__DOT__rep = 0U;
                    __Vdly__core__DOT__ea = 0U;
                    vlSelfRef.we = 0U;
                    __Vdly__core__DOT__wb = 0U;
                    if ((((IData)(vlSelfRef.core__DOT__iack) 
                          ^ (IData)(vlSelfRef.irq)) 
                         & ((IData)(vlSelfRef.flags) 
                            >> 9U))) {
                        __Vdly__core__DOT__fn = 4U;
                        __Vdly__core__DOT__intr = vlSelfRef.irq_in;
                        vlSelfRef.core__DOT__iack = vlSelfRef.irq;
                    } else if (((IData)((0x300U == 
                                         (0x300U & (IData)(vlSelfRef.flags)))) 
                                & (IData)(vlSelfRef.core__DOT__trace_ff))) {
                        __Vdly__core__DOT__fn = 4U;
                        __Vdly__core__DOT__intr = 1U;
                    }
                    if ((IData)((0x300U == (0x300U 
                                            & (IData)(vlSelfRef.flags))))) {
                        vlSelfRef.core__DOT__trace_ff 
                            = (1U & (~ (IData)(vlSelfRef.core__DOT__trace_ff)));
                    }
                } else if ((1U == (IData)(vlSelfRef.core__DOT__fn))) {
                    __Vdly__core__DOT__fn = 1U;
                    __Vdly__core__DOT__opcode = vlSelfRef.in;
                    __Vdly__ip = (0xffffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.ip)));
                    __Vdly__core__DOT__size = (1U & (IData)(vlSelfRef.in));
                    __Vdly__core__DOT__dir = (1U & 
                                              ((IData)(vlSelfRef.in) 
                                               >> 1U));
                    __Vdly__core__DOT__alu = (7U & 
                                              ((IData)(vlSelfRef.in) 
                                               >> 3U));
                    if ((0x80U & (IData)(vlSelfRef.in))) {
                        if ((0x40U & (IData)(vlSelfRef.in))) {
                            if ((0x20U & (IData)(vlSelfRef.in))) {
                                if ((0x10U & (IData)(vlSelfRef.in))) {
                                    if ((8U & (IData)(vlSelfRef.in))) {
                                        if ((4U & (IData)(vlSelfRef.in))) {
                                            if ((2U 
                                                 & (IData)(vlSelfRef.in))) {
                                                __Vdly__core__DOT__fn = 2U;
                                                __Vdly__core__DOT__dir = 0U;
                                            } else {
                                                __Vdly__core__DOT__fn = 0U;
                                                __Vdly__flags 
                                                    = 
                                                    ((0xbffU 
                                                      & (IData)(__Vdly__flags)) 
                                                     | (0x400U 
                                                        & ((IData)(vlSelfRef.in) 
                                                           << 0xaU)));
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.in))) {
                                            __Vdly__core__DOT__fn = 0U;
                                            __Vdly__flags 
                                                = (
                                                   (0xdffU 
                                                    & (IData)(__Vdly__flags)) 
                                                   | (0x200U 
                                                      & ((IData)(vlSelfRef.in) 
                                                         << 9U)));
                                        } else {
                                            __Vdly__core__DOT__fn = 0U;
                                            __Vdly__flags 
                                                = (
                                                   (0xffeU 
                                                    & (IData)(__Vdly__flags)) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.in)));
                                        }
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.in))) {
                                        if ((2U & (IData)(vlSelfRef.in))) {
                                            __Vdly__core__DOT__fn = 2U;
                                            __Vdly__core__DOT__dir = 0U;
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelfRef.in))) {
                                            __Vdly__flags 
                                                = (
                                                   (0xffeU 
                                                    & (IData)(__Vdly__flags)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelfRef.flags))));
                                            __Vdly__core__DOT__fn = 0U;
                                        } else {
                                            __Vdly__ip 
                                                = vlSelfRef.ip;
                                            __Vdly__core__DOT__fn = 0U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.in))) {
                                        __Vdly__core__DOT__rep 
                                            = (3U & (IData)(vlSelfRef.in));
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.in))) {
                                        __Vdly__core__DOT__intr = 1U;
                                        __Vdly__core__DOT__fn = 4U;
                                    }
                                } else if ((8U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn 
                                        = (((((((((0x80U 
                                                   == 
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.in))) 
                                                  || (0xc0U 
                                                      == 
                                                      (0xfeU 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xc4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x69U 
                                                    == 
                                                    (0xfdU 
                                                     & (IData)(vlSelfRef.in)))) 
                                               || (0xd0U 
                                                   == 
                                                   (0xfcU 
                                                    & (IData)(vlSelfRef.in)))) 
                                              || (0xd8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xf6U 
                                                 == 
                                                 (0xf6U 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x62U 
                                                == 
                                                (0xfeU 
                                                 & (IData)(vlSelfRef.in))))
                                            ? 2U : 3U);
                                } else if ((4U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn 
                                        = (((((((((0x80U 
                                                   == 
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.in))) 
                                                  || (0xc0U 
                                                      == 
                                                      (0xfeU 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xc4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x69U 
                                                    == 
                                                    (0xfdU 
                                                     & (IData)(vlSelfRef.in)))) 
                                               || (0xd0U 
                                                   == 
                                                   (0xfcU 
                                                    & (IData)(vlSelfRef.in)))) 
                                              || (0xd8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xf6U 
                                                 == 
                                                 (0xf6U 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x62U 
                                                == 
                                                (0xfeU 
                                                 & (IData)(vlSelfRef.in))))
                                            ? 2U : 3U);
                                } else if ((2U & (IData)(vlSelfRef.in))) {
                                    if ((1U & (IData)(vlSelfRef.in))) {
                                        if (((((1U 
                                                & ((IData)(vlSelfRef.core__DOT__branches) 
                                                   >> 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.in) 
                                                       >> 1U)))) 
                                               == (1U 
                                                   & (IData)(vlSelfRef.in))) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.in) 
                                                  >> 7U))) 
                                             | (((IData)(vlSelfRef.in) 
                                                 >> 7U) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.cx))))) {
                                            __Vdly__ip 
                                                = (0xffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.ip)));
                                            __Vdly__core__DOT__fn = 0U;
                                        } else {
                                            __Vdly__core__DOT__fn = 3U;
                                        }
                                    } else {
                                        if (((1U != (IData)(vlSelfRef.cx)) 
                                             & (((IData)(vlSelfRef.in) 
                                                 >> 1U) 
                                                | ((1U 
                                                    & ((IData)(vlSelfRef.flags) 
                                                       >> 6U)) 
                                                   == 
                                                   (1U 
                                                    & (IData)(vlSelfRef.in)))))) {
                                            __Vdly__core__DOT__fn = 3U;
                                        } else {
                                            __Vdly__ip 
                                                = (0xffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.ip)));
                                            __Vdly__core__DOT__fn = 0U;
                                        }
                                        __Vdly__cx 
                                            = (0xffffU 
                                               & ((IData)(vlSelfRef.cx) 
                                                  - (IData)(1U)));
                                    }
                                } else {
                                    if (((1U != (IData)(vlSelfRef.cx)) 
                                         & (((IData)(vlSelfRef.in) 
                                             >> 1U) 
                                            | ((1U 
                                                & ((IData)(vlSelfRef.flags) 
                                                   >> 6U)) 
                                               == (1U 
                                                   & (IData)(vlSelfRef.in)))))) {
                                        __Vdly__core__DOT__fn = 3U;
                                    } else {
                                        __Vdly__ip 
                                            = (0xffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.ip)));
                                        __Vdly__core__DOT__fn = 0U;
                                    }
                                    __Vdly__cx = (0xffffU 
                                                  & ((IData)(vlSelfRef.cx) 
                                                     - (IData)(1U)));
                                }
                            } else if ((0x10U & (IData)(vlSelfRef.in))) {
                                if ((8U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn 
                                        = (((((((((0x80U 
                                                   == 
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.in))) 
                                                  || (0xc0U 
                                                      == 
                                                      (0xfeU 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xc4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x69U 
                                                    == 
                                                    (0xfdU 
                                                     & (IData)(vlSelfRef.in)))) 
                                               || (0xd0U 
                                                   == 
                                                   (0xfcU 
                                                    & (IData)(vlSelfRef.in)))) 
                                              || (0xd8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xf6U 
                                                 == 
                                                 (0xf6U 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x62U 
                                                == 
                                                (0xfeU 
                                                 & (IData)(vlSelfRef.in))))
                                            ? 2U : 3U);
                                } else if ((4U & (IData)(vlSelfRef.in))) {
                                    if ((2U & (IData)(vlSelfRef.in))) {
                                        if ((1U & (IData)(vlSelfRef.in))) {
                                            __Vdly__core__DOT__fn = 3U;
                                            __Vdly__core__DOT__ea 
                                                = (0xffffU 
                                                   & ((IData)(vlSelfRef.bx) 
                                                      + 
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.ax))));
                                            __Vdly__core__DOT__cp = 1U;
                                        } else {
                                            __Vdly__core__DOT__fn = 0U;
                                            __Vdly__ax 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(__Vdly__ax)) 
                                                   | (0xffU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.flags))))));
                                        }
                                    } else {
                                        __Vdly__core__DOT__fn 
                                            = (((((
                                                   ((((0x80U 
                                                       == 
                                                       (0xf0U 
                                                        & (IData)(vlSelfRef.in))) 
                                                      || (0xc0U 
                                                          == 
                                                          (0xfeU 
                                                           & (IData)(vlSelfRef.in)))) 
                                                     || (0xc4U 
                                                         == 
                                                         (0xfcU 
                                                          & (IData)(vlSelfRef.in)))) 
                                                    || (0x69U 
                                                        == 
                                                        (0xfdU 
                                                         & (IData)(vlSelfRef.in)))) 
                                                   || (0xd0U 
                                                       == 
                                                       (0xfcU 
                                                        & (IData)(vlSelfRef.in)))) 
                                                  || (0xd8U 
                                                      == 
                                                      (0xf8U 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xf6U 
                                                     == 
                                                     (0xf6U 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x62U 
                                                    == 
                                                    (0xfeU 
                                                     & (IData)(vlSelfRef.in))))
                                                ? 2U
                                                : 3U);
                                    }
                                } else {
                                    __Vdly__core__DOT__fn = 2U;
                                    __Vdly__core__DOT__dir = 0U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.in))) {
                                if ((4U & (IData)(vlSelfRef.in))) {
                                    if ((2U & (IData)(vlSelfRef.in))) {
                                        if ((1U & (IData)(vlSelfRef.in))) {
                                            __Vdly__core__DOT__fn = 7U;
                                            __Vdly__core__DOT__fnext = 3U;
                                        } else {
                                            __Vdly__core__DOT__intr = 4U;
                                            __Vdly__core__DOT__fn 
                                                = (
                                                   (0x800U 
                                                    & (IData)(vlSelfRef.flags))
                                                    ? 4U
                                                    : 0U);
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.in))) {
                                        __Vdly__core__DOT__fn 
                                            = (((((
                                                   ((((0x80U 
                                                       == 
                                                       (0xf0U 
                                                        & (IData)(vlSelfRef.in))) 
                                                      || (0xc0U 
                                                          == 
                                                          (0xfeU 
                                                           & (IData)(vlSelfRef.in)))) 
                                                     || (0xc4U 
                                                         == 
                                                         (0xfcU 
                                                          & (IData)(vlSelfRef.in)))) 
                                                    || (0x69U 
                                                        == 
                                                        (0xfdU 
                                                         & (IData)(vlSelfRef.in)))) 
                                                   || (0xd0U 
                                                       == 
                                                       (0xfcU 
                                                        & (IData)(vlSelfRef.in)))) 
                                                  || (0xd8U 
                                                      == 
                                                      (0xf8U 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xf6U 
                                                     == 
                                                     (0xf6U 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x62U 
                                                    == 
                                                    (0xfeU 
                                                     & (IData)(vlSelfRef.in))))
                                                ? 2U
                                                : 3U);
                                    } else {
                                        __Vdly__core__DOT__intr = 3U;
                                        __Vdly__core__DOT__fn = 4U;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn = 7U;
                                    __Vdly__core__DOT__fnext = 3U;
                                } else {
                                    __Vdly__core__DOT__fn 
                                        = (((((((((0x80U 
                                                   == 
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.in))) 
                                                  || (0xc0U 
                                                      == 
                                                      (0xfeU 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xc4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x69U 
                                                    == 
                                                    (0xfdU 
                                                     & (IData)(vlSelfRef.in)))) 
                                               || (0xd0U 
                                                   == 
                                                   (0xfcU 
                                                    & (IData)(vlSelfRef.in)))) 
                                              || (0xd8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xf6U 
                                                 == 
                                                 (0xf6U 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x62U 
                                                == 
                                                (0xfeU 
                                                 & (IData)(vlSelfRef.in))))
                                            ? 2U : 3U);
                                }
                            } else if ((4U & (IData)(vlSelfRef.in))) {
                                if ((2U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn = 2U;
                                    __Vdly__core__DOT__cpen = 0U;
                                } else {
                                    __Vdly__core__DOT__fn = 2U;
                                    __Vdly__core__DOT__size = 1U;
                                    __Vdly__core__DOT__dir = 1U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.in))) {
                                __Vdly__core__DOT__fn = 7U;
                                __Vdly__core__DOT__fnext = 3U;
                            } else {
                                __Vdly__core__DOT__fn = 2U;
                                __Vdly__core__DOT__dir = 0U;
                            }
                        } else if ((0x20U & (IData)(vlSelfRef.in))) {
                            if ((0x10U & (IData)(vlSelfRef.in))) {
                                __Vdly__core__DOT__fn 
                                    = (((((((((0x80U 
                                               == (0xf0U 
                                                   & (IData)(vlSelfRef.in))) 
                                              || (0xc0U 
                                                  == 
                                                  (0xfeU 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xc4U 
                                                 == 
                                                 (0xfcU 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x69U 
                                                == 
                                                (0xfdU 
                                                 & (IData)(vlSelfRef.in)))) 
                                           || (0xd0U 
                                               == (0xfcU 
                                                   & (IData)(vlSelfRef.in)))) 
                                          || (0xd8U 
                                              == (0xf8U 
                                                  & (IData)(vlSelfRef.in)))) 
                                         || (0xf6U 
                                             == (0xf6U 
                                                 & (IData)(vlSelfRef.in)))) 
                                        || (0x62U == 
                                            (0xfeU 
                                             & (IData)(vlSelfRef.in))))
                                        ? 2U : 3U);
                            } else if ((8U & (IData)(vlSelfRef.in))) {
                                if ((4U & (IData)(vlSelfRef.in))) {
                                    if ((2U & (IData)(vlSelfRef.in))) {
                                        if (vlSelfRef.core__DOT__repa) {
                                            __Vdly__core__DOT__fn = 3U;
                                            __Vdly__core__DOT__cp = 1U;
                                        } else {
                                            __Vdly__core__DOT__fn = 0U;
                                            __Vdly__core__DOT__cp = 0U;
                                        }
                                        __Vdly__core__DOT__ea 
                                            = vlSelfRef.di;
                                        __Vdly__core__DOT__alu = 5U;
                                        __Vdly__core__DOT__segment 
                                            = vlSelfRef.es;
                                    } else {
                                        __Vdly__core__DOT__cp 
                                            = vlSelfRef.core__DOT__repa;
                                        __Vdly__core__DOT__ea 
                                            = (0xffffU 
                                               & ((0x400U 
                                                   & (IData)(vlSelfRef.flags))
                                                   ? 
                                                  ((IData)(vlSelfRef.si) 
                                                   - (IData)(vlSelfRef.core__DOT__repc))
                                                   : 
                                                  ((IData)(vlSelfRef.si) 
                                                   + (IData)(vlSelfRef.core__DOT__repc))));
                                        __Vdly__core__DOT__fn 
                                            = ((IData)(vlSelfRef.core__DOT__repa)
                                                ? 3U
                                                : 0U);
                                    }
                                } else if ((2U & (IData)(vlSelfRef.in))) {
                                    if (vlSelfRef.core__DOT__repa) {
                                        __Vdly__core__DOT__fn = 3U;
                                        __Vdly__core__DOT__cp = 1U;
                                    } else {
                                        __Vdly__core__DOT__fn = 0U;
                                        __Vdly__core__DOT__cp = 0U;
                                    }
                                } else {
                                    __Vdly__core__DOT__fn 
                                        = (((((((((0x80U 
                                                   == 
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.in))) 
                                                  || (0xc0U 
                                                      == 
                                                      (0xfeU 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xc4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x69U 
                                                    == 
                                                    (0xfdU 
                                                     & (IData)(vlSelfRef.in)))) 
                                               || (0xd0U 
                                                   == 
                                                   (0xfcU 
                                                    & (IData)(vlSelfRef.in)))) 
                                              || (0xd8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xf6U 
                                                 == 
                                                 (0xf6U 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x62U 
                                                == 
                                                (0xfeU 
                                                 & (IData)(vlSelfRef.in))))
                                            ? 2U : 3U);
                                }
                            } else if ((4U & (IData)(vlSelfRef.in))) {
                                if ((2U & (IData)(vlSelfRef.in))) {
                                    if (vlSelfRef.core__DOT__repa) {
                                        __Vdly__core__DOT__fn = 3U;
                                        __Vdly__core__DOT__cp = 1U;
                                    } else {
                                        __Vdly__core__DOT__fn = 0U;
                                        __Vdly__core__DOT__cp = 0U;
                                    }
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.si;
                                    __Vdly__core__DOT__alu = 5U;
                                } else {
                                    if (vlSelfRef.core__DOT__repa) {
                                        __Vdly__core__DOT__cp = 1U;
                                        __Vdly__core__DOT__fn = 3U;
                                    } else {
                                        __Vdly__core__DOT__cp = 0U;
                                        __Vdly__core__DOT__fn = 0U;
                                    }
                                    __Vdly__core__DOT__op1 
                                        = vlSelfRef.core__DOT__segment;
                                    __Vdly__core__DOT__ea 
                                        = vlSelfRef.si;
                                }
                            } else {
                                __Vdly__core__DOT__fn 
                                    = (((((((((0x80U 
                                               == (0xf0U 
                                                   & (IData)(vlSelfRef.in))) 
                                              || (0xc0U 
                                                  == 
                                                  (0xfeU 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xc4U 
                                                 == 
                                                 (0xfcU 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x69U 
                                                == 
                                                (0xfdU 
                                                 & (IData)(vlSelfRef.in)))) 
                                           || (0xd0U 
                                               == (0xfcU 
                                                   & (IData)(vlSelfRef.in)))) 
                                          || (0xd8U 
                                              == (0xf8U 
                                                  & (IData)(vlSelfRef.in)))) 
                                         || (0xf6U 
                                             == (0xf6U 
                                                 & (IData)(vlSelfRef.in)))) 
                                        || (0x62U == 
                                            (0xfeU 
                                             & (IData)(vlSelfRef.in))))
                                        ? 2U : 3U);
                            }
                        } else if ((0x10U & (IData)(vlSelfRef.in))) {
                            if ((8U & (IData)(vlSelfRef.in))) {
                                if ((4U & (IData)(vlSelfRef.in))) {
                                    if ((2U & (IData)(vlSelfRef.in))) {
                                        if ((1U & (IData)(vlSelfRef.in))) {
                                            __Vdly__core__DOT__fn = 0U;
                                            __Vdly__ax 
                                                = (
                                                   (0xffU 
                                                    & (IData)(__Vdly__ax)) 
                                                   | (0xff00U 
                                                      & (0x200U 
                                                         | ((IData)(vlSelfRef.flags) 
                                                            << 8U))));
                                        } else {
                                            __Vdly__core__DOT__fn = 0U;
                                            __Vdly__flags 
                                                = (0xffU 
                                                   & ((IData)(vlSelfRef.ax) 
                                                      >> 8U));
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.in))) {
                                        __Vdly__core__DOT__fn = 7U;
                                        __Vdly__core__DOT__fnext = 3U;
                                    } else {
                                        __Vdly__core__DOT__fn = 6U;
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.flags;
                                    }
                                } else if ((2U & (IData)(vlSelfRef.in))) {
                                    if ((1U & (~ (IData)(vlSelfRef.in)))) {
                                        __Vdly__core__DOT__fn 
                                            = (((((
                                                   ((((0x80U 
                                                       == 
                                                       (0xf0U 
                                                        & (IData)(vlSelfRef.in))) 
                                                      || (0xc0U 
                                                          == 
                                                          (0xfeU 
                                                           & (IData)(vlSelfRef.in)))) 
                                                     || (0xc4U 
                                                         == 
                                                         (0xfcU 
                                                          & (IData)(vlSelfRef.in)))) 
                                                    || (0x69U 
                                                        == 
                                                        (0xfdU 
                                                         & (IData)(vlSelfRef.in)))) 
                                                   || (0xd0U 
                                                       == 
                                                       (0xfcU 
                                                        & (IData)(vlSelfRef.in)))) 
                                                  || (0xd8U 
                                                      == 
                                                      (0xf8U 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xf6U 
                                                     == 
                                                     (0xf6U 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x62U 
                                                    == 
                                                    (0xfeU 
                                                     & (IData)(vlSelfRef.in))))
                                                ? 2U
                                                : 3U);
                                    }
                                } else if ((1U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn = 0U;
                                    __Vdly__dx = (0xffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.ax) 
                                                                   >> 0xfU)))));
                                } else {
                                    __Vdly__ax = ((0xffU 
                                                   & (IData)(__Vdly__ax)) 
                                                  | (0xff00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.ax) 
                                                                       >> 7U)))) 
                                                        << 8U)));
                                    __Vdly__core__DOT__fn = 0U;
                                }
                            } else if ((4U & (IData)(vlSelfRef.in))) {
                                __Vdly__core__DOT__fn = 5U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.ax;
                                __Vdly__core__DOT__dir = 1U;
                                __Vdly__core__DOT__size = 1U;
                                __Vdly__core__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.in) 
                                                   << 3U)));
                                __Vdly__ax = vlSelfRef.core__DOT__rin;
                            } else if ((2U & (IData)(vlSelfRef.in))) {
                                __Vdly__core__DOT__fn = 5U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.ax;
                                __Vdly__core__DOT__dir = 1U;
                                __Vdly__core__DOT__size = 1U;
                                __Vdly__core__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.in) 
                                                   << 3U)));
                                __Vdly__ax = vlSelfRef.core__DOT__rin;
                            } else if ((1U & (IData)(vlSelfRef.in))) {
                                __Vdly__core__DOT__fn = 5U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.ax;
                                __Vdly__core__DOT__dir = 1U;
                                __Vdly__core__DOT__size = 1U;
                                __Vdly__core__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.in) 
                                                   << 3U)));
                                __Vdly__ax = vlSelfRef.core__DOT__rin;
                            }
                        } else if ((8U & (IData)(vlSelfRef.in))) {
                            if ((4U & (IData)(vlSelfRef.in))) {
                                if ((2U & (IData)(vlSelfRef.in))) {
                                    if ((1U & (IData)(vlSelfRef.in))) {
                                        __Vdly__core__DOT__fn = 7U;
                                        __Vdly__core__DOT__fnext = 3U;
                                    } else {
                                        __Vdly__core__DOT__fn = 2U;
                                        __Vdly__core__DOT__size = 1U;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn = 2U;
                                    __Vdly__core__DOT__cpen = 0U;
                                } else {
                                    __Vdly__core__DOT__fn 
                                        = (((((((((0x80U 
                                                   == 
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.in))) 
                                                  || (0xc0U 
                                                      == 
                                                      (0xfeU 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xc4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x69U 
                                                    == 
                                                    (0xfdU 
                                                     & (IData)(vlSelfRef.in)))) 
                                               || (0xd0U 
                                                   == 
                                                   (0xfcU 
                                                    & (IData)(vlSelfRef.in)))) 
                                              || (0xd8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xf6U 
                                                 == 
                                                 (0xf6U 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x62U 
                                                == 
                                                (0xfeU 
                                                 & (IData)(vlSelfRef.in))))
                                            ? 2U : 3U);
                                }
                            } else {
                                __Vdly__core__DOT__fn 
                                    = (((((((((0x80U 
                                               == (0xf0U 
                                                   & (IData)(vlSelfRef.in))) 
                                              || (0xc0U 
                                                  == 
                                                  (0xfeU 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xc4U 
                                                 == 
                                                 (0xfcU 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x69U 
                                                == 
                                                (0xfdU 
                                                 & (IData)(vlSelfRef.in)))) 
                                           || (0xd0U 
                                               == (0xfcU 
                                                   & (IData)(vlSelfRef.in)))) 
                                          || (0xd8U 
                                              == (0xf8U 
                                                  & (IData)(vlSelfRef.in)))) 
                                         || (0xf6U 
                                             == (0xf6U 
                                                 & (IData)(vlSelfRef.in)))) 
                                        || (0x62U == 
                                            (0xfeU 
                                             & (IData)(vlSelfRef.in))))
                                        ? 2U : 3U);
                            }
                        } else if ((4U & (IData)(vlSelfRef.in))) {
                            if ((2U & (IData)(vlSelfRef.in))) {
                                __Vdly__core__DOT__fn = 2U;
                                __Vdly__core__DOT__dir = 0U;
                            } else {
                                __Vdly__core__DOT__fn = 2U;
                                __Vdly__core__DOT__alu = 4U;
                            }
                        } else {
                            __Vdly__core__DOT__fn = 2U;
                            __Vdly__core__DOT__dir = 0U;
                        }
                    } else if ((0x40U & (IData)(vlSelfRef.in))) {
                        if ((0x20U & (IData)(vlSelfRef.in))) {
                            if ((0x10U & (IData)(vlSelfRef.in))) {
                                if (((((1U & ((IData)(vlSelfRef.core__DOT__branches) 
                                              >> (7U 
                                                  & ((IData)(vlSelfRef.in) 
                                                     >> 1U)))) 
                                       == (1U & (IData)(vlSelfRef.in))) 
                                      & (~ ((IData)(vlSelfRef.in) 
                                            >> 7U))) 
                                     | (((IData)(vlSelfRef.in) 
                                         >> 7U) & (0U 
                                                   != (IData)(vlSelfRef.cx))))) {
                                    __Vdly__ip = (0xffffU 
                                                  & ((IData)(2U) 
                                                     + (IData)(vlSelfRef.ip)));
                                    __Vdly__core__DOT__fn = 0U;
                                } else {
                                    __Vdly__core__DOT__fn = 3U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.in))) {
                                if ((4U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn 
                                        = (((((((((0x80U 
                                                   == 
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.in))) 
                                                  || (0xc0U 
                                                      == 
                                                      (0xfeU 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xc4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x69U 
                                                    == 
                                                    (0xfdU 
                                                     & (IData)(vlSelfRef.in)))) 
                                               || (0xd0U 
                                                   == 
                                                   (0xfcU 
                                                    & (IData)(vlSelfRef.in)))) 
                                              || (0xd8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xf6U 
                                                 == 
                                                 (0xf6U 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x62U 
                                                == 
                                                (0xfeU 
                                                 & (IData)(vlSelfRef.in))))
                                            ? 2U : 3U);
                                } else if ((1U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn = 2U;
                                    __Vdly__core__DOT__dir = 1U;
                                    __Vdly__core__DOT__size = 1U;
                                } else {
                                    __Vdly__core__DOT__fn 
                                        = (((((((((0x80U 
                                                   == 
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.in))) 
                                                  || (0xc0U 
                                                      == 
                                                      (0xfeU 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xc4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x69U 
                                                    == 
                                                    (0xfdU 
                                                     & (IData)(vlSelfRef.in)))) 
                                               || (0xd0U 
                                                   == 
                                                   (0xfcU 
                                                    & (IData)(vlSelfRef.in)))) 
                                              || (0xd8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xf6U 
                                                 == 
                                                 (0xf6U 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x62U 
                                                == 
                                                (0xfeU 
                                                 & (IData)(vlSelfRef.in))))
                                            ? 2U : 3U);
                                }
                            } else if ((4U & (IData)(vlSelfRef.in))) {
                                if ((1U & (~ ((IData)(vlSelfRef.in) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.in))) {
                                        __Vdly__core__DOT__segment 
                                            = vlSelfRef.gs;
                                        __Vdly__core__DOT__over = 1U;
                                    } else {
                                        __Vdly__core__DOT__segment 
                                            = vlSelfRef.fs;
                                        __Vdly__core__DOT__over = 1U;
                                    }
                                }
                            } else {
                                __Vdly__core__DOT__fn 
                                    = (((((((((0x80U 
                                               == (0xf0U 
                                                   & (IData)(vlSelfRef.in))) 
                                              || (0xc0U 
                                                  == 
                                                  (0xfeU 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xc4U 
                                                 == 
                                                 (0xfcU 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x69U 
                                                == 
                                                (0xfdU 
                                                 & (IData)(vlSelfRef.in)))) 
                                           || (0xd0U 
                                               == (0xfcU 
                                                   & (IData)(vlSelfRef.in)))) 
                                          || (0xd8U 
                                              == (0xf8U 
                                                  & (IData)(vlSelfRef.in)))) 
                                         || (0xf6U 
                                             == (0xf6U 
                                                 & (IData)(vlSelfRef.in)))) 
                                        || (0x62U == 
                                            (0xfeU 
                                             & (IData)(vlSelfRef.in))))
                                        ? 2U : 3U);
                            }
                        } else if ((0x10U & (IData)(vlSelfRef.in))) {
                            if ((8U & (IData)(vlSelfRef.in))) {
                                __Vdly__core__DOT__fn = 7U;
                                __Vdly__core__DOT__fnext = 3U;
                            } else {
                                __Vdly__core__DOT__fn = 6U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__rin;
                            }
                        } else {
                            __Vdly__core__DOT__fn = 3U;
                            __Vdly__core__DOT__alu 
                                = ((8U & (IData)(vlSelfRef.in))
                                    ? 5U : 0U);
                            __Vdly__core__DOT__op1 
                                = vlSelfRef.core__DOT__rin;
                            __Vdly__core__DOT__op2 = 1U;
                            __Vdly__core__DOT__size = 1U;
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.in))) {
                        if ((0x10U & (IData)(vlSelfRef.in))) {
                            if ((8U & (IData)(vlSelfRef.in))) {
                                if ((4U & (IData)(vlSelfRef.in))) {
                                    if ((2U & (IData)(vlSelfRef.in))) {
                                        if ((1U & (IData)(vlSelfRef.in))) {
                                            __Vdly__core__DOT__fn 
                                                = (
                                                   ((((((((0x80U 
                                                           == 
                                                           (0xf0U 
                                                            & (IData)(vlSelfRef.in))) 
                                                          || (0xc0U 
                                                              == 
                                                              (0xfeU 
                                                               & (IData)(vlSelfRef.in)))) 
                                                         || (0xc4U 
                                                             == 
                                                             (0xfcU 
                                                              & (IData)(vlSelfRef.in)))) 
                                                        || (0x69U 
                                                            == 
                                                            (0xfdU 
                                                             & (IData)(vlSelfRef.in)))) 
                                                       || (0xd0U 
                                                           == 
                                                           (0xfcU 
                                                            & (IData)(vlSelfRef.in)))) 
                                                      || (0xd8U 
                                                          == 
                                                          (0xf8U 
                                                           & (IData)(vlSelfRef.in)))) 
                                                     || (0xf6U 
                                                         == 
                                                         (0xf6U 
                                                          & (IData)(vlSelfRef.in)))) 
                                                    || (0x62U 
                                                        == 
                                                        (0xfeU 
                                                         & (IData)(vlSelfRef.in))))
                                                    ? 2U
                                                    : 3U);
                                        } else {
                                            __Vdly__core__DOT__segment 
                                                = vlSelfRef.ds;
                                            __Vdly__core__DOT__over = 1U;
                                        }
                                    } else {
                                        __Vdly__core__DOT__fn = 3U;
                                    }
                                } else {
                                    __Vdly__core__DOT__fn = 2U;
                                }
                            } else if ((4U & (IData)(vlSelfRef.in))) {
                                if ((2U & (IData)(vlSelfRef.in))) {
                                    if ((1U & (IData)(vlSelfRef.in))) {
                                        __Vdly__core__DOT__fn 
                                            = (((((
                                                   ((((0x80U 
                                                       == 
                                                       (0xf0U 
                                                        & (IData)(vlSelfRef.in))) 
                                                      || (0xc0U 
                                                          == 
                                                          (0xfeU 
                                                           & (IData)(vlSelfRef.in)))) 
                                                     || (0xc4U 
                                                         == 
                                                         (0xfcU 
                                                          & (IData)(vlSelfRef.in)))) 
                                                    || (0x69U 
                                                        == 
                                                        (0xfdU 
                                                         & (IData)(vlSelfRef.in)))) 
                                                   || (0xd0U 
                                                       == 
                                                       (0xfcU 
                                                        & (IData)(vlSelfRef.in)))) 
                                                  || (0xd8U 
                                                      == 
                                                      (0xf8U 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xf6U 
                                                     == 
                                                     (0xf6U 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x62U 
                                                    == 
                                                    (0xfeU 
                                                     & (IData)(vlSelfRef.in))))
                                                ? 2U
                                                : 3U);
                                    } else {
                                        __Vdly__core__DOT__segment 
                                            = vlSelfRef.ss;
                                        __Vdly__core__DOT__over = 1U;
                                    }
                                } else {
                                    __Vdly__core__DOT__fn = 3U;
                                }
                            } else {
                                __Vdly__core__DOT__fn = 2U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.in))) {
                            if ((4U & (IData)(vlSelfRef.in))) {
                                if ((2U & (IData)(vlSelfRef.in))) {
                                    if ((1U & (IData)(vlSelfRef.in))) {
                                        __Vdly__core__DOT__fn 
                                            = (((((
                                                   ((((0x80U 
                                                       == 
                                                       (0xf0U 
                                                        & (IData)(vlSelfRef.in))) 
                                                      || (0xc0U 
                                                          == 
                                                          (0xfeU 
                                                           & (IData)(vlSelfRef.in)))) 
                                                     || (0xc4U 
                                                         == 
                                                         (0xfcU 
                                                          & (IData)(vlSelfRef.in)))) 
                                                    || (0x69U 
                                                        == 
                                                        (0xfdU 
                                                         & (IData)(vlSelfRef.in)))) 
                                                   || (0xd0U 
                                                       == 
                                                       (0xfcU 
                                                        & (IData)(vlSelfRef.in)))) 
                                                  || (0xd8U 
                                                      == 
                                                      (0xf8U 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xf6U 
                                                     == 
                                                     (0xf6U 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x62U 
                                                    == 
                                                    (0xfeU 
                                                     & (IData)(vlSelfRef.in))))
                                                ? 2U
                                                : 3U);
                                    } else {
                                        __Vdly__core__DOT__segment 
                                            = vlSelfRef.cs;
                                        __Vdly__core__DOT__over = 1U;
                                    }
                                } else {
                                    __Vdly__core__DOT__fn = 3U;
                                }
                            } else {
                                __Vdly__core__DOT__fn = 2U;
                            }
                        } else if ((4U & (IData)(vlSelfRef.in))) {
                            if ((2U & (IData)(vlSelfRef.in))) {
                                if ((1U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn 
                                        = (((((((((0x80U 
                                                   == 
                                                   (0xf0U 
                                                    & (IData)(vlSelfRef.in))) 
                                                  || (0xc0U 
                                                      == 
                                                      (0xfeU 
                                                       & (IData)(vlSelfRef.in)))) 
                                                 || (0xc4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(vlSelfRef.in)))) 
                                                || (0x69U 
                                                    == 
                                                    (0xfdU 
                                                     & (IData)(vlSelfRef.in)))) 
                                               || (0xd0U 
                                                   == 
                                                   (0xfcU 
                                                    & (IData)(vlSelfRef.in)))) 
                                              || (0xd8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.in)))) 
                                             || (0xf6U 
                                                 == 
                                                 (0xf6U 
                                                  & (IData)(vlSelfRef.in)))) 
                                            || (0x62U 
                                                == 
                                                (0xfeU 
                                                 & (IData)(vlSelfRef.in))))
                                            ? 2U : 3U);
                                } else {
                                    __Vdly__core__DOT__segment 
                                        = vlSelfRef.es;
                                    __Vdly__core__DOT__over = 1U;
                                }
                            } else {
                                __Vdly__core__DOT__fn = 3U;
                            }
                        } else {
                            __Vdly__core__DOT__fn = 2U;
                        }
                    } else if ((0x10U & (IData)(vlSelfRef.in))) {
                        if ((8U & (IData)(vlSelfRef.in))) {
                            if ((4U & (IData)(vlSelfRef.in))) {
                                if ((2U & (IData)(vlSelfRef.in))) {
                                    if ((1U & (IData)(vlSelfRef.in))) {
                                        __Vdly__core__DOT__fn = 7U;
                                        __Vdly__core__DOT__fnext = 3U;
                                    } else {
                                        __Vdly__core__DOT__fn = 6U;
                                        __Vdly__core__DOT__wb 
                                            = vlSelfRef.ds;
                                    }
                                } else {
                                    __Vdly__core__DOT__fn = 3U;
                                }
                            } else {
                                __Vdly__core__DOT__fn = 2U;
                            }
                        } else if ((4U & (IData)(vlSelfRef.in))) {
                            if ((2U & (IData)(vlSelfRef.in))) {
                                if ((1U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn = 7U;
                                    __Vdly__core__DOT__fnext = 3U;
                                } else {
                                    __Vdly__core__DOT__fn = 6U;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.ss;
                                }
                            } else {
                                __Vdly__core__DOT__fn = 3U;
                            }
                        } else {
                            __Vdly__core__DOT__fn = 2U;
                        }
                    } else if ((8U & (IData)(vlSelfRef.in))) {
                        if ((4U & (IData)(vlSelfRef.in))) {
                            if ((2U & (IData)(vlSelfRef.in))) {
                                if ((1U & (IData)(vlSelfRef.in))) {
                                    __Vdly__core__DOT__fn = 3U;
                                } else {
                                    __Vdly__core__DOT__fn = 6U;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.cs;
                                }
                            } else {
                                __Vdly__core__DOT__fn = 3U;
                            }
                        } else {
                            __Vdly__core__DOT__fn = 2U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.in))) {
                        if ((2U & (IData)(vlSelfRef.in))) {
                            if ((1U & (IData)(vlSelfRef.in))) {
                                __Vdly__core__DOT__fn = 7U;
                                __Vdly__core__DOT__fnext = 3U;
                            } else {
                                __Vdly__core__DOT__fn = 6U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.es;
                            }
                        } else {
                            __Vdly__core__DOT__fn = 3U;
                        }
                    } else {
                        __Vdly__core__DOT__fn = 2U;
                    }
                } else if ((2U == (IData)(vlSelfRef.core__DOT__fn))) {
                    if ((0U == (IData)(vlSelfRef.core__DOT__s1))) {
                        __Vdly__ip = (0xffffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                        __Vdly__core__DOT__modrm = vlSelfRef.in;
                        if (((((((((0U == ((IData)(vlSelfRef.core__DOT__dir)
                                            ? (7U & 
                                               ((IData)(vlSelfRef.in) 
                                                >> 3U))
                                            : (7U & (IData)(vlSelfRef.in)))) 
                                   | (1U == ((IData)(vlSelfRef.core__DOT__dir)
                                              ? (7U 
                                                 & ((IData)(vlSelfRef.in) 
                                                    >> 3U))
                                              : (7U 
                                                 & (IData)(vlSelfRef.in))))) 
                                  | (2U == ((IData)(vlSelfRef.core__DOT__dir)
                                             ? (7U 
                                                & ((IData)(vlSelfRef.in) 
                                                   >> 3U))
                                             : (7U 
                                                & (IData)(vlSelfRef.in))))) 
                                 | (3U == ((IData)(vlSelfRef.core__DOT__dir)
                                            ? (7U & 
                                               ((IData)(vlSelfRef.in) 
                                                >> 3U))
                                            : (7U & (IData)(vlSelfRef.in))))) 
                                | (4U == ((IData)(vlSelfRef.core__DOT__dir)
                                           ? (7U & 
                                              ((IData)(vlSelfRef.in) 
                                               >> 3U))
                                           : (7U & (IData)(vlSelfRef.in))))) 
                               | (5U == ((IData)(vlSelfRef.core__DOT__dir)
                                          ? (7U & ((IData)(vlSelfRef.in) 
                                                   >> 3U))
                                          : (7U & (IData)(vlSelfRef.in))))) 
                              | (6U == ((IData)(vlSelfRef.core__DOT__dir)
                                         ? (7U & ((IData)(vlSelfRef.in) 
                                                  >> 3U))
                                         : (7U & (IData)(vlSelfRef.in))))) 
                             | (7U == ((IData)(vlSelfRef.core__DOT__dir)
                                        ? (7U & ((IData)(vlSelfRef.in) 
                                                 >> 3U))
                                        : (7U & (IData)(vlSelfRef.in)))))) {
                            __Vdly__core__DOT__op1 
                                = ((0U == ((IData)(vlSelfRef.core__DOT__dir)
                                            ? (7U & 
                                               ((IData)(vlSelfRef.in) 
                                                >> 3U))
                                            : (7U & (IData)(vlSelfRef.in))))
                                    ? ((IData)(vlSelfRef.core__DOT__size)
                                        ? (IData)(vlSelfRef.ax)
                                        : (0xffU & (IData)(vlSelfRef.ax)))
                                    : ((1U == ((IData)(vlSelfRef.core__DOT__dir)
                                                ? (7U 
                                                   & ((IData)(vlSelfRef.in) 
                                                      >> 3U))
                                                : (7U 
                                                   & (IData)(vlSelfRef.in))))
                                        ? ((IData)(vlSelfRef.core__DOT__size)
                                            ? (IData)(vlSelfRef.cx)
                                            : (0xffU 
                                               & (IData)(vlSelfRef.cx)))
                                        : ((2U == ((IData)(vlSelfRef.core__DOT__dir)
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.in) 
                                                       >> 3U))
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelfRef.in))))
                                            ? ((IData)(vlSelfRef.core__DOT__size)
                                                ? (IData)(vlSelfRef.dx)
                                                : (0xffU 
                                                   & (IData)(vlSelfRef.dx)))
                                            : ((3U 
                                                == 
                                                ((IData)(vlSelfRef.core__DOT__dir)
                                                  ? 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.in) 
                                                     >> 3U))
                                                  : 
                                                 (7U 
                                                  & (IData)(vlSelfRef.in))))
                                                ? ((IData)(vlSelfRef.core__DOT__size)
                                                    ? (IData)(vlSelfRef.bx)
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.bx)))
                                                : (
                                                   (4U 
                                                    == 
                                                    ((IData)(vlSelfRef.core__DOT__dir)
                                                      ? 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.in) 
                                                         >> 3U))
                                                      : 
                                                     (7U 
                                                      & (IData)(vlSelfRef.in))))
                                                    ? 
                                                   ((IData)(vlSelfRef.core__DOT__size)
                                                     ? (IData)(vlSelfRef.sp)
                                                     : 
                                                    (0xffU 
                                                     & ((IData)(vlSelfRef.ax) 
                                                        >> 8U)))
                                                    : 
                                                   ((5U 
                                                     == 
                                                     ((IData)(vlSelfRef.core__DOT__dir)
                                                       ? 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.in) 
                                                          >> 3U))
                                                       : 
                                                      (7U 
                                                       & (IData)(vlSelfRef.in))))
                                                     ? 
                                                    ((IData)(vlSelfRef.core__DOT__size)
                                                      ? (IData)(vlSelfRef.bp)
                                                      : 
                                                     (0xffU 
                                                      & ((IData)(vlSelfRef.cx) 
                                                         >> 8U)))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      ((IData)(vlSelfRef.core__DOT__dir)
                                                        ? 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.in) 
                                                           >> 3U))
                                                        : 
                                                       (7U 
                                                        & (IData)(vlSelfRef.in))))
                                                      ? 
                                                     ((IData)(vlSelfRef.core__DOT__size)
                                                       ? (IData)(vlSelfRef.si)
                                                       : 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.dx) 
                                                          >> 8U)))
                                                      : 
                                                     ((IData)(vlSelfRef.core__DOT__size)
                                                       ? (IData)(vlSelfRef.di)
                                                       : 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.bx) 
                                                          >> 8U))))))))));
                        }
                        __Vdly__core__DOT__ea = (0xffffU 
                                                 & ((4U 
                                                     & (IData)(vlSelfRef.in))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.in))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.in))
                                                       ? (IData)(vlSelfRef.bx)
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.in) 
                                                            >> 6U)))
                                                        ? 0U
                                                        : (IData)(vlSelfRef.bp)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.in))
                                                       ? (IData)(vlSelfRef.di)
                                                       : (IData)(vlSelfRef.si)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.in))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.in))
                                                       ? 
                                                      ((IData)(vlSelfRef.bp) 
                                                       + (IData)(vlSelfRef.di))
                                                       : 
                                                      ((IData)(vlSelfRef.bp) 
                                                       + (IData)(vlSelfRef.si)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.in))
                                                       ? 
                                                      ((IData)(vlSelfRef.bx) 
                                                       + (IData)(vlSelfRef.di))
                                                       : 
                                                      ((IData)(vlSelfRef.bx) 
                                                       + (IData)(vlSelfRef.si))))));
                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__over)))) {
                            if ((((2U == (6U & (IData)(vlSelfRef.in))) 
                                  || (0x46U == (0xc7U 
                                                & (IData)(vlSelfRef.in)))) 
                                 || (0x86U == (0xc7U 
                                               & (IData)(vlSelfRef.in))))) {
                                __Vdly__core__DOT__segment 
                                    = vlSelfRef.ss;
                            }
                        }
                        if ((6U == (0xc7U & (IData)(vlSelfRef.in)))) {
                            __Vdly__core__DOT__s1 = 2U;
                        } else if ((0U == (0xc0U & (IData)(vlSelfRef.in)))) {
                            if (vlSelfRef.core__DOT__cpen) {
                                __Vdly__core__DOT__s1 = 4U;
                                __Vdly__core__DOT__cp = 1U;
                            } else {
                                __Vdly__core__DOT__s1 = 0U;
                                __Vdly__core__DOT__cp = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.core__DOT__cpen)))) {
                                __Vdly__core__DOT__fn = 3U;
                            }
                        } else if ((0x40U == (0xc0U 
                                              & (IData)(vlSelfRef.in)))) {
                            __Vdly__core__DOT__s1 = 1U;
                        } else if ((0x80U == (0xc0U 
                                              & (IData)(vlSelfRef.in)))) {
                            __Vdly__core__DOT__s1 = 2U;
                        } else if ((0xc0U == (0xc0U 
                                              & (IData)(vlSelfRef.in)))) {
                            __Vdly__core__DOT__s1 = 0U;
                            __Vdly__core__DOT__fn = 3U;
                        } else {
                            __Vdly__core__DOT__s1 = 1U;
                        }
                        if (((((((((0U == ((IData)(vlSelfRef.core__DOT__dir)
                                            ? (7U & (IData)(vlSelfRef.in))
                                            : (7U & 
                                               ((IData)(vlSelfRef.in) 
                                                >> 3U)))) 
                                   | (1U == ((IData)(vlSelfRef.core__DOT__dir)
                                              ? (7U 
                                                 & (IData)(vlSelfRef.in))
                                              : (7U 
                                                 & ((IData)(vlSelfRef.in) 
                                                    >> 3U))))) 
                                  | (2U == ((IData)(vlSelfRef.core__DOT__dir)
                                             ? (7U 
                                                & (IData)(vlSelfRef.in))
                                             : (7U 
                                                & ((IData)(vlSelfRef.in) 
                                                   >> 3U))))) 
                                 | (3U == ((IData)(vlSelfRef.core__DOT__dir)
                                            ? (7U & (IData)(vlSelfRef.in))
                                            : (7U & 
                                               ((IData)(vlSelfRef.in) 
                                                >> 3U))))) 
                                | (4U == ((IData)(vlSelfRef.core__DOT__dir)
                                           ? (7U & (IData)(vlSelfRef.in))
                                           : (7U & 
                                              ((IData)(vlSelfRef.in) 
                                               >> 3U))))) 
                               | (5U == ((IData)(vlSelfRef.core__DOT__dir)
                                          ? (7U & (IData)(vlSelfRef.in))
                                          : (7U & ((IData)(vlSelfRef.in) 
                                                   >> 3U))))) 
                              | (6U == ((IData)(vlSelfRef.core__DOT__dir)
                                         ? (7U & (IData)(vlSelfRef.in))
                                         : (7U & ((IData)(vlSelfRef.in) 
                                                  >> 3U))))) 
                             | (7U == ((IData)(vlSelfRef.core__DOT__dir)
                                        ? (7U & (IData)(vlSelfRef.in))
                                        : (7U & ((IData)(vlSelfRef.in) 
                                                 >> 3U)))))) {
                            __Vdly__core__DOT__op2 
                                = ((0U == ((IData)(vlSelfRef.core__DOT__dir)
                                            ? (7U & (IData)(vlSelfRef.in))
                                            : (7U & 
                                               ((IData)(vlSelfRef.in) 
                                                >> 3U))))
                                    ? ((IData)(vlSelfRef.core__DOT__size)
                                        ? (IData)(vlSelfRef.ax)
                                        : (0xffU & (IData)(vlSelfRef.ax)))
                                    : ((1U == ((IData)(vlSelfRef.core__DOT__dir)
                                                ? (7U 
                                                   & (IData)(vlSelfRef.in))
                                                : (7U 
                                                   & ((IData)(vlSelfRef.in) 
                                                      >> 3U))))
                                        ? ((IData)(vlSelfRef.core__DOT__size)
                                            ? (IData)(vlSelfRef.cx)
                                            : (0xffU 
                                               & (IData)(vlSelfRef.cx)))
                                        : ((2U == ((IData)(vlSelfRef.core__DOT__dir)
                                                    ? 
                                                   (7U 
                                                    & (IData)(vlSelfRef.in))
                                                    : 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.in) 
                                                       >> 3U))))
                                            ? ((IData)(vlSelfRef.core__DOT__size)
                                                ? (IData)(vlSelfRef.dx)
                                                : (0xffU 
                                                   & (IData)(vlSelfRef.dx)))
                                            : ((3U 
                                                == 
                                                ((IData)(vlSelfRef.core__DOT__dir)
                                                  ? 
                                                 (7U 
                                                  & (IData)(vlSelfRef.in))
                                                  : 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.in) 
                                                     >> 3U))))
                                                ? ((IData)(vlSelfRef.core__DOT__size)
                                                    ? (IData)(vlSelfRef.bx)
                                                    : 
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.bx)))
                                                : (
                                                   (4U 
                                                    == 
                                                    ((IData)(vlSelfRef.core__DOT__dir)
                                                      ? 
                                                     (7U 
                                                      & (IData)(vlSelfRef.in))
                                                      : 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.in) 
                                                         >> 3U))))
                                                    ? 
                                                   ((IData)(vlSelfRef.core__DOT__size)
                                                     ? (IData)(vlSelfRef.sp)
                                                     : 
                                                    (0xffU 
                                                     & ((IData)(vlSelfRef.ax) 
                                                        >> 8U)))
                                                    : 
                                                   ((5U 
                                                     == 
                                                     ((IData)(vlSelfRef.core__DOT__dir)
                                                       ? 
                                                      (7U 
                                                       & (IData)(vlSelfRef.in))
                                                       : 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.in) 
                                                          >> 3U))))
                                                     ? 
                                                    ((IData)(vlSelfRef.core__DOT__size)
                                                      ? (IData)(vlSelfRef.bp)
                                                      : 
                                                     (0xffU 
                                                      & ((IData)(vlSelfRef.cx) 
                                                         >> 8U)))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      ((IData)(vlSelfRef.core__DOT__dir)
                                                        ? 
                                                       (7U 
                                                        & (IData)(vlSelfRef.in))
                                                        : 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.in) 
                                                           >> 3U))))
                                                      ? 
                                                     ((IData)(vlSelfRef.core__DOT__size)
                                                       ? (IData)(vlSelfRef.si)
                                                       : 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.dx) 
                                                          >> 8U)))
                                                      : 
                                                     ((IData)(vlSelfRef.core__DOT__size)
                                                       ? (IData)(vlSelfRef.di)
                                                       : 
                                                      (0xffU 
                                                       & ((IData)(vlSelfRef.bx) 
                                                          >> 8U))))))))));
                        }
                    } else if ((1U == (IData)(vlSelfRef.core__DOT__s1))) {
                        __Vdly__ip = (0xffffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                        __Vdly__core__DOT__ea = (0xffffU 
                                                 & ((IData)(vlSelfRef.core__DOT__ea) 
                                                    + (IData)(vlSelfRef.core__DOT__signex)));
                        __Vdly__core__DOT__s1 = 4U;
                        __Vdly__core__DOT__cp = vlSelfRef.core__DOT__cpen;
                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__cpen)))) {
                            __Vdly__core__DOT__s1 = 0U;
                            __Vdly__core__DOT__fn = 3U;
                        }
                    } else if ((2U == (IData)(vlSelfRef.core__DOT__s1))) {
                        __Vdly__ip = (0xffffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                        __Vdly__core__DOT__ea = (0xffffU 
                                                 & ((IData)(vlSelfRef.core__DOT__ea) 
                                                    + (IData)(vlSelfRef.in)));
                        __Vdly__core__DOT__s1 = 3U;
                    } else if ((3U == (IData)(vlSelfRef.core__DOT__s1))) {
                        __Vdly__ip = (0xffffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                        __Vdly__core__DOT__ea = (0xffffU 
                                                 & ((IData)(vlSelfRef.core__DOT__ea) 
                                                    + 
                                                    ((IData)(vlSelfRef.in) 
                                                     << 8U)));
                        __Vdly__core__DOT__s1 = 4U;
                        __Vdly__core__DOT__cp = vlSelfRef.core__DOT__cpen;
                        if ((1U & (~ (IData)(vlSelfRef.core__DOT__cpen)))) {
                            __Vdly__core__DOT__s1 = 0U;
                            __Vdly__core__DOT__fn = 3U;
                        }
                    } else if ((4U == (IData)(vlSelfRef.core__DOT__s1))) {
                        if (vlSelfRef.core__DOT__dir) {
                            __Vdly__core__DOT__op2 
                                = vlSelfRef.in;
                        } else {
                            __Vdly__core__DOT__op1 
                                = vlSelfRef.in;
                        }
                        if (vlSelfRef.core__DOT__size) {
                            __Vdly__core__DOT__ea = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ea)));
                            __Vdly__core__DOT__s1 = 5U;
                        } else {
                            __Vdly__core__DOT__s1 = 0U;
                            __Vdly__core__DOT__fn = 3U;
                        }
                    } else if ((5U == (IData)(vlSelfRef.core__DOT__s1))) {
                        __Vdly__core__DOT__ea = (0xffffU 
                                                 & ((IData)(vlSelfRef.core__DOT__ea) 
                                                    - (IData)(1U)));
                        if (vlSelfRef.core__DOT__dir) {
                            __Vdly__core__DOT__op2 
                                = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                   | ((IData)(vlSelfRef.in) 
                                      << 8U));
                        } else {
                            __Vdly__core__DOT__op1 
                                = ((0xffU & (IData)(__Vdly__core__DOT__op1)) 
                                   | ((IData)(vlSelfRef.in) 
                                      << 8U));
                        }
                        __Vdly__core__DOT__s1 = 0U;
                        __Vdly__core__DOT__fn = 3U;
                    }
                } else if ((3U == (IData)(vlSelfRef.core__DOT__fn))) {
                    if (((((((((0U == (0xc4U & (IData)(vlSelfRef.core__DOT__opcode))) 
                               | (4U == (0xc6U & (IData)(vlSelfRef.core__DOT__opcode)))) 
                              | (0xb0U == (0xf0U & (IData)(vlSelfRef.core__DOT__opcode)))) 
                             | (0x88U == (0xfcU & (IData)(vlSelfRef.core__DOT__opcode)))) 
                            | (0xc6U == (0xfeU & (IData)(vlSelfRef.core__DOT__opcode)))) 
                           | (0x8dU == (IData)(vlSelfRef.core__DOT__opcode))) 
                          | (0x40U == (0xf0U & (IData)(vlSelfRef.core__DOT__opcode)))) 
                         | (0x58U == (0xf8U & (IData)(vlSelfRef.core__DOT__opcode))))) {
                        if ((0U == (0xc4U & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            __Vdly__core__DOT__wb = 
                                (0xffffU & vlSelfRef.core__DOT__alu_r);
                            __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                            __Vdly__core__DOT__fn = 
                                ((7U != (IData)(vlSelfRef.core__DOT__alu))
                                  ? 5U : 0U);
                        } else if ((4U == (0xc6U & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                if (vlSelfRef.core__DOT__size) {
                                    __Vdly__core__DOT__op1 
                                        = vlSelfRef.ax;
                                    __Vdly__core__DOT__s2 = 1U;
                                } else {
                                    __Vdly__core__DOT__op1 
                                        = (0xffU & (IData)(vlSelfRef.ax));
                                    __Vdly__core__DOT__s2 = 2U;
                                }
                                __Vdly__core__DOT__op2 
                                    = vlSelfRef.in;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 2U;
                                __Vdly__core__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__fn = 0U;
                                __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                if ((7U != (IData)(vlSelfRef.core__DOT__alu))) {
                                    if (vlSelfRef.core__DOT__size) {
                                        __Vdly__ax 
                                            = (0xffffU 
                                               & vlSelfRef.core__DOT__alu_r);
                                    } else {
                                        __Vdly__ax 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__ax)) 
                                               | (0xffU 
                                                  & vlSelfRef.core__DOT__alu_r));
                                    }
                                }
                            }
                        } else if ((0xb0U == (0xf0U 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__dir = 1U;
                                __Vdly__core__DOT__size 
                                    = (1U & ((IData)(vlSelfRef.core__DOT__opcode) 
                                             >> 3U));
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.in;
                                __Vdly__core__DOT__modrm 
                                    = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                       | (0x38U & ((IData)(vlSelfRef.core__DOT__opcode) 
                                                   << 3U)));
                                if ((1U & (~ ((IData)(vlSelfRef.core__DOT__opcode) 
                                              >> 3U)))) {
                                    __Vdly__core__DOT__fn = 5U;
                                }
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__wb 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__wb)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                                __Vdly__core__DOT__fn = 5U;
                            }
                        } else if ((0x88U == (0xfcU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            __Vdly__core__DOT__wb = vlSelfRef.core__DOT__op2;
                            __Vdly__core__DOT__fn = 5U;
                        } else if ((0xc6U == (0xfeU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.in;
                                __Vdly__core__DOT__dir = 0U;
                                if ((1U & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                    __Vdly__core__DOT__fn = 5U;
                                    __Vdly__core__DOT__cp = 1U;
                                }
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__fn = 5U;
                                __Vdly__core__DOT__cp = 1U;
                                __Vdly__core__DOT__wb 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__wb)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            }
                        } else if ((0x8dU == (IData)(vlSelfRef.core__DOT__opcode))) {
                            __Vdly__core__DOT__wb = vlSelfRef.core__DOT__ea;
                            __Vdly__core__DOT__size = 1U;
                            __Vdly__core__DOT__dir = 1U;
                            __Vdly__core__DOT__fn = 5U;
                        } else if ((0x40U == (0xf0U 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            __Vdly__flags = ((0xffeU 
                                              & (IData)(vlSelfRef.core__DOT__alu_f)) 
                                             | (1U 
                                                & (IData)(vlSelfRef.flags)));
                            __Vdly__core__DOT__fn = 5U;
                            __Vdly__core__DOT__modrm 
                                = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                   | (0x38U & ((IData)(vlSelfRef.core__DOT__opcode) 
                                               << 3U)));
                            __Vdly__core__DOT__dir = 1U;
                            __Vdly__core__DOT__wb = 
                                (0xffffU & vlSelfRef.core__DOT__alu_r);
                        } else {
                            __Vdly__core__DOT__fn = 5U;
                            __Vdly__core__DOT__fnext = 0U;
                            __Vdly__core__DOT__size = 1U;
                            __Vdly__core__DOT__dir = 1U;
                            __Vdly__core__DOT__modrm 
                                = ((0xc7U & (IData)(__Vdly__core__DOT__modrm)) 
                                   | (0x38U & ((IData)(vlSelfRef.core__DOT__opcode) 
                                               << 3U)));
                        }
                    } else if (((((((((7U == (0xe7U 
                                              & (IData)(vlSelfRef.core__DOT__opcode))) 
                                      | (0x69U == (0xfdU 
                                                   & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                     | (0x80U == (0xfcU 
                                                  & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                    | (0xa0U == (0xfcU 
                                                 & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                   | (0x84U == (0xfeU 
                                                & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                  | (0x84U == (0xfcU 
                                               & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                 | (0x9dU == (IData)(vlSelfRef.core__DOT__opcode))) 
                                | (0xa8U == (0xfeU 
                                             & (IData)(vlSelfRef.core__DOT__opcode))))) {
                        if ((7U == (0xe7U & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            __Vdly__core__DOT__fn = 0U;
                            if ((0U == (7U & ((IData)(vlSelfRef.core__DOT__opcode) 
                                              >> 3U)))) {
                                __Vdly__es = vlSelfRef.core__DOT__wb;
                            } else if ((1U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__opcode) 
                                                >> 3U)))) {
                                __Vdly__cs = vlSelfRef.core__DOT__wb;
                            } else if ((2U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__opcode) 
                                                >> 3U)))) {
                                __Vdly__ss = vlSelfRef.core__DOT__wb;
                            } else if ((3U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__opcode) 
                                                >> 3U)))) {
                                __Vdly__ds = vlSelfRef.core__DOT__wb;
                            } else if ((4U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__opcode) 
                                                >> 3U)))) {
                                __Vdly__fs = vlSelfRef.core__DOT__wb;
                            } else if ((5U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__opcode) 
                                                >> 3U)))) {
                                __Vdly__gs = vlSelfRef.core__DOT__wb;
                            }
                        } else if ((0x69U == (0xfdU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                if (vlSelfRef.core__DOT__cp) {
                                    __Vdly__core__DOT__cp = 0U;
                                } else {
                                    __Vdly__ip = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ip)));
                                    if ((2U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        __Vdly__core__DOT__s2 = 2U;
                                        __Vdly__core__DOT__op2 
                                            = vlSelfRef.core__DOT__signex;
                                    } else {
                                        __Vdly__core__DOT__s2 = 1U;
                                        __Vdly__core__DOT__op2 
                                            = vlSelfRef.in;
                                    }
                                    vlSelfRef.core__DOT__imulw = 1U;
                                    __Vdly__core__DOT__op1 
                                        = vlSelfRef.core__DOT__op2;
                                }
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 2U;
                                __Vdly__core__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__wb 
                                    = (0xffffU & vlSelfRef.core__DOT__mult);
                                __Vdly__core__DOT__fn = 5U;
                                __Vdly__flags = ((0xfbfU 
                                                  & (IData)(__Vdly__flags)) 
                                                 | ((IData)(vlSelfRef.core__DOT__multzf) 
                                                    << 6U));
                                __Vdly__flags = ((0xffeU 
                                                  & (IData)(__Vdly__flags)) 
                                                 | (IData)(vlSelfRef.core__DOT__multcf));
                                __Vdly__flags = ((0x7ffU 
                                                  & (IData)(__Vdly__flags)) 
                                                 | ((IData)(vlSelfRef.core__DOT__multcf) 
                                                    << 0xbU));
                            }
                        } else if ((0x80U == (0xfcU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__alu 
                                    = (7U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                             >> 3U));
                                __Vdly__core__DOT__cpen 
                                    = vlSelfRef.core__DOT__cp;
                                __Vdly__core__DOT__cp = 0U;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 2U;
                                __Vdly__core__DOT__op2 
                                    = vlSelfRef.in;
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                if ((1U == (3U & (IData)(vlSelfRef.core__DOT__opcode)))) {
                                    __Vdly__ip = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ip)));
                                    __Vdly__core__DOT__op2 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                           | ((IData)(vlSelfRef.in) 
                                              << 8U));
                                } else if ((3U == (3U 
                                                   & (IData)(vlSelfRef.core__DOT__opcode)))) {
                                    __Vdly__core__DOT__op2 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                           | (0xff00U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.core__DOT__op2) 
                                                                >> 7U)))) 
                                                 << 8U)));
                                }
                                __Vdly__core__DOT__s2 = 3U;
                            } else if ((3U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__cp 
                                    = vlSelfRef.core__DOT__cpen;
                                __Vdly__core__DOT__wb 
                                    = (0xffffU & vlSelfRef.core__DOT__alu_r);
                                __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                __Vdly__core__DOT__fn 
                                    = ((7U != (IData)(vlSelfRef.core__DOT__alu))
                                        ? 5U : 0U);
                            }
                        } else if ((0xa0U == (0xfcU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__ea 
                                    = ((0xff00U & (IData)(__Vdly__core__DOT__ea)) 
                                       | (IData)(vlSelfRef.in));
                                __Vdly__core__DOT__s2 = 1U;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__ea 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__ea)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                                __Vdly__core__DOT__cp = 1U;
                                __Vdly__core__DOT__s2 
                                    = ((IData)(vlSelfRef.core__DOT__dir)
                                        ? 2U : 5U);
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                vlSelfRef.we = 1U;
                                vlSelfRef.out = (0xffU 
                                                 & (IData)(vlSelfRef.ax));
                                __Vdly__core__DOT__s2 
                                    = ((IData)(vlSelfRef.core__DOT__size)
                                        ? 3U : 4U);
                            } else if ((3U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__ea 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                                vlSelfRef.we = 1U;
                                vlSelfRef.out = (0xffU 
                                                 & ((IData)(vlSelfRef.ax) 
                                                    >> 8U));
                                __Vdly__core__DOT__s2 = 4U;
                            } else if ((4U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__fn = 0U;
                                vlSelfRef.we = 0U;
                            } else if ((5U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__ea 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                                __Vdly__core__DOT__s2 = 6U;
                                __Vdly__ax = ((0xff00U 
                                               & (IData)(__Vdly__ax)) 
                                              | (IData)(vlSelfRef.in));
                                if ((1U & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                    __Vdly__core__DOT__fn = 0U;
                                }
                            } else if ((6U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__fn = 0U;
                                __Vdly__ax = ((0xffU 
                                               & (IData)(__Vdly__ax)) 
                                              | ((IData)(vlSelfRef.in) 
                                                 << 8U));
                            }
                        } else if ((0x84U == (0xfeU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                            __Vdly__core__DOT__fn = 0U;
                        } else if ((0x84U == (0xfcU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__fn = 5U;
                                __Vdly__core__DOT__fnext = 3U;
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__dir = 1U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__op1;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__fn = 5U;
                                __Vdly__core__DOT__fnext = 0U;
                                __Vdly__core__DOT__cp = 1U;
                                __Vdly__core__DOT__dir = 0U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__op2;
                            }
                        } else if ((0x9dU == (IData)(vlSelfRef.core__DOT__opcode))) {
                            __Vdly__core__DOT__fn = 0U;
                            __Vdly__flags = (0xfffU 
                                             & (2U 
                                                | (IData)(vlSelfRef.core__DOT__wb)));
                        } else if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__ip = (0xffffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelfRef.ip)));
                            __Vdly__core__DOT__s2 = 
                                ((IData)(vlSelfRef.core__DOT__size)
                                  ? 1U : 2U);
                            __Vdly__core__DOT__alu = 4U;
                            __Vdly__core__DOT__op1 
                                = vlSelfRef.ax;
                            __Vdly__core__DOT__op2 
                                = vlSelfRef.in;
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__ip = (0xffffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelfRef.ip)));
                            __Vdly__core__DOT__s2 = 2U;
                            __Vdly__core__DOT__op2 
                                = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                   | ((IData)(vlSelfRef.in) 
                                      << 8U));
                        } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                            __Vdly__core__DOT__fn = 0U;
                        }
                    } else if (((((((((((0x70U == (0xf0U 
                                                   & (IData)(vlSelfRef.core__DOT__opcode))) 
                                        || (0xe0U == 
                                            (0xfcU 
                                             & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                       || (0xebU == (IData)(vlSelfRef.core__DOT__opcode))) 
                                      | (0xe9U == (IData)(vlSelfRef.core__DOT__opcode))) 
                                     | (0xeaU == (IData)(vlSelfRef.core__DOT__opcode))) 
                                    | (0xe8U == (IData)(vlSelfRef.core__DOT__opcode))) 
                                   | (0xc3U == (IData)(vlSelfRef.core__DOT__opcode))) 
                                  | (0xc2U == (IData)(vlSelfRef.core__DOT__opcode))) 
                                 | (0xcaU == (0xfeU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                | (0xcfU == (IData)(vlSelfRef.core__DOT__opcode)))) {
                        if ((((0x70U == (0xf0U & (IData)(vlSelfRef.core__DOT__opcode))) 
                              || (0xe0U == (0xfcU & (IData)(vlSelfRef.core__DOT__opcode)))) 
                             || (0xebU == (IData)(vlSelfRef.core__DOT__opcode)))) {
                            __Vdly__ip = (0xffffU & 
                                          ((IData)(1U) 
                                           + ((IData)(vlSelfRef.ip) 
                                              + (IData)(vlSelfRef.core__DOT__signex))));
                            __Vdly__core__DOT__fn = 0U;
                        } else if ((0xe9U == (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__ea 
                                    = ((0xff00U & (IData)(__Vdly__core__DOT__ea)) 
                                       | (IData)(vlSelfRef.in));
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelfRef.ip) 
                                                  + 
                                                  (((IData)(vlSelfRef.in) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (IData)(vlSelfRef.core__DOT__ea))))));
                                __Vdly__core__DOT__fn = 0U;
                            }
                        } else if ((0xeaU == (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__ea 
                                    = vlSelfRef.in;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 2U;
                                __Vdly__core__DOT__ea 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__ea)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 3U;
                                __Vdly__core__DOT__op1 
                                    = vlSelfRef.in;
                            } else if ((3U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = vlSelfRef.core__DOT__ea;
                                __Vdly__cs = (((IData)(vlSelfRef.in) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (IData)(vlSelfRef.core__DOT__op1)));
                                __Vdly__core__DOT__fn = 0U;
                            }
                        } else if ((0xe8U == (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__ea 
                                    = vlSelfRef.in;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__fn = 6U;
                                __Vdly__core__DOT__wb 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.ip)));
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelfRef.ip) 
                                                  + 
                                                  (((IData)(vlSelfRef.in) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (IData)(vlSelfRef.core__DOT__ea))))));
                            }
                        } else if ((0xc3U == (IData)(vlSelfRef.core__DOT__opcode))) {
                            __Vdly__core__DOT__fn = 0U;
                            __Vdly__ip = vlSelfRef.core__DOT__wb;
                        } else if ((0xc2U == (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__ea 
                                    = vlSelfRef.in;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__sp = (0xffffU 
                                              & ((IData)(vlSelfRef.sp) 
                                                 + 
                                                 (((IData)(vlSelfRef.in) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (IData)(vlSelfRef.core__DOT__ea)))));
                                __Vdly__core__DOT__fn = 0U;
                                __Vdly__ip = vlSelfRef.core__DOT__wb;
                            }
                        } else if ((0xcaU == (0xfeU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__fn = 7U;
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__op1 
                                    = vlSelfRef.core__DOT__wb;
                                __Vdly__core__DOT__op2 
                                    = vlSelfRef.in;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                if ((1U & (~ (IData)(vlSelfRef.core__DOT__opcode)))) {
                                    __Vdly__sp = (0xffffU 
                                                  & ((IData)(vlSelfRef.sp) 
                                                     + 
                                                     (((IData)(vlSelfRef.in) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & (IData)(vlSelfRef.core__DOT__op2)))));
                                }
                                __Vdly__core__DOT__fn = 0U;
                                __Vdly__cs = vlSelfRef.core__DOT__wb;
                                __Vdly__ip = vlSelfRef.core__DOT__op1;
                            }
                        } else if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__s2 = 1U;
                            __Vdly__core__DOT__fn = 7U;
                            __Vdly__ip = vlSelfRef.core__DOT__wb;
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__s2 = 2U;
                            __Vdly__core__DOT__fn = 7U;
                            __Vdly__cs = vlSelfRef.core__DOT__wb;
                        } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__fn = 0U;
                            __Vdly__flags = (0xfffU 
                                             & (2U 
                                                | (IData)(vlSelfRef.core__DOT__wb)));
                        }
                    } else if (((((((((0x8cU == (IData)(vlSelfRef.core__DOT__opcode)) 
                                      | (0x8eU == (IData)(vlSelfRef.core__DOT__opcode))) 
                                     | (0x9aU == (IData)(vlSelfRef.core__DOT__opcode))) 
                                    | (0xc4U == (0xfeU 
                                                 & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                   | (0x8fU == (IData)(vlSelfRef.core__DOT__opcode))) 
                                  | (0x68U == (0xfdU 
                                               & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                 | (0xd7U == (IData)(vlSelfRef.core__DOT__opcode))) 
                                | (0xcdU == (IData)(vlSelfRef.core__DOT__opcode)))) {
                        if ((0x8cU == (IData)(vlSelfRef.core__DOT__opcode))) {
                            __Vdly__core__DOT__fn = 5U;
                            __Vdly__core__DOT__size = 1U;
                            if ((0U == (7U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                              >> 3U)))) {
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.es;
                            } else if ((1U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.cs;
                            } else if ((2U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.ss;
                            } else if ((3U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.ds;
                            } else if ((4U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.fs;
                            } else if ((5U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.gs;
                            }
                        } else if ((0x8eU == (IData)(vlSelfRef.core__DOT__opcode))) {
                            __Vdly__core__DOT__fn = 0U;
                            if ((0U == (7U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                              >> 3U)))) {
                                __Vdly__es = vlSelfRef.core__DOT__op2;
                            } else if ((2U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__ss = vlSelfRef.core__DOT__op2;
                            } else if ((3U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__ds = vlSelfRef.core__DOT__op2;
                            } else if ((4U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__fs = vlSelfRef.core__DOT__op2;
                            } else if ((5U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__gs = vlSelfRef.core__DOT__op2;
                            }
                        } else if ((0x9aU == (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__op1 
                                    = ((0xff00U & (IData)(__Vdly__core__DOT__op1)) 
                                       | (IData)(vlSelfRef.in));
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 2U;
                                __Vdly__core__DOT__op1 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__op1)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 3U;
                                __Vdly__core__DOT__op2 
                                    = ((0xff00U & (IData)(__Vdly__core__DOT__op2)) 
                                       | (IData)(vlSelfRef.in));
                            } else if ((3U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 4U;
                                __Vdly__core__DOT__op2 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                                __Vdly__core__DOT__fn = 6U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.cs;
                                __Vdly__core__DOT__fnext = 3U;
                            } else if ((4U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__s2 = 5U;
                                __Vdly__core__DOT__fn = 6U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.ip;
                                __Vdly__core__DOT__fnext = 3U;
                            } else if ((5U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = vlSelfRef.core__DOT__op1;
                                __Vdly__core__DOT__fn = 0U;
                                __Vdly__cs = vlSelfRef.core__DOT__op2;
                            }
                        } else if ((0xc4U == (0xfeU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__ea 
                                    = (0xffffU & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                                __Vdly__core__DOT__s2 = 1U;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__ea 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                                __Vdly__core__DOT__s2 = 2U;
                                __Vdly__core__DOT__wb 
                                    = ((0xff00U & (IData)(__Vdly__core__DOT__wb)) 
                                       | (IData)(vlSelfRef.in));
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__fn = 5U;
                                if ((1U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                    __Vdly__ds = (((IData)(vlSelfRef.in) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (IData)(vlSelfRef.core__DOT__wb)));
                                } else {
                                    __Vdly__es = (((IData)(vlSelfRef.in) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (IData)(vlSelfRef.core__DOT__wb)));
                                }
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__op2;
                            }
                        } else if ((0x8fU == (IData)(vlSelfRef.core__DOT__opcode))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__fn = 2U;
                                __Vdly__core__DOT__cpen = 0U;
                                __Vdly__core__DOT__dir = 0U;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__cp = 1U;
                                __Vdly__core__DOT__fn = 5U;
                                __Vdly__core__DOT__fnext = 0U;
                            }
                        } else if ((0x68U == (0xfdU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 
                                    = ((2U & (IData)(vlSelfRef.core__DOT__opcode))
                                        ? 2U : 1U);
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__signex;
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ip = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ip)));
                                __Vdly__core__DOT__s2 = 2U;
                                __Vdly__core__DOT__wb 
                                    = ((0xffU & (IData)(__Vdly__core__DOT__wb)) 
                                       | ((IData)(vlSelfRef.in) 
                                          << 8U));
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__fn = 6U;
                                __Vdly__core__DOT__fnext = 0U;
                            }
                        } else if ((0xd7U == (IData)(vlSelfRef.core__DOT__opcode))) {
                            __Vdly__core__DOT__fn = 0U;
                            __Vdly__ax = ((0xff00U 
                                           & (IData)(__Vdly__ax)) 
                                          | (IData)(vlSelfRef.in));
                        } else {
                            __Vdly__ip = (0xffffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelfRef.ip)));
                            __Vdly__core__DOT__fn = 4U;
                            __Vdly__core__DOT__intr 
                                = vlSelfRef.in;
                        }
                    } else if ((((((((((0xc0U == (0xfeU 
                                                  & (IData)(vlSelfRef.core__DOT__opcode))) 
                                       || (0xd0U == 
                                           (0xfcU & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                      | (0xe4U == (0xf6U 
                                                   & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                     | (0xe6U == (0xf6U 
                                                  & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                    | (0xf6U == (0xfeU 
                                                 & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                   | (0xfeU == (0xfeU 
                                                & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                  | (0xaaU == (0xfeU 
                                               & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                 | (0xacU == (0xfeU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) 
                                | (0xa4U == (0xfeU 
                                             & (IData)(vlSelfRef.core__DOT__opcode))))) {
                        if (((0xc0U == (0xfeU & (IData)(vlSelfRef.core__DOT__opcode))) 
                             || (0xd0U == (0xfcU & (IData)(vlSelfRef.core__DOT__opcode))))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                if (vlSelfRef.core__DOT__cp) {
                                    __Vdly__core__DOT__cp = 0U;
                                } else {
                                    __Vdly__core__DOT__s2 = 1U;
                                    __Vdly__core__DOT__alu 
                                        = (7U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                 >> 3U));
                                    if ((0x10U & (IData)(vlSelfRef.core__DOT__opcode))) {
                                        __Vdly__core__DOT__op2 
                                            = ((2U 
                                                & (IData)(vlSelfRef.core__DOT__opcode))
                                                ? (0xfU 
                                                   & (IData)(vlSelfRef.cx))
                                                : 1U);
                                    } else {
                                        __Vdly__ip 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.ip)));
                                        __Vdly__core__DOT__op2 
                                            = (0xfU 
                                               & (IData)(vlSelfRef.in));
                                    }
                                }
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                if ((0U != (IData)(vlSelfRef.core__DOT__op2))) {
                                    __Vdly__core__DOT__op1 
                                        = vlSelfRef.core__DOT__rot_r;
                                    __Vdly__flags = vlSelfRef.core__DOT__rot_f;
                                } else {
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.core__DOT__op1;
                                    __Vdly__core__DOT__cp = 1U;
                                    __Vdly__core__DOT__fn = 5U;
                                }
                                __Vdly__core__DOT__op2 
                                    = (0xffffU & ((IData)(vlSelfRef.core__DOT__op2) 
                                                  - (IData)(1U)));
                            }
                        } else if ((0xe4U == (0xf6U 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__cpen = 0U;
                                __Vdly__port_a = ((8U 
                                                   & (IData)(vlSelfRef.core__DOT__opcode))
                                                   ? (IData)(vlSelfRef.dx)
                                                   : (IData)(vlSelfRef.in));
                                if ((1U & (~ ((IData)(vlSelfRef.core__DOT__opcode) 
                                              >> 3U)))) {
                                    __Vdly__ip = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ip)));
                                }
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__s2 = 2U;
                                vlSelfRef.port_r = 1U;
                            } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__s2 = 3U;
                            } else if ((3U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__port_a = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.port_a)));
                                __Vdly__ax = ((IData)(vlSelfRef.core__DOT__cpen)
                                               ? ((0xffU 
                                                   & (IData)(__Vdly__ax)) 
                                                  | ((IData)(vlSelfRef.port_i) 
                                                     << 8U))
                                               : ((0xff00U 
                                                   & (IData)(__Vdly__ax)) 
                                                  | (IData)(vlSelfRef.port_i)));
                                if (vlSelfRef.core__DOT__size) {
                                    __Vdly__core__DOT__s2 = 1U;
                                    __Vdly__core__DOT__cpen = 1U;
                                } else {
                                    __Vdly__core__DOT__fn = 0U;
                                }
                                __Vdly__core__DOT__size = 0U;
                            }
                        } else if ((0xe6U == (0xf6U 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__port_a = ((8U 
                                                   & (IData)(vlSelfRef.core__DOT__opcode))
                                                   ? (IData)(vlSelfRef.dx)
                                                   : (IData)(vlSelfRef.in));
                                vlSelfRef.port_o = 
                                    (0xffU & (IData)(vlSelfRef.ax));
                                vlSelfRef.port_w = 1U;
                                if ((1U & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                    __Vdly__core__DOT__fn = 0U;
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.core__DOT__opcode) 
                                              >> 3U)))) {
                                    __Vdly__ip = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ip)));
                                }
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__port_a = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.port_a)));
                                vlSelfRef.port_o = 
                                    (0xffU & ((IData)(vlSelfRef.ax) 
                                              >> 8U));
                                vlSelfRef.port_w = 1U;
                                __Vdly__core__DOT__fn = 0U;
                            }
                        } else if ((0xf6U == (0xfeU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if (((0U == (7U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                               >> 3U))) 
                                 || (1U == (7U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                  >> 3U))))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__s2 = 1U;
                                    __Vdly__core__DOT__cp = 0U;
                                    __Vdly__core__DOT__alu = 4U;
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__ip = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ip)));
                                    __Vdly__core__DOT__s2 
                                        = ((IData)(vlSelfRef.core__DOT__size)
                                            ? 2U : 3U);
                                    __Vdly__core__DOT__op2 
                                        = vlSelfRef.in;
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__ip = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ip)));
                                    __Vdly__core__DOT__s2 = 3U;
                                    __Vdly__core__DOT__op2 
                                        = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                           | ((IData)(vlSelfRef.in) 
                                              << 8U));
                                } else if ((3U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__fn = 0U;
                                    __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                }
                            } else if ((2U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__core__DOT__wb 
                                    = (0xffffU & (~ (IData)(vlSelfRef.core__DOT__op1)));
                                __Vdly__core__DOT__fn = 5U;
                            } else if ((3U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__s2 = 1U;
                                    __Vdly__core__DOT__alu = 5U;
                                    __Vdly__core__DOT__op2 
                                        = vlSelfRef.core__DOT__op1;
                                    __Vdly__core__DOT__op1 = 0U;
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__fn = 5U;
                                    __Vdly__core__DOT__wb 
                                        = (0xffffU 
                                           & vlSelfRef.core__DOT__alu_r);
                                    __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                }
                            } else if (((4U == (7U 
                                                & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                   >> 3U))) 
                                        || (5U == (7U 
                                                   & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                      >> 3U))))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    if (vlSelfRef.core__DOT__size) {
                                        __Vdly__core__DOT__op1 
                                            = vlSelfRef.core__DOT__op1;
                                        __Vdly__core__DOT__op2 
                                            = vlSelfRef.ax;
                                    } else {
                                        __Vdly__core__DOT__op1 
                                            = ((((8U 
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
                                                  & (IData)(vlSelfRef.core__DOT__op1)));
                                        __Vdly__core__DOT__op2 
                                            = ((((8U 
                                                  & (IData)(vlSelfRef.core__DOT__modrm))
                                                  ? 
                                                 (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.ax) 
                                                                   >> 7U)))))
                                                  : 0U) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.ax)));
                                    }
                                    __Vdly__core__DOT__s2 = 1U;
                                    vlSelfRef.core__DOT__imulw 
                                        = (1U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                 >> 3U));
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__fn = 0U;
                                    if (vlSelfRef.core__DOT__size) {
                                        __Vdly__dx 
                                            = (vlSelfRef.core__DOT__mult 
                                               >> 0x10U);
                                        __Vdly__ax 
                                            = (0xffffU 
                                               & vlSelfRef.core__DOT__mult);
                                    } else {
                                        __Vdly__ax 
                                            = (0xffffU 
                                               & vlSelfRef.core__DOT__mult);
                                    }
                                    __Vdly__flags = 
                                        ((0xfbfU & (IData)(__Vdly__flags)) 
                                         | ((IData)(vlSelfRef.core__DOT__multzf) 
                                            << 6U));
                                    __Vdly__flags = 
                                        ((0xffeU & (IData)(__Vdly__flags)) 
                                         | (IData)(vlSelfRef.core__DOT__multcf));
                                    __Vdly__flags = 
                                        ((0x7ffU & (IData)(__Vdly__flags)) 
                                         | ((IData)(vlSelfRef.core__DOT__multcf) 
                                            << 0xbU));
                                }
                            } else if (((6U == (7U 
                                                & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                   >> 3U))) 
                                        || (7U == (7U 
                                                   & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                      >> 3U))))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__op1 
                                        = ((IData)(vlSelfRef.core__DOT__size)
                                            ? 8U : 4U);
                                    __Vdly__core__DOT__s2 = 1U;
                                    __Vdly__core__DOT__fn = 8U;
                                    __Vdly__core__DOT__divr = 0U;
                                    if ((8U & (IData)(vlSelfRef.core__DOT__modrm))) {
                                        __Vdly__core__DOT__sign 
                                            = (1U & 
                                               ((vlSelfRef.core__DOT__divi 
                                                 >> 0x1fU) 
                                                ^ ((IData)(vlSelfRef.core__DOT__op1) 
                                                   >> 
                                                   ((IData)(vlSelfRef.core__DOT__size)
                                                     ? 0xfU
                                                     : 7U))));
                                        __Vdly__core__DOT__diva 
                                            = ((vlSelfRef.core__DOT__divi 
                                                >> 0x1fU)
                                                ? (- vlSelfRef.core__DOT__divi)
                                                : vlSelfRef.core__DOT__divi);
                                        vlSelfRef.core__DOT__divb 
                                            = ((IData)(vlSelfRef.core__DOT__size)
                                                ? (
                                                   (0x8000U 
                                                    & (IData)(vlSelfRef.core__DOT__op1))
                                                    ? 
                                                   (- (IData)(vlSelfRef.core__DOT__op1))
                                                    : (IData)(vlSelfRef.core__DOT__op1))
                                                : (
                                                   (0x80U 
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
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__fn 
                                        = ((0U != (0xffffU 
                                                   & ((IData)(vlSelfRef.core__DOT__size)
                                                       ? 
                                                      (vlSelfRef.core__DOT__diva 
                                                       >> 0x10U)
                                                       : 
                                                      (0xffU 
                                                       & (vlSelfRef.core__DOT__diva 
                                                          >> 8U)))))
                                            ? 4U : 0U);
                                    __Vdly__core__DOT__intr = 0U;
                                    if (vlSelfRef.core__DOT__size) {
                                        if (vlSelfRef.core__DOT__sign) {
                                            __Vdly__dx 
                                                = (0xffffU 
                                                   & (- vlSelfRef.core__DOT__divr));
                                            __Vdly__ax 
                                                = (0xffffU 
                                                   & (- vlSelfRef.core__DOT__diva));
                                        } else {
                                            __Vdly__dx 
                                                = (0xffffU 
                                                   & vlSelfRef.core__DOT__divr);
                                            __Vdly__ax 
                                                = (0xffffU 
                                                   & vlSelfRef.core__DOT__diva);
                                        }
                                    } else {
                                        __Vdly__ax 
                                            = ((0xff00U 
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
                        } else if ((0xfeU == (0xfeU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if (((0U == (7U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                               >> 3U))) 
                                 || (1U == (7U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                  >> 3U))))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__s2 = 1U;
                                    __Vdly__core__DOT__op2 = 1U;
                                    __Vdly__core__DOT__alu 
                                        = ((8U & (IData)(vlSelfRef.core__DOT__modrm))
                                            ? 5U : 0U);
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__fn = 5U;
                                    __Vdly__core__DOT__wb 
                                        = (0xffffU 
                                           & vlSelfRef.core__DOT__alu_r);
                                    __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                                }
                            } else if ((2U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.ip;
                                __Vdly__core__DOT__fn 
                                    = ((IData)(vlSelfRef.core__DOT__size)
                                        ? 6U : 9U);
                                __Vdly__ip = vlSelfRef.core__DOT__op1;
                            } else if ((3U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__ea 
                                        = (0xffffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelfRef.core__DOT__ea)));
                                    __Vdly__core__DOT__op1 
                                        = vlSelfRef.ip;
                                    __Vdly__core__DOT__s2 = 1U;
                                    __Vdly__core__DOT__op2 
                                        = vlSelfRef.cs;
                                    if ((1U & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                        __Vdly__core__DOT__fn = 9U;
                                    }
                                    __Vdly__ip = vlSelfRef.core__DOT__op1;
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__ea 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ea)));
                                    __Vdly__core__DOT__s2 = 2U;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.in;
                                    __Vdly__core__DOT__fnext = 3U;
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__s2 = 3U;
                                    __Vdly__core__DOT__fn = 6U;
                                    __Vdly__cs = (((IData)(vlSelfRef.in) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (IData)(vlSelfRef.core__DOT__wb)));
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.core__DOT__op2;
                                } else if ((3U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__s2 = 4U;
                                    __Vdly__core__DOT__fn = 6U;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.core__DOT__op1;
                                } else if ((4U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__fn = 0U;
                                }
                            } else if ((4U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__ip = vlSelfRef.core__DOT__op1;
                                __Vdly__core__DOT__fn 
                                    = ((IData)(vlSelfRef.core__DOT__size)
                                        ? 0U : 9U);
                            } else if ((5U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__ea 
                                        = (0xffffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelfRef.core__DOT__ea)));
                                    __Vdly__core__DOT__s2 = 1U;
                                    __Vdly__ip = vlSelfRef.core__DOT__op1;
                                    if ((1U & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                        __Vdly__core__DOT__fn = 9U;
                                    }
                                } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__ea 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__ea)));
                                    __Vdly__core__DOT__s2 = 2U;
                                    __Vdly__core__DOT__wb 
                                        = vlSelfRef.in;
                                } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                                    __Vdly__core__DOT__fn = 0U;
                                    __Vdly__cs = (((IData)(vlSelfRef.in) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (IData)(vlSelfRef.core__DOT__wb)));
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__core__DOT__fn = 6U;
                                __Vdly__core__DOT__wb 
                                    = vlSelfRef.core__DOT__op1;
                            } else if ((7U == (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U)))) {
                                __Vdly__core__DOT__fn = 9U;
                            }
                        } else if ((0xaaU == (0xfeU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__s2 = 1U;
                                vlSelfRef.out = (0xffU 
                                                 & (IData)(vlSelfRef.ax));
                                __Vdly__core__DOT__segment 
                                    = vlSelfRef.es;
                                __Vdly__core__DOT__ea 
                                    = vlSelfRef.di;
                                vlSelfRef.we = 1U;
                                __Vdly__di = (0xffffU 
                                              & ((0x400U 
                                                  & (IData)(vlSelfRef.flags))
                                                  ? 
                                                 ((IData)(vlSelfRef.di) 
                                                  - (IData)(1U))
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.di))));
                                if ((1U & (~ (IData)(vlSelfRef.core__DOT__size)))) {
                                    __Vdly__cx = (0xffffU 
                                                  & ((IData)(vlSelfRef.cx) 
                                                     - 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.core__DOT__rep) 
                                                         >> 1U))));
                                    __Vdly__core__DOT__s2 = 0U;
                                    __Vdly__core__DOT__fn 
                                        = ((IData)(vlSelfRef.core__DOT__repb)
                                            ? 3U : 0U);
                                }
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__ea 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                                __Vdly__cx = (0xffffU 
                                              & ((IData)(vlSelfRef.cx) 
                                                 - 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.core__DOT__rep) 
                                                     >> 1U))));
                                __Vdly__di = (0xffffU 
                                              & ((0x400U 
                                                  & (IData)(vlSelfRef.flags))
                                                  ? 
                                                 ((IData)(vlSelfRef.di) 
                                                  - (IData)(1U))
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.di))));
                                __Vdly__core__DOT__s2 = 0U;
                                vlSelfRef.we = 1U;
                                vlSelfRef.out = (0xffU 
                                                 & ((IData)(vlSelfRef.ax) 
                                                    >> 8U));
                                __Vdly__core__DOT__fn 
                                    = ((IData)(vlSelfRef.core__DOT__repb)
                                        ? 3U : 0U);
                            }
                        } else if ((0xacU == (0xfeU 
                                              & (IData)(vlSelfRef.core__DOT__opcode)))) {
                            if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__core__DOT__fn 
                                    = ((IData)(vlSelfRef.core__DOT__size)
                                        ? 3U : 0U);
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__ax = ((0xff00U 
                                               & (IData)(__Vdly__ax)) 
                                              | (IData)(vlSelfRef.in));
                                __Vdly__core__DOT__ea 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                                vlSelfRef.si = (0xffffU 
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
                            } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                                __Vdly__ax = ((0xffU 
                                               & (IData)(__Vdly__ax)) 
                                              | ((IData)(vlSelfRef.in) 
                                                 << 8U));
                                __Vdly__core__DOT__fn = 0U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                            if (vlSelfRef.core__DOT__size) {
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__ea 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                            } else {
                                __Vdly__core__DOT__s2 = 3U;
                                __Vdly__core__DOT__ea 
                                    = vlSelfRef.di;
                                __Vdly__core__DOT__segment 
                                    = vlSelfRef.es;
                                vlSelfRef.we = 1U;
                            }
                            __Vdly__core__DOT__wb = vlSelfRef.in;
                            vlSelfRef.out = vlSelfRef.in;
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__s2 = 2U;
                            vlSelfRef.we = 1U;
                            __Vdly__core__DOT__ea = vlSelfRef.di;
                            vlSelfRef.out = (0xffU 
                                             & (IData)(vlSelfRef.core__DOT__wb));
                            __Vdly__core__DOT__segment 
                                = vlSelfRef.es;
                            __Vdly__core__DOT__wb = vlSelfRef.in;
                        } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__ea = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ea)));
                            __Vdly__core__DOT__s2 = 3U;
                            vlSelfRef.we = 1U;
                            vlSelfRef.out = (0xffU 
                                             & (IData)(vlSelfRef.core__DOT__wb));
                        } else if ((3U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__cx = (0xffffU & 
                                          ((IData)(vlSelfRef.cx) 
                                           - (1U & 
                                              ((IData)(vlSelfRef.core__DOT__rep) 
                                               >> 1U))));
                            __Vdly__di = vlSelfRef.core__DOT__dinc;
                            __Vdly__core__DOT__s2 = 0U;
                            vlSelfRef.we = 0U;
                            __Vdly__core__DOT__segment 
                                = vlSelfRef.core__DOT__op1;
                            __Vdly__core__DOT__ea = vlSelfRef.core__DOT__sinc;
                            vlSelfRef.si = vlSelfRef.core__DOT__sinc;
                            __Vdly__core__DOT__fn = 
                                ((IData)(vlSelfRef.core__DOT__repb)
                                  ? 3U : 0U);
                        }
                    } else if ((0xa6U == (0xfeU & (IData)(vlSelfRef.core__DOT__opcode)))) {
                        if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                            if (vlSelfRef.core__DOT__size) {
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__ea 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core__DOT__ea)));
                                __Vdly__core__DOT__segment 
                                    = vlSelfRef.core__DOT__segment;
                            } else {
                                __Vdly__core__DOT__s2 = 2U;
                                __Vdly__core__DOT__ea 
                                    = (0xffffU & (IData)(vlSelfRef.di));
                                __Vdly__core__DOT__segment 
                                    = vlSelfRef.es;
                            }
                            __Vdly__core__DOT__op1 
                                = vlSelfRef.in;
                            __Vdly__core__DOT__tmp16 
                                = vlSelfRef.core__DOT__segment;
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__s2 = 2U;
                            __Vdly__core__DOT__op1 
                                = ((0xffU & (IData)(__Vdly__core__DOT__op1)) 
                                   | ((IData)(vlSelfRef.in) 
                                      << 8U));
                            __Vdly__core__DOT__segment 
                                = vlSelfRef.es;
                            __Vdly__core__DOT__ea = vlSelfRef.di;
                        } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__ea = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ea)));
                            __Vdly__core__DOT__s2 = 
                                ((IData)(vlSelfRef.core__DOT__size)
                                  ? 3U : 4U);
                            __Vdly__core__DOT__op2 
                                = vlSelfRef.in;
                        } else if ((3U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__s2 = 4U;
                            __Vdly__core__DOT__op2 
                                = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                   | ((IData)(vlSelfRef.in) 
                                      << 8U));
                        } else if ((4U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__di = vlSelfRef.core__DOT__dinc;
                            __Vdly__core__DOT__s2 = 0U;
                            __Vdly__core__DOT__ea = vlSelfRef.core__DOT__sinc;
                            vlSelfRef.si = vlSelfRef.core__DOT__sinc;
                            __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                            __Vdly__core__DOT__segment 
                                = vlSelfRef.core__DOT__tmp16;
                            __Vdly__core__DOT__fn = 
                                (((IData)(vlSelfRef.core__DOT__repb) 
                                  & ((1U & (IData)(vlSelfRef.core__DOT__rep)) 
                                     == (1U & ((IData)(vlSelfRef.core__DOT__alu_f) 
                                               >> 6U))))
                                  ? 3U : 0U);
                            __Vdly__cx = (0xffffU & 
                                          ((IData)(vlSelfRef.cx) 
                                           - (1U & 
                                              ((IData)(vlSelfRef.core__DOT__rep) 
                                               >> 1U))));
                        }
                    } else if ((0xaeU == (0xfeU & (IData)(vlSelfRef.core__DOT__opcode)))) {
                        if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__ea = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ea)));
                            if (vlSelfRef.core__DOT__size) {
                                __Vdly__core__DOT__s2 = 1U;
                                __Vdly__core__DOT__op1 
                                    = vlSelfRef.ax;
                            } else {
                                __Vdly__core__DOT__s2 = 2U;
                                __Vdly__core__DOT__op1 
                                    = (0xffU & (IData)(vlSelfRef.ax));
                            }
                            __Vdly__core__DOT__op2 
                                = vlSelfRef.in;
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__di = vlSelfRef.core__DOT__dinc;
                            __Vdly__core__DOT__s2 = 2U;
                            __Vdly__core__DOT__op2 
                                = ((0xffU & (IData)(__Vdly__core__DOT__op2)) 
                                   | ((IData)(vlSelfRef.in) 
                                      << 8U));
                        } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__di = vlSelfRef.core__DOT__dinc;
                            __Vdly__core__DOT__s2 = 0U;
                            __Vdly__flags = vlSelfRef.core__DOT__alu_f;
                            __Vdly__core__DOT__ea = vlSelfRef.core__DOT__dinc;
                            __Vdly__core__DOT__fn = 
                                (((IData)(vlSelfRef.core__DOT__repb) 
                                  & ((1U & (IData)(vlSelfRef.core__DOT__rep)) 
                                     == (1U & ((IData)(vlSelfRef.core__DOT__alu_f) 
                                               >> 6U))))
                                  ? 3U : 0U);
                            __Vdly__cx = (0xffffU & 
                                          ((IData)(vlSelfRef.cx) 
                                           - (1U & 
                                              ((IData)(vlSelfRef.core__DOT__rep) 
                                               >> 1U))));
                        }
                    }
                } else if ((4U == (IData)(vlSelfRef.core__DOT__fn))) {
                    if (((((((((0U == (IData)(vlSelfRef.core__DOT__s2)) 
                               | (1U == (IData)(vlSelfRef.core__DOT__s2))) 
                              | (2U == (IData)(vlSelfRef.core__DOT__s2))) 
                             | (3U == (IData)(vlSelfRef.core__DOT__s2))) 
                            | (4U == (IData)(vlSelfRef.core__DOT__s2))) 
                           | (5U == (IData)(vlSelfRef.core__DOT__s2))) 
                          | (6U == (IData)(vlSelfRef.core__DOT__s2))) 
                         | (7U == (IData)(vlSelfRef.core__DOT__s2)))) {
                        if ((0U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__s2 = 1U;
                            __Vdly__core__DOT__fn = 6U;
                            __Vdly__core__DOT__wb = vlSelfRef.flags;
                            __Vdly__core__DOT__fnext = 4U;
                        } else if ((1U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__s2 = 2U;
                            __Vdly__core__DOT__fn = 6U;
                            __Vdly__core__DOT__wb = vlSelfRef.cs;
                        } else if ((2U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__s2 = 3U;
                            __Vdly__core__DOT__fn = 6U;
                            __Vdly__core__DOT__wb = vlSelfRef.ip;
                        } else if ((3U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__s2 = 4U;
                            __Vdly__core__DOT__ea = 
                                ((IData)(vlSelfRef.core__DOT__intr) 
                                 << 2U);
                            __Vdly__core__DOT__segment = 0U;
                            __Vdly__core__DOT__cp = 1U;
                        } else if ((4U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__ea = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ea)));
                            __Vdly__core__DOT__s2 = 5U;
                            __Vdly__ip = ((0xff00U 
                                           & (IData)(__Vdly__ip)) 
                                          | (IData)(vlSelfRef.in));
                        } else if ((5U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__ea = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ea)));
                            __Vdly__core__DOT__s2 = 6U;
                            __Vdly__ip = ((0xffU & (IData)(__Vdly__ip)) 
                                          | ((IData)(vlSelfRef.in) 
                                             << 8U));
                        } else if ((6U == (IData)(vlSelfRef.core__DOT__s2))) {
                            __Vdly__core__DOT__ea = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ea)));
                            __Vdly__core__DOT__s2 = 7U;
                            __Vdly__cs = ((0xff00U 
                                           & (IData)(__Vdly__cs)) 
                                          | (IData)(vlSelfRef.in));
                        } else {
                            __Vdly__core__DOT__ea = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ea)));
                            __Vdly__core__DOT__cp = 0U;
                            __Vdly__cs = ((0xffU & (IData)(__Vdly__cs)) 
                                          | ((IData)(vlSelfRef.in) 
                                             << 8U));
                            __Vdly__core__DOT__fn = 0U;
                            __Vdly__flags = (0xdffU 
                                             & (IData)(__Vdly__flags));
                        }
                    }
                } else if ((5U == (IData)(vlSelfRef.core__DOT__fn))) {
                    if ((0U == (IData)(vlSelfRef.core__DOT__s1))) {
                        if (((IData)(vlSelfRef.core__DOT__dir) 
                             | (3U == (3U & ((IData)(vlSelfRef.core__DOT__modrm) 
                                             >> 6U))))) {
                            __Vdly__core__DOT__cp = 0U;
                            __Vdly__core__DOT__s1 = 0U;
                            __Vdly__core__DOT__fn = vlSelfRef.core__DOT__fnext;
                            if (((((((((0U == ((IData)(vlSelfRef.core__DOT__dir)
                                                ? (7U 
                                                   & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                      >> 3U))
                                                : (7U 
                                                   & (IData)(vlSelfRef.core__DOT__modrm)))) 
                                       | (1U == ((IData)(vlSelfRef.core__DOT__dir)
                                                  ? 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                     >> 3U))
                                                  : 
                                                 (7U 
                                                  & (IData)(vlSelfRef.core__DOT__modrm))))) 
                                      | (2U == ((IData)(vlSelfRef.core__DOT__dir)
                                                 ? 
                                                (7U 
                                                 & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                    >> 3U))
                                                 : 
                                                (7U 
                                                 & (IData)(vlSelfRef.core__DOT__modrm))))) 
                                     | (3U == ((IData)(vlSelfRef.core__DOT__dir)
                                                ? (7U 
                                                   & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                      >> 3U))
                                                : (7U 
                                                   & (IData)(vlSelfRef.core__DOT__modrm))))) 
                                    | (4U == ((IData)(vlSelfRef.core__DOT__dir)
                                               ? (7U 
                                                  & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                     >> 3U))
                                               : (7U 
                                                  & (IData)(vlSelfRef.core__DOT__modrm))))) 
                                   | (5U == ((IData)(vlSelfRef.core__DOT__dir)
                                              ? (7U 
                                                 & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                    >> 3U))
                                              : (7U 
                                                 & (IData)(vlSelfRef.core__DOT__modrm))))) 
                                  | (6U == ((IData)(vlSelfRef.core__DOT__dir)
                                             ? (7U 
                                                & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                   >> 3U))
                                             : (7U 
                                                & (IData)(vlSelfRef.core__DOT__modrm))))) 
                                 | (7U == ((IData)(vlSelfRef.core__DOT__dir)
                                            ? (7U & 
                                               ((IData)(vlSelfRef.core__DOT__modrm) 
                                                >> 3U))
                                            : (7U & (IData)(vlSelfRef.core__DOT__modrm)))))) {
                                if ((0U == ((IData)(vlSelfRef.core__DOT__dir)
                                             ? (7U 
                                                & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                   >> 3U))
                                             : (7U 
                                                & (IData)(vlSelfRef.core__DOT__modrm))))) {
                                    if (vlSelfRef.core__DOT__size) {
                                        __Vdly__ax 
                                            = vlSelfRef.core__DOT__wb;
                                    } else {
                                        __Vdly__ax 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__ax)) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.core__DOT__wb)));
                                    }
                                } else if ((1U == ((IData)(vlSelfRef.core__DOT__dir)
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                       >> 3U))
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelfRef.core__DOT__modrm))))) {
                                    if (vlSelfRef.core__DOT__size) {
                                        __Vdly__cx 
                                            = vlSelfRef.core__DOT__wb;
                                    } else {
                                        __Vdly__cx 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__cx)) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.core__DOT__wb)));
                                    }
                                } else if ((2U == ((IData)(vlSelfRef.core__DOT__dir)
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                       >> 3U))
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelfRef.core__DOT__modrm))))) {
                                    if (vlSelfRef.core__DOT__size) {
                                        __Vdly__dx 
                                            = vlSelfRef.core__DOT__wb;
                                    } else {
                                        __Vdly__dx 
                                            = ((0xff00U 
                                                & (IData)(__Vdly__dx)) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.core__DOT__wb)));
                                    }
                                } else if ((3U == ((IData)(vlSelfRef.core__DOT__dir)
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                       >> 3U))
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelfRef.core__DOT__modrm))))) {
                                    if (vlSelfRef.core__DOT__size) {
                                        vlSelfRef.bx 
                                            = vlSelfRef.core__DOT__wb;
                                    } else {
                                        vlSelfRef.bx 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.bx)) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.core__DOT__wb)));
                                    }
                                } else if ((4U == ((IData)(vlSelfRef.core__DOT__dir)
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                       >> 3U))
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelfRef.core__DOT__modrm))))) {
                                    if (vlSelfRef.core__DOT__size) {
                                        __Vdly__sp 
                                            = vlSelfRef.core__DOT__wb;
                                    } else {
                                        __Vdly__ax 
                                            = ((0xffU 
                                                & (IData)(__Vdly__ax)) 
                                               | (0xff00U 
                                                  & ((IData)(vlSelfRef.core__DOT__wb) 
                                                     << 8U)));
                                    }
                                } else if ((5U == ((IData)(vlSelfRef.core__DOT__dir)
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                       >> 3U))
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelfRef.core__DOT__modrm))))) {
                                    if (vlSelfRef.core__DOT__size) {
                                        vlSelfRef.bp 
                                            = vlSelfRef.core__DOT__wb;
                                    } else {
                                        __Vdly__cx 
                                            = ((0xffU 
                                                & (IData)(__Vdly__cx)) 
                                               | (0xff00U 
                                                  & ((IData)(vlSelfRef.core__DOT__wb) 
                                                     << 8U)));
                                    }
                                } else if ((6U == ((IData)(vlSelfRef.core__DOT__dir)
                                                    ? 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.core__DOT__modrm) 
                                                       >> 3U))
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelfRef.core__DOT__modrm))))) {
                                    if (vlSelfRef.core__DOT__size) {
                                        vlSelfRef.si 
                                            = vlSelfRef.core__DOT__wb;
                                    } else {
                                        __Vdly__dx 
                                            = ((0xffU 
                                                & (IData)(__Vdly__dx)) 
                                               | (0xff00U 
                                                  & ((IData)(vlSelfRef.core__DOT__wb) 
                                                     << 8U)));
                                    }
                                } else if (vlSelfRef.core__DOT__size) {
                                    __Vdly__di = vlSelfRef.core__DOT__wb;
                                } else {
                                    vlSelfRef.bx = 
                                        ((0xffU & (IData)(vlSelfRef.bx)) 
                                         | (0xff00U 
                                            & ((IData)(vlSelfRef.core__DOT__wb) 
                                               << 8U)));
                                }
                            }
                        } else {
                            vlSelfRef.out = (0xffU 
                                             & (IData)(vlSelfRef.core__DOT__wb));
                            vlSelfRef.we = 1U;
                            __Vdly__core__DOT__s1 = 1U;
                        }
                    } else if ((1U == (IData)(vlSelfRef.core__DOT__s1))) {
                        if (vlSelfRef.core__DOT__size) {
                            __Vdly__core__DOT__ea = 
                                (0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.core__DOT__ea)));
                            __Vdly__core__DOT__size = 0U;
                            vlSelfRef.out = (0xffU 
                                             & ((IData)(vlSelfRef.core__DOT__wb) 
                                                >> 8U));
                        } else {
                            __Vdly__core__DOT__s1 = 0U;
                            __Vdly__core__DOT__cp = 0U;
                            vlSelfRef.we = 0U;
                            __Vdly__core__DOT__fn = vlSelfRef.core__DOT__fnext;
                        }
                    }
                } else if ((6U == (IData)(vlSelfRef.core__DOT__fn))) {
                    if ((0U == (IData)(vlSelfRef.core__DOT__s1))) {
                        __Vdly__core__DOT__s1 = 1U;
                        vlSelfRef.out = (0xffU & (IData)(vlSelfRef.core__DOT__wb));
                        __Vdly__core__DOT__ea = (0xffffU 
                                                 & ((IData)(vlSelfRef.sp) 
                                                    - (IData)(2U)));
                        vlSelfRef.we = 1U;
                        __Vdly__core__DOT__cp = 1U;
                        __Vdly__core__DOT__segment 
                            = vlSelfRef.ss;
                    } else if ((1U == (IData)(vlSelfRef.core__DOT__s1))) {
                        __Vdly__core__DOT__ea = (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.core__DOT__ea)));
                        __Vdly__core__DOT__s1 = 2U;
                        vlSelfRef.out = (0xffU & ((IData)(vlSelfRef.core__DOT__wb) 
                                                  >> 8U));
                    } else if ((2U == (IData)(vlSelfRef.core__DOT__s1))) {
                        __Vdly__sp = (0xffffU & ((IData)(vlSelfRef.sp) 
                                                 - (IData)(2U)));
                        __Vdly__core__DOT__s1 = 0U;
                        vlSelfRef.we = 0U;
                        __Vdly__core__DOT__cp = 0U;
                        __Vdly__core__DOT__fn = vlSelfRef.core__DOT__fnext;
                    }
                } else if ((0U == (IData)(vlSelfRef.core__DOT__s1))) {
                    __Vdly__core__DOT__s1 = 1U;
                    __Vdly__core__DOT__segment = vlSelfRef.ss;
                    __Vdly__core__DOT__ea = vlSelfRef.sp;
                    __Vdly__core__DOT__cp = 1U;
                } else if ((1U == (IData)(vlSelfRef.core__DOT__s1))) {
                    __Vdly__core__DOT__ea = (0xffffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.core__DOT__ea)));
                    __Vdly__core__DOT__s1 = 2U;
                    __Vdly__core__DOT__wb = ((0xff00U 
                                              & (IData)(__Vdly__core__DOT__wb)) 
                                             | (IData)(vlSelfRef.in));
                } else if ((2U == (IData)(vlSelfRef.core__DOT__s1))) {
                    __Vdly__sp = (0xffffU & ((IData)(2U) 
                                             + (IData)(vlSelfRef.sp)));
                    __Vdly__core__DOT__s1 = 0U;
                    __Vdly__core__DOT__wb = ((0xffU 
                                              & (IData)(__Vdly__core__DOT__wb)) 
                                             | ((IData)(vlSelfRef.in) 
                                                << 8U));
                    __Vdly__core__DOT__cp = 0U;
                    __Vdly__core__DOT__fn = vlSelfRef.core__DOT__fnext;
                }
            } else if ((8U == (IData)(vlSelfRef.core__DOT__fn))) {
                __Vdly__core__DOT__divr = ((1U & (IData)(
                                                         (vlSelfRef.core__DOT__div4c 
                                                          >> 0x20U)))
                                            ? vlSelfRef.core__DOT__div4
                                            : (IData)(vlSelfRef.core__DOT__div4c));
                __Vdly__core__DOT__diva = vlSelfRef.core__DOT__div4a;
                __Vdly__core__DOT__fn = ((1U != (IData)(vlSelfRef.core__DOT__op1))
                                          ? 8U : 3U);
                __Vdly__core__DOT__op1 = (0xffffU & 
                                          ((IData)(vlSelfRef.core__DOT__op1) 
                                           - (IData)(1U)));
            }
        }
    } else {
        __Vdly__sp = 0U;
        __Vdly__di = 0U;
        __Vdly__core__DOT__fn = 0U;
        __Vdly__ax = 0xffffU;
        vlSelfRef.bx = 2U;
        __Vdly__cx = 0x908U;
        __Vdly__dx = 0U;
        vlSelfRef.bp = 0U;
        vlSelfRef.si = 0U;
        if (vlSelfRef.cfg_ip0) {
            __Vdly__ip = 0x100U;
            __Vdly__cs = 0U;
        } else {
            __Vdly__ip = 0xfff0U;
            __Vdly__cs = 0xf000U;
        }
        __Vdly__es = 0xa000U;
        __Vdly__ss = 0U;
        __Vdly__ds = 0U;
        __Vdly__fs = 0U;
        __Vdly__gs = 0U;
        vlSelfRef.core__DOT__iack = 0U;
        __Vdly__flags = 2U;
    }
    vlSelfRef.core__DOT__fnext = __Vdly__core__DOT__fnext;
    vlSelfRef.core__DOT__s1 = __Vdly__core__DOT__s1;
    vlSelfRef.core__DOT__s2 = __Vdly__core__DOT__s2;
    vlSelfRef.core__DOT__cpen = __Vdly__core__DOT__cpen;
    vlSelfRef.core__DOT__modrm = __Vdly__core__DOT__modrm;
    vlSelfRef.core__DOT__over = __Vdly__core__DOT__over;
    vlSelfRef.core__DOT__wb = __Vdly__core__DOT__wb;
    vlSelfRef.core__DOT__intr = __Vdly__core__DOT__intr;
    vlSelfRef.core__DOT__opcode = __Vdly__core__DOT__opcode;
    vlSelfRef.core__DOT__dir = __Vdly__core__DOT__dir;
    vlSelfRef.es = __Vdly__es;
    vlSelfRef.ss = __Vdly__ss;
    vlSelfRef.ds = __Vdly__ds;
    vlSelfRef.fs = __Vdly__fs;
    vlSelfRef.gs = __Vdly__gs;
    vlSelfRef.port_a = __Vdly__port_a;
    vlSelfRef.core__DOT__sign = __Vdly__core__DOT__sign;
    vlSelfRef.core__DOT__tmp16 = __Vdly__core__DOT__tmp16;
    vlSelfRef.core__DOT__fn = __Vdly__core__DOT__fn;
    vlSelfRef.core__DOT__cp = __Vdly__core__DOT__cp;
    vlSelfRef.core__DOT__segment = __Vdly__core__DOT__segment;
    vlSelfRef.core__DOT__ea = __Vdly__core__DOT__ea;
    vlSelfRef.ip = __Vdly__ip;
    vlSelfRef.cs = __Vdly__cs;
    vlSelfRef.sp = __Vdly__sp;
    vlSelfRef.core__DOT__rep = __Vdly__core__DOT__rep;
    vlSelfRef.ax = __Vdly__ax;
    vlSelfRef.dx = __Vdly__dx;
    vlSelfRef.di = __Vdly__di;
    vlSelfRef.cx = __Vdly__cx;
    vlSelfRef.core__DOT__alu = __Vdly__core__DOT__alu;
    vlSelfRef.core__DOT__size = __Vdly__core__DOT__size;
    vlSelfRef.flags = __Vdly__flags;
    vlSelfRef.core__DOT__op2 = __Vdly__core__DOT__op2;
    vlSelfRef.core__DOT__op1 = __Vdly__core__DOT__op1;
    vlSelfRef.core__DOT__divr = __Vdly__core__DOT__divr;
    vlSelfRef.core__DOT__diva = __Vdly__core__DOT__diva;
    vlSelfRef.m0 = (0U == (IData)(vlSelfRef.core__DOT__fn));
    vlSelfRef.address = (0xfffffU & ((IData)(vlSelfRef.core__DOT__cp)
                                      ? (((IData)(vlSelfRef.core__DOT__segment) 
                                          << 4U) + (IData)(vlSelfRef.core__DOT__ea))
                                      : (((IData)(vlSelfRef.cs) 
                                          << 4U) + (IData)(vlSelfRef.ip))));
    vlSelfRef.core__DOT__repa = (1U & ((~ ((IData)(vlSelfRef.core__DOT__rep) 
                                           >> 1U)) 
                                       | (((IData)(vlSelfRef.core__DOT__rep) 
                                           >> 1U) & 
                                          (0U != (IData)(vlSelfRef.cx)))));
    vlSelfRef.core__DOT__repb = (((IData)(vlSelfRef.core__DOT__rep) 
                                  >> 1U) & (1U != (IData)(vlSelfRef.cx)));
    vlSelfRef.core__DOT__repc = (0xffffU & (((1U & (IData)(vlSelfRef.in))
                                              ? 2U : 1U) 
                                            * ((2U 
                                                & (IData)(vlSelfRef.core__DOT__rep))
                                                ? ((IData)(vlSelfRef.cx) 
                                                   - (IData)(1U))
                                                : 0U)));
    vlSelfRef.core__DOT__rin = ((0U == (7U & (IData)(vlSelfRef.in)))
                                 ? (IData)(vlSelfRef.ax)
                                 : ((1U == (7U & (IData)(vlSelfRef.in)))
                                     ? (IData)(vlSelfRef.cx)
                                     : ((2U == (7U 
                                                & (IData)(vlSelfRef.in)))
                                         ? (IData)(vlSelfRef.dx)
                                         : ((3U == 
                                             (7U & (IData)(vlSelfRef.in)))
                                             ? (IData)(vlSelfRef.bx)
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelfRef.in)))
                                                 ? (IData)(vlSelfRef.sp)
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.in)))
                                                  ? (IData)(vlSelfRef.bp)
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.in)))
                                                   ? (IData)(vlSelfRef.si)
                                                   : (IData)(vlSelfRef.di))))))));
    core__DOT____VdfgRegularize_h47660625_1_18 = (1U 
                                                  & (~ 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.core__DOT__alu)) 
                                                      | ((4U 
                                                          == (IData)(vlSelfRef.core__DOT__alu)) 
                                                         | (1U 
                                                            == (IData)(vlSelfRef.core__DOT__alu))))));
    vlSelfRef.core__DOT__divi = ((IData)(vlSelfRef.core__DOT__size)
                                  ? (((IData)(vlSelfRef.dx) 
                                      << 0x10U) | (IData)(vlSelfRef.ax))
                                  : ((IData)(vlSelfRef.ax) 
                                     << 0x10U));
    if ((0x400U & (IData)(vlSelfRef.flags))) {
        vlSelfRef.core__DOT__sinc = (0xffffU & ((IData)(vlSelfRef.si) 
                                                - ((IData)(vlSelfRef.core__DOT__size)
                                                    ? 2U
                                                    : 1U)));
        vlSelfRef.core__DOT__dinc = (0xffffU & ((IData)(vlSelfRef.di) 
                                                - ((IData)(vlSelfRef.core__DOT__size)
                                                    ? 2U
                                                    : 1U)));
    } else {
        vlSelfRef.core__DOT__sinc = (0xffffU & ((IData)(vlSelfRef.si) 
                                                + ((IData)(vlSelfRef.core__DOT__size)
                                                    ? 2U
                                                    : 1U)));
        vlSelfRef.core__DOT__dinc = (0xffffU & ((IData)(vlSelfRef.di) 
                                                + ((IData)(vlSelfRef.core__DOT__size)
                                                    ? 2U
                                                    : 1U)));
    }
    core__DOT____VdfgRegularize_h47660625_1_6 = (1U 
                                                 & VL_REDXOR_16(
                                                                (0x880U 
                                                                 & (IData)(vlSelfRef.flags))));
    vlSelfRef.core__DOT__rot_f = vlSelfRef.flags;
    vlSelfRef.core__DOT__rot_f = ((0xffeU & (IData)(vlSelfRef.core__DOT__rot_f)) 
                                  | (1U & ((1U & (IData)(vlSelfRef.core__DOT__alu))
                                            ? (IData)(vlSelfRef.core__DOT__op1)
                                            : ((IData)(vlSelfRef.core__DOT__op1) 
                                               >> ((IData)(vlSelfRef.core__DOT__size)
                                                    ? 0xfU
                                                    : 7U)))));
    if ((0U == (IData)(vlSelfRef.core__DOT__alu))) {
        vlSelfRef.core__DOT__rot_r = ((IData)(vlSelfRef.core__DOT__size)
                                       ? ((0xfffeU 
                                           & ((IData)(vlSelfRef.core__DOT__op1) 
                                              << 1U)) 
                                          | (1U & ((IData)(vlSelfRef.core__DOT__op1) 
                                                   >> 0xfU)))
                                       : ((0xfeU & 
                                           ((IData)(vlSelfRef.core__DOT__op1) 
                                            << 1U)) 
                                          | (1U & ((IData)(vlSelfRef.core__DOT__op1) 
                                                   >> 7U))));
    } else if ((1U == (IData)(vlSelfRef.core__DOT__alu))) {
        vlSelfRef.core__DOT__rot_r = ((IData)(vlSelfRef.core__DOT__size)
                                       ? ((0x8000U 
                                           & ((IData)(vlSelfRef.core__DOT__op1) 
                                              << 0xfU)) 
                                          | (0x7fffU 
                                             & ((IData)(vlSelfRef.core__DOT__op1) 
                                                >> 1U)))
                                       : ((0x80U & 
                                           ((IData)(vlSelfRef.core__DOT__op1) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.core__DOT__op1) 
                                                >> 1U))));
    } else if ((2U == (IData)(vlSelfRef.core__DOT__alu))) {
        vlSelfRef.core__DOT__rot_r = ((IData)(vlSelfRef.core__DOT__size)
                                       ? ((0xfffeU 
                                           & ((IData)(vlSelfRef.core__DOT__op1) 
                                              << 1U)) 
                                          | (1U & (IData)(vlSelfRef.flags)))
                                       : ((0xfeU & 
                                           ((IData)(vlSelfRef.core__DOT__op1) 
                                            << 1U)) 
                                          | (1U & (IData)(vlSelfRef.flags))));
    } else if ((3U == (IData)(vlSelfRef.core__DOT__alu))) {
        vlSelfRef.core__DOT__rot_r = ((IData)(vlSelfRef.core__DOT__size)
                                       ? ((0x8000U 
                                           & ((IData)(vlSelfRef.flags) 
                                              << 0xfU)) 
                                          | (0x7fffU 
                                             & ((IData)(vlSelfRef.core__DOT__op1) 
                                                >> 1U)))
                                       : ((0x80U & 
                                           ((IData)(vlSelfRef.flags) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.core__DOT__op1) 
                                                >> 1U))));
    } else if (((4U == (IData)(vlSelfRef.core__DOT__alu)) 
                || (6U == (IData)(vlSelfRef.core__DOT__alu)))) {
        vlSelfRef.core__DOT__rot_r = ((IData)(vlSelfRef.core__DOT__size)
                                       ? (0xfffeU & 
                                          ((IData)(vlSelfRef.core__DOT__op1) 
                                           << 1U)) : 
                                      (0xfeU & ((IData)(vlSelfRef.core__DOT__op1) 
                                                << 1U)));
    } else if ((5U == (IData)(vlSelfRef.core__DOT__alu))) {
        vlSelfRef.core__DOT__rot_r = ((IData)(vlSelfRef.core__DOT__size)
                                       ? (0x7fffU & 
                                          ((IData)(vlSelfRef.core__DOT__op1) 
                                           >> 1U)) : 
                                      (0x7fU & ((IData)(vlSelfRef.core__DOT__op1) 
                                                >> 1U)));
    } else if ((5U == (IData)(vlSelfRef.core__DOT__alu))) {
        vlSelfRef.core__DOT__rot_r = ((IData)(vlSelfRef.core__DOT__size)
                                       ? ((0x8000U 
                                           & (IData)(vlSelfRef.core__DOT__op1)) 
                                          | (0x7fffU 
                                             & ((IData)(vlSelfRef.core__DOT__op1) 
                                                >> 1U)))
                                       : ((0x80U & (IData)(vlSelfRef.core__DOT__op1)) 
                                          | (0x7fU 
                                             & ((IData)(vlSelfRef.core__DOT__op1) 
                                                >> 1U))));
    }
    if (((((0U == (IData)(vlSelfRef.core__DOT__alu)) 
           || (2U == (IData)(vlSelfRef.core__DOT__alu))) 
          || (6U == (IData)(vlSelfRef.core__DOT__alu))) 
         || (4U == (IData)(vlSelfRef.core__DOT__alu)))) {
        vlSelfRef.core__DOT__rot_f = ((0x7ffU & (IData)(vlSelfRef.core__DOT__rot_f)) 
                                      | (0x800U & (
                                                   (((IData)(vlSelfRef.core__DOT__op1) 
                                                     >> 
                                                     ((IData)(vlSelfRef.core__DOT__size)
                                                       ? 0xfU
                                                       : 7U)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.core__DOT__op1) 
                                                     >> 
                                                     (0xfU 
                                                      & (((IData)(vlSelfRef.core__DOT__size)
                                                           ? 0xfU
                                                           : 7U) 
                                                         - (IData)(1U))))) 
                                                   << 0xbU)));
    } else if (((1U == (IData)(vlSelfRef.core__DOT__alu)) 
                || (3U == (IData)(vlSelfRef.core__DOT__alu)))) {
        vlSelfRef.core__DOT__rot_f = ((0x7ffU & (IData)(vlSelfRef.core__DOT__rot_f)) 
                                      | (0x800U & (
                                                   (((IData)(vlSelfRef.core__DOT__rot_r) 
                                                     >> 
                                                     ((IData)(vlSelfRef.core__DOT__size)
                                                       ? 0xfU
                                                       : 7U)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.core__DOT__rot_r) 
                                                     >> 
                                                     (0xfU 
                                                      & (((IData)(vlSelfRef.core__DOT__size)
                                                           ? 0xfU
                                                           : 7U) 
                                                         - (IData)(1U))))) 
                                                   << 0xbU)));
    } else if ((5U == (IData)(vlSelfRef.core__DOT__alu))) {
        vlSelfRef.core__DOT__rot_f = ((0x7ffU & (IData)(vlSelfRef.core__DOT__rot_f)) 
                                      | (0x800U & (
                                                   ((IData)(vlSelfRef.core__DOT__op1) 
                                                    >> 
                                                    ((IData)(vlSelfRef.core__DOT__size)
                                                      ? 0xfU
                                                      : 7U)) 
                                                   << 0xbU)));
    } else if ((7U == (IData)(vlSelfRef.core__DOT__alu))) {
        vlSelfRef.core__DOT__rot_f = (0x7ffU & (IData)(vlSelfRef.core__DOT__rot_f));
    }
    if (((((4U == (IData)(vlSelfRef.core__DOT__alu)) 
           | (5U == (IData)(vlSelfRef.core__DOT__alu))) 
          | (6U == (IData)(vlSelfRef.core__DOT__alu))) 
         | (5U == (IData)(vlSelfRef.core__DOT__alu)))) {
        vlSelfRef.core__DOT__rot_f = ((0xf7fU & (IData)(vlSelfRef.core__DOT__rot_f)) 
                                      | (0x80U & (((IData)(vlSelfRef.core__DOT__rot_r) 
                                                   >> 
                                                   ((IData)(vlSelfRef.core__DOT__size)
                                                     ? 0xfU
                                                     : 7U)) 
                                                  << 7U)));
        vlSelfRef.core__DOT__rot_f = ((0xfbfU & (IData)(vlSelfRef.core__DOT__rot_f)) 
                                      | ((0U == ((IData)(vlSelfRef.core__DOT__size)
                                                  ? (IData)(vlSelfRef.core__DOT__rot_r)
                                                  : 
                                                 (0xffU 
                                                  & (IData)(vlSelfRef.core__DOT__rot_r)))) 
                                         << 6U));
        vlSelfRef.core__DOT__rot_f = ((0xffbU & (IData)(vlSelfRef.core__DOT__rot_f)) 
                                      | (4U & ((~ VL_REDXOR_32(
                                                               (0xffU 
                                                                & (IData)(vlSelfRef.core__DOT__rot_r)))) 
                                               << 2U)));
    }
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
    core__DOT____VdfgRegularize_h47660625_1_17 = (1U 
                                                  & ((IData)(vlSelfRef.core__DOT__op1) 
                                                     >> 
                                                     ((IData)(vlSelfRef.core__DOT__size)
                                                       ? 0xfU
                                                       : 7U)));
    core__DOT____VdfgRegularize_h47660625_1_10 = (0x1ffffU 
                                                  & ((IData)(vlSelfRef.core__DOT__op1) 
                                                     + (IData)(vlSelfRef.core__DOT__op2)));
    core__DOT____VdfgRegularize_h47660625_1_13 = (0x1ffffU 
                                                  & ((IData)(vlSelfRef.core__DOT__op1) 
                                                     - (IData)(vlSelfRef.core__DOT__op2)));
    vlSelfRef.core__DOT__alu_r = (0x1ffffU & ((0U == (IData)(vlSelfRef.core__DOT__alu))
                                               ? core__DOT____VdfgRegularize_h47660625_1_10
                                               : ((1U 
                                                   == (IData)(vlSelfRef.core__DOT__alu))
                                                   ? 
                                                  ((IData)(vlSelfRef.core__DOT__op1) 
                                                   | (IData)(vlSelfRef.core__DOT__op2))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.core__DOT__alu))
                                                    ? 
                                                   (core__DOT____VdfgRegularize_h47660625_1_10 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlSelfRef.flags)))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.core__DOT__alu))
                                                     ? 
                                                    (core__DOT____VdfgRegularize_h47660625_1_13 
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
                                                       : core__DOT____VdfgRegularize_h47660625_1_13)))))));
    core__DOT__div1 = ((vlSelfRef.core__DOT__divr << 1U) 
                       | (vlSelfRef.core__DOT__diva 
                          >> 0x1fU));
    vlSelfRef.core__DOT__branches = ((0x80U & (((IData)(core__DOT____VdfgRegularize_h47660625_1_6) 
                                                << 7U) 
                                               | (0xffffff80U 
                                                  & ((IData)(vlSelfRef.flags) 
                                                     << 1U)))) 
                                     | (((IData)(core__DOT____VdfgRegularize_h47660625_1_6) 
                                         << 6U) | (
                                                   (0x20U 
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
    vlSelfRef.core__DOT__multzf = (0U == ((IData)(vlSelfRef.core__DOT__size)
                                           ? vlSelfRef.core__DOT__mult
                                           : (0xffffU 
                                              & vlSelfRef.core__DOT__mult)));
    vlSelfRef.core__DOT__multcf = (0U != ((IData)(vlSelfRef.core__DOT__size)
                                           ? VL_SHIFTR_III(32,32,32, vlSelfRef.core__DOT__mult, 0x10U)
                                           : (0xffU 
                                              & (vlSelfRef.core__DOT__mult 
                                                 >> 8U))));
    core__DOT__div1c = (0x1ffffffffULL & ((QData)((IData)(core__DOT__div1)) 
                                          - (QData)((IData)(vlSelfRef.core__DOT__divb))));
    core__DOT__alu_sf = (1U & (vlSelfRef.core__DOT__alu_r 
                               >> ((IData)(vlSelfRef.core__DOT__size)
                                    ? 0xfU : 7U)));
    core__DOT__div2 = ((((1U & (IData)((core__DOT__div1c 
                                        >> 0x20U)))
                          ? core__DOT__div1 : (IData)(core__DOT__div1c)) 
                        << 1U) | (1U & (vlSelfRef.core__DOT__diva 
                                        >> 0x1eU)));
    vlSelfRef.core__DOT__alu_f = (2U | ((((IData)(core__DOT____VdfgRegularize_h47660625_1_18) 
                                          & (((IData)(core__DOT____VdfgRegularize_h47660625_1_17) 
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
                                             & ((IData)(core__DOT____VdfgRegularize_h47660625_1_17) 
                                                ^ (IData)(core__DOT__alu_sf)))) 
                                         << 0xbU) | 
                                        ((0x700U & (IData)(vlSelfRef.flags)) 
                                         | (((IData)(core__DOT__alu_sf) 
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
                                                   & (((IData)(core__DOT____VdfgRegularize_h47660625_1_18) 
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
                                                     | ((IData)(core__DOT____VdfgRegularize_h47660625_1_18) 
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
    core__DOT__div2c = (0x1ffffffffULL & ((QData)((IData)(core__DOT__div2)) 
                                          - (QData)((IData)(vlSelfRef.core__DOT__divb))));
    core__DOT__div3 = ((((1U & (IData)((core__DOT__div2c 
                                        >> 0x20U)))
                          ? core__DOT__div2 : (IData)(core__DOT__div2c)) 
                        << 1U) | (1U & (vlSelfRef.core__DOT__diva 
                                        >> 0x1dU)));
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
            VL_FATAL_MT("core.v", 10, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("core.v", 10, "", "NBA region did not converge.");
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
                VL_FATAL_MT("core.v", 10, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelfRef.ce & 0xfeU))) {
        Verilated::overWidthError("ce");}
    if (VL_UNLIKELY((vlSelfRef.reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelfRef.cfg_ip0 & 0xfeU))) {
        Verilated::overWidthError("cfg_ip0");}
    if (VL_UNLIKELY((vlSelfRef.irq & 0xfeU))) {
        Verilated::overWidthError("irq");}
}
#endif  // VL_DEBUG
