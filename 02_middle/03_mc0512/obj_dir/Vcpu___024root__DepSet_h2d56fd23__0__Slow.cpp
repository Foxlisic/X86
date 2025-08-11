// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu__pch.h"
#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___eval_static__TOP(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_static(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vcpu___024root___eval_static__TOP(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__ax = 0x1234U;
    vlSelfRef.cpu__DOT__bx = 2U;
    vlSelfRef.cpu__DOT__cx = 7U;
    vlSelfRef.cpu__DOT__dx = 0xffffU;
    vlSelfRef.cpu__DOT__sp = 0xbabaU;
    vlSelfRef.cpu__DOT__bp = 0xdeadU;
    vlSelfRef.cpu__DOT__si = 0x11U;
    vlSelfRef.cpu__DOT__di = 0xdaddU;
    vlSelfRef.cpu__DOT__es = 0U;
    vlSelfRef.cpu__DOT__cs = 0U;
    vlSelfRef.cpu__DOT__ss = 0xdeadU;
    vlSelfRef.cpu__DOT__ds = 0U;
    vlSelfRef.cpu__DOT__flag = 2U;
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vcpu___024root___eval_final(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__stl(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu___024root___eval_phase__stl(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
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
            Vcpu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("cpu.v", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcpu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__stl(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vcpu___024root___stl_sequent__TOP__0(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_stl(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcpu___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcpu___024root___stl_sequent__TOP__0(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cpu__DOT__rsize;
    cpu__DOT__rsize = 0;
    CData/*0:0*/ cpu__DOT__is_lgc;
    cpu__DOT__is_lgc = 0;
    SData/*8:0*/ cpu__DOT__daa_i;
    cpu__DOT__daa_i = 0;
    CData/*0:0*/ cpu__DOT__daa_c;
    cpu__DOT__daa_c = 0;
    CData/*0:0*/ cpu__DOT__daa_t;
    cpu__DOT__daa_t = 0;
    CData/*0:0*/ cpu__DOT__rot_shft;
    cpu__DOT__rot_shft = 0;
    CData/*0:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_2;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_2 = 0;
    IData/*16:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_18;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_18 = 0;
    IData/*16:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_21;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_21 = 0;
    CData/*0:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_25;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_25 = 0;
    CData/*0:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_29;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_29 = 0;
    CData/*0:0*/ cpu__DOT____VdfgRegularize_hcce91bd5_0_45;
    cpu__DOT____VdfgRegularize_hcce91bd5_0_45 = 0;
    // Body
    vlSelfRef.cpu__DOT__ipn = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.cpu__DOT__ip)));
    vlSelfRef.cpu__DOT__ean = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.cpu__DOT__ea)));
    vlSelfRef.cpu__DOT__ax00 = ((IData)(vlSelfRef.cpu__DOT__ax) 
                                << 0x10U);
    vlSelfRef.cpu__DOT__mn = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.cpu__DOT__m)));
    vlSelfRef.cpu__DOT__ipx = (0xffffU & ((IData)(vlSelfRef.cpu__DOT__ip) 
                                          - (IData)(vlSelfRef.cpu__DOT__preip)));
    vlSelfRef.cpu__DOT__mult = ((IData)(vlSelfRef.cpu__DOT__op1) 
                                * (IData)(vlSelfRef.cpu__DOT__op2));
    vlSelfRef.cpu__DOT__dxax = (((IData)(vlSelfRef.cpu__DOT__dx) 
                                 << 0x10U) | (IData)(vlSelfRef.cpu__DOT__ax));
    vlSelfRef.address = (0xfffffU & ((IData)(vlSelfRef.cpu__DOT__cp)
                                      ? (((IData)(vlSelfRef.cpu__DOT__seg) 
                                          << 4U) + (IData)(vlSelfRef.cpu__DOT__ea))
                                      : (((IData)(vlSelfRef.cpu__DOT__cs) 
                                          << 4U) + (IData)(vlSelfRef.cpu__DOT__ip))));
    vlSelfRef.cpu__DOT__signex = ((0xff00U & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.in) 
                                                             >> 7U)))) 
                                              << 8U)) 
                                  | (IData)(vlSelfRef.in));
    cpu__DOT____VdfgRegularize_hcce91bd5_0_2 = (1U 
                                                & VL_REDXOR_16(
                                                               (0x880U 
                                                                & (IData)(vlSelfRef.cpu__DOT__flag))));
    vlSelfRef.cpu__DOT__divr_next = (((IData)(vlSelfRef.cpu__DOT__divr) 
                                      << 1U) | (vlSelfRef.cpu__DOT__diva 
                                                >> 0x1fU));
    cpu__DOT__rot_shft = ((4U == (IData)(vlSelfRef.cpu__DOT__alu)) 
                          | ((5U == (IData)(vlSelfRef.cpu__DOT__alu)) 
                             | ((6U == (IData)(vlSelfRef.cpu__DOT__alu)) 
                                | (7U == (IData)(vlSelfRef.cpu__DOT__alu)))));
    cpu__DOT__is_lgc = ((4U != (IData)(vlSelfRef.cpu__DOT__alu)) 
                        & ((6U != (IData)(vlSelfRef.cpu__DOT__alu)) 
                           & (1U != (IData)(vlSelfRef.cpu__DOT__alu))));
    cpu__DOT____VdfgRegularize_hcce91bd5_0_29 = (1U 
                                                 & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                    >> 
                                                    ((IData)(vlSelfRef.cpu__DOT__size)
                                                      ? 0xfU
                                                      : 7U)));
    cpu__DOT____VdfgRegularize_hcce91bd5_0_18 = (0x1ffffU 
                                                 & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                    + (IData)(vlSelfRef.cpu__DOT__op2)));
    cpu__DOT____VdfgRegularize_hcce91bd5_0_21 = (0x1ffffU 
                                                 & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                    - (IData)(vlSelfRef.cpu__DOT__op2)));
    if ((0U == (IData)(vlSelfRef.cpu__DOT__alu))) {
        vlSelfRef.cpu__DOT__rot_r = (0xffffU & ((IData)(vlSelfRef.cpu__DOT__size)
                                                 ? 
                                                ((0xfffeU 
                                                  & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                       >> 0xfU)))
                                                 : 
                                                ((0xfeU 
                                                  & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                       >> 7U)))));
        vlSelfRef.cpu__DOT__alu_res = (0x1ffffU & cpu__DOT____VdfgRegularize_hcce91bd5_0_18);
    } else {
        vlSelfRef.cpu__DOT__rot_r = (0xffffU & ((1U 
                                                 == (IData)(vlSelfRef.cpu__DOT__alu))
                                                 ? 
                                                ((IData)(vlSelfRef.cpu__DOT__size)
                                                  ? 
                                                 ((0x8000U 
                                                   & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                      << 0xfU)) 
                                                  | (0x7fffU 
                                                     & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                        >> 1U)))
                                                  : 
                                                 ((0x80U 
                                                   & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                        >> 1U))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.cpu__DOT__alu))
                                                  ? 
                                                 ((IData)(vlSelfRef.cpu__DOT__size)
                                                   ? 
                                                  ((0xfffeU 
                                                    & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.cpu__DOT__flag)))
                                                   : 
                                                  ((0xfeU 
                                                    & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelfRef.cpu__DOT__flag))))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.cpu__DOT__alu))
                                                   ? 
                                                  ((IData)(vlSelfRef.cpu__DOT__size)
                                                    ? 
                                                   ((0x8000U 
                                                     & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                        << 0xfU)) 
                                                    | (0x7fffU 
                                                       & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                          >> 1U)))
                                                    : 
                                                   ((0x80U 
                                                     & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                        << 7U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                          >> 1U))))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.cpu__DOT__alu))
                                                    ? 
                                                   ((IData)(vlSelfRef.cpu__DOT__size)
                                                     ? 
                                                    VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__op1), 1U)
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                        >> 1U)))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.cpu__DOT__alu))
                                                     ? 
                                                    ((IData)(vlSelfRef.cpu__DOT__size)
                                                      ? 
                                                     ((0x8000U 
                                                       & (IData)(vlSelfRef.cpu__DOT__op1)) 
                                                      | (0x7fffU 
                                                         & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                            >> 1U)))
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSelfRef.cpu__DOT__op1)) 
                                                      | (0x7fU 
                                                         & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                            >> 1U))))
                                                     : 
                                                    ((IData)(vlSelfRef.cpu__DOT__size)
                                                      ? 
                                                     VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__op1), 1U)
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                         << 1U)))))))));
        vlSelfRef.cpu__DOT__alu_res = (0x1ffffU & (
                                                   (2U 
                                                    == (IData)(vlSelfRef.cpu__DOT__alu))
                                                    ? 
                                                   (cpu__DOT____VdfgRegularize_hcce91bd5_0_18 
                                                    + 
                                                    (1U 
                                                     & (IData)(vlSelfRef.cpu__DOT__flag)))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.cpu__DOT__alu))
                                                     ? 
                                                    (cpu__DOT____VdfgRegularize_hcce91bd5_0_21 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlSelfRef.cpu__DOT__flag)))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.cpu__DOT__alu))
                                                      ? 
                                                     ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                      & (IData)(vlSelfRef.cpu__DOT__op2))
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.cpu__DOT__alu))
                                                       ? 
                                                      ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                       | (IData)(vlSelfRef.cpu__DOT__op2))
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.cpu__DOT__alu))
                                                        ? 
                                                       ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                        ^ (IData)(vlSelfRef.cpu__DOT__op2))
                                                        : cpu__DOT____VdfgRegularize_hcce91bd5_0_21))))));
    }
    vlSelfRef.cpu__DOT__daa_m = (1U & (((IData)(vlSelfRef.cpu__DOT__flag) 
                                        >> 4U) | (9U 
                                                  < 
                                                  (0xfU 
                                                   & (IData)(vlSelfRef.cpu__DOT__ax)))));
    vlSelfRef.m0 = (0U == (IData)(vlSelfRef.cpu__DOT__ta));
    vlSelfRef.cpu__DOT__ipsign = (0xffffU & ((IData)(1U) 
                                             + ((IData)(vlSelfRef.cpu__DOT__ip) 
                                                + (IData)(vlSelfRef.cpu__DOT__signex))));
    vlSelfRef.cpu__DOT__branches = ((0x80U & (((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_2) 
                                               << 7U) 
                                              | (0xffffff80U 
                                                 & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                    << 1U)))) 
                                    | (((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_2) 
                                        << 6U) | ((0x20U 
                                                   & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                      << 3U)) 
                                                  | ((0x10U 
                                                      & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                         >> 3U)) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x801U 
                                                                   & (IData)(vlSelfRef.cpu__DOT__flag)))) 
                                                         << 3U) 
                                                        | ((4U 
                                                            & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                               >> 4U)) 
                                                           | ((2U 
                                                               & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                                    >> 0xbU)))))))));
    vlSelfRef.cpu__DOT__divr_bit = (vlSelfRef.cpu__DOT__divr_next 
                                    >= (IData)(vlSelfRef.cpu__DOT__op2));
    cpu__DOT____VdfgRegularize_hcce91bd5_0_45 = (1U 
                                                 & ((IData)(vlSelfRef.cpu__DOT__rot_r) 
                                                    >> 
                                                    ((IData)(vlSelfRef.cpu__DOT__size)
                                                      ? 0xfU
                                                      : 7U)));
    vlSelfRef.cpu__DOT__aaa_f = ((0xfe0U & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                 | (((IData)(vlSelfRef.cpu__DOT__daa_m) 
                                     << 4U) | ((0xeU 
                                                & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                               | (IData)(vlSelfRef.cpu__DOT__daa_m))));
    if (vlSelfRef.cpu__DOT__daa_m) {
        cpu__DOT__daa_i = (0x1ffU & ((8U & (IData)(vlSelfRef.in))
                                      ? ((0xffU & (IData)(vlSelfRef.cpu__DOT__ax)) 
                                         - (IData)(6U))
                                      : ((IData)(6U) 
                                         + (0xffU & (IData)(vlSelfRef.cpu__DOT__ax)))));
        cpu__DOT__daa_c = (1U & ((IData)(cpu__DOT__daa_i) 
                                 >> 8U));
    } else {
        cpu__DOT__daa_i = (0x1ffU & (0xffU & (IData)(vlSelfRef.cpu__DOT__ax)));
        cpu__DOT__daa_c = (1U & (IData)(vlSelfRef.cpu__DOT__flag));
    }
    cpu__DOT__rsize = ((IData)(vlSelfRef.m0) | (IData)(vlSelfRef.cpu__DOT__size));
    vlSelfRef.cpu__DOT__rot_f = (2U | ((0x800U & ((
                                                   (5U 
                                                    == (IData)(vlSelfRef.cpu__DOT__alu))
                                                    ? (IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_29)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.cpu__DOT__alu))
                                                     ? 
                                                    (((1U 
                                                       == (IData)(vlSelfRef.cpu__DOT__alu)) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.cpu__DOT__alu))) 
                                                     & ((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_45) 
                                                        ^ 
                                                        ((IData)(vlSelfRef.cpu__DOT__rot_r) 
                                                         >> 
                                                         (0xfU 
                                                          & (((IData)(vlSelfRef.cpu__DOT__size)
                                                               ? 0xfU
                                                               : 7U) 
                                                             - (IData)(1U))))))
                                                     : 
                                                    ((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_29) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.cpu__DOT__op1) 
                                                      >> 
                                                      (0xfU 
                                                       & (((IData)(vlSelfRef.cpu__DOT__size)
                                                            ? 0xfU
                                                            : 7U) 
                                                          - (IData)(1U))))))) 
                                                  << 0xbU)) 
                                       | ((0x700U & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                          | ((0x80U 
                                              & (((IData)(cpu__DOT__rot_shft)
                                                   ? (IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_45)
                                                   : 
                                                  ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                   >> 7U)) 
                                                 << 7U)) 
                                             | ((0x40U 
                                                 & (((IData)(cpu__DOT__rot_shft)
                                                      ? 
                                                     (~ 
                                                      ((IData)(vlSelfRef.cpu__DOT__size)
                                                        ? 
                                                       (0U 
                                                        != (IData)(vlSelfRef.cpu__DOT__rot_r))
                                                        : 
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (IData)(vlSelfRef.cpu__DOT__rot_r)))))
                                                      : 
                                                     ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                      >> 6U)) 
                                                    << 6U)) 
                                                | ((0x10U 
                                                    & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                                   | ((4U 
                                                       & (((IData)(cpu__DOT__rot_shft)
                                                            ? 
                                                           (~ 
                                                            VL_REDXOR_32(
                                                                         (0xffU 
                                                                          & (IData)(vlSelfRef.cpu__DOT__rot_r))))
                                                            : 
                                                           ((IData)(vlSelfRef.cpu__DOT__flag) 
                                                            >> 2U)) 
                                                          << 2U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & (IData)(vlSelfRef.cpu__DOT__alu))
                                                             ? (IData)(vlSelfRef.cpu__DOT__op1)
                                                             : (IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_29))))))))));
    cpu__DOT____VdfgRegularize_hcce91bd5_0_25 = ((0x10U 
                                                  >= 
                                                  ((IData)(vlSelfRef.cpu__DOT__size)
                                                    ? 0xfU
                                                    : 7U)) 
                                                 && (1U 
                                                     & (vlSelfRef.cpu__DOT__alu_res 
                                                        >> 
                                                        ((IData)(vlSelfRef.cpu__DOT__size)
                                                          ? 0xfU
                                                          : 7U))));
    vlSelfRef.cpu__DOT__aaa_r = ((0xff00U & (((IData)(vlSelfRef.cpu__DOT__daa_m)
                                               ? ((8U 
                                                   & (IData)(vlSelfRef.in))
                                                   ? 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                       >> 8U)) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                       >> 8U))))
                                               : (0xffU 
                                                  & ((IData)(vlSelfRef.cpu__DOT__ax) 
                                                     >> 8U))) 
                                             << 8U)) 
                                 | (0xfU & (IData)(cpu__DOT__daa_i)));
    if (cpu__DOT__rsize) {
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_8 
            = vlSelfRef.cpu__DOT__ax;
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_9 
            = vlSelfRef.cpu__DOT__cx;
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_10 
            = vlSelfRef.cpu__DOT__dx;
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_11 
            = vlSelfRef.cpu__DOT__bx;
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_12 
            = (0xffffU & (IData)(vlSelfRef.cpu__DOT__sp));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_13 
            = (0xffffU & (IData)(vlSelfRef.cpu__DOT__bp));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_14 
            = (0xffffU & (IData)(vlSelfRef.cpu__DOT__si));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_15 
            = (0xffffU & (IData)(vlSelfRef.cpu__DOT__di));
    } else {
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_8 
            = (0xffU & (IData)(vlSelfRef.cpu__DOT__ax));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_9 
            = (0xffU & (IData)(vlSelfRef.cpu__DOT__cx));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_10 
            = (0xffU & (IData)(vlSelfRef.cpu__DOT__dx));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_11 
            = (0xffU & (IData)(vlSelfRef.cpu__DOT__bx));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_12 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__ax), 8U));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_13 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__cx), 8U));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_14 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__dx), 8U));
        vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_15 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.cpu__DOT__bx), 8U));
    }
    vlSelfRef.cpu__DOT__alu_flag = (2U | (((((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_29) 
                                             ^ (((IData)(vlSelfRef.cpu__DOT__op2) 
                                                 >> 
                                                 ((IData)(vlSelfRef.cpu__DOT__size)
                                                   ? 0xfU
                                                   : 7U)) 
                                                ^ (
                                                   (0U 
                                                    == (IData)(vlSelfRef.cpu__DOT__alu)) 
                                                   | (2U 
                                                      == (IData)(vlSelfRef.cpu__DOT__alu))))) 
                                            & (((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_29) 
                                                ^ (IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_25)) 
                                               & (IData)(cpu__DOT__is_lgc))) 
                                           << 0xbU) 
                                          | ((0x700U 
                                              & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                             | (((IData)(cpu__DOT____VdfgRegularize_hcce91bd5_0_25) 
                                                 << 7U) 
                                                | (((0U 
                                                     == 
                                                     ((IData)(vlSelfRef.cpu__DOT__size)
                                                       ? 
                                                      (0xffffU 
                                                       & vlSelfRef.cpu__DOT__alu_res)
                                                       : 
                                                      (0xffU 
                                                       & vlSelfRef.cpu__DOT__alu_res))) 
                                                    << 6U) 
                                                   | ((0xfffffff0U 
                                                       & (((IData)(vlSelfRef.cpu__DOT__op1) 
                                                           ^ 
                                                           ((IData)(vlSelfRef.cpu__DOT__op2) 
                                                            ^ vlSelfRef.cpu__DOT__alu_res)) 
                                                          & ((IData)(cpu__DOT__is_lgc) 
                                                             << 4U))) 
                                                      | ((4U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xffU 
                                                                            & vlSelfRef.cpu__DOT__alu_res))) 
                                                             << 2U)) 
                                                         | (((0x10U 
                                                              >= 
                                                              (0x1fU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelfRef.cpu__DOT__size)
                                                                    ? 0xfU
                                                                    : 7U)))) 
                                                             && (1U 
                                                                 & (vlSelfRef.cpu__DOT__alu_res 
                                                                    >> 
                                                                    (0x1fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(vlSelfRef.cpu__DOT__size)
                                                                          ? 0xfU
                                                                          : 7U)))))) 
                                                            & (IData)(cpu__DOT__is_lgc)))))))));
    cpu__DOT__daa_t = ((IData)(cpu__DOT__daa_c) | (0x9fU 
                                                   < 
                                                   (0xffU 
                                                    & (IData)(cpu__DOT__daa_i))));
    vlSelfRef.cpu__DOT__r20 = ((0U == (7U & (IData)(vlSelfRef.in)))
                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_8)
                                : ((1U == (7U & (IData)(vlSelfRef.in)))
                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_9)
                                    : ((2U == (7U & (IData)(vlSelfRef.in)))
                                        ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_10)
                                        : ((3U == (7U 
                                                   & (IData)(vlSelfRef.in)))
                                            ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_11)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelfRef.in)))
                                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_12)
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.in)))
                                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_13)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelfRef.in)))
                                                     ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_14)
                                                     : (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_15))))))));
    vlSelfRef.cpu__DOT__r53 = ((0U == (7U & ((IData)(vlSelfRef.in) 
                                             >> 3U)))
                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_8)
                                : ((1U == (7U & ((IData)(vlSelfRef.in) 
                                                 >> 3U)))
                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_9)
                                    : ((2U == (7U & 
                                               ((IData)(vlSelfRef.in) 
                                                >> 3U)))
                                        ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_10)
                                        : ((3U == (7U 
                                                   & ((IData)(vlSelfRef.in) 
                                                      >> 3U)))
                                            ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_11)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.in) 
                                                    >> 3U)))
                                                ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_12)
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.in) 
                                                        >> 3U)))
                                                    ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_13)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelfRef.in) 
                                                         >> 3U)))
                                                     ? (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_14)
                                                     : (IData)(vlSelfRef.cpu__DOT____VdfgRegularize_hcce91bd5_0_15))))))));
    vlSelfRef.cpu__DOT__daa_r = (0xffU & ((IData)(cpu__DOT__daa_t)
                                           ? ((8U & (IData)(vlSelfRef.in))
                                               ? ((IData)(cpu__DOT__daa_i) 
                                                  - (IData)(0x60U))
                                               : ((IData)(0x60U) 
                                                  + (IData)(cpu__DOT__daa_i)))
                                           : (IData)(cpu__DOT__daa_i)));
    vlSelfRef.cpu__DOT__daa_f = (2U | ((0xf00U & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                       | ((0x80U & (IData)(vlSelfRef.cpu__DOT__daa_r)) 
                                          | ((0x40U 
                                              & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelfRef.cpu__DOT__daa_r)))) 
                                                 << 6U)) 
                                             | ((0x10U 
                                                 & ((0xfffffff0U 
                                                     & (IData)(vlSelfRef.cpu__DOT__flag)) 
                                                    | ((IData)(vlSelfRef.cpu__DOT__daa_m) 
                                                       << 4U))) 
                                                | ((4U 
                                                    & ((~ 
                                                        VL_REDXOR_8(vlSelfRef.cpu__DOT__daa_r)) 
                                                       << 2U)) 
                                                   | ((IData)(cpu__DOT__daa_t) 
                                                      | (IData)(cpu__DOT__daa_c))))))));
}

