// Customer ID=16669; Build=0x8c05c; Copyright (c) 2017-2019 Cadence Design Systems, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

/* Definitions for the xt_FP TIE package */

/* Do not modify. This is automatically generated.*/

/* parasoft-begin-suppress ALL "This file not MISRA checked." */

#ifndef _XTENSA_xt_FP_HEADER
#define _XTENSA_xt_FP_HEADER

#ifdef __XTENSA__
#ifdef __XCC__

#ifndef _ASMLANGUAGE
#ifndef _NOCLANGUAGE
#ifndef __ASSEMBLER__

#include <xtensa/tie/xt_core.h>
#include <xtensa/tie/xt_hifi2.h>
#include <xtensa/tie/xt_booleans.h>
typedef _TIE_xt_FP_xtfloat xtfloat;
typedef _TIE_xt_FP_xtfloatx2 xtfloatx2;
typedef _TIE_xt_FP_xthalfx4 xthalfx4;

/*
 * The following prototypes describe intrinsic functions
 * corresponding to TIE instructions.  Some TIE instructions
 * may produce multiple results (designated as "out" operands
 * in the iclass section) or may have operands used as both
 * inputs and outputs (designated as "inout").  However, the C
 * and C++ languages do not provide syntax that can express
 * the in/out/inout constraints of TIE intrinsics.
 * Nevertheless, the compiler understands these constraints
 * and will check that the intrinsic functions are used
 * correctly.  To improve the readability of these prototypes,
 * the "out" and "inout" parameters are marked accordingly
 * with comments.
 */

