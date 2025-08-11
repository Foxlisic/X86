// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore___024root.h"

VL_ATTR_COLD void Vcore___024root___eval_static(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcore___024root___eval_initial(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vcore___024root___eval_final(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcore___024root___eval_phase__stl(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_settle(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("core.v", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcore___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_stl(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcore___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelfRef.core__DOT__signex = ((0xff00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.in) 
                                                              >> 7U)))) 
                                               << 8U)) 
                                   | (IData)(vlSelfRef.in));
    vlSelfRef.m0 = (0U == (IData)(vlSelfRef.core__DOT__fn));
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
    vlSelfRef.address = (0xfffffU & ((IData)(vlSelfRef.core__DOT__cp)
                                      ? (((IData)(vlSelfRef.core__DOT__segment) 
                                          << 4U) + (IData)(vlSelfRef.core__DOT__ea))
                                      : (((IData)(vlSelfRef.cs) 
                                          << 4U) + (IData)(vlSelfRef.ip))));
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
    core__DOT____VdfgRegularize_h47660625_1_18 = (1U 
                                                  & (~ 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.core__DOT__alu)) 
                                                      | ((4U 
                                                          == (IData)(vlSelfRef.core__DOT__alu)) 
                                                         | (1U 
                                                            == (IData)(vlSelfRef.core__DOT__alu))))));
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

VL_ATTR_COLD void Vcore___024root___eval_triggers__stl(Vcore___024root* vlSelf);

VL_ATTR_COLD bool Vcore___024root___eval_phase__stl(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcore___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcore___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__ico(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__nba(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcore___024root___ctor_var_reset(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->ce = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->cfg_ip0 = VL_RAND_RESET_I(1);
    vlSelf->address = VL_RAND_RESET_I(20);
    vlSelf->in = VL_RAND_RESET_I(8);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->we = VL_RAND_RESET_I(1);
    vlSelf->m0 = VL_RAND_RESET_I(1);
    vlSelf->port_a = VL_RAND_RESET_I(16);
    vlSelf->port_w = VL_RAND_RESET_I(1);
    vlSelf->port_r = VL_RAND_RESET_I(1);
    vlSelf->port_i = VL_RAND_RESET_I(8);
    vlSelf->port_o = VL_RAND_RESET_I(8);
    vlSelf->ax = VL_RAND_RESET_I(16);
    vlSelf->bx = VL_RAND_RESET_I(16);
    vlSelf->cx = VL_RAND_RESET_I(16);
    vlSelf->dx = VL_RAND_RESET_I(16);
    vlSelf->sp = VL_RAND_RESET_I(16);
    vlSelf->bp = VL_RAND_RESET_I(16);
    vlSelf->si = VL_RAND_RESET_I(16);
    vlSelf->di = VL_RAND_RESET_I(16);
    vlSelf->es = VL_RAND_RESET_I(16);
    vlSelf->cs = VL_RAND_RESET_I(16);
    vlSelf->ss = VL_RAND_RESET_I(16);
    vlSelf->ds = VL_RAND_RESET_I(16);
    vlSelf->fs = VL_RAND_RESET_I(16);
    vlSelf->gs = VL_RAND_RESET_I(16);
    vlSelf->ip = VL_RAND_RESET_I(16);
    vlSelf->flags = VL_RAND_RESET_I(12);
    vlSelf->irq = VL_RAND_RESET_I(1);
    vlSelf->irq_in = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__signex = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__rin = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__mult = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__multzf = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__multcf = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__sinc = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__dinc = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__repa = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__repb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__repc = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__branches = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__cp = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__size = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dir = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__cpen = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__over = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__iack = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__trace_ff = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__rep = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__fn = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__fnext = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__s1 = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__s2 = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__opcode = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__modrm = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__segment = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__ea = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__wb = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__intr = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__alu = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__op1 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__op2 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__tmp16 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__imulw = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__diva = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__divb = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__divr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__divi = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__div4 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__div4c = VL_RAND_RESET_Q(33);
    vlSelf->core__DOT__div4a = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__alu_r = VL_RAND_RESET_I(17);
    vlSelf->core__DOT__alu_f = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__rot_r = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__rot_f = VL_RAND_RESET_I(12);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