VL_ATTR_COLD void Vcpu___024root___eval_triggers__stl(Vcpu___024root* vlSelf);

VL_ATTR_COLD bool Vcpu___024root___eval_phase__stl(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcpu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__ico(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->ce = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->m0 = VL_RAND_RESET_I(1);
    vlSelf->address = VL_RAND_RESET_I(20);
    vlSelf->in = VL_RAND_RESET_I(8);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->we = VL_RAND_RESET_I(1);
    vlSelf->pin = VL_RAND_RESET_I(8);
    vlSelf->pa = VL_RAND_RESET_I(16);
    vlSelf->pr = VL_RAND_RESET_I(1);
    vlSelf->pw = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ax = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__bx = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__cx = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__dx = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__sp = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__bp = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__si = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__di = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__es = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__cs = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__ss = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__ds = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__flag = VL_RAND_RESET_I(12);
    vlSelf->cpu__DOT__ip = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__ips = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__cp = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__cpen = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__m = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__ta = VL_RAND_RESET_I(6);
    vlSelf->cpu__DOT__tb = VL_RAND_RESET_I(6);
    vlSelf->cpu__DOT__tm = VL_RAND_RESET_I(6);
    vlSelf->cpu__DOT__divc = VL_RAND_RESET_I(6);
    vlSelf->cpu__DOT__ea = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__seg = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__op1 = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__op2 = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__wb = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__segold = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__divr = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__diva = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__opcode = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__modrm = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__alu = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__size = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__dir = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__signd = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__preip = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__overs = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT___overs = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__rep = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT___rep = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__ipn = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__ean = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__ipx = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__signex = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__ipsign = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__mn = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__branches = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__r20 = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__r53 = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__alu_res = VL_RAND_RESET_I(17);
    vlSelf->cpu__DOT__alu_flag = VL_RAND_RESET_I(12);
    vlSelf->cpu__DOT__daa_m = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__daa_r = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__daa_f = VL_RAND_RESET_I(12);
    vlSelf->cpu__DOT__aaa_r = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__aaa_f = VL_RAND_RESET_I(12);
    vlSelf->cpu__DOT__rot_r = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__rot_f = VL_RAND_RESET_I(12);
    vlSelf->cpu__DOT__divr_next = VL_RAND_RESET_I(17);
    vlSelf->cpu__DOT__dxax = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ax00 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__divr_bit = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__mult = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT____VdfgRegularize_hcce91bd5_0_8 = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT____VdfgRegularize_hcce91bd5_0_9 = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT____VdfgRegularize_hcce91bd5_0_10 = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT____VdfgRegularize_hcce91bd5_0_11 = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT____VdfgRegularize_hcce91bd5_0_12 = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT____VdfgRegularize_hcce91bd5_0_13 = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT____VdfgRegularize_hcce91bd5_0_14 = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT____VdfgRegularize_hcce91bd5_0_15 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
