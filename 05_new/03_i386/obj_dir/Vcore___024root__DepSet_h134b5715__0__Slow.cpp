// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore___024root.h"

VL_ATTR_COLD void Vcore___024root___eval_static__TOP(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_static(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcore___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vcore___024root___eval_static__TOP(Vcore___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core__DOT__ax = 0x32aU;
    vlSelfRef.core__DOT__cx = 4U;
    vlSelfRef.core__DOT__dx = 0xbeefU;
    vlSelfRef.core__DOT__bx = 0xbabaU;
    vlSelfRef.core__DOT__sp = 0U;
    vlSelfRef.core__DOT__bp = 0U;
    vlSelfRef.core__DOT__si = 0xdeadU;
    vlSelfRef.core__DOT__di = 0U;
    vlSelfRef.core__DOT__es = 0xb80U;
    vlSelfRef.core__DOT__cs = 0U;
    vlSelfRef.core__DOT__ss = 0U;
    vlSelfRef.core__DOT__ds = 0U;
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
            VL_FATAL_MT("core.v", 6, "", "Settle region did not converge.");
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
    // Body
    vlSelfRef.core__DOT__ean = (0xffffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.core__DOT__ea)));
    vlSelfRef.core__DOT__tn = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.core__DOT__t)));
    vlSelfRef.core__DOT__signex = ((0xff00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.i) 
                                                              >> 7U)))) 
                                               << 8U)) 
                                   | (IData)(vlSelfRef.i));
    vlSelfRef.m0 = ((0U == (IData)(vlSelfRef.core__DOT__t)) 
                    & (0U == (IData)(vlSelfRef.core__DOT__r)));
    vlSelfRef.core__DOT__repa = (1U & ((~ ((IData)(vlSelfRef.core__DOT__rep) 
                                           >> 1U)) 
                                       | (((IData)(vlSelfRef.core__DOT__rep) 
                                           >> 1U) & 
                                          (0U != (IData)(vlSelfRef.core__DOT__cx)))));
    vlSelfRef.core__DOT__repb = (((IData)(vlSelfRef.core__DOT__rep) 
                                  >> 1U) & (1U != (IData)(vlSelfRef.core__DOT__cx)));
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
    vlSelfRef.core__DOT__repc = (0xffffU & (((1U & (IData)(vlSelfRef.i))
                                              ? 2U : 1U) 
                                            * ((2U 
                                                & (IData)(vlSelfRef.core__DOT__rep))
                                                ? ((IData)(vlSelfRef.core__DOT__cx) 
                                                   - (IData)(1U))
                                                : 0U)));
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
        core__DOT__rs = (0xfU & (IData)(vlSelfRef.core__DOT__op2));
        core__DOT__ri = (0xffffU & (IData)(vlSelfRef.core__DOT__op1));
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
        core__DOT__rs = (0xfU & (7U & (IData)(vlSelfRef.core__DOT__op2)));
        core__DOT__ri = (0xffffU & ((0xff00U & ((IData)(vlSelfRef.core__DOT__op1) 
                                                << 8U)) 
                                    | (0xffU & (IData)(vlSelfRef.core__DOT__op1))));
    }
    vlSelfRef.a = (0xfffffU & ((IData)(vlSelfRef.core__DOT__cp)
                                ? (((IData)(vlSelfRef.core__DOT__sgn) 
                                    << 4U) + (IData)(vlSelfRef.core__DOT__ea))
                                : (((IData)(vlSelfRef.core__DOT__cs) 
                                    << 4U) + (IData)(vlSelfRef.core__DOT__ip))));
    core__DOT____VdfgRegularize_h47660625_1_5 = (1U 
                                                 & VL_REDXOR_16(
                                                                (0x880U 
                                                                 & (IData)(vlSelfRef.flags))));
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
    core__DOT____VdfgRegularize_h47660625_1_35 = (1U 
                                                  & (~ 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.core__DOT__alu)) 
                                                      | ((4U 
                                                          == (IData)(vlSelfRef.core__DOT__alu)) 
                                                         | (1U 
                                                            == (IData)(vlSelfRef.core__DOT__alu))))));
    core__DOT____VdfgRegularize_h47660625_1_36 = (1U 
                                                  & ((IData)(vlSelfRef.core__DOT__op1) 
                                                     >> 
                                                     ((IData)(vlSelfRef.core__DOT__size)
                                                       ? 0xfU
                                                       : 7U)));
    core__DOT__rtfl = ((4U == (IData)(vlSelfRef.core__DOT__alu)) 
                       | ((5U == (IData)(vlSelfRef.core__DOT__alu)) 
                          | ((6U == (IData)(vlSelfRef.core__DOT__alu)) 
                             | (5U == (IData)(vlSelfRef.core__DOT__alu)))));
    core__DOT____VdfgRegularize_h47660625_1_28 = (0x1ffffU 
                                                  & ((IData)(vlSelfRef.core__DOT__op1) 
                                                     + (IData)(vlSelfRef.core__DOT__op2)));
    core__DOT____VdfgRegularize_h47660625_1_32 = (0x1ffffU 
                                                  & ((IData)(vlSelfRef.core__DOT__op1) 
                                                     - (IData)(vlSelfRef.core__DOT__op2)));
    vlSelfRef.core__DOT__opcode = ((0U != (IData)(vlSelfRef.core__DOT__t))
                                    ? (IData)(vlSelfRef.core__DOT__opc)
                                    : (IData)(vlSelfRef.i));
    vlSelfRef.core__DOT__daa_a = (1U & ((9U < (0xfU 
                                               & (IData)(vlSelfRef.core__DOT__ax))) 
                                        | ((IData)(vlSelfRef.flags) 
                                           >> 4U)));
    core__DOT__div1 = ((vlSelfRef.core__DOT__divr << 1U) 
                       | (vlSelfRef.core__DOT__diva 
                          >> 0x1fU));
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
    core__DOT___sf = (1U & (vlSelfRef.core__DOT__alu_r 
                            >> ((IData)(vlSelfRef.core__DOT__size)
                                 ? 0xfU : 7U)));
    core__DOT__daa_x = (1U & ((0x9fU < (0xffU & (IData)(core__DOT__daa_i))) 
                              | ((IData)(vlSelfRef.core__DOT__daa_a)
                                  ? ((IData)(core__DOT__daa_i) 
                                     >> 8U) : (IData)(vlSelfRef.flags))));
    core__DOT__div2 = ((((1U & (IData)((core__DOT__div1c 
                                        >> 0x20U)))
                          ? core__DOT__div1 : (IData)(core__DOT__div1c)) 
                        << 1U) | (1U & (vlSelfRef.core__DOT__diva 
                                        >> 0x1eU)));
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
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->ce = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(20);
    vlSelf->i = VL_RAND_RESET_I(8);
    vlSelf->o = VL_RAND_RESET_I(8);
    vlSelf->w = VL_RAND_RESET_I(1);
    vlSelf->intr = VL_RAND_RESET_I(1);
    vlSelf->intn = VL_RAND_RESET_I(8);
    vlSelf->port_a = VL_RAND_RESET_I(16);
    vlSelf->port_w = VL_RAND_RESET_I(1);
    vlSelf->port_r = VL_RAND_RESET_I(1);
    vlSelf->port_i = VL_RAND_RESET_I(8);
    vlSelf->port_o = VL_RAND_RESET_I(8);
    vlSelf->flags = VL_RAND_RESET_I(12);
    vlSelf->halt = VL_RAND_RESET_I(1);
    vlSelf->m0 = VL_RAND_RESET_I(1);
    vlSelf->ud = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ax = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__cx = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__dx = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__bx = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__sp = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__bp = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__si = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__di = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__es = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__cs = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__ss = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__ds = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__ip = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__t = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__m = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__r = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__next = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__mi = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__opc = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__modrm = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__interrupt = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__cp = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__size = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dir = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__cpen = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__cpm = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__intrack = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__term = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__rep = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__over = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__sgn = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__t16 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__ea = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__wb = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__op1 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__op2 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__alu = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__opcode = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__signex = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__tn = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__ean = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__sinc = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__dinc = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__repa = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__repb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__repc = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__branch = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__r20 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__r53 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__r16 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__imulw = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mult = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__multzf = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__multcf = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__alu_r = VL_RAND_RESET_I(17);
    vlSelf->core__DOT__alu_f = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__daa_a = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__daa_r = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__daa_f = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__aaa_r = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__aaa_f = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__barr = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__barf = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__diva = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__divb = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__divr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__divi = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__div4 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__div4c = VL_RAND_RESET_Q(33);
    vlSelf->core__DOT__div4a = VL_RAND_RESET_I(32);
    vlSelf->core__DOT____VdfgRegularize_h47660625_1_12 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT____VdfgRegularize_h47660625_1_14 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT____VdfgRegularize_h47660625_1_16 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT____VdfgRegularize_h47660625_1_18 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT____VdfgRegularize_h47660625_1_20 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT____VdfgRegularize_h47660625_1_22 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT____VdfgRegularize_h47660625_1_24 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT____VdfgRegularize_h47660625_1_25 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