extern xtfloat _TIE_xt_FP_ABS_S(xtfloat b);
extern xtfloatx2 _TIE_xt_FP_ABS_SX2(xtfloatx2 b);
extern void _TIE_xt_FP_ADDEXPM_S(xtfloat r /*inout*/, xtfloat s);
extern void _TIE_xt_FP_ADDEXPM_SX2(xtfloatx2 r /*inout*/, xtfloatx2 s);
extern void _TIE_xt_FP_ADDEXP_S(xtfloat r /*inout*/, xtfloat s);
extern void _TIE_xt_FP_ADDEXP_SX2(xtfloatx2 r /*inout*/, xtfloatx2 s);
extern xtfloat _TIE_xt_FP_ADD_S(xtfloat b, xtfloat c);
extern xtfloatx2 _TIE_xt_FP_ADD_SX2(xtfloatx2 b, xtfloatx2 c);
extern ae_f32x2 _TIE_xt_FP_AE_MOVF32X2_FROMXTFLOATX2(xtfloatx2 i);
extern void _TIE_xt_FP_AE_MOVFCRFSRV(ae_int64 v);
extern ae_int32x2 _TIE_xt_FP_AE_MOVINT32X2_FROMXTFLOATX2(xtfloatx2 i);
extern ae_int64 _TIE_xt_FP_AE_MOVVFCRFSR(void);
extern xtfloatx2 _TIE_xt_FP_AE_MOVXTFLOATX2_FROMF32X2(ae_f32x2 i);
extern xtfloatx2 _TIE_xt_FP_AE_MOVXTFLOATX2_FROMINT32X2(ae_int32x2 i);
extern xtfloatx2 _TIE_xt_FP_AE_SELSX2IR(xtfloatx2 v0, xtfloatx2 v1, immediate i);
extern xtfloatx2 _TIE_xt_FP_CONJC_S(xtfloatx2 b);
extern xtfloat _TIE_xt_FP_CONST_S(immediate b);
extern void _TIE_xt_FP_CVTF16S_H(xthalfx4 a /*inout*/, xtfloatx2 b);
extern xthalfx4 _TIE_xt_FP_CVTF16S_L(xtfloatx2 b);
extern xtfloatx2 _TIE_xt_FP_CVTSF16_H(xthalfx4 b);
extern xtfloatx2 _TIE_xt_FP_CVTSF16_L(xthalfx4 b);
extern xtfloat _TIE_xt_FP_DIV0_S(xtfloat s);
extern xtfloatx2 _TIE_xt_FP_DIV0_SX2(xtfloatx2 s);
extern void _TIE_xt_FP_DIVN_S(xtfloat r /*inout*/, xtfloat s, xtfloat t);
extern void _TIE_xt_FP_DIVN_SX2(xtfloatx2 r /*inout*/, xtfloatx2 s, xtfloatx2 t);
extern xtfloat _TIE_xt_FP_DIV_S(xtfloat vs, xtfloat vr);
extern xtfloatx2 _TIE_xt_FP_DIV_SX2(xtfloatx2 vs, xtfloatx2 vr);
extern xtfloat _TIE_xt_FP_FICEIL_S(xtfloat b);
extern xtfloatx2 _TIE_xt_FP_FICEIL_SX2(xtfloatx2 b);
extern xtfloat _TIE_xt_FP_FIFLOOR_S(xtfloat b);
extern xtfloatx2 _TIE_xt_FP_FIFLOOR_SX2(xtfloatx2 b);
extern xtfloat _TIE_xt_FP_FIRINT_S(xtfloat b);
extern xtfloatx2 _TIE_xt_FP_FIRINT_SX2(xtfloatx2 b);
extern xtfloat _TIE_xt_FP_FIROUND_S(xtfloat b);
extern xtfloatx2 _TIE_xt_FP_FIROUND_SX2(xtfloatx2 b);
extern xtfloat _TIE_xt_FP_FITRUNC_S(xtfloat b);
extern xtfloatx2 _TIE_xt_FP_FITRUNC_SX2(xtfloatx2 b);
extern xtfloat _TIE_xt_FP_FLOAT_S(int s, immediate t);
extern xtfloatx2 _TIE_xt_FP_FLOAT_SX2(ae_int32x2 s, immediate t);
extern xtfloat _TIE_xt_FP_FSQRT_S(xtfloat s);
extern xtfloatx2 _TIE_xt_FP_FSQRT_SX2(xtfloatx2 s);
extern xtfloat _TIE_xt_FP_HIGH_S(xtfloatx2 d01);
extern void _TIE_xt_FP_LASX2IC(xtfloatx2 v, ae_valign u /*inout*/, const xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_LASX2IC1(xtfloatx2 v, ae_valign u /*inout*/, const xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_LASX2IP(xtfloatx2 v, ae_valign u /*inout*/, const xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_LASX2NEGPC(ae_valign u, const xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_LASX2NEGPC1(ae_valign u, const xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_LASX2POSPC(ae_valign u, const xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_LASX2POSPC1(ae_valign u, const xtfloatx2 * a /*inout*/);
extern ae_valign _TIE_xt_FP_LASX2PP(const xtfloatx2 * a);
extern void _TIE_xt_FP_LASX2RIC(xtfloatx2 v, ae_valign u /*inout*/, const xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_LASX2RIC1(xtfloatx2 v, ae_valign u /*inout*/, const xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_LASX2RIP(xtfloatx2 v, ae_valign u /*inout*/, const xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_LFCR_FSR(const unsigned * a, immediate b);
extern xtfloat _TIE_xt_FP_LOW_S(xtfloatx2 d01);
extern xtfloat _TIE_xt_FP_LSI(const xtfloat * a, immediate off);
extern void _TIE_xt_FP_LSIP(xtfloat d, const xtfloat * a /*inout*/, immediate off);
extern xtfloat _TIE_xt_FP_LSX(const xtfloat * a, int off);
extern xtfloatx2 _TIE_xt_FP_LSX2I(const xtfloatx2 * a, immediate off);
extern void _TIE_xt_FP_LSX2IP(xtfloatx2 d, const xtfloatx2 * a /*inout*/, immediate off);
extern xtfloatx2 _TIE_xt_FP_LSX2RI(const xtfloatx2 * a, immediate off);
extern void _TIE_xt_FP_LSX2RIC(xtfloatx2 d, const xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_LSX2RIC1(xtfloatx2 d, const xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_LSX2RIP(xtfloatx2 d, const xtfloatx2 * a /*inout*/, immediate off);
extern xtfloatx2 _TIE_xt_FP_LSX2X(const xtfloatx2 * a, int off);
extern void _TIE_xt_FP_LSX2XC(xtfloatx2 d, const xtfloatx2 * a /*inout*/, int off);
extern void _TIE_xt_FP_LSX2XP(xtfloatx2 d, const xtfloatx2 * a /*inout*/, int off);
extern void _TIE_xt_FP_LSXC(xtfloat d, const xtfloat * a /*inout*/, int off);
extern void _TIE_xt_FP_LSXP(xtfloat d, const xtfloat * a /*inout*/, int off);
extern void _TIE_xt_FP_MADDCCONJ_S(xtfloatx2 a /*inout*/, xtfloatx2 b, xtfloatx2 c);
extern void _TIE_xt_FP_MADDC_S(xtfloatx2 a /*inout*/, xtfloatx2 b, xtfloatx2 c);
extern void _TIE_xt_FP_MADDMUX_S(xtfloatx2 a /*inout*/, xtfloatx2 b, xtfloatx2 c, immediate d);
extern void _TIE_xt_FP_MADDN_S(xtfloat a /*inout*/, xtfloat b, xtfloat c);
extern void _TIE_xt_FP_MADDN_SX2(xtfloatx2 a /*inout*/, xtfloatx2 b, xtfloatx2 c);
extern void _TIE_xt_FP_MADD_S(xtfloat a /*inout*/, xtfloat b, xtfloat c);
extern void _TIE_xt_FP_MADD_SX2(xtfloatx2 a /*inout*/, xtfloatx2 b, xtfloatx2 c);
extern xtfloat _TIE_xt_FP_MAX_S(xtfloat b, xtfloat c);
extern xtfloatx2 _TIE_xt_FP_MAX_SX2(xtfloatx2 b, xtfloatx2 c);
extern xtfloat _TIE_xt_FP_MIN_S(xtfloat b, xtfloat c);
extern xtfloatx2 _TIE_xt_FP_MIN_SX2(xtfloatx2 b, xtfloatx2 c);
extern void _TIE_xt_FP_MKDADJ_S(xtfloat r /*inout*/, xtfloat s);
extern void _TIE_xt_FP_MKDADJ_SX2(xtfloatx2 r /*inout*/, xtfloatx2 s);
extern xtfloat _TIE_xt_FP_MKSADJ_S(xtfloat s);
extern xtfloatx2 _TIE_xt_FP_MKSADJ_SX2(xtfloatx2 s);
extern void _TIE_xt_FP_MOVEQZ_S(xtfloat a /*inout*/, xtfloat b, int c);
extern void _TIE_xt_FP_MOVEQZ_SX2(xtfloatx2 a /*inout*/, xtfloatx2 b, int c);
extern void _TIE_xt_FP_MOVF_S(xtfloat r /*inout*/, xtfloat s, xtbool t);
extern void _TIE_xt_FP_MOVF_SX2(xtfloatx2 r /*inout*/, xtfloatx2 s, xtbool2 t);
extern void _TIE_xt_FP_MOVGEZ_S(xtfloat a /*inout*/, xtfloat b, int c);
extern void _TIE_xt_FP_MOVGEZ_SX2(xtfloatx2 a /*inout*/, xtfloatx2 b, int c);
extern void _TIE_xt_FP_MOVLTZ_S(xtfloat a /*inout*/, xtfloat b, int c);
extern void _TIE_xt_FP_MOVLTZ_SX2(xtfloatx2 a /*inout*/, xtfloatx2 b, int c);
extern void _TIE_xt_FP_MOVNEZ_S(xtfloat a /*inout*/, xtfloat b, int c);
extern void _TIE_xt_FP_MOVNEZ_SX2(xtfloatx2 a /*inout*/, xtfloatx2 b, int c);
extern void _TIE_xt_FP_MOVT_S(xtfloat r /*inout*/, xtfloat s, xtbool t);
extern void _TIE_xt_FP_MOVT_SX2(xtfloatx2 r /*inout*/, xtfloatx2 s, xtbool2 t);
extern xtfloat _TIE_xt_FP_MOV_S(xtfloat s);
extern xtfloatx2 _TIE_xt_FP_MOV_SX2(xtfloatx2 s);
extern void _TIE_xt_FP_MSUBCCONJ_S(xtfloatx2 a /*inout*/, xtfloatx2 b, xtfloatx2 c);
extern void _TIE_xt_FP_MSUBC_S(xtfloatx2 a /*inout*/, xtfloatx2 b, xtfloatx2 c);
extern void _TIE_xt_FP_MSUBN_S(xtfloat a /*inout*/, xtfloat b, xtfloat c);
extern void _TIE_xt_FP_MSUBN_SX2(xtfloatx2 a /*inout*/, xtfloatx2 b, xtfloatx2 c);
extern void _TIE_xt_FP_MSUB_S(xtfloat a /*inout*/, xtfloat b, xtfloat c);
extern void _TIE_xt_FP_MSUB_SX2(xtfloatx2 a /*inout*/, xtfloatx2 b, xtfloatx2 c);
extern xtfloatx2 _TIE_xt_FP_MULCCONJ_S(xtfloatx2 b, xtfloatx2 c);
extern xtfloatx2 _TIE_xt_FP_MULC_S(xtfloatx2 b, xtfloatx2 c);
extern xtfloatx2 _TIE_xt_FP_MULMUX_S(xtfloatx2 b, xtfloatx2 c, immediate d);
extern xtfloat _TIE_xt_FP_MUL_S(xtfloat b, xtfloat c);
extern xtfloatx2 _TIE_xt_FP_MUL_SX2(xtfloatx2 b, xtfloatx2 c);
extern xtfloat _TIE_xt_FP_NEG_S(xtfloat b);
extern xtfloatx2 _TIE_xt_FP_NEG_SX2(xtfloatx2 b);
extern xtfloat _TIE_xt_FP_NEXP01_S(xtfloat s);
extern xtfloatx2 _TIE_xt_FP_NEXP01_SX2(xtfloatx2 s);
extern xtbool2 _TIE_xt_FP_OEQ_S(xtfloat s, xtfloat t);
extern xtbool2 _TIE_xt_FP_OEQ_SX2(xtfloatx2 s, xtfloatx2 t);
extern xtbool2 _TIE_xt_FP_OLE_S(xtfloat s, xtfloat t);
extern xtbool2 _TIE_xt_FP_OLE_SX2(xtfloatx2 s, xtfloatx2 t);
extern xtbool2 _TIE_xt_FP_OLT_S(xtfloat s, xtfloat t);
extern xtbool2 _TIE_xt_FP_OLT_SX2(xtfloatx2 s, xtfloatx2 t);
extern xtfloat _TIE_xt_FP_RADD_SX2(xtfloatx2 s);
extern xtfloat _TIE_xt_FP_RECIP0_S(xtfloat s);
extern xtfloatx2 _TIE_xt_FP_RECIP0_SX2(xtfloatx2 s);
extern xtfloat _TIE_xt_FP_RECIP_S(xtfloat s);
extern xtfloatx2 _TIE_xt_FP_RECIP_SX2(xtfloatx2 s);
extern unsigned _TIE_xt_FP_RFR(xtfloat vs);
extern xtfloat _TIE_xt_FP_RMAX_S(xtfloatx2 s);
extern xtfloat _TIE_xt_FP_RMIN_S(xtfloatx2 s);
extern xtfloat _TIE_xt_FP_RSQRT0_S(xtfloat s);
extern xtfloatx2 _TIE_xt_FP_RSQRT0_SX2(xtfloatx2 s);
extern xtfloat _TIE_xt_FP_RSQRT_S(xtfloat s);
extern xtfloatx2 _TIE_xt_FP_RSQRT_SX2(xtfloatx2 s);
extern unsigned _TIE_xt_FP_RUR_FCR(void);
extern unsigned _TIE_xt_FP_RUR_FSR(void);
extern void _TIE_xt_FP_SASX2IC(xtfloatx2 v, ae_valign u /*inout*/, xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_SASX2IC1(xtfloatx2 v, ae_valign u /*inout*/, xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_SASX2IP(xtfloatx2 v, ae_valign u /*inout*/, xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_SASX2NEGFP(ae_valign u /*inout*/, xtfloatx2 * a);
extern void _TIE_xt_FP_SASX2POSFP(ae_valign u /*inout*/, xtfloatx2 * a);
extern void _TIE_xt_FP_SASX2RIC(xtfloatx2 v, ae_valign u /*inout*/, xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_SASX2RIC1(xtfloatx2 v, ae_valign u /*inout*/, xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_SASX2RIP(xtfloatx2 v, ae_valign u /*inout*/, xtfloatx2 * a /*inout*/);
extern xtfloatx2 _TIE_xt_FP_SEL32_HH_SX2(xtfloatx2 d0, xtfloatx2 d1);
extern xtfloatx2 _TIE_xt_FP_SEL32_HL_SX2(xtfloatx2 d0, xtfloatx2 d1);
extern xtfloatx2 _TIE_xt_FP_SEL32_LH_SX2(xtfloatx2 d0, xtfloatx2 d1);
extern xtfloatx2 _TIE_xt_FP_SEL32_LL_SX2(xtfloatx2 d0, xtfloatx2 d1);
extern void _TIE_xt_FP_SFCR_FSR(unsigned * a, immediate b);
extern xtfloat _TIE_xt_FP_SQRT0_S(xtfloat s);
extern xtfloatx2 _TIE_xt_FP_SQRT0_SX2(xtfloatx2 s);
extern xtfloat _TIE_xt_FP_SQRT_S(xtfloat vs);
extern xtfloatx2 _TIE_xt_FP_SQRT_SX2(xtfloatx2 vs);
extern void _TIE_xt_FP_SSI(xtfloat d, xtfloat * a, immediate off);
extern void _TIE_xt_FP_SSIP(xtfloat d, xtfloat * a /*inout*/, immediate off);
extern void _TIE_xt_FP_SSX(xtfloat d, xtfloat * a, int off);
extern void _TIE_xt_FP_SSX2I(xtfloatx2 d, xtfloatx2 * a, immediate off);
extern void _TIE_xt_FP_SSX2IP(xtfloatx2 d, xtfloatx2 * a /*inout*/, immediate off);
extern void _TIE_xt_FP_SSX2RI(xtfloatx2 d, xtfloatx2 * a, immediate off);
extern void _TIE_xt_FP_SSX2RIC(xtfloatx2 d, xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_SSX2RIC1(xtfloatx2 d, xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_SSX2RIP(xtfloatx2 d, xtfloatx2 * a /*inout*/, immediate off);
extern void _TIE_xt_FP_SSX2X(xtfloatx2 d, xtfloatx2 * a, int off);
extern void _TIE_xt_FP_SSX2XC(xtfloatx2 d, xtfloatx2 * a /*inout*/, int off);
extern void _TIE_xt_FP_SSX2XP(xtfloatx2 d, xtfloatx2 * a /*inout*/, int off);
extern void _TIE_xt_FP_SSXC(xtfloat d, xtfloat * a /*inout*/, int off);
extern void _TIE_xt_FP_SSXP(xtfloat d, xtfloat * a /*inout*/, int off);
extern xtfloat _TIE_xt_FP_SUB_S(xtfloat b, xtfloat c);
extern xtfloatx2 _TIE_xt_FP_SUB_SX2(xtfloatx2 b, xtfloatx2 c);
extern int _TIE_xt_FP_TRUNC_S(xtfloat s, immediate t);
extern ae_int32x2 _TIE_xt_FP_TRUNC_SX2(xtfloatx2 s, immediate t);
extern xtbool2 _TIE_xt_FP_UEQ_S(xtfloat s, xtfloat t);
extern xtbool2 _TIE_xt_FP_UEQ_SX2(xtfloatx2 s, xtfloatx2 t);
extern xtfloat _TIE_xt_FP_UFLOAT_S(unsigned s, immediate t);
extern xtfloatx2 _TIE_xt_FP_UFLOAT_SX2(ae_int32x2 s, immediate t);
extern xtbool2 _TIE_xt_FP_ULE_S(xtfloat s, xtfloat t);
extern xtbool2 _TIE_xt_FP_ULE_SX2(xtfloatx2 s, xtfloatx2 t);
extern xtbool2 _TIE_xt_FP_ULT_S(xtfloat s, xtfloat t);
extern xtbool2 _TIE_xt_FP_ULT_SX2(xtfloatx2 s, xtfloatx2 t);
extern xtbool2 _TIE_xt_FP_UN_S(xtfloat s, xtfloat t);
extern xtbool2 _TIE_xt_FP_UN_SX2(xtfloatx2 s, xtfloatx2 t);
extern unsigned _TIE_xt_FP_UTRUNC_S(xtfloat s, immediate t);
extern ae_int32x2 _TIE_xt_FP_UTRUNC_SX2(xtfloatx2 s, immediate t);
extern xtfloat _TIE_xt_FP_WFR(unsigned vs);
extern void _TIE_xt_FP_WUR_FCR(unsigned v);
extern void _TIE_xt_FP_WUR_FSR(unsigned v);
extern xthalfx4 _TIE_xt_FP_ZERO_HX4(void);
extern xtfloat _TIE_xt_FP_ZERO_S(void);
extern xtfloatx2 _TIE_xt_FP_ZERO_SX2(void);
extern xtfloatx2 _TIE_xt_FP_ae_int32x2_rtor_xtfloatx2(ae_int32x2 i);
extern xtfloat _TIE_xt_FP_xtfloat_loadi(const xtfloat * a, immediate off);
extern void _TIE_xt_FP_xtfloat_loadip(xtfloat d, const xtfloat * a /*inout*/, immediate off);
extern xtfloat _TIE_xt_FP_xtfloat_loadx(const xtfloat * a, int off);
extern void _TIE_xt_FP_xtfloat_loadxp(xtfloat d, const xtfloat * a /*inout*/, int off);
extern xtfloat _TIE_xt_FP_xtfloat_move(xtfloat d0);
extern xtfloatx2 _TIE_xt_FP_xtfloat_rtor_xtfloatx2(xtfloat d0);
extern void _TIE_xt_FP_xtfloat_storei(xtfloat d, xtfloat * a, immediate off);
extern void _TIE_xt_FP_xtfloat_storeip(xtfloat d, xtfloat * a /*inout*/, immediate off);
extern void _TIE_xt_FP_xtfloat_storex(xtfloat d, xtfloat * a, int off);
extern void _TIE_xt_FP_xtfloat_storexp(xtfloat d, xtfloat * a /*inout*/, int off);
extern xtbool2 _TIE_xt_FP_xtfloatx2_EQ_xtfloatx2(xtfloatx2 d0, xtfloatx2 d1);
extern xtbool2 _TIE_xt_FP_xtfloatx2_GE_xtfloatx2(xtfloatx2 d0, xtfloatx2 d1);
extern xtbool2 _TIE_xt_FP_xtfloatx2_GT_xtfloatx2(xtfloatx2 d0, xtfloatx2 d1);
extern xtbool2 _TIE_xt_FP_xtfloatx2_LE_xtfloatx2(xtfloatx2 d0, xtfloatx2 d1);
extern xtbool2 _TIE_xt_FP_xtfloatx2_LT_xtfloatx2(xtfloatx2 d0, xtfloatx2 d1);
extern ae_valign _TIE_xt_FP_xtfloatx2_aligning_store_prime(void);
extern void _TIE_xt_FP_xtfloatx2_load_post_update_negative(xtfloatx2 v, const xtfloatx2 * a /*inout*/);
extern xtfloatx2 _TIE_xt_FP_xtfloatx2_loadi(const xtfloatx2 * a, immediate off);
extern void _TIE_xt_FP_xtfloatx2_loadip(xtfloatx2 d, const xtfloatx2 * a /*inout*/, immediate off);
extern void _TIE_xt_FP_xtfloatx2_loadrip(xtfloatx2 d, const xtfloatx2 * a /*inout*/, immediate off);
extern xtfloatx2 _TIE_xt_FP_xtfloatx2_loadx(const xtfloatx2 * a, int off);
extern void _TIE_xt_FP_xtfloatx2_loadxp(xtfloatx2 d, const xtfloatx2 * a /*inout*/, int off);
extern xtfloatx2 _TIE_xt_FP_xtfloatx2_move(xtfloatx2 d0);
extern ae_int32x2 _TIE_xt_FP_xtfloatx2_rtor_ae_int32x2(xtfloatx2 i);
extern xtfloat _TIE_xt_FP_xtfloatx2_rtor_xtfloat(xtfloatx2 d01);
extern void _TIE_xt_FP_xtfloatx2_store_post_update_negative(xtfloatx2 v, xtfloatx2 * a /*inout*/);
extern void _TIE_xt_FP_xtfloatx2_storei(xtfloatx2 d, xtfloatx2 * a, immediate off);
extern void _TIE_xt_FP_xtfloatx2_storeip(xtfloatx2 d, xtfloatx2 * a /*inout*/, immediate off);
extern void _TIE_xt_FP_xtfloatx2_storex(xtfloatx2 d, xtfloatx2 * a, int off);
extern void _TIE_xt_FP_xtfloatx2_storexp(xtfloatx2 d, xtfloatx2 * a /*inout*/, int off);
extern xthalfx4 _TIE_xt_FP_xthalfx4_loadi(const xthalfx4 * a, immediate off);
extern void _TIE_xt_FP_xthalfx4_loadip(xthalfx4 d, const xthalfx4 * a /*inout*/, immediate off);
extern xthalfx4 _TIE_xt_FP_xthalfx4_loadx(const xthalfx4 * a, int off);
extern void _TIE_xt_FP_xthalfx4_loadxp(xthalfx4 d, const xthalfx4 * a /*inout*/, int off);
extern xthalfx4 _TIE_xt_FP_xthalfx4_move(xthalfx4 d0);
extern void _TIE_xt_FP_xthalfx4_storei(xthalfx4 d, xthalfx4 * a, immediate off);
extern void _TIE_xt_FP_xthalfx4_storeip(xthalfx4 d, xthalfx4 * a /*inout*/, immediate off);
extern void _TIE_xt_FP_xthalfx4_storex(xthalfx4 d, xthalfx4 * a, int off);
extern void _TIE_xt_FP_xthalfx4_storexp(xthalfx4 d, xthalfx4 * a /*inout*/, int off);

#endif /*__ASSEMBLER__*/
#endif /*_NOCLANGUAGE*/
#endif /*_ASMLANGUAGE*/

#define XT_ABS_S _TIE_xt_FP_ABS_S
#define XT_ABS_SX2 _TIE_xt_FP_ABS_SX2
#define XT_ADDEXPM_S _TIE_xt_FP_ADDEXPM_S
#define XT_ADDEXPM_SX2 _TIE_xt_FP_ADDEXPM_SX2
#define XT_ADDEXP_S _TIE_xt_FP_ADDEXP_S
#define XT_ADDEXP_SX2 _TIE_xt_FP_ADDEXP_SX2
#define XT_ADD_S _TIE_xt_FP_ADD_S
#define XT_ADD_SX2 _TIE_xt_FP_ADD_SX2
#define XT_AE_MOVF32X2_FROMXTFLOATX2 _TIE_xt_FP_AE_MOVF32X2_FROMXTFLOATX2
#define XT_AE_MOVFCRFSRV _TIE_xt_FP_AE_MOVFCRFSRV
#define XT_AE_MOVINT32X2_FROMXTFLOATX2 _TIE_xt_FP_AE_MOVINT32X2_FROMXTFLOATX2
#define XT_AE_MOVVFCRFSR _TIE_xt_FP_AE_MOVVFCRFSR
#define XT_AE_MOVXTFLOATX2_FROMF32X2 _TIE_xt_FP_AE_MOVXTFLOATX2_FROMF32X2
#define XT_AE_MOVXTFLOATX2_FROMINT32X2 _TIE_xt_FP_AE_MOVXTFLOATX2_FROMINT32X2
#define XT_AE_SELSX2IR _TIE_xt_FP_AE_SELSX2IR
#define XT_CONJC_S _TIE_xt_FP_CONJC_S
#define XT_CONST_S _TIE_xt_FP_CONST_S
#define XT_CVTF16S_H _TIE_xt_FP_CVTF16S_H
#define XT_CVTF16S_L _TIE_xt_FP_CVTF16S_L
#define XT_CVTSF16_H _TIE_xt_FP_CVTSF16_H
#define XT_CVTSF16_L _TIE_xt_FP_CVTSF16_L
#define XT_DIV0_S _TIE_xt_FP_DIV0_S
#define XT_DIV0_SX2 _TIE_xt_FP_DIV0_SX2
#define XT_DIVN_S _TIE_xt_FP_DIVN_S
#define XT_DIVN_SX2 _TIE_xt_FP_DIVN_SX2
#define XT_DIV_S _TIE_xt_FP_DIV_S
#define XT_DIV_SX2 _TIE_xt_FP_DIV_SX2
#define XT_FICEIL_S _TIE_xt_FP_FICEIL_S
#define XT_FICEIL_SX2 _TIE_xt_FP_FICEIL_SX2
#define XT_FIFLOOR_S _TIE_xt_FP_FIFLOOR_S
#define XT_FIFLOOR_SX2 _TIE_xt_FP_FIFLOOR_SX2
#define XT_FIRINT_S _TIE_xt_FP_FIRINT_S
#define XT_FIRINT_SX2 _TIE_xt_FP_FIRINT_SX2
#define XT_FIROUND_S _TIE_xt_FP_FIROUND_S
#define XT_FIROUND_SX2 _TIE_xt_FP_FIROUND_SX2
#define XT_FITRUNC_S _TIE_xt_FP_FITRUNC_S
#define XT_FITRUNC_SX2 _TIE_xt_FP_FITRUNC_SX2
#define XT_FLOAT_S _TIE_xt_FP_FLOAT_S
#define XT_FLOAT_SX2 _TIE_xt_FP_FLOAT_SX2
#define XT_FSQRT_S _TIE_xt_FP_FSQRT_S
#define XT_FSQRT_SX2 _TIE_xt_FP_FSQRT_SX2
#define XT_HIGH_S _TIE_xt_FP_HIGH_S
#define XT_LASX2IC _TIE_xt_FP_LASX2IC
#define XT_LASX2IC1 _TIE_xt_FP_LASX2IC1
#define XT_LASX2IP _TIE_xt_FP_LASX2IP
#define XT_LASX2NEGPC _TIE_xt_FP_LASX2NEGPC
#define XT_LASX2NEGPC1 _TIE_xt_FP_LASX2NEGPC1
#define XT_LASX2POSPC _TIE_xt_FP_LASX2POSPC
#define XT_LASX2POSPC1 _TIE_xt_FP_LASX2POSPC1
#define XT_LASX2PP _TIE_xt_FP_LASX2PP
#define XT_LASX2RIC _TIE_xt_FP_LASX2RIC
#define XT_LASX2RIC1 _TIE_xt_FP_LASX2RIC1
#define XT_LASX2RIP _TIE_xt_FP_LASX2RIP
#define XT_LFCR_FSR _TIE_xt_FP_LFCR_FSR
#define XT_LOW_S _TIE_xt_FP_LOW_S
#define XT_LSI _TIE_xt_FP_LSI
#define XT_LSIP _TIE_xt_FP_LSIP
#define XT_LSX _TIE_xt_FP_LSX
#define XT_LSX2I _TIE_xt_FP_LSX2I
#define XT_LSX2IP _TIE_xt_FP_LSX2IP
#define XT_LSX2RI _TIE_xt_FP_LSX2RI
#define XT_LSX2RIC _TIE_xt_FP_LSX2RIC
#define XT_LSX2RIC1 _TIE_xt_FP_LSX2RIC1
#define XT_LSX2RIP _TIE_xt_FP_LSX2RIP
#define XT_LSX2X _TIE_xt_FP_LSX2X
#define XT_LSX2XC _TIE_xt_FP_LSX2XC
#define XT_LSX2XP _TIE_xt_FP_LSX2XP
#define XT_LSXC _TIE_xt_FP_LSXC
#define XT_LSXP _TIE_xt_FP_LSXP
#define XT_MADDCCONJ_S _TIE_xt_FP_MADDCCONJ_S
#define XT_MADDC_S _TIE_xt_FP_MADDC_S
#define XT_MADDMUX_S _TIE_xt_FP_MADDMUX_S
#define XT_MADDN_S _TIE_xt_FP_MADDN_S
#define XT_MADDN_SX2 _TIE_xt_FP_MADDN_SX2
#define XT_MADD_S _TIE_xt_FP_MADD_S
#define XT_MADD_SX2 _TIE_xt_FP_MADD_SX2
#define XT_MAX_S _TIE_xt_FP_MAX_S
#define XT_MAX_SX2 _TIE_xt_FP_MAX_SX2
#define XT_MIN_S _TIE_xt_FP_MIN_S
#define XT_MIN_SX2 _TIE_xt_FP_MIN_SX2
#define XT_MKDADJ_S _TIE_xt_FP_MKDADJ_S
#define XT_MKDADJ_SX2 _TIE_xt_FP_MKDADJ_SX2
#define XT_MKSADJ_S _TIE_xt_FP_MKSADJ_S
#define XT_MKSADJ_SX2 _TIE_xt_FP_MKSADJ_SX2
#define XT_MOVEQZ_S _TIE_xt_FP_MOVEQZ_S
#define XT_MOVEQZ_SX2 _TIE_xt_FP_MOVEQZ_SX2
#define XT_MOVF_S _TIE_xt_FP_MOVF_S
#define XT_MOVF_SX2 _TIE_xt_FP_MOVF_SX2
#define XT_MOVGEZ_S _TIE_xt_FP_MOVGEZ_S
#define XT_MOVGEZ_SX2 _TIE_xt_FP_MOVGEZ_SX2
#define XT_MOVLTZ_S _TIE_xt_FP_MOVLTZ_S
#define XT_MOVLTZ_SX2 _TIE_xt_FP_MOVLTZ_SX2
#define XT_MOVNEZ_S _TIE_xt_FP_MOVNEZ_S
#define XT_MOVNEZ_SX2 _TIE_xt_FP_MOVNEZ_SX2
#define XT_MOVT_S _TIE_xt_FP_MOVT_S
#define XT_MOVT_SX2 _TIE_xt_FP_MOVT_SX2
#define XT_MOV_S _TIE_xt_FP_MOV_S
#define XT_MOV_SX2 _TIE_xt_FP_MOV_SX2
#define XT_MSUBCCONJ_S _TIE_xt_FP_MSUBCCONJ_S
#define XT_MSUBC_S _TIE_xt_FP_MSUBC_S
#define XT_MSUBN_S _TIE_xt_FP_MSUBN_S
#define XT_MSUBN_SX2 _TIE_xt_FP_MSUBN_SX2
#define XT_MSUB_S _TIE_xt_FP_MSUB_S
#define XT_MSUB_SX2 _TIE_xt_FP_MSUB_SX2
#define XT_MULCCONJ_S _TIE_xt_FP_MULCCONJ_S
#define XT_MULC_S _TIE_xt_FP_MULC_S
#define XT_MULMUX_S _TIE_xt_FP_MULMUX_S
#define XT_MUL_S _TIE_xt_FP_MUL_S
#define XT_MUL_SX2 _TIE_xt_FP_MUL_SX2
#define XT_NEG_S _TIE_xt_FP_NEG_S
#define XT_NEG_SX2 _TIE_xt_FP_NEG_SX2
#define XT_NEXP01_S _TIE_xt_FP_NEXP01_S
#define XT_NEXP01_SX2 _TIE_xt_FP_NEXP01_SX2
#define XT_OEQ_S _TIE_xt_FP_OEQ_S
#define XT_OEQ_SX2 _TIE_xt_FP_OEQ_SX2
#define XT_OLE_S _TIE_xt_FP_OLE_S
#define XT_OLE_SX2 _TIE_xt_FP_OLE_SX2
#define XT_OLT_S _TIE_xt_FP_OLT_S
#define XT_OLT_SX2 _TIE_xt_FP_OLT_SX2
#define XT_RADD_SX2 _TIE_xt_FP_RADD_SX2
#define XT_RECIP0_S _TIE_xt_FP_RECIP0_S
#define XT_RECIP0_SX2 _TIE_xt_FP_RECIP0_SX2
#define XT_RECIP_S _TIE_xt_FP_RECIP_S
#define XT_RECIP_SX2 _TIE_xt_FP_RECIP_SX2
#define XT_RFR _TIE_xt_FP_RFR
#define XT_RMAX_S _TIE_xt_FP_RMAX_S
#define XT_RMIN_S _TIE_xt_FP_RMIN_S
#define XT_RSQRT0_S _TIE_xt_FP_RSQRT0_S
#define XT_RSQRT0_SX2 _TIE_xt_FP_RSQRT0_SX2
#define XT_RSQRT_S _TIE_xt_FP_RSQRT_S
#define XT_RSQRT_SX2 _TIE_xt_FP_RSQRT_SX2
#define XT_RUR_FCR _TIE_xt_FP_RUR_FCR
#define XT_RUR_FSR _TIE_xt_FP_RUR_FSR
#define XT_SASX2IC _TIE_xt_FP_SASX2IC
#define XT_SASX2IC1 _TIE_xt_FP_SASX2IC1
#define XT_SASX2IP _TIE_xt_FP_SASX2IP
#define XT_SASX2NEGFP _TIE_xt_FP_SASX2NEGFP
#define XT_SASX2POSFP _TIE_xt_FP_SASX2POSFP
#define XT_SASX2RIC _TIE_xt_FP_SASX2RIC
#define XT_SASX2RIC1 _TIE_xt_FP_SASX2RIC1
#define XT_SASX2RIP _TIE_xt_FP_SASX2RIP
#define XT_SEL32_HH_SX2 _TIE_xt_FP_SEL32_HH_SX2
#define XT_SEL32_HL_SX2 _TIE_xt_FP_SEL32_HL_SX2
#define XT_SEL32_LH_SX2 _TIE_xt_FP_SEL32_LH_SX2
#define XT_SEL32_LL_SX2 _TIE_xt_FP_SEL32_LL_SX2
#define XT_SFCR_FSR _TIE_xt_FP_SFCR_FSR
#define XT_SQRT0_S _TIE_xt_FP_SQRT0_S
#define XT_SQRT0_SX2 _TIE_xt_FP_SQRT0_SX2
#define XT_SQRT_S _TIE_xt_FP_SQRT_S
#define XT_SQRT_SX2 _TIE_xt_FP_SQRT_SX2
#define XT_SSI _TIE_xt_FP_SSI
#define XT_SSIP _TIE_xt_FP_SSIP
#define XT_SSX _TIE_xt_FP_SSX
#define XT_SSX2I _TIE_xt_FP_SSX2I
#define XT_SSX2IP _TIE_xt_FP_SSX2IP
#define XT_SSX2RI _TIE_xt_FP_SSX2RI
#define XT_SSX2RIC _TIE_xt_FP_SSX2RIC
#define XT_SSX2RIC1 _TIE_xt_FP_SSX2RIC1
#define XT_SSX2RIP _TIE_xt_FP_SSX2RIP
#define XT_SSX2X _TIE_xt_FP_SSX2X
#define XT_SSX2XC _TIE_xt_FP_SSX2XC
#define XT_SSX2XP _TIE_xt_FP_SSX2XP
#define XT_SSXC _TIE_xt_FP_SSXC
#define XT_SSXP _TIE_xt_FP_SSXP
#define XT_SUB_S _TIE_xt_FP_SUB_S
#define XT_SUB_SX2 _TIE_xt_FP_SUB_SX2
#define XT_TRUNC_S _TIE_xt_FP_TRUNC_S
#define XT_TRUNC_SX2 _TIE_xt_FP_TRUNC_SX2
#define XT_UEQ_S _TIE_xt_FP_UEQ_S
#define XT_UEQ_SX2 _TIE_xt_FP_UEQ_SX2
#define XT_UFLOAT_S _TIE_xt_FP_UFLOAT_S
#define XT_UFLOAT_SX2 _TIE_xt_FP_UFLOAT_SX2
#define XT_ULE_S _TIE_xt_FP_ULE_S
#define XT_ULE_SX2 _TIE_xt_FP_ULE_SX2
#define XT_ULT_S _TIE_xt_FP_ULT_S
#define XT_ULT_SX2 _TIE_xt_FP_ULT_SX2
#define XT_UN_S _TIE_xt_FP_UN_S
#define XT_UN_SX2 _TIE_xt_FP_UN_SX2
#define XT_UTRUNC_S _TIE_xt_FP_UTRUNC_S
#define XT_UTRUNC_SX2 _TIE_xt_FP_UTRUNC_SX2
#define XT_WFR _TIE_xt_FP_WFR
#define XT_WUR_FCR _TIE_xt_FP_WUR_FCR
#define XT_WUR_FSR _TIE_xt_FP_WUR_FSR
#define XT_ZERO_HX4 _TIE_xt_FP_ZERO_HX4
#define XT_ZERO_S _TIE_xt_FP_ZERO_S
#define XT_ZERO_SX2 _TIE_xt_FP_ZERO_SX2
#define XT_ae_int32x2_rtor_xtfloatx2 _TIE_xt_FP_ae_int32x2_rtor_xtfloatx2
#define XT_xtfloat_loadi _TIE_xt_FP_xtfloat_loadi
#define XT_xtfloat_loadip _TIE_xt_FP_xtfloat_loadip
#define XT_xtfloat_loadx _TIE_xt_FP_xtfloat_loadx
#define XT_xtfloat_loadxp _TIE_xt_FP_xtfloat_loadxp
#define XT_xtfloat_move _TIE_xt_FP_xtfloat_move
#define XT_xtfloat_rtor_xtfloatx2 _TIE_xt_FP_xtfloat_rtor_xtfloatx2
#define XT_xtfloat_storei _TIE_xt_FP_xtfloat_storei
#define XT_xtfloat_storeip _TIE_xt_FP_xtfloat_storeip
#define XT_xtfloat_storex _TIE_xt_FP_xtfloat_storex
#define XT_xtfloat_storexp _TIE_xt_FP_xtfloat_storexp
#define XT_xtfloatx2_EQ_xtfloatx2 _TIE_xt_FP_xtfloatx2_EQ_xtfloatx2
#define XT_xtfloatx2_GE_xtfloatx2 _TIE_xt_FP_xtfloatx2_GE_xtfloatx2
#define XT_xtfloatx2_GT_xtfloatx2 _TIE_xt_FP_xtfloatx2_GT_xtfloatx2
#define XT_xtfloatx2_LE_xtfloatx2 _TIE_xt_FP_xtfloatx2_LE_xtfloatx2
#define XT_xtfloatx2_LT_xtfloatx2 _TIE_xt_FP_xtfloatx2_LT_xtfloatx2
#define XT_xtfloatx2_aligning_store_prime _TIE_xt_FP_xtfloatx2_aligning_store_prime
#define XT_xtfloatx2_load_post_update_negative _TIE_xt_FP_xtfloatx2_load_post_update_negative
#define XT_xtfloatx2_loadi _TIE_xt_FP_xtfloatx2_loadi
#define XT_xtfloatx2_loadip _TIE_xt_FP_xtfloatx2_loadip
#define XT_xtfloatx2_loadrip _TIE_xt_FP_xtfloatx2_loadrip
#define XT_xtfloatx2_loadx _TIE_xt_FP_xtfloatx2_loadx
#define XT_xtfloatx2_loadxp _TIE_xt_FP_xtfloatx2_loadxp
#define XT_xtfloatx2_move _TIE_xt_FP_xtfloatx2_move
#define XT_xtfloatx2_rtor_ae_int32x2 _TIE_xt_FP_xtfloatx2_rtor_ae_int32x2
#define XT_xtfloatx2_rtor_xtfloat _TIE_xt_FP_xtfloatx2_rtor_xtfloat
#define XT_xtfloatx2_store_post_update_negative _TIE_xt_FP_xtfloatx2_store_post_update_negative
#define XT_xtfloatx2_storei _TIE_xt_FP_xtfloatx2_storei
#define XT_xtfloatx2_storeip _TIE_xt_FP_xtfloatx2_storeip
#define XT_xtfloatx2_storex _TIE_xt_FP_xtfloatx2_storex
#define XT_xtfloatx2_storexp _TIE_xt_FP_xtfloatx2_storexp
#define XT_xthalfx4_loadi _TIE_xt_FP_xthalfx4_loadi
#define XT_xthalfx4_loadip _TIE_xt_FP_xthalfx4_loadip
#define XT_xthalfx4_loadx _TIE_xt_FP_xthalfx4_loadx
#define XT_xthalfx4_loadxp _TIE_xt_FP_xthalfx4_loadxp
#define XT_xthalfx4_move _TIE_xt_FP_xthalfx4_move
#define XT_xthalfx4_storei _TIE_xt_FP_xthalfx4_storei
#define XT_xthalfx4_storeip _TIE_xt_FP_xthalfx4_storeip
#define XT_xthalfx4_storex _TIE_xt_FP_xthalfx4_storex
#define XT_xthalfx4_storexp _TIE_xt_FP_xthalfx4_storexp

#endif /* __XCC__ */

#endif /* __XTENSA__ */


/* Header includes start */

#define _FP_REGISTER(regno) aed##regno

/* Header includes end */
#endif /* !_XTENSA_xt_FP_HEADER */

/* parasoft-end-suppress ALL "This file not MISRA checked." */
