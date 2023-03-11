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

/* Definitions for the xt_hifi2 TIE package */

/* Do not modify. This is automatically generated.*/

/* parasoft-begin-suppress ALL "This file not MISRA checked." */

#ifndef _XTENSA_xt_hifi2_HEADER
#define _XTENSA_xt_hifi2_HEADER

#ifdef __XTENSA__
#ifdef __XCC__

#ifndef _ASMLANGUAGE
#ifndef _NOCLANGUAGE
#ifndef __ASSEMBLER__

#include <xtensa/tie/xt_core.h>
#include <xtensa/tie/xt_booleans.h>
typedef _TIE_xt_hifi2_ae_ep ae_ep;
typedef _TIE_xt_hifi2_ae_f16 ae_f16;
typedef _TIE_xt_hifi2_ae_f16x4 ae_f16x4;
typedef _TIE_xt_hifi2_ae_f24 ae_f24;
typedef _TIE_xt_hifi2_ae_f24x2 ae_f24x2;
typedef _TIE_xt_hifi2_ae_f32 ae_f32;
typedef _TIE_xt_hifi2_ae_f32x2 ae_f32x2;
typedef _TIE_xt_hifi2_ae_f32x4 ae_f32x4;
typedef _TIE_xt_hifi2_ae_f64 ae_f64;
typedef _TIE_xt_hifi2_ae_int16 ae_int16;
typedef _TIE_xt_hifi2_ae_int16u ae_int16u;
typedef _TIE_xt_hifi2_ae_int16x4 ae_int16x4;
typedef _TIE_xt_hifi2_ae_int24 ae_int24;
typedef _TIE_xt_hifi2_ae_int24x2 ae_int24x2;
typedef _TIE_xt_hifi2_ae_int32 ae_int32;
typedef _TIE_xt_hifi2_ae_int32u ae_int32u;
typedef _TIE_xt_hifi2_ae_int32x2 ae_int32x2;
typedef _TIE_xt_hifi2_ae_int32x4 ae_int32x4;
typedef _TIE_xt_hifi2_ae_int64 ae_int64;
typedef _TIE_xt_hifi2_ae_int64x2 ae_int64x2;
typedef _TIE_xt_hifi2_ae_int64x4 ae_int64x4;
typedef _TIE_xt_hifi2_ae_p16s ae_p16s;
typedef _TIE_xt_hifi2_ae_p16x2s ae_p16x2s;
typedef _TIE_xt_hifi2_ae_p24f ae_p24f;
typedef _TIE_xt_hifi2_ae_p24s ae_p24s;
typedef _TIE_xt_hifi2_ae_p24x2f ae_p24x2f;
typedef _TIE_xt_hifi2_ae_p24x2s ae_p24x2s;
typedef _TIE_xt_hifi2_ae_q32s ae_q32s;
typedef _TIE_xt_hifi2_ae_q56s ae_q56s;
typedef _TIE_xt_hifi2_ae_valign ae_valign;

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

extern ae_f16x4 _TIE_xt_hifi2_AE_ABS16S(ae_f16x4 d0);
extern ae_int16 _TIE_xt_hifi2_AE_ABS16S_scalar(ae_int16 d0);
extern ae_int16x4 _TIE_xt_hifi2_AE_ABS16S_vector(ae_int16x4 d0);
extern ae_f24x2 _TIE_xt_hifi2_AE_ABS24S(ae_f32x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_ABS32(ae_int32x2 d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_ABS32S(ae_f32x2 d0);
extern ae_int32 _TIE_xt_hifi2_AE_ABS32S_scalar(ae_int32 d0);
extern ae_int64 _TIE_xt_hifi2_AE_ABS64(ae_int64 d0);
extern ae_f64 _TIE_xt_hifi2_AE_ABS64S(ae_f64 d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_ABSP24(ae_p24x2s d0);
extern ae_q56s _TIE_xt_hifi2_AE_ABSQ56(ae_q56s d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_ABSSP24S(ae_p24x2s d0);
extern ae_q56s _TIE_xt_hifi2_AE_ABSSQ56S(ae_q56s d0);
extern ae_int32 _TIE_xt_hifi2_AE_ABS_32(ae_int32 b);
extern ae_int16x4 _TIE_xt_hifi2_AE_ADD16(ae_int16x4 d0, ae_int16x4 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_ADD16S(ae_f16x4 d0, ae_f16x4 d1);
extern ae_int16 _TIE_xt_hifi2_AE_ADD16S_scalar(ae_int16 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_ADD16S_vector(ae_int16x4 d0, ae_int16x4 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_ADD24S(ae_f32x2 d0, ae_f32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_ADD32(ae_int32x2 d0, ae_int32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_ADD32S(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_ADD32S_HL_LH(ae_f32x2 d0, ae_f32x2 d1);
extern int _TIE_xt_hifi2_AE_ADD32S_scalar(int d0, ae_int32 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_ADD32_HL_LH(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_ADD64(ae_int64 d0, ae_int64 d1);
extern ae_f64 _TIE_xt_hifi2_AE_ADD64S(ae_f64 d0, ae_f64 d1);
extern ae_int64x2 _TIE_xt_hifi2_AE_ADD64X2_vector(ae_int64x2 d0, ae_int64x2 d1);
extern void _TIE_xt_hifi2_AE_ADD72(ae_ep ep /*inout*/, ae_int64 v /*inout*/, ae_ep ep1, ae_int64 v1);
extern void _TIE_xt_hifi2_AE_ADD72X64(ae_ep ep /*inout*/, ae_int64 v /*inout*/, ae_int64 v1);
extern void _TIE_xt_hifi2_AE_ADDANDSUB32S(ae_f32x2 v, ae_f32x2 ds, ae_f32x2 v0, ae_f32x2 v1);
extern void _TIE_xt_hifi2_AE_ADDANDSUBRNG32(ae_int32x2 v, ae_int32x2 ds, ae_int32x2 v0, ae_int32x2 v1);
extern unsigned _TIE_xt_hifi2_AE_ADDBRBA32(unsigned ab, unsigned ai);
extern void _TIE_xt_hifi2_AE_ADDCIRC16X4_XC(const ae_int16x4 * a /*inout*/, int x);
extern void _TIE_xt_hifi2_AE_ADDCIRC16X4_XC1(const ae_int16x4 * a /*inout*/, int x);
extern void _TIE_xt_hifi2_AE_ADDCIRC32X2_XC(const ae_int32x2 * a /*inout*/, int x);
extern void _TIE_xt_hifi2_AE_ADDCIRC32X2_XC1(const ae_int32x2 * a /*inout*/, int x);
extern void _TIE_xt_hifi2_AE_ADDCIRC64_XC(const ae_int64 * a /*inout*/, int x);
extern void _TIE_xt_hifi2_AE_ADDCIRC64_XC1(const ae_int64 * a /*inout*/, int x);
extern void _TIE_xt_hifi2_AE_ADDCIRC_XC(const ae_int64 * a /*inout*/, unsigned x);
extern void _TIE_xt_hifi2_AE_ADDCIRC_XC1(const ae_int64 * a /*inout*/, unsigned x);
extern void _TIE_xt_hifi2_AE_ADDICIRC(int a /*inout*/, int x, immediate i64);
extern ae_int32 _TIE_xt_hifi2_AE_ADDI_32(ae_int32 b, immediate c);
extern ae_int32 _TIE_xt_hifi2_AE_ADDMI_32(ae_int32 b, immediate c);
extern ae_p24x2s _TIE_xt_hifi2_AE_ADDP24(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_ADDQ56(ae_q56s d0, ae_q56s d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_ADDRNG32(ae_int32x2 v0, ae_int32x2 v1);
extern ae_p24x2s _TIE_xt_hifi2_AE_ADDSP24S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_ADDSQ56S(ae_q56s d0, ae_q56s d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_ADDSUB32(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_ADDSUB32S(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32 _TIE_xt_hifi2_AE_ADDX2_32(ae_int32 b, ae_int32 c);
extern ae_int32 _TIE_xt_hifi2_AE_ADDX4_32(ae_int32 b, ae_int32 c);
extern ae_int32 _TIE_xt_hifi2_AE_ADDX8_32(ae_int32 b, ae_int32 c);
extern ae_int32 _TIE_xt_hifi2_AE_ADD_32(ae_int32 b, ae_int32 c);
extern ae_int64 _TIE_xt_hifi2_AE_AND(ae_int64 d0, ae_int64 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_AND16(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_AND24(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_AND32(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_AND64(ae_int64 d0, ae_int64 d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_ANDP48(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_ANDQ56(ae_q56s d0, ae_q56s d1);
extern ae_int32 _TIE_xt_hifi2_AE_AND_32(ae_int32 b, ae_int32 c);
extern unsigned _TIE_xt_hifi2_AE_BITSWAP(unsigned ab);
extern void _TIE_xt_hifi2_AE_CALCRNG1(void);
extern void _TIE_xt_hifi2_AE_CALCRNG2(void);
extern void _TIE_xt_hifi2_AE_CALCRNG3(void);
extern int _TIE_xt_hifi2_AE_CLAMPS16(int ars);
extern ae_f16x4 _TIE_xt_hifi2_AE_CVT16X4(ae_f32x2 dl, ae_f32x2 dh);
extern ae_int16 _TIE_xt_hifi2_AE_CVT16X4_scalar(ae_int32 d0);
extern ae_int16x4 _TIE_xt_hifi2_AE_CVT16X4_vector(ae_int32x4 d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_CVT32X2F16_10(ae_f16x4 d0);
extern ae_int32 _TIE_xt_hifi2_AE_CVT32X2F16_10_scalar(ae_int16 p);
extern ae_int32x4 _TIE_xt_hifi2_AE_CVT32X2F16_10_vector(ae_int16x4 p);
extern ae_f32x2 _TIE_xt_hifi2_AE_CVT32X2F16_32(ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_CVT48A32(unsigned a0);
extern ae_f64 _TIE_xt_hifi2_AE_CVT48F32_H(ae_f32x2 d0);
extern ae_f64 _TIE_xt_hifi2_AE_CVT48F32_L(ae_f32x2 d0);
extern ae_f64 _TIE_xt_hifi2_AE_CVT64A32(unsigned a0);
extern ae_f64 _TIE_xt_hifi2_AE_CVT64F32_H(ae_int32x2 d0);
extern ae_int64 _TIE_xt_hifi2_AE_CVT64F32_L(ae_int32x2 d0);
extern int _TIE_xt_hifi2_AE_CVTA32F24S_H(ae_int24x2 d0);
extern int _TIE_xt_hifi2_AE_CVTA32F24S_L(ae_int24x2 d0);
extern int _TIE_xt_hifi2_AE_CVTA32P24_H(ae_p24x2s d0);
extern int _TIE_xt_hifi2_AE_CVTA32P24_L(ae_p24x2s d0);
extern ae_int24x2 _TIE_xt_hifi2_AE_CVTP24A16(unsigned ai);
extern ae_int24x2 _TIE_xt_hifi2_AE_CVTP24A16X2(unsigned ah, unsigned al);
extern ae_int24x2 _TIE_xt_hifi2_AE_CVTP24A16X2_HH(unsigned ah, unsigned al);
extern ae_int24x2 _TIE_xt_hifi2_AE_CVTP24A16X2_HL(unsigned ah, unsigned al);
extern ae_int24x2 _TIE_xt_hifi2_AE_CVTP24A16X2_LH(unsigned ah, unsigned al);
extern ae_int24x2 _TIE_xt_hifi2_AE_CVTP24A16X2_LL(unsigned ah, unsigned al);
extern ae_q56s _TIE_xt_hifi2_AE_CVTQ48A32S(unsigned a);
extern ae_q56s _TIE_xt_hifi2_AE_CVTQ48P24S_H(ae_p24x2s d0);
extern ae_q56s _TIE_xt_hifi2_AE_CVTQ48P24S_L(ae_p24x2s d0);
extern ae_q56s _TIE_xt_hifi2_AE_CVTQ56A32S(unsigned a0);
extern ae_f64 _TIE_xt_hifi2_AE_CVTQ56P32S_H(ae_int32x2 d0);
extern ae_f64 _TIE_xt_hifi2_AE_CVTQ56P32S_L(ae_int32x2 d0);
extern void _TIE_xt_hifi2_AE_DB(const unsigned short * a /*inout*/, unsigned count);
extern void _TIE_xt_hifi2_AE_DBI(const unsigned short * a /*inout*/, immediate count);
extern void _TIE_xt_hifi2_AE_DBI_IC(const unsigned short * a /*inout*/, immediate count);
extern void _TIE_xt_hifi2_AE_DBI_IC1(const unsigned short * a /*inout*/, immediate count);
extern void _TIE_xt_hifi2_AE_DBI_IP(const unsigned short * a /*inout*/, immediate count);
extern void _TIE_xt_hifi2_AE_DBI_XC(const unsigned short * a /*inout*/, immediate count);
extern void _TIE_xt_hifi2_AE_DB_IC(const unsigned short * a /*inout*/, unsigned count);
extern void _TIE_xt_hifi2_AE_DB_IC1(const unsigned short * a /*inout*/, unsigned count);
extern void _TIE_xt_hifi2_AE_DB_IP(const unsigned short * a /*inout*/, unsigned count);
extern void _TIE_xt_hifi2_AE_DB_XC(const unsigned short * a /*inout*/, unsigned count);
extern void _TIE_xt_hifi2_AE_DIV64D32_H(ae_int64 d /*inout*/, ae_int32x2 d0);
extern void _TIE_xt_hifi2_AE_DIV64D32_L(ae_int64 d /*inout*/, ae_int32x2 d0);
extern xtbool4 _TIE_xt_hifi2_AE_EQ16(ae_int16x4 d0, ae_int16x4 d1);
extern xtbool2 _TIE_xt_hifi2_AE_EQ32(ae_int32x2 d0, ae_int32x2 d1);
extern xtbool _TIE_xt_hifi2_AE_EQ64(ae_int64 d0, ae_int64 d1);
extern xtbool2 _TIE_xt_hifi2_AE_EQP24(ae_p24x2s d0, ae_p24x2s d1);
extern xtbool _TIE_xt_hifi2_AE_EQQ56(ae_q56s d0, ae_q56s d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_ADDS_F16(ae_f16x4 d0, ae_f16 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_ADDS_F16X4(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_AND_F16(ae_f16x4 d0, ae_f16 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_AND_F16X4(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_BNOT(ae_f16x4 d0);
extern xtbool4 _TIE_xt_hifi2_AE_F16X4_EQ_F16X4(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x4 _TIE_xt_hifi2_AE_F16X4_F32X4_MUL(ae_f16x4 d0, ae_f32x4 d1);
extern xtbool4 _TIE_xt_hifi2_AE_F16X4_GE_F16X4(ae_f16x4 d0, ae_f16x4 d1);
extern xtbool4 _TIE_xt_hifi2_AE_F16X4_GT_F16X4(ae_f16x4 d0, ae_f16x4 d1);
extern xtbool4 _TIE_xt_hifi2_AE_F16X4_LE_F16X4(ae_f16x4 d0, ae_f16x4 d1);
extern xtbool4 _TIE_xt_hifi2_AE_F16X4_LT_F16X4(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x4 _TIE_xt_hifi2_AE_F16X4_MULF_F16X4(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_NEGS(ae_f16x4 d0);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_OR_F16(ae_f16x4 d0, ae_f16 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_OR_F16X4(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_SLAIS(ae_f16x4 d0, immediate sa);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_SLAS(ae_f16x4 d0, int sa);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_SRA(ae_f16x4 d0, int sa);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_SRAI(ae_f16x4 d0, immediate sa);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_SUBS_F16(ae_f16x4 d0, ae_f16 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_SUBS_F16X4(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_XOR_F16(ae_f16x4 d0, ae_f16 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16X4_XOR_F16X4(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f16 _TIE_xt_hifi2_AE_F16_ADDS_F16(ae_f16 d0, ae_f16 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16_ADDS_F16X4(ae_f16 d0, ae_f16x4 d1);
extern ae_f16 _TIE_xt_hifi2_AE_F16_AND_F16(ae_f16 d0, ae_f16 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16_AND_F16X4(ae_f16 d0, ae_f16x4 d1);
extern ae_f16 _TIE_xt_hifi2_AE_F16_BNOT(ae_f16 d0);
extern ae_f16 _TIE_xt_hifi2_AE_F16_NEGS(ae_f16 d0);
extern ae_f16 _TIE_xt_hifi2_AE_F16_OR_F16(ae_f16 d0, ae_f16 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16_OR_F16X4(ae_f16 d0, ae_f16x4 d1);
extern ae_f16 _TIE_xt_hifi2_AE_F16_SLAIS(ae_f16 d0, immediate sa);
extern ae_f16 _TIE_xt_hifi2_AE_F16_SLAS(ae_f16 d0, int sa);
extern ae_f16 _TIE_xt_hifi2_AE_F16_SRA(ae_f16 d0, int sa);
extern ae_f16 _TIE_xt_hifi2_AE_F16_SRAI(ae_f16 d0, immediate sa);
extern ae_f16 _TIE_xt_hifi2_AE_F16_SUBS_F16(ae_f16 d0, ae_f16 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16_SUBS_F16X4(ae_f16 d0, ae_f16x4 d1);
extern ae_f16 _TIE_xt_hifi2_AE_F16_XOR_F16(ae_f16 d0, ae_f16 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_F16_XOR_F16X4(ae_f16 d0, ae_f16x4 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_ADDS_F24(ae_f24x2 d0, ae_f24 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_ADDS_F24X2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_AND_F24(ae_f24x2 d0, ae_f24 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_AND_F24X2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_BNOT(ae_f24x2 d0);
extern xtbool2 _TIE_xt_hifi2_AE_F24X2_EQ_F24X2(ae_f24x2 d0, ae_f24x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_F24X2_GE_F24X2(ae_f24x2 d0, ae_f24x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_F24X2_GT_F24X2(ae_f24x2 d0, ae_f24x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_F24X2_LE_F24X2(ae_f24x2 d0, ae_f24x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_F24X2_LT_F24X2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F24X2_MULF_F24X2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_NEGS(ae_f24x2 d0);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_OR_F24(ae_f24x2 d0, ae_f24 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_OR_F24X2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_SLA(ae_f24x2 d0, int sa);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_SLAI(ae_f24x2 d0, immediate sa);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_SRA(ae_f24x2 d0, int sa);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_SRAI(ae_f24x2 d0, immediate sa);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_SUBS_F24(ae_f24x2 d0, ae_f24 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_SUBS_F24X2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_XOR_F24(ae_f24x2 d0, ae_f24 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24X2_XOR_F24X2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f24 _TIE_xt_hifi2_AE_F24_ADDS_F24(ae_f24 d0, ae_f24 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24_ADDS_F24X2(ae_f24 d0, ae_f24x2 d1);
extern ae_f24 _TIE_xt_hifi2_AE_F24_AND_F24(ae_f24 d0, ae_f24 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24_AND_F24X2(ae_f24 d0, ae_f24x2 d1);
extern ae_f24 _TIE_xt_hifi2_AE_F24_BNOT(ae_f24 d0);
extern ae_f32 _TIE_xt_hifi2_AE_F24_MULF_F24(ae_f24 d0, ae_f24 d1);
extern ae_f24 _TIE_xt_hifi2_AE_F24_NEGS(ae_f24 d0);
extern ae_f24 _TIE_xt_hifi2_AE_F24_OR_F24(ae_f24 d0, ae_f24 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24_OR_F24X2(ae_f24 d0, ae_f24x2 d1);
extern ae_f24 _TIE_xt_hifi2_AE_F24_SLA(ae_f24 d0, int sa);
extern ae_f24 _TIE_xt_hifi2_AE_F24_SLAI(ae_f24 d0, immediate sa);
extern ae_f24 _TIE_xt_hifi2_AE_F24_SRA(ae_f24 d0, int sa);
extern ae_f24 _TIE_xt_hifi2_AE_F24_SRAI(ae_f24 d0, immediate sa);
extern ae_f24 _TIE_xt_hifi2_AE_F24_SUBS_F24(ae_f24 d0, ae_f24 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24_SUBS_F24X2(ae_f24 d0, ae_f24x2 d1);
extern ae_f24 _TIE_xt_hifi2_AE_F24_XOR_F24(ae_f24 d0, ae_f24 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_F24_XOR_F24X2(ae_f24 d0, ae_f24x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_ADDS_F32(ae_f32x2 d0, ae_f32 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_ADDS_F32X2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_AND_F32(ae_f32x2 d0, ae_f32 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_AND_F32X2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_BNOT(ae_f32x2 d0);
extern xtbool2 _TIE_xt_hifi2_AE_F32X2_EQ_F32X2(ae_f32x2 d0, ae_f32x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_F32X2_GE_F32X2(ae_f32x2 d0, ae_f32x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_F32X2_GT_F32X2(ae_f32x2 d0, ae_f32x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_F32X2_LE_F32X2(ae_f32x2 d0, ae_f32x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_F32X2_LT_F32X2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_MULF_F32X2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_NEGS(ae_f32x2 d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_OR_F32(ae_f32x2 d0, ae_f32 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_OR_F32X2(ae_f32x2 d0, ae_f32x2 d1);
extern int _TIE_xt_hifi2_AE_F32X2_RADD(ae_f32x2 d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_SLAIS(ae_f32x2 d0, immediate sa);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_SLAS(ae_f32x2 d0, int sa);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_SRA(ae_f32x2 d0, int sa);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_SRAI(ae_f32x2 d0, immediate sa);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_SUBS_F32(ae_f32x2 d0, ae_f32 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_SUBS_F32X2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_XOR_F32(ae_f32x2 d0, ae_f32 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32X2_XOR_F32X2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_ADD(ae_f32x4 d0, ae_f32x4 d1);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_AND(ae_f32x4 d0, ae_f32x4 d1);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_BNOT(ae_f32x4 d0);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_F16X4_MUL(ae_f32x4 d0, ae_f16x4 d1);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_NEG32(ae_f32x4 d0);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_OR(ae_f32x4 d0, ae_f32x4 d1);
extern int _TIE_xt_hifi2_AE_F32X4_RADD(ae_f32x4 d0);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_SLAA32S(ae_f32x4 d0, int a);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_SLAI32S(ae_f32x4 d0, immediate i);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_SRAA32(ae_f32x4 d0, int a);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_SRAI32(ae_f32x4 d0, immediate i);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_SUB(ae_f32x4 d0, ae_f32x4 d1);
extern ae_f32x4 _TIE_xt_hifi2_AE_F32X4_XOR(ae_f32x4 d0, ae_f32x4 d1);
extern ae_f32 _TIE_xt_hifi2_AE_F32_ADDS_F32(ae_f32 d0, ae_f32 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32_ADDS_F32X2(ae_f32 d0, ae_f32x2 d1);
extern ae_f32 _TIE_xt_hifi2_AE_F32_AND_F32(ae_f32 d0, ae_f32 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32_AND_F32X2(ae_f32 d0, ae_f32x2 d1);
extern ae_f32 _TIE_xt_hifi2_AE_F32_BNOT(ae_f32 d0);
extern ae_f32 _TIE_xt_hifi2_AE_F32_MULF_F32(ae_f32 d0, ae_f32 d1);
extern ae_f32 _TIE_xt_hifi2_AE_F32_MUL_F16(ae_f32 d0, ae_f16 d1);
extern ae_f32 _TIE_xt_hifi2_AE_F32_NEGS(ae_f32 d0);
extern ae_f32 _TIE_xt_hifi2_AE_F32_OR_F32(ae_f32 d0, ae_f32 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32_OR_F32X2(ae_f32 d0, ae_f32x2 d1);
extern ae_f32 _TIE_xt_hifi2_AE_F32_SLAIS(ae_f32 d0, immediate sa);
extern ae_f32 _TIE_xt_hifi2_AE_F32_SLAS(ae_f32 d0, int sa);
extern ae_f32 _TIE_xt_hifi2_AE_F32_SRA(ae_f32 d0, int sa);
extern ae_f32 _TIE_xt_hifi2_AE_F32_SRAI(ae_f32 d0, immediate sa);
extern ae_f32 _TIE_xt_hifi2_AE_F32_SUBS_F32(ae_f32 d0, ae_f32 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32_SUBS_F32X2(ae_f32 d0, ae_f32x2 d1);
extern ae_f32 _TIE_xt_hifi2_AE_F32_XOR_F32(ae_f32 d0, ae_f32 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_F32_XOR_F32X2(ae_f32 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_F64_ADDS(ae_f64 d0, ae_f64 d1);
extern ae_f64 _TIE_xt_hifi2_AE_F64_AND(ae_f64 d0, ae_f64 d1);
extern ae_f64 _TIE_xt_hifi2_AE_F64_BNOT(ae_f64 d0);
extern xtbool _TIE_xt_hifi2_AE_F64_EQ(ae_f64 d0, ae_f64 d1);
extern xtbool _TIE_xt_hifi2_AE_F64_GE(ae_f64 d0, ae_f64 d1);
extern xtbool _TIE_xt_hifi2_AE_F64_GT(ae_f64 d0, ae_f64 d1);
extern xtbool _TIE_xt_hifi2_AE_F64_LE(ae_f64 d0, ae_f64 d1);
extern xtbool _TIE_xt_hifi2_AE_F64_LT(ae_f64 d0, ae_f64 d1);
extern ae_f64 _TIE_xt_hifi2_AE_F64_NEGS(ae_f64 d0);
extern ae_f64 _TIE_xt_hifi2_AE_F64_OR(ae_f64 d0, ae_f64 d1);
extern ae_f64 _TIE_xt_hifi2_AE_F64_SLAIS(ae_f64 d0, immediate sa);
extern ae_f64 _TIE_xt_hifi2_AE_F64_SLAS(ae_f64 d0, int sa);
extern ae_f64 _TIE_xt_hifi2_AE_F64_SRA(ae_f64 d0, int sa);
extern ae_f64 _TIE_xt_hifi2_AE_F64_SRAI(ae_f64 d0, immediate sa);
extern ae_f64 _TIE_xt_hifi2_AE_F64_SUBS(ae_f64 d0, ae_f64 d1);
extern ae_f64 _TIE_xt_hifi2_AE_F64_XOR(ae_f64 d0, ae_f64 d1);
extern void * _TIE_xt_hifi2_AE_GETCBEGIN0(void);
extern void * _TIE_xt_hifi2_AE_GETCBEGIN1(void);
extern void * _TIE_xt_hifi2_AE_GETCEND0(void);
extern void * _TIE_xt_hifi2_AE_GETCEND1(void);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_ADD_INT16(ae_int16x4 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_ADD_INT16X4(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_AND_INT16(ae_int16x4 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_AND_INT16X4(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_BNOT(ae_int16x4 d0);
extern xtbool4 _TIE_xt_hifi2_AE_INT16X4_EQ_INT16X4(ae_int16x4 d0, ae_int16x4 d1);
extern xtbool4 _TIE_xt_hifi2_AE_INT16X4_GE_INT16X4(ae_int16x4 d0, ae_int16x4 d1);
extern xtbool4 _TIE_xt_hifi2_AE_INT16X4_GT_INT16X4(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT16X4_INT32X4_MUL(ae_int16x4 d0, ae_int32x4 d1);
extern xtbool4 _TIE_xt_hifi2_AE_INT16X4_LE_INT16X4(ae_int16x4 d0, ae_int16x4 d1);
extern xtbool4 _TIE_xt_hifi2_AE_INT16X4_LT_INT16X4(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_MAX(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_MIN(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT16X4_MUL_INT16X4(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_NAND_INT16X4(ae_int16x4 a, ae_int16x4 b);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_NEG(ae_int16x4 d0);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_OR_INT16(ae_int16x4 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_OR_INT16X4(ae_int16x4 d0, ae_int16x4 d1);
extern short _TIE_xt_hifi2_AE_INT16X4_RADD(ae_int16x4 d0);
extern long long _TIE_xt_hifi2_AE_INT16X4_RMADD_INT16X4_scalar(long long ain, ae_int16 d0, ae_int16 d1);
extern ae_int64 _TIE_xt_hifi2_AE_INT16X4_RMADD_INT16X4_vector(ae_int64 ain, ae_int16 d0, ae_int16 d1);
extern short _TIE_xt_hifi2_AE_INT16X4_RMAX(ae_int16x4 d0);
extern short _TIE_xt_hifi2_AE_INT16X4_RMIN(ae_int16x4 d0);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_SRA(ae_int16x4 d0, int sa);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_SRAI(ae_int16x4 d0, immediate sa);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_SUB_INT16(ae_int16x4 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_SUB_INT16X4(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_XOR_INT16(ae_int16x4 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16X4_XOR_INT16X4(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16 _TIE_xt_hifi2_AE_INT16_ADD_INT16(ae_int16 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16_ADD_INT16X4(ae_int16 d0, ae_int16x4 d1);
extern ae_int16 _TIE_xt_hifi2_AE_INT16_AND_INT16(ae_int16 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16_AND_INT16X4(ae_int16 d0, ae_int16x4 d1);
extern ae_int16 _TIE_xt_hifi2_AE_INT16_BNOT(ae_int16 d0);
extern ae_int16 _TIE_xt_hifi2_AE_INT16_NEG(ae_int16 d0);
extern ae_int16 _TIE_xt_hifi2_AE_INT16_OR_INT16(ae_int16 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16_OR_INT16X4(ae_int16 d0, ae_int16x4 d1);
extern ae_int16 _TIE_xt_hifi2_AE_INT16_SRA(ae_int16 d0, int sa);
extern ae_int16 _TIE_xt_hifi2_AE_INT16_SRAI(ae_int16 d0, immediate sa);
extern ae_int16 _TIE_xt_hifi2_AE_INT16_SUB_INT16(ae_int16 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16_SUB_INT16X4(ae_int16 d0, ae_int16x4 d1);
extern ae_int16 _TIE_xt_hifi2_AE_INT16_XOR_INT16(ae_int16 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_INT16_XOR_INT16X4(ae_int16 d0, ae_int16x4 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_ADD_INT24(ae_int24x2 d0, ae_int24 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_ADD_INT24X2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_AND_INT24(ae_int24x2 d0, ae_int24 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_AND_INT24X2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_BNOT(ae_int24x2 d0);
extern xtbool2 _TIE_xt_hifi2_AE_INT24X2_EQ_INT24X2(ae_int24x2 d0, ae_int24x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_INT24X2_GE_INT24X2(ae_int24x2 d0, ae_int24x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_INT24X2_GT_INT24X2(ae_int24x2 d0, ae_int24x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_INT24X2_LE_INT24X2(ae_int24x2 d0, ae_int24x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_INT24X2_LT_INT24X2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT24X2_MUL_INT24X2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_NEG(ae_int24x2 d0);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_OR_INT24(ae_int24x2 d0, ae_int24 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_OR_INT24X2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_SLA(ae_int24x2 d0, int sa);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_SLAI(ae_int24x2 d0, immediate sa);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_SRA(ae_int24x2 d0, int sa);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_SRAI(ae_int24x2 d0, immediate sa);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_SUB_INT24(ae_int24x2 d0, ae_int24 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_SUB_INT24X2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_XOR_INT24(ae_int24x2 d0, ae_int24 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24X2_XOR_INT24X2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int24 _TIE_xt_hifi2_AE_INT24_ADD_INT24(ae_int24 d0, ae_int24 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24_ADD_INT24X2(ae_int24 d0, ae_int24x2 d1);
extern ae_int24 _TIE_xt_hifi2_AE_INT24_AND_INT24(ae_int24 d0, ae_int24 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24_AND_INT24X2(ae_int24 d0, ae_int24x2 d1);
extern ae_int24 _TIE_xt_hifi2_AE_INT24_BNOT(ae_int24 d0);
extern ae_int32 _TIE_xt_hifi2_AE_INT24_MUL_INT24(ae_int24 d0, ae_int24 d1);
extern ae_int24 _TIE_xt_hifi2_AE_INT24_NEG(ae_int24 d0);
extern ae_int24 _TIE_xt_hifi2_AE_INT24_OR_INT24(ae_int24 d0, ae_int24 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24_OR_INT24X2(ae_int24 d0, ae_int24x2 d1);
extern ae_int24 _TIE_xt_hifi2_AE_INT24_SLA(ae_int24 d0, int sa);
extern ae_int24 _TIE_xt_hifi2_AE_INT24_SLAI(ae_int24 d0, immediate sa);
extern ae_int24 _TIE_xt_hifi2_AE_INT24_SRA(ae_int24 d0, int sa);
extern ae_int24 _TIE_xt_hifi2_AE_INT24_SRAI(ae_int24 d0, immediate sa);
extern ae_int24 _TIE_xt_hifi2_AE_INT24_SUB_INT24(ae_int24 d0, ae_int24 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24_SUB_INT24X2(ae_int24 d0, ae_int24x2 d1);
extern ae_int24 _TIE_xt_hifi2_AE_INT24_XOR_INT24(ae_int24 d0, ae_int24 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_INT24_XOR_INT24X2(ae_int24 d0, ae_int24x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_ABS32S(ae_int32x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_ADD32S(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_ADD_INT32(ae_int32x2 d0, ae_int32 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_ADD_INT32X2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_AND_INT32(ae_int32x2 d0, ae_int32 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_AND_INT32X2(ae_int32x2 d0, ae_int32x2 d1);
extern int _TIE_xt_hifi2_AE_INT32X2_AND_rfini(ae_int32x2 d);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_AND_rinit(int a);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_AND_rvec(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_BNOT(ae_int32x2 d0);
extern xtbool2 _TIE_xt_hifi2_AE_INT32X2_EQ_INT32X2(ae_int32x2 d0, ae_int32x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_INT32X2_GE_INT32X2(ae_int32x2 d0, ae_int32x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_INT32X2_GT_INT32X2(ae_int32x2 d0, ae_int32x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_INT32X2_LE_INT32X2(ae_int32x2 d0, ae_int32x2 d1);
extern xtbool2 _TIE_xt_hifi2_AE_INT32X2_LT_INT32X2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_MUL_INT32X2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_NEG(ae_int32x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_NEG32S(ae_int32x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_NOT(ae_int32x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_OR_INT32(ae_int32x2 d0, ae_int32 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_OR_INT32X2(ae_int32x2 d0, ae_int32x2 d1);
extern int _TIE_xt_hifi2_AE_INT32X2_OR_rfini(ae_int32x2 d);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_OR_rinit(int a);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_OR_rvec(ae_int32x2 d0, ae_int32x2 d1);
extern int _TIE_xt_hifi2_AE_INT32X2_RADD(ae_int32x2 d0);
extern int _TIE_xt_hifi2_AE_INT32X2_RMAX(ae_int32x2 d0);
extern int _TIE_xt_hifi2_AE_INT32X2_RMIN(ae_int32x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_SLA(ae_int32x2 d0, int sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_SLAI(ae_int32x2 d0, immediate sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_SRA(ae_int32x2 d0, int sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_SRAI(ae_int32x2 d0, immediate sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_SUB32S(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_SUB_INT32(ae_int32x2 d0, ae_int32 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_SUB_INT32X2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_XOR_INT32(ae_int32x2 d0, ae_int32 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_XOR_INT32X2(ae_int32x2 d0, ae_int32x2 d1);
extern int _TIE_xt_hifi2_AE_INT32X2_XOR_rfini(ae_int32x2 d);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_XOR_rinit(int a);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32X2_XOR_rvec(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_ABS32(ae_int32x4 d0);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_ABS32S(ae_int32x4 d0);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_ADD(ae_int32x4 d0, ae_int32x4 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_ADD32S(ae_int32x4 d0, ae_int32x4 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_AND(ae_int32x4 d0, ae_int32x4 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_BNOT(ae_int32x4 d0);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_INT16X4_MUL(ae_int32x4 d0, ae_int16x4 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_MAX(ae_int32x4 d0, ae_int32x4 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_MIN(ae_int32x4 d0, ae_int32x4 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_NEG32(ae_int32x4 d0);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_NEG32S(ae_int32x4 d0);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_OR(ae_int32x4 d0, ae_int32x4 d1);
extern int _TIE_xt_hifi2_AE_INT32X4_RADD(ae_int32x4 d0);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_SLAA32(ae_int32x4 d0, int a);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_SLAI32(ae_int32x4 d0, immediate i);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_SRAA32(ae_int32x4 d0, int a);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_SRAI32(ae_int32x4 d0, immediate i);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_SUB(ae_int32x4 d0, ae_int32x4 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_SUB32S(ae_int32x4 d0, ae_int32x4 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_INT32X4_XOR(ae_int32x4 d0, ae_int32x4 d1);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_ADD_INT32(ae_int32 d0, ae_int32 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32_ADD_INT32X2(ae_int32 d0, ae_int32x2 d1);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_AND_INT32(ae_int32 d0, ae_int32 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32_AND_INT32X2(ae_int32 d0, ae_int32x2 d1);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_BNOT(ae_int32 d0);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_MUL_INT16(ae_int32 d0, ae_int16 d1);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_MUL_INT32(ae_int32 d0, ae_int32 d1);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_NEG(ae_int32 d0);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_OR_INT32(ae_int32 d0, ae_int32 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32_OR_INT32X2(ae_int32 d0, ae_int32x2 d1);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_SLA(ae_int32 d0, int sa);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_SLAI(ae_int32 d0, immediate sa);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_SRA(ae_int32 d0, int sa);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_SRAI(ae_int32 d0, immediate sa);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_SUB_INT32(ae_int32 d0, ae_int32 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32_SUB_INT32X2(ae_int32 d0, ae_int32x2 d1);
extern ae_int32 _TIE_xt_hifi2_AE_INT32_XOR_INT32(ae_int32 d0, ae_int32 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_INT32_XOR_INT32X2(ae_int32 d0, ae_int32x2 d1);
extern long long _TIE_xt_hifi2_AE_INT64X2_RADD(ae_int64x2 d0);
extern long long _TIE_xt_hifi2_AE_INT64X2_RMAX(ae_int64x2 d0);
extern long long _TIE_xt_hifi2_AE_INT64X2_RMIN(ae_int64x2 d0);
extern ae_int64 _TIE_xt_hifi2_AE_INT64_ADD(ae_int64 d0, ae_int64 d1);
extern ae_int64 _TIE_xt_hifi2_AE_INT64_AND(ae_int64 d0, ae_int64 d1);
extern ae_int64 _TIE_xt_hifi2_AE_INT64_BNOT(ae_int64 d0);
extern xtbool _TIE_xt_hifi2_AE_INT64_EQ(ae_int64 d0, ae_int64 d1);
extern xtbool _TIE_xt_hifi2_AE_INT64_GE(ae_int64 d0, ae_int64 d1);
extern xtbool _TIE_xt_hifi2_AE_INT64_GT(ae_int64 d0, ae_int64 d1);
extern xtbool _TIE_xt_hifi2_AE_INT64_LE(ae_int64 d0, ae_int64 d1);
extern xtbool _TIE_xt_hifi2_AE_INT64_LT(ae_int64 d0, ae_int64 d1);
extern ae_int64 _TIE_xt_hifi2_AE_INT64_NEG(ae_int64 d0);
extern ae_int64 _TIE_xt_hifi2_AE_INT64_OR(ae_int64 d0, ae_int64 d1);
extern ae_int64 _TIE_xt_hifi2_AE_INT64_SLA(ae_int64 d0, int sa);
extern ae_int64 _TIE_xt_hifi2_AE_INT64_SLAI(ae_int64 d0, immediate sa);
extern ae_int64 _TIE_xt_hifi2_AE_INT64_SRA(ae_int64 d0, int sa);
extern ae_int64 _TIE_xt_hifi2_AE_INT64_SRAI(ae_int64 d0, immediate sa);
extern ae_int64 _TIE_xt_hifi2_AE_INT64_SUB(ae_int64 d0, ae_int64 d1);
extern ae_int64 _TIE_xt_hifi2_AE_INT64_XOR(ae_int64 d0, ae_int64 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_L16M_I(const ae_p16s * a, immediate off);
extern void _TIE_xt_hifi2_AE_L16M_IU(ae_int32x2 d, const ae_p16s * a /*inout*/, immediate off);
extern ae_int32x2 _TIE_xt_hifi2_AE_L16M_X(const ae_p16s * a, int off);
extern void _TIE_xt_hifi2_AE_L16M_XC(ae_int32x2 d, const ae_p16s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L16M_XC1(ae_int32x2 d, const ae_p16s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L16M_XU(ae_int32x2 d, const ae_p16s * a /*inout*/, int off);
extern short _TIE_xt_hifi2_AE_L16SI_N(const short * ars, immediate i);
extern unsigned short _TIE_xt_hifi2_AE_L16UI_N(const unsigned short * ars, immediate i);
extern ae_int32x2 _TIE_xt_hifi2_AE_L16X2M_I(const ae_p16x2s * a, immediate off);
extern void _TIE_xt_hifi2_AE_L16X2M_IU(ae_int32x2 d, const ae_p16x2s * a /*inout*/, immediate off);
extern ae_int32x2 _TIE_xt_hifi2_AE_L16X2M_X(const ae_p16x2s * a, int off);
extern void _TIE_xt_hifi2_AE_L16X2M_XC(ae_int32x2 d, const ae_p16x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L16X2M_XC1(ae_int32x2 d, const ae_p16x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L16X2M_XU(ae_int32x2 d, const ae_p16x2s * a /*inout*/, int off);
extern ae_int16x4 _TIE_xt_hifi2_AE_L16X4_I(const ae_int16x4 * a, immediate off);
extern void _TIE_xt_hifi2_AE_L16X4_IP(ae_int16x4 d, const ae_int16x4 * a /*inout*/, immediate off);
extern ae_int16x4 _TIE_xt_hifi2_AE_L16X4_RI(const ae_int16x4 * a, immediate off);
extern void _TIE_xt_hifi2_AE_L16X4_RIC(ae_int16x4 d, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_L16X4_RIC1(ae_int16x4 d, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_L16X4_RIP(ae_int16x4 d, const ae_int16x4 * a /*inout*/, immediate off);
extern ae_int16x4 _TIE_xt_hifi2_AE_L16X4_X(const ae_int16x4 * a, int off);
extern void _TIE_xt_hifi2_AE_L16X4_XC(ae_int16x4 d, const ae_int16x4 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L16X4_XC1(ae_int16x4 d, const ae_int16x4 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L16X4_XP(ae_int16x4 d, const ae_int16x4 * a /*inout*/, int off);
extern ae_int16x4 _TIE_xt_hifi2_AE_L16_I(const ae_int16 * a, immediate off);
extern void _TIE_xt_hifi2_AE_L16_IP(ae_int16x4 d, const ae_int16 * a /*inout*/, immediate off);
extern ae_int16x4 _TIE_xt_hifi2_AE_L16_X(const ae_int16 * a, int off);
extern void _TIE_xt_hifi2_AE_L16_XC(ae_int16x4 d, const ae_int16 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L16_XC1(ae_int16x4 d, const ae_int16 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L16_XP(ae_int16x4 d, const ae_int16 * a /*inout*/, int off);
extern ae_int24x2 _TIE_xt_hifi2_AE_L24X2_I(const ae_int24x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_L24X2_IP(ae_int24x2 d, const ae_int24x2 * a /*inout*/, immediate off);
extern ae_int24x2 _TIE_xt_hifi2_AE_L24X2_X(const ae_int24x2 * a, int off);
extern void _TIE_xt_hifi2_AE_L24X2_XP(ae_int24x2 d, const ae_int24x2 * a /*inout*/, int off);
extern ae_f24x2 _TIE_xt_hifi2_AE_L32F24_I(const ae_f24 * a, immediate off);
extern void _TIE_xt_hifi2_AE_L32F24_IP(ae_f24x2 d, const ae_f24 * a /*inout*/, immediate off);
extern ae_f24x2 _TIE_xt_hifi2_AE_L32F24_X(const ae_f24 * a, int off);
extern void _TIE_xt_hifi2_AE_L32F24_XC(ae_f24x2 d, const ae_f24 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L32F24_XC1(ae_f24x2 d, const ae_f24 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L32F24_XP(ae_f24x2 d, const ae_f24 * a /*inout*/, int off);
extern ae_int64 _TIE_xt_hifi2_AE_L32M_I(const ae_q32s * a, immediate off);
extern void _TIE_xt_hifi2_AE_L32M_IU(ae_int64 d, const ae_q32s * a /*inout*/, immediate off);
extern ae_int64 _TIE_xt_hifi2_AE_L32M_X(const ae_q32s * a, int off);
extern void _TIE_xt_hifi2_AE_L32M_XC(ae_int64 d, const ae_q32s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L32M_XU(ae_int64 d, const ae_q32s * a /*inout*/, int off);
extern ae_f24x2 _TIE_xt_hifi2_AE_L32X2F24_I(const ae_f24x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_L32X2F24_IP(ae_f24x2 d, const ae_f24x2 * a /*inout*/, immediate off);
extern ae_f24x2 _TIE_xt_hifi2_AE_L32X2F24_RI(const ae_f24x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_L32X2F24_RIC(ae_f24x2 d, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_L32X2F24_RIC1(ae_f24x2 d, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_L32X2F24_RIP(ae_f24x2 d, const ae_f24x2 * a /*inout*/, immediate off);
extern ae_f24x2 _TIE_xt_hifi2_AE_L32X2F24_X(const ae_f24x2 * a, int off);
extern void _TIE_xt_hifi2_AE_L32X2F24_XC(ae_f24x2 d, const ae_f24x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L32X2F24_XC1(ae_f24x2 d, const ae_f24x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L32X2F24_XP(ae_f24x2 d, const ae_f24x2 * a /*inout*/, int off);
extern ae_int32x2 _TIE_xt_hifi2_AE_L32X2_I(const ae_int32x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_L32X2_IP(ae_int32x2 d, const ae_int32x2 * a /*inout*/, immediate off);
extern ae_int32x2 _TIE_xt_hifi2_AE_L32X2_RI(const ae_int32x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_L32X2_RIC(ae_int32x2 d, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_L32X2_RIC1(ae_int32x2 d, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_L32X2_RIP(ae_int32x2 d, const ae_int32x2 * a /*inout*/, immediate off);
extern ae_int32x2 _TIE_xt_hifi2_AE_L32X2_X(const ae_int32x2 * a, int off);
extern void _TIE_xt_hifi2_AE_L32X2_XC(ae_int32x2 d, const ae_int32x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L32X2_XC1(ae_int32x2 d, const ae_int32x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L32X2_XP(ae_int32x2 d, const ae_int32x2 * a /*inout*/, int off);
extern ae_int32x2 _TIE_xt_hifi2_AE_L32_I(const ae_int32 * a, immediate off);
extern void _TIE_xt_hifi2_AE_L32_IP(ae_int32x2 d, const ae_int32 * a /*inout*/, immediate off);
extern ae_int32x2 _TIE_xt_hifi2_AE_L32_X(const ae_int32 * a, int off);
extern void _TIE_xt_hifi2_AE_L32_XC(ae_int32x2 d, const ae_int32 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L32_XC1(ae_int32x2 d, const ae_int32 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L32_XP(ae_int32x2 d, const ae_int32 * a /*inout*/, int off);
extern ae_int64 _TIE_xt_hifi2_AE_L64_I(const ae_int64 * a, immediate off);
extern void _TIE_xt_hifi2_AE_L64_IP(ae_int64 d, const ae_int64 * a /*inout*/, immediate off);
extern ae_int64 _TIE_xt_hifi2_AE_L64_X(const ae_int64 * a, int off);
extern void _TIE_xt_hifi2_AE_L64_XC(ae_int64 d, const ae_int64 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L64_XC1(ae_int64 d, const ae_int64 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_L64_XP(ae_int64 d, const ae_int64 * a /*inout*/, int off);
extern ae_f16x4 _TIE_xt_hifi2_AE_L8X4F_I(const signed char * a, immediate off);
extern void _TIE_xt_hifi2_AE_L8X4F_IP(ae_f16x4 d, const signed char * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_LA16X4NEG_PC(ae_valign uu, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA16X4NEG_PC1(ae_valign uu, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA16X4POS_PC(ae_valign uu, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA16X4POS_PC1(ae_valign uu, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA16X4_IC(ae_int16x4 d, ae_valign uu /*inout*/, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA16X4_IC1(ae_int16x4 d, ae_valign uu /*inout*/, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA16X4_IP(ae_int16x4 d, ae_valign uu /*inout*/, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA16X4_RIC(ae_int16x4 d, ae_valign uu /*inout*/, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA16X4_RIC1(ae_int16x4 d, ae_valign uu /*inout*/, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA16X4_RIP(ae_int16x4 d, ae_valign uu /*inout*/, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24NEG_PC(ae_valign uu, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24NEG_PC1(ae_valign uu, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24POS_PC(ae_valign uu, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24POS_PC1(ae_valign uu, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24X2NEG_PC(ae_valign uu, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24X2NEG_PC1(ae_valign uu, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24X2POS_PC(ae_valign uu, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24X2POS_PC1(ae_valign uu, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24X2_IC(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24X2_IC1(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24X2_IP(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24X2_RIC(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24X2_RIC1(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24X2_RIP(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24_IC(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24_IC1(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24_IP(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24_RIC(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24_RIC1(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA24_RIP(ae_int24x2 d, ae_valign uu /*inout*/, const void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2F24NEG_PC(ae_valign uu, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2F24NEG_PC1(ae_valign uu, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2F24POS_PC(ae_valign uu, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2F24POS_PC1(ae_valign uu, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2F24_IC(ae_f24x2 d, ae_valign uu /*inout*/, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2F24_IC1(ae_f24x2 d, ae_valign uu /*inout*/, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2F24_IP(ae_f24x2 d, ae_valign uu /*inout*/, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2F24_RIC(ae_f24x2 d, ae_valign uu /*inout*/, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2F24_RIC1(ae_f24x2 d, ae_valign uu /*inout*/, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2F24_RIP(ae_f24x2 d, ae_valign uu /*inout*/, const ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2NEG_PC(ae_valign uu, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2NEG_PC1(ae_valign uu, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2POS_PC(ae_valign uu, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2POS_PC1(ae_valign uu, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2_IC(ae_int32x2 d, ae_valign uu /*inout*/, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2_IC1(ae_int32x2 d, ae_valign uu /*inout*/, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2_IP(ae_int32x2 d, ae_valign uu /*inout*/, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2_RIC(ae_int32x2 d, ae_valign uu /*inout*/, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2_RIC1(ae_int32x2 d, ae_valign uu /*inout*/, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_LA32X2_RIP(ae_int32x2 d, ae_valign uu /*inout*/, const ae_int32x2 * a /*inout*/);
extern ae_valign _TIE_xt_hifi2_AE_LA64_PP(const void * a);
extern ae_valign _TIE_xt_hifi2_AE_LALIGN64_I(const ae_valign * a, immediate i64);
extern unsigned _TIE_xt_hifi2_AE_LB(unsigned ba);
extern unsigned _TIE_xt_hifi2_AE_LBI(immediate ba);
extern unsigned _TIE_xt_hifi2_AE_LBK(unsigned a0, unsigned ba);
extern unsigned _TIE_xt_hifi2_AE_LBKI(unsigned a0, immediate ba);
extern int _TIE_xt_hifi2_AE_LBS(unsigned ba);
extern int _TIE_xt_hifi2_AE_LBSI(immediate ba);
extern xtbool4 _TIE_xt_hifi2_AE_LE16(ae_int16x4 d0, ae_int16x4 d1);
extern xtbool2 _TIE_xt_hifi2_AE_LE32(ae_int32x2 d0, ae_int32x2 d1);
extern xtbool _TIE_xt_hifi2_AE_LE64(ae_int64 d0, ae_int64 d1);
extern xtbool2 _TIE_xt_hifi2_AE_LEP24S(ae_p24x2s d0, ae_p24x2s d1);
extern xtbool _TIE_xt_hifi2_AE_LEQ56S(ae_q56s d0, ae_q56s d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_LF16X4_I(const ae_f16x4 * a, immediate off);
extern void _TIE_xt_hifi2_AE_LF16X4_IP(ae_f16x4 d, const ae_f16x4 * a /*inout*/, immediate off);
extern ae_f16x4 _TIE_xt_hifi2_AE_LF16X4_X(const ae_f16x4 * a, int off);
extern void _TIE_xt_hifi2_AE_LF16X4_XP(ae_f16x4 d, const ae_f16x4 * a /*inout*/, int off);
extern ae_f24x2 _TIE_xt_hifi2_AE_LF24X2_I(const ae_f24x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_LF24X2_IP(ae_f24x2 d, const ae_f24x2 * a /*inout*/, immediate off);
extern ae_f24x2 _TIE_xt_hifi2_AE_LF24X2_RI(const ae_f24x2 * a, immediate off);
extern ae_f24x2 _TIE_xt_hifi2_AE_LF24X2_X(const ae_f24x2 * a, int off);
extern void _TIE_xt_hifi2_AE_LF24X2_XP(ae_f24x2 d, const ae_f24x2 * a /*inout*/, int off);
extern ae_f24 _TIE_xt_hifi2_AE_LF24_I(const ae_f24 * a, immediate off);
extern void _TIE_xt_hifi2_AE_LF24_IP(ae_f24 d, const ae_f24 * a /*inout*/, immediate off);
extern ae_f24 _TIE_xt_hifi2_AE_LF24_X(const ae_f24 * a, int off);
extern void _TIE_xt_hifi2_AE_LF24_XP(ae_f24 d, const ae_f24 * a /*inout*/, int off);
extern ae_f32x2 _TIE_xt_hifi2_AE_LF32X2_I(const ae_f32x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_LF32X2_IP(ae_f32x2 d, const ae_f32x2 * a /*inout*/, immediate off);
extern ae_f32x2 _TIE_xt_hifi2_AE_LF32X2_X(const ae_f32x2 * a, int off);
extern void _TIE_xt_hifi2_AE_LF32X2_XP(ae_f32x2 d, const ae_f32x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_LP16F_C(ae_p24x2s d, const ae_p16s * a /*inout*/, int off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP16F_I(const ae_p16s * a, immediate off);
extern void _TIE_xt_hifi2_AE_LP16F_IU(ae_p24x2s d, const ae_p16s * a /*inout*/, immediate off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP16F_X(const ae_p16s * a, int off);
extern void _TIE_xt_hifi2_AE_LP16F_XU(ae_p24x2s d, const ae_p16s * a /*inout*/, int off);
extern ae_p16s _TIE_xt_hifi2_AE_LP16S_I(const ae_p16s * a, immediate off);
extern void _TIE_xt_hifi2_AE_LP16S_IU(ae_p16s d, const ae_p16s * a /*inout*/, immediate off);
extern ae_p16s _TIE_xt_hifi2_AE_LP16S_X(const ae_p16s * a, int off);
extern void _TIE_xt_hifi2_AE_LP16S_XU(ae_p16s d, const ae_p16s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_LP16X2F_C(ae_p24x2s d, const ae_p16x2s * a /*inout*/, int off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP16X2F_I(const ae_p16x2s * a, immediate off);
extern void _TIE_xt_hifi2_AE_LP16X2F_IU(ae_p24x2s d, const ae_p16x2s * a /*inout*/, immediate off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP16X2F_X(const ae_p16x2s * a, int off);
extern void _TIE_xt_hifi2_AE_LP16X2F_XU(ae_p24x2s d, const ae_p16x2s * a /*inout*/, int off);
extern ae_p16x2s _TIE_xt_hifi2_AE_LP16X2S_I(const ae_p16x2s * a, immediate off);
extern void _TIE_xt_hifi2_AE_LP16X2S_IU(ae_p16x2s d, const ae_p16x2s * a /*inout*/, immediate off);
extern ae_p16x2s _TIE_xt_hifi2_AE_LP16X2S_X(const ae_p16x2s * a, int off);
extern void _TIE_xt_hifi2_AE_LP16X2S_XU(ae_p16x2s d, const ae_p16x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_LP24F_C(ae_p24x2s d, const ae_p24f * a /*inout*/, int off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP24F_I(const ae_p24f * a, immediate off);
extern void _TIE_xt_hifi2_AE_LP24F_IU(ae_p24x2s d, const ae_p24f * a /*inout*/, immediate off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP24F_X(const ae_p24f * a, int off);
extern void _TIE_xt_hifi2_AE_LP24F_XU(ae_p24x2s d, const ae_p24f * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_LP24X2F_C(ae_p24x2s d, const ae_p24x2f * a /*inout*/, int off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP24X2F_I(const ae_p24x2f * a, immediate off);
extern void _TIE_xt_hifi2_AE_LP24X2F_IU(ae_p24x2s d, const ae_p24x2f * a /*inout*/, immediate off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP24X2F_RI(const ae_p24x2f * a, immediate off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP24X2F_X(const ae_p24x2f * a, int off);
extern void _TIE_xt_hifi2_AE_LP24X2F_XU(ae_p24x2s d, const ae_p24x2f * a /*inout*/, int off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP24X2S_I(const ae_p24x2s * a, immediate off);
extern void _TIE_xt_hifi2_AE_LP24X2S_IP(ae_p24x2s d, const ae_p24x2s * a /*inout*/, immediate off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP24X2S_X(const ae_p24x2s * a, int off);
extern void _TIE_xt_hifi2_AE_LP24X2S_XP(ae_p24x2s d, const ae_p24x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_LP24X2_C(ae_p24x2s d, const ae_p24x2s * a /*inout*/, int off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP24X2_I(const ae_p24x2s * a, immediate off);
extern void _TIE_xt_hifi2_AE_LP24X2_IU(ae_p24x2s d, const ae_p24x2s * a /*inout*/, immediate off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP24X2_X(const ae_p24x2s * a, int off);
extern void _TIE_xt_hifi2_AE_LP24X2_XU(ae_p24x2s d, const ae_p24x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_LP24_C(ae_p24x2s d, const ae_p24s * a /*inout*/, int off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP24_I(const ae_p24s * a, immediate off);
extern void _TIE_xt_hifi2_AE_LP24_IU(ae_p24x2s d, const ae_p24s * a /*inout*/, immediate off);
extern ae_p24x2s _TIE_xt_hifi2_AE_LP24_X(const ae_p24s * a, int off);
extern void _TIE_xt_hifi2_AE_LP24_XU(ae_p24x2s d, const ae_p24s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_LQ32F_C(ae_q56s d, const ae_q32s * a /*inout*/, int off);
extern ae_q56s _TIE_xt_hifi2_AE_LQ32F_I(const ae_q32s * a, immediate off);
extern void _TIE_xt_hifi2_AE_LQ32F_IU(ae_q56s d, const ae_q32s * a /*inout*/, immediate off);
extern ae_q56s _TIE_xt_hifi2_AE_LQ32F_X(const ae_q32s * a, int off);
extern void _TIE_xt_hifi2_AE_LQ32F_XU(ae_q56s d, const ae_q32s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_LQ56_C(ae_q56s d, const ae_q56s * a /*inout*/, int off);
extern ae_q56s _TIE_xt_hifi2_AE_LQ56_I(const ae_q56s * a, immediate off);
extern void _TIE_xt_hifi2_AE_LQ56_IU(ae_q56s d, const ae_q56s * a /*inout*/, immediate off);
extern ae_q56s _TIE_xt_hifi2_AE_LQ56_X(const ae_q56s * a, int off);
extern void _TIE_xt_hifi2_AE_LQ56_XU(ae_q56s d, const ae_q56s * a /*inout*/, int off);
extern xtbool4 _TIE_xt_hifi2_AE_LT16(ae_int16x4 d0, ae_int16x4 d1);
extern xtbool2 _TIE_xt_hifi2_AE_LT32(ae_int32x2 d0, ae_int32x2 d1);
extern xtbool _TIE_xt_hifi2_AE_LT64(ae_int64 d0, ae_int64 d1);
extern xtbool2 _TIE_xt_hifi2_AE_LTP24S(ae_p24x2s d0, ae_p24x2s d1);
extern xtbool _TIE_xt_hifi2_AE_LTQ56S(ae_q56s d0, ae_q56s d1);
extern ae_int16 _TIE_xt_hifi2_AE_L_16(const ae_int16 * base, immediate c);
extern ae_int16u _TIE_xt_hifi2_AE_L_16U(const ae_int16u * base, immediate c);
extern ae_int32 _TIE_xt_hifi2_AE_L_32(const ae_int32 * base, immediate c);
extern ae_int32x2 _TIE_xt_hifi2_AE_MAX32(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MAX64(ae_int64 d0, ae_int64 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MAXABS32S(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MAXABS64S(ae_f64 d0, ae_f64 d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_MAXABSSP24S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MAXABSSQ56S(ae_q56s d0, ae_q56s d1);
extern void _TIE_xt_hifi2_AE_MAXB32(ae_int32x2 d, ae_int32x2 d0, ae_int32x2 d1, xtbool2 bhl);
extern void _TIE_xt_hifi2_AE_MAXB64(ae_int64 d, ae_int64 d0, ae_int64 d1, xtbool bo);
extern void _TIE_xt_hifi2_AE_MAXBP24S(ae_p24x2s d, ae_p24x2s d0, ae_p24x2s d1, xtbool2 bhl);
extern void _TIE_xt_hifi2_AE_MAXBQ56S(ae_q56s d, ae_q56s d0, ae_q56s d1, xtbool bo);
extern ae_p24x2s _TIE_xt_hifi2_AE_MAXP24S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MAXQ56S(ae_q56s d0, ae_q56s d1);
extern ae_int32 _TIE_xt_hifi2_AE_MAX_32_signed(ae_int32 b, ae_int32 c);
extern ae_int32x2 _TIE_xt_hifi2_AE_MIN32(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MIN64(ae_int64 d0, ae_int64 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MINABS32S(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MINABS64S(ae_f64 d0, ae_f64 d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_MINABSSP24S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MINABSSQ56S(ae_q56s d0, ae_q56s d1);
extern void _TIE_xt_hifi2_AE_MINB32(ae_int32x2 d, ae_int32x2 d0, ae_int32x2 d1, xtbool2 bhl);
extern void _TIE_xt_hifi2_AE_MINB64(ae_int64 d, ae_int64 d0, ae_int64 d1, xtbool bo);
extern void _TIE_xt_hifi2_AE_MINBP24S(ae_p24x2s d, ae_p24x2s d0, ae_p24x2s d1, xtbool2 bhl);
extern void _TIE_xt_hifi2_AE_MINBQ56S(ae_q56s d, ae_q56s d0, ae_q56s d1, xtbool bo);
extern ae_p24x2s _TIE_xt_hifi2_AE_MINP24S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MINQ56S(ae_q56s d0, ae_q56s d1);
extern ae_int32 _TIE_xt_hifi2_AE_MIN_32_signed(ae_int32 b, ae_int32 c);
extern ae_int64 _TIE_xt_hifi2_AE_MOV(ae_int64 d0);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOV16(ae_int16x4 d0);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOV24(ae_int24x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOV32(ae_int32x2 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MOV64(ae_int64 d0);
extern unsigned char _TIE_xt_hifi2_AE_MOVAB(xtbool b);
extern unsigned char _TIE_xt_hifi2_AE_MOVAB2(xtbool2 b2);
extern unsigned char _TIE_xt_hifi2_AE_MOVAB4(xtbool4 b4);
extern int _TIE_xt_hifi2_AE_MOVAD16_0(ae_int16x4 d0);
extern int _TIE_xt_hifi2_AE_MOVAD16_1(ae_int16x4 d0);
extern int _TIE_xt_hifi2_AE_MOVAD16_2(ae_int16x4 d0);
extern int _TIE_xt_hifi2_AE_MOVAD16_3(ae_int16x4 d0);
extern int _TIE_xt_hifi2_AE_MOVAD32_H(ae_int32x2 d0);
extern int _TIE_xt_hifi2_AE_MOVAD32_L(ae_int32x2 d0);
extern signed char _TIE_xt_hifi2_AE_MOVAE(ae_ep e);
extern ae_valign _TIE_xt_hifi2_AE_MOVALIGN(ae_valign v);
extern int _TIE_xt_hifi2_AE_MOVAP24S_H(ae_int24x2 d0);
extern int _TIE_xt_hifi2_AE_MOVAP24S_L(ae_int24x2 d0);
extern int _TIE_xt_hifi2_AE_MOVASAR(void);
extern xtbool2 _TIE_xt_hifi2_AE_MOVB2(xtbool2 bhl2);
extern xtbool4 _TIE_xt_hifi2_AE_MOVB4(xtbool4 bhl4);
extern xtbool _TIE_xt_hifi2_AE_MOVBA(unsigned a);
extern xtbool2 _TIE_xt_hifi2_AE_MOVBA1X2(unsigned a1, unsigned a2);
extern xtbool2 _TIE_xt_hifi2_AE_MOVBA2(unsigned a);
extern xtbool4 _TIE_xt_hifi2_AE_MOVBA4(unsigned a);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVDA16(unsigned a);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVDA16X2(unsigned ah, unsigned al);
extern ae_int32 _TIE_xt_hifi2_AE_MOVDA32(unsigned a);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVDA32X2(unsigned a0, unsigned a1);
extern ae_ep _TIE_xt_hifi2_AE_MOVEA(unsigned a);
extern ae_ep _TIE_xt_hifi2_AE_MOVEEP(ae_ep i);
extern void _TIE_xt_hifi2_AE_MOVEQZ_32(ae_int32 a /*inout*/, ae_int32 b, ae_int32 test_value);
extern void _TIE_xt_hifi2_AE_MOVF16X4(ae_int16x4 d /*inout*/, ae_int16x4 d0, xtbool4 bhl);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMF16(ae_f16 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMF24(ae_f24 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMF24X2(ae_f24x2 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMF32(ae_f32 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMF32X2(ae_f32x2 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMF64(ae_f64 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT16(ae_int16 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT16X4(ae_int16x4 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT24(ae_int24 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT24X2(ae_int24x2 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT32(ae_int32 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT32X2(ae_int32x2 i);
extern ae_f16x4 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT64(ae_int64 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMF16X4(ae_f16x4 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMF24(ae_f24 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMF24X2(ae_f24x2 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMF32(ae_f32 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMF32X2(ae_f32x2 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMF64(ae_f64 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMINT16(ae_int16 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMINT16X4(ae_int16x4 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMINT24(ae_int24 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMINT24X2(ae_int24x2 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMINT32(ae_int32 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMINT32X2(ae_int32x2 i);
extern ae_f16 _TIE_xt_hifi2_AE_MOVF16_FROMINT64(ae_int64 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMF16(ae_f16 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMF16X4(ae_f16x4 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMF24(ae_f24 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMF32(ae_f32 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMF32X2(ae_f32x2 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMF64(ae_f64 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT16(ae_int16 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT16X4(ae_int16x4 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT24(ae_int24 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT24X2(ae_int24x2 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT32(ae_int32 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT32X2(ae_int32x2 i);
extern ae_f24x2 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT64(ae_int64 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMF16(ae_f16 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMF16X4(ae_f16x4 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMF24X2(ae_f24x2 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMF32(ae_f32 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMF32X2(ae_f32x2 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMF64(ae_f64 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMINT16(ae_int16 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMINT16X4(ae_int16x4 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMINT24(ae_int24 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMINT24X2(ae_int24x2 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMINT32(ae_int32 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMINT32X2(ae_int32x2 i);
extern ae_f24 _TIE_xt_hifi2_AE_MOVF24_FROMINT64(ae_int64 i);
extern void _TIE_xt_hifi2_AE_MOVF32X2(ae_int32x2 d /*inout*/, ae_int32x2 d0, xtbool2 bhl);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMF16(ae_f16 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMF16X4(ae_f16x4 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMF24(ae_f24 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMF24X2(ae_f24x2 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMF32(ae_f32 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMF64(ae_f64 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT16(ae_int16 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT16X4(ae_int16x4 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT24(ae_int24 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT24X2(ae_int24x2 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT32(ae_int32 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT32X2(ae_int32x2 i);
extern ae_f32x2 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT64(ae_int64 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMF16(ae_f16 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMF16X4(ae_f16x4 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMF24(ae_f24 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMF24X2(ae_f24x2 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMF32X2(ae_f32x2 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMF64(ae_f64 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMINT16(ae_int16 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMINT16X4(ae_int16x4 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMINT24(ae_int24 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMINT24X2(ae_int24x2 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMINT32(ae_int32 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMINT32X2(ae_int32x2 i);
extern ae_f32 _TIE_xt_hifi2_AE_MOVF32_FROMINT64(ae_int64 i);
extern void _TIE_xt_hifi2_AE_MOVF64(ae_int64 d /*inout*/, ae_int64 d0, xtbool bi);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMF16(ae_f16 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMF16X4(ae_f16x4 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMF24(ae_f24 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMF24X2(ae_f24x2 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMF32(ae_f32 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMF32X2(ae_f32x2 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMINT16(ae_int16 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMINT16X4(ae_int16x4 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMINT24(ae_int24 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMINT24X2(ae_int24x2 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMINT32(ae_int32 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMINT32X2(ae_int32x2 i);
extern ae_f64 _TIE_xt_hifi2_AE_MOVF64_FROMINT64(ae_int64 i);
extern void _TIE_xt_hifi2_AE_MOVFP24X2(ae_p24x2s d /*inout*/, ae_p24x2s d0, xtbool2 bhl);
extern void _TIE_xt_hifi2_AE_MOVFP48(ae_p24x2s d /*inout*/, ae_p24x2s d0, xtbool bi);
extern void _TIE_xt_hifi2_AE_MOVFQ56(ae_q56s d /*inout*/, ae_q56s d0, xtbool bi);
extern void _TIE_xt_hifi2_AE_MOVF_32(ae_int32 a /*inout*/, ae_int32 b, xtbool cond);
extern void _TIE_xt_hifi2_AE_MOVF_32_unsigned(ae_int32u a /*inout*/, ae_int32u b, xtbool cond);
extern void _TIE_xt_hifi2_AE_MOVGEZ_32(ae_int32 a /*inout*/, ae_int32 b, ae_int32 test_value);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVI(immediate i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF16(ae_f16 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF16X4(ae_f16x4 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF24(ae_f24 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF24X2(ae_f24x2 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF32(ae_f32 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF32X2(ae_f32x2 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF64(ae_f64 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT16(ae_int16 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT24(ae_int24 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT24X2(ae_int24x2 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT32(ae_int32 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT32X2(ae_int32x2 i);
extern ae_int16x4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT64(ae_int64 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMF16(ae_f16 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMF16X4(ae_f16x4 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMF24(ae_f24 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMF24X2(ae_f24x2 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMF32(ae_f32 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMF32X2(ae_f32x2 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMF64(ae_f64 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMINT16X4(ae_int16x4 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMINT24(ae_int24 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMINT24X2(ae_int24x2 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMINT32(ae_int32 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMINT32X2(ae_int32x2 i);
extern ae_int16 _TIE_xt_hifi2_AE_MOVINT16_FROMINT64(ae_int64 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF16(ae_f16 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF16X4(ae_f16x4 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF24(ae_f24 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF24X2(ae_f24x2 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF32(ae_f32 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF32X2(ae_f32x2 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF64(ae_f64 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT16(ae_int16 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT16X4(ae_int16x4 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT24(ae_int24 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT32(ae_int32 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT32X2(ae_int32x2 i);
extern ae_int24x2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT64(ae_int64 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMF16(ae_f16 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMF16X4(ae_f16x4 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMF24(ae_f24 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMF24X2(ae_f24x2 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMF32(ae_f32 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMF32X2(ae_f32x2 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMF64(ae_f64 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMINT16(ae_int16 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMINT16X4(ae_int16x4 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMINT24X2(ae_int24x2 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMINT32(ae_int32 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMINT32X2(ae_int32x2 i);
extern ae_int24 _TIE_xt_hifi2_AE_MOVINT24_FROMINT64(ae_int64 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF16(ae_f16 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF16X4(ae_f16x4 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF24(ae_f24 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF24X2(ae_f24x2 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF32(ae_f32 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF32X2(ae_f32x2 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF64(ae_f64 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT16(ae_int16 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT16X4(ae_int16x4 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT24(ae_int24 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT24X2(ae_int24x2 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT32(ae_int32 i);
extern ae_int32x2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT64(ae_int64 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMF16(ae_f16 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMF16X4(ae_f16x4 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMF24(ae_f24 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMF24X2(ae_f24x2 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMF32(ae_f32 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMF32X2(ae_f32x2 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMF64(ae_f64 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMINT16(ae_int16 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMINT16X4(ae_int16x4 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMINT24(ae_int24 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMINT24X2(ae_int24x2 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMINT32X2(ae_int32x2 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVINT32_FROMINT64(ae_int64 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMF16(ae_f16 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMF16X4(ae_f16x4 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMF24(ae_f24 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMF24X2(ae_f24x2 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMF32(ae_f32 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMF32X2(ae_f32x2 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMF64(ae_f64 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMINT16(ae_int16 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMINT16X4(ae_int16x4 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMINT24(ae_int24 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMINT24X2(ae_int24x2 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMINT32(ae_int32 i);
extern ae_int64 _TIE_xt_hifi2_AE_MOVINT64_FROMINT32X2(ae_int32x2 i);
extern ae_int32 _TIE_xt_hifi2_AE_MOVI_32(immediate i);
extern void _TIE_xt_hifi2_AE_MOVLTZ_32(ae_int32 a /*inout*/, ae_int32 b, ae_int32 test_value);
extern void _TIE_xt_hifi2_AE_MOVNEZ_32(ae_int32 a /*inout*/, ae_int32 b, ae_int32 test_value);
extern ae_p24x2s _TIE_xt_hifi2_AE_MOVP48(ae_p24x2s d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_MOVPA24(unsigned ai);
extern ae_p24x2s _TIE_xt_hifi2_AE_MOVPA24X2(unsigned ah, unsigned al);
extern ae_q56s _TIE_xt_hifi2_AE_MOVQ56(ae_q56s d0);
extern void _TIE_xt_hifi2_AE_MOVSARA7X2(int a0, int a1);
extern void _TIE_xt_hifi2_AE_MOVSARD7(ae_int32x2 v0);
extern void _TIE_xt_hifi2_AE_MOVT16X4(ae_int16x4 d /*inout*/, ae_int16x4 d0, xtbool4 bhl);
extern void _TIE_xt_hifi2_AE_MOVT32X2(ae_int32x2 d /*inout*/, ae_int32x2 d0, xtbool2 bhl);
extern void _TIE_xt_hifi2_AE_MOVT64(ae_int64 d /*inout*/, ae_int64 d0, xtbool bi);
extern void _TIE_xt_hifi2_AE_MOVTP24X2(ae_p24x2s d /*inout*/, ae_p24x2s d0, xtbool2 bhl);
extern void _TIE_xt_hifi2_AE_MOVTP48(ae_p24x2s d /*inout*/, ae_p24x2s d0, xtbool bi);
extern void _TIE_xt_hifi2_AE_MOVTQ56(ae_q56s d /*inout*/, ae_q56s d0, xtbool bi);
extern void _TIE_xt_hifi2_AE_MOVT_32(ae_int32 a /*inout*/, ae_int32 b, xtbool cond);
extern void _TIE_xt_hifi2_AE_MOVT_32_unsigned(ae_int32u a /*inout*/, ae_int32u b, xtbool cond);
extern ae_int32 _TIE_xt_hifi2_AE_MOV_32(ae_int32 b);
extern ae_int32 _TIE_xt_hifi2_AE_MUL16S(ae_int16 b, ae_int16 c);
extern void _TIE_xt_hifi2_AE_MUL16X4(ae_int32x2 d0, ae_int32x2 d1, ae_int16x4 d2, ae_int16x4 d3);
extern ae_int32x4 _TIE_xt_hifi2_AE_MUL16X4_vector(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL16_00(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL16_00_S2(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL24_HH(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL24_HH_S2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL24_HL(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL24_LH(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL24_LH_S2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL24_LL(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL24_LL_S2(ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MUL32EP_HH(ae_ep acc_ep, ae_int64 q0, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MUL32EP_HH_S2(ae_ep acc_ep, ae_int64 q0, ae_int32x2 d0, ae_int32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MUL32JS(ae_f32x2 d0);
extern void _TIE_xt_hifi2_AE_MUL32USEP_LH(ae_ep acc_ep, ae_int64 q0, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MUL32USEP_LL(ae_ep acc_ep, ae_int64 q0, ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32U_LL(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_H0(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_H0_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_H1(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_H1_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_H2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_H2_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_H3(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_H3_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_L0(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_L0_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_L1(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_L1_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_L2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_L2_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_L3(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32X16_L3_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64x2 _TIE_xt_hifi2_AE_MUL32X2_vector(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32_HH(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32_HH_S2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32_HL(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32_LH(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32_LH_S2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32_LL(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MUL32_LL_S2(ae_int32x2 d0, ae_int32x2 d1);
extern int _TIE_xt_hifi2_AE_MULA16S_scalar(int ain, ae_int16 var1, ae_int16 var2);
extern ae_int32x4 _TIE_xt_hifi2_AE_MULA16S_vector(ae_int32x4 ain, ae_int16x4 var1, ae_int16x4 var2);
extern void _TIE_xt_hifi2_AE_MULA16X4(ae_int32x2 d0 /*inout*/, ae_int32x2 d1 /*inout*/, ae_int16x4 d2, ae_int16x4 d3);
extern void _TIE_xt_hifi2_AE_MULA16X4_vector(ae_int32x4 d /*inout*/, ae_int16x4 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULA16_00(ae_int64 q0 /*inout*/, ae_int16x4 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULA16_00_S2(ae_int64 q0 /*inout*/, ae_int16x4 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULA24_HH(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULA24_HH_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULA24_HL(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULA24_LH(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULA24_LH_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULA24_LL(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULA24_LL_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32EP_HH(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32EP_HH_S2(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32USEP_LH(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32USEP_LL(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32U_LL(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32X16_H0(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_H0_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_H1(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_H1_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_H2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_H2_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_H3(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_H3_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_L0(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_L0_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_L1(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_L1_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_L2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_L2_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_L3(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X16_L3_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULA32X2_vector(ae_int64x2 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32_HH(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32_HH_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32_HL(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32_LH(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32_LH_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32_LL(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULA32_LL_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAAAFQ32X16(ae_f64 q0 /*inout*/, ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 d2);
extern void _TIE_xt_hifi2_AE_MULAAAAFQ32X16_S2(ae_f64 q0 /*inout*/, ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 d2);
extern void _TIE_xt_hifi2_AE_MULAAAAQ16(ae_int64 q0 /*inout*/, ae_int16x4 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAAAAQ16_S2(ae_int64 q0 /*inout*/, ae_int16x4 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAAAAQ32X16(ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1, ae_int16x4 d2);
extern void _TIE_xt_hifi2_AE_MULAAAAQ32X16_S2(ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1, ae_int16x4 d2);
extern void _TIE_xt_hifi2_AE_MULAAD24_HH_LL(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAD24_HH_LL_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAD24_HL_LH(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAD24_HL_LH_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAD32EP_HH_LL(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAD32EP_HH_LL_S2(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAD32USEP_HL_LH(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAD32USEP_HL_LH_S2(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAD32X16_H0_L1(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAD32X16_H0_L1_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAD32X16_H1_L0(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAD32X16_H1_L0_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAD32X16_H2_L3(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAD32X16_H2_L3_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAD32X16_H3_L2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAD32X16_H3_L2_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAD32_HH_LL(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAD32_HH_LL_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAD32_HL_LH(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAD32_HL_LH_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD16SS_11_00(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD16SS_11_00_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD16SS_13_02(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD16SS_13_02_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD16SS_33_22(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD16SS_33_22_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD24_HH_LL(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD24_HH_LL_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD24_HL_LH(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD24_HL_LH_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD32RA_HH_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD32RA_HH_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD32RA_HL_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD32RA_HL_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD32S_HH_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD32S_HH_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD32S_HL_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD32S_HL_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAAFD32X16_H0_L1(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAFD32X16_H0_L1_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAFD32X16_H1_L0(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAFD32X16_H1_L0_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAFD32X16_H2_L3(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAFD32X16_H2_L3_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAFD32X16_H3_L2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAFD32X16_H3_L2_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAAFP24S_HH_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAAFP24S_HH_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAAFP24S_HL_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAAFP24S_HL_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAAP24S_HH_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAAP24S_HH_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAAP24S_HL_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAAP24S_HL_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAAR16P16X4S_vector(ae_int16x4 d /*inout*/, ae_int16x4 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAC24(ae_int32x2 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAC32(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAC32X16_H(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAC32X16_L(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_00(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_00_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_00_scalar(ae_int32 a /*inout*/, ae_f16x4 b, ae_f16x4 c);
extern void _TIE_xt_hifi2_AE_MULAF16SS_10(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_10_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_11(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_11_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_20(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_20_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_21(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_21_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_22(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_22_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_30(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_30_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_30_scalar(ae_int32 a /*inout*/, ae_f16x4 b, ae_f16x4 c);
extern void _TIE_xt_hifi2_AE_MULAF16SS_31(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_31_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_32(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_32_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_33(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16SS_33_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF16X4SS(ae_f32x2 d0 /*inout*/, ae_f32x2 d1 /*inout*/, ae_f16x4 d2, ae_f16x4 d3);
extern int _TIE_xt_hifi2_AE_MULAF16X4SS_scalar(int ain, ae_int16 d0, ae_int16 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_MULAF16X4SS_vector(ae_int32x4 pin, ae_int16x4 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAF24S_HH(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF24S_HH_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF24S_HL(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF24S_LH(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF24S_LH_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF24S_LL(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF24S_LL_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32RA_HH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32RA_HH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32RA_HL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32RA_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32RA_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32RA_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32RA_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32R_HH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32R_HH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32R_HL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32R_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32R_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32R_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32R_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32S_HH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32S_HH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32S_HL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32S_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32S_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32S_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32S_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF32X16_H0(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_H0_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_H1(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_H1_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_H2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_H2_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_H3(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_H3_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_L0(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_L0_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_L1(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_L1_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_L2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_L2_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_L3(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF32X16_L3_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULAF48Q32SP16S_H(ae_int64 d /*inout*/, ae_int64 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF48Q32SP16S_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAF48Q32SP16S_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAF48Q32SP16U_H(ae_int64 d /*inout*/, ae_int64 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAF48Q32SP16U_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAF48Q32SP16U_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFC24RA(ae_f32x2 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAFC32RAS(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAFC32X16RAS_H(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFC32X16RAS_L(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFD24X2_FIR_H(ae_f64 q0 /*inout*/, ae_f64 q1 /*inout*/, ae_f24x2 d0, ae_f24x2 d1, ae_f24x2 c);
extern void _TIE_xt_hifi2_AE_MULAFD24X2_FIR_L(ae_f64 q0 /*inout*/, ae_f64 q1 /*inout*/, ae_f24x2 d0, ae_f24x2 d1, ae_f24x2 c);
extern void _TIE_xt_hifi2_AE_MULAFD32X16X2_FIR_HH(ae_f64 q0 /*inout*/, ae_f64 q1 /*inout*/, ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 c);
extern void _TIE_xt_hifi2_AE_MULAFD32X16X2_FIR_HL(ae_f64 q0 /*inout*/, ae_f64 q1 /*inout*/, ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 c);
extern void _TIE_xt_hifi2_AE_MULAFD32X16X2_FIR_LH(ae_f64 q0 /*inout*/, ae_f64 q1 /*inout*/, ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 c);
extern void _TIE_xt_hifi2_AE_MULAFD32X16X2_FIR_LL(ae_f64 q0 /*inout*/, ae_f64 q1 /*inout*/, ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 c);
extern void _TIE_xt_hifi2_AE_MULAFD32X2RA_FIR_H(ae_f64 q0 /*inout*/, ae_f64 q1 /*inout*/, ae_f32x2 d0, ae_f32x2 d1, ae_f32x2 c);
extern void _TIE_xt_hifi2_AE_MULAFD32X2RA_FIR_L(ae_f64 q0 /*inout*/, ae_f64 q1 /*inout*/, ae_f32x2 d0, ae_f32x2 d1, ae_f32x2 c);
extern void _TIE_xt_hifi2_AE_MULAFD32X2S_FIR_H(ae_f64 q0 /*inout*/, ae_f64 q1 /*inout*/, ae_f32x2 d0, ae_f32x2 d1, ae_f32x2 c);
extern void _TIE_xt_hifi2_AE_MULAFD32X2S_FIR_L(ae_f64 q0 /*inout*/, ae_f64 q1 /*inout*/, ae_f32x2 d0, ae_f32x2 d1, ae_f32x2 c);
extern void _TIE_xt_hifi2_AE_MULAFP24S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFP24S_HH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFP24S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFP24S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFP24S_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFP24S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFP24S_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFP24X2R(ae_f32x2 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAFP24X2RA(ae_f32x2 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAFP24X2RA_S2(ae_f32x2 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAFP24X2R_S2(ae_f32x2 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2RAS_H(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2RAS_H_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2RAS_L(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2RAS_L_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2RS_H(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2RS_H_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2RS_L(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2RS_L_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2S_H(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2S_H_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2S_L(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X16X2S_L_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X2RAS(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X2RAS_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X2RS(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAFP32X2RS_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAFQ32SP16S_H(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFQ32SP16S_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFQ32SP16S_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFQ32SP16U_H(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFQ32SP16U_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFQ32SP16U_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFS32P16S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFS32P16S_HH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFS32P16S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFS32P16S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFS32P16S_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFS32P16S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFS32P16S_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFS56P24S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFS56P24S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFS56P24S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAFS56P24S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAP24S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAP24S_HH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAP24S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAP24S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAP24S_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAP24S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAP24S_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAP24X2(ae_int32x2 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULAP32X16X2_H(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAP32X16X2_H_S2(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAP32X16X2_L(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAP32X16X2_L_S2(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULAP32X2(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAP32X2_S2(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULAQ32SP16S_H(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAQ32SP16S_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAQ32SP16S_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAQ32SP16U_H(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAQ32SP16U_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAQ32SP16U_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAS32F48P16S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAS32F48P16S_HH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAS32F48P16S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAS32F48P16S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAS32F48P16S_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAS32F48P16S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAS32F48P16S_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAS56P24S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAS56P24S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAS56P24S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULAS56P24S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULASD24_HH_LL(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULASD24_HH_LL_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULASD24_HL_LH(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULASD24_HL_LH_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULASD32X16_H1_L0(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULASD32X16_H1_L0_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULASD32X16_H3_L2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULASD32X16_H3_L2_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULASD32_HH_LL(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASD32_HH_LL_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASD32_HL_LH(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASD32_HL_LH_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD24_HH_LL(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD24_HH_LL_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD24_HL_LH(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD24_HL_LH_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD32RA_HH_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD32RA_HH_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD32RA_HL_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD32RA_HL_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD32S_HH_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD32S_HH_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD32S_HL_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD32S_HL_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULASFD32X16_H1_L0(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULASFD32X16_H1_L0_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULASFD32X16_H3_L2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULASFD32X16_H3_L2_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULASFP24S_HH_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULASFP24S_HH_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULASFP24S_HL_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULASFP24S_HL_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULASP24S_HH_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULASP24S_HH_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULASP24S_HL_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULASP24S_HL_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_MULC24(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_MULC32(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_MULC32X16_H(ae_int32x2 d0, ae_int16x4 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_MULC32X16_L(ae_int32x2 d0, ae_int16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_00(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_00_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_10(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_10_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_11(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_11_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_20(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_20_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_21(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_21_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_22(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_22_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_30(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_30_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_int32 _TIE_xt_hifi2_AE_MULF16SS_30_scalar(ae_f16x4 b, ae_f16x4 c);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_31(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_31_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_32(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_32_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_33(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULF16SS_33_S2(ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULF16X4SS(ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 d2, ae_f16x4 d3);
extern ae_int32 _TIE_xt_hifi2_AE_MULF16X4SS_scalar(ae_int16 d0, ae_int16 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_MULF16X4SS_vector(ae_int16x4 d0, ae_int16x4 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF24S_HH(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF24S_HH_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF24S_HL(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF24S_LH(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF24S_LH_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF24S_LL(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF24S_LL_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32RA_HH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32RA_HH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32RA_HL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32RA_LH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32RA_LH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32RA_LL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32RA_LL_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32R_HH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32R_HH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32R_HL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32R_LH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32R_LH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32R_LL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32R_LL_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32S_HH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32S_HH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32S_HL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32S_LH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32S_LH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32S_LL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32S_LL_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_H0(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_H0_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_H1(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_H1_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_H2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_H2_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_H3(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_H3_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_L0(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_L0_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_L1(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_L1_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_L2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_L2_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_L3(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULF32X16_L3_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULF48Q32SP16S_H(ae_int64 d0, ae_int32x2 d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULF48Q32SP16S_L(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULF48Q32SP16S_L_S2(ae_q56s d0, ae_p24x2s d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULF48Q32SP16U_H(ae_int64 d0, ae_int32x2 d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULF48Q32SP16U_L(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULF48Q32SP16U_L_S2(ae_q56s d0, ae_p24x2s d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFC24RA(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFC32RAS(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFC32X16RAS_H(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFC32X16RAS_L(ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULFD24X2_FIR_H(ae_f64 q0, ae_f64 q1, ae_f24x2 d0, ae_f24x2 d1, ae_f24x2 c);
extern void _TIE_xt_hifi2_AE_MULFD24X2_FIR_L(ae_f64 q0, ae_f64 q1, ae_f24x2 d0, ae_f24x2 d1, ae_f24x2 c);
extern void _TIE_xt_hifi2_AE_MULFD32X16X2_FIR_HH(ae_f64 q0, ae_f64 q1, ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 c);
extern void _TIE_xt_hifi2_AE_MULFD32X16X2_FIR_HL(ae_f64 q0, ae_f64 q1, ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 c);
extern void _TIE_xt_hifi2_AE_MULFD32X16X2_FIR_LH(ae_f64 q0, ae_f64 q1, ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 c);
extern void _TIE_xt_hifi2_AE_MULFD32X16X2_FIR_LL(ae_f64 q0, ae_f64 q1, ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 c);
extern void _TIE_xt_hifi2_AE_MULFD32X2RA_FIR_H(ae_f64 q0, ae_f64 q1, ae_f32x2 d0, ae_f32x2 d1, ae_f32x2 c);
extern void _TIE_xt_hifi2_AE_MULFD32X2RA_FIR_L(ae_f64 q0, ae_f64 q1, ae_f32x2 d0, ae_f32x2 d1, ae_f32x2 c);
extern void _TIE_xt_hifi2_AE_MULFD32X2S_FIR_H(ae_f64 q0, ae_f64 q1, ae_f32x2 d0, ae_f32x2 d1, ae_f32x2 c);
extern void _TIE_xt_hifi2_AE_MULFD32X2S_FIR_L(ae_f64 q0, ae_f64 q1, ae_f32x2 d0, ae_f32x2 d1, ae_f32x2 c);
extern ae_f16x4 _TIE_xt_hifi2_AE_MULFP16X4RAS(ae_f16x4 d0, ae_f16x4 d1);
extern ae_int16 _TIE_xt_hifi2_AE_MULFP16X4RAS_scalar(ae_int16 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_MULFP16X4RAS_vector(ae_int16x4 d0, ae_int16x4 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_MULFP16X4S(ae_f16x4 d0, ae_f16x4 d1);
extern ae_int16 _TIE_xt_hifi2_AE_MULFP16X4S_scalar(ae_int16 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_MULFP16X4S_vector(ae_int16x4 d0, ae_int16x4 d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFP24S_HH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFP24S_HH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFP24S_HL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFP24S_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFP24S_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFP24S_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFP24S_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP24X2R(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP24X2RA(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP24X2RA_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP24X2R_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2RAS_H(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2RAS_H_S2(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2RAS_L(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2RAS_L_S2(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2RS_H(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2RS_H_S2(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2RS_L(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2RS_L_S2(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2S_H(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2S_H_S2(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2S_L(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X16X2S_L_S2(ae_f32x2 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X2RAS(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X2RAS_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X2RS(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULFP32X2RS_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFQ32SP16S_H(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFQ32SP16S_L(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFQ32SP16S_L_S2(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFQ32SP16U_H(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFQ32SP16U_L(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFQ32SP16U_L_S2(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFS32P16S_HH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFS32P16S_HH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFS32P16S_HL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFS32P16S_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFS32P16S_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFS32P16S_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULFS32P16S_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULP24S_HH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULP24S_HH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULP24S_HL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULP24S_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULP24S_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULP24S_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULP24S_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_MULP24X2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_MULP32X16X2_H(ae_int32x2 d0, ae_int16x4 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_MULP32X16X2_H_S2(ae_int32x2 d0, ae_int16x4 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_MULP32X16X2_L(ae_int32x2 d0, ae_int16x4 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_MULP32X16X2_L_S2(ae_int32x2 d0, ae_int16x4 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_MULP32X2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_MULP32X2_S2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULQ32SP16S_H(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULQ32SP16S_L(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULQ32SP16S_L_S2(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULQ32SP16U_H(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULQ32SP16U_L(ae_q56s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULQ32SP16U_L_S2(ae_q56s d0, ae_p24x2s d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_MULR16P16X4S_vector(ae_int16x4 d0, ae_int16x4 d1);
extern int _TIE_xt_hifi2_AE_MULS16S_scalar(int ain, short var1, short var2);
extern ae_int32x4 _TIE_xt_hifi2_AE_MULS16S_vector(ae_int32x4 ain, ae_int16x4 var1, ae_int16x4 var2);
extern void _TIE_xt_hifi2_AE_MULS16X4(ae_int32x2 d0 /*inout*/, ae_int32x2 d1 /*inout*/, ae_int16x4 d2, ae_int16x4 d3);
extern void _TIE_xt_hifi2_AE_MULS24_HH(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULS24_HH_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULS24_HL(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULS24_LH(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULS24_LH_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULS24_LL(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULS24_LL_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULS32EP_HH(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULS32EP_HH_S2(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULS32F48P16S_HH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULS32F48P16S_HH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULS32F48P16S_HL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULS32F48P16S_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULS32F48P16S_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULS32F48P16S_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULS32F48P16S_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULS32U_LL(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULS32X16_H0(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_H0_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_H1(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_H1_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_H2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_H2_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_H3(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_H3_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_L0(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_L0_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_L1(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_L1_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_L2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_L2_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_L3(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32X16_L3_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULS32_HH(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULS32_HH_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULS32_HL(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULS32_LH(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULS32_LH_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULS32_LL(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULS32_LL_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAD24_HH_LL(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAD24_HH_LL_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAD24_HL_LH(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAD24_HL_LH_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAD32X16_H1_L0(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSAD32X16_H1_L0_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSAD32X16_H3_L2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSAD32X16_H3_L2_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSAD32_HH_LL(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAD32_HH_LL_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAD32_HL_LH(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAD32_HL_LH_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD24_HH_LL(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD24_HH_LL_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD24_HL_LH(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD24_HL_LH_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD32RA_HH_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD32RA_HH_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD32RA_HL_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD32RA_HL_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD32S_HH_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD32S_HH_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD32S_HL_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD32S_HL_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSAFD32X16_H1_L0(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSAFD32X16_H1_L0_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSAFD32X16_H3_L2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSAFD32X16_H3_L2_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSAFP24S_HH_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSAFP24S_HH_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSAFP24S_HL_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSAFP24S_HL_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSAP24S_HH_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSAP24S_HH_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSAP24S_HL_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSAP24S_HL_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_00(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_00_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_10(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_10_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_11(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_11_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_20(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_20_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_21(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_21_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_22(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_22_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_30(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_30_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_31(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_31_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_32(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_32_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_33(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16SS_33_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF16X4SS(ae_f32x2 d0 /*inout*/, ae_f32x2 d1 /*inout*/, ae_f16x4 d2, ae_f16x4 d3);
extern int _TIE_xt_hifi2_AE_MULSF16X4SS_scalar(int ain, ae_int16 d0, ae_int16 d1);
extern ae_int32x4 _TIE_xt_hifi2_AE_MULSF16X4SS_vector(ae_int32x4 pin, ae_int16x4 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSF24S_HH(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF24S_HH_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF24S_HL(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF24S_LH(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF24S_LH_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF24S_LL(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF24S_LL_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32RA_HH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32RA_HH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32RA_HL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32RA_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32RA_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32RA_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32RA_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32R_HH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32R_HH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32R_HL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32R_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32R_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32R_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32R_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32S_HH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32S_HH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32S_HL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32S_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32S_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32S_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32S_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF32X16_H0(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_H0_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_H1(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_H1_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_H2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_H2_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_H3(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_H3_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_L0(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_L0_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_L1(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_L1_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_L2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_L2_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_L3(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF32X16_L3_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSF48Q32SP16S_H(ae_int64 d /*inout*/, ae_int64 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF48Q32SP16S_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSF48Q32SP16S_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSF48Q32SP16U_H(ae_int64 d /*inout*/, ae_int64 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSF48Q32SP16U_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSF48Q32SP16U_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFP24S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFP24S_HH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFP24S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFP24S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFP24S_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFP24S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFP24S_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFP24X2R(ae_f32x2 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSFP24X2RA(ae_f32x2 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSFP24X2RA_S2(ae_f32x2 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSFP24X2R_S2(ae_f32x2 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2RAS_H(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2RAS_H_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2RAS_L(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2RAS_L_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2RS_H(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2RS_H_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2RS_L(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2RS_L_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2S_H(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2S_H_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2S_L(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X16X2S_L_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X2RAS(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X2RAS_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X2RS(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSFP32X2RS_S2(ae_f32x2 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSFQ32SP16S_H(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFQ32SP16S_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFQ32SP16S_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFQ32SP16U_H(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFQ32SP16U_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFQ32SP16U_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFS32P16S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFS32P16S_HH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFS32P16S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFS32P16S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFS32P16S_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFS32P16S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFS32P16S_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFS56P24S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFS56P24S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFS56P24S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSFS56P24S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSP24S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSP24S_HH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSP24S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSP24S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSP24S_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSP24S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSP24S_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSP24X2(ae_int32x2 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSP32X16X2_H(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSP32X16X2_H_S2(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSP32X16X2_L(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSP32X16X2_L_S2(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSP32X2(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSP32X2_S2(ae_int32x2 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSQ32SP16S_H(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSQ32SP16S_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSQ32SP16S_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSQ32SP16U_H(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSQ32SP16U_L(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSQ32SP16U_L_S2(ae_q56s d /*inout*/, ae_q56s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSS32F48P16S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSS32F48P16S_HH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSS32F48P16S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSS32F48P16S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSS32F48P16S_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSS32F48P16S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSS32F48P16S_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSS56P24S_HH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSS56P24S_HL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSS56P24S_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSS56P24S_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSSD24_HH_LL(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSD24_HH_LL_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSD24_HL_LH(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSD24_HL_LH_S2(ae_int64 d /*inout*/, ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSD32EP_HH_LL(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSD32EP_HH_LL_S2(ae_ep acc_ep /*inout*/, ae_int64 q0 /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSD32X16_H1_L0(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSSD32X16_H1_L0_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSSD32X16_H3_L2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSSD32X16_H3_L2_S2(ae_int64 d /*inout*/, ae_int32x2 d1, ae_int16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSSD32_HH_LL(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSD32_HH_LL_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSD32_HL_LH(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSD32_HL_LH_S2(ae_int64 d /*inout*/, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD16SS_11_00(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD16SS_11_00_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD16SS_13_02(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD16SS_13_02_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD16SS_33_22(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD16SS_33_22_S2(ae_f32x2 d /*inout*/, ae_f16x4 d0, ae_f16x4 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD24_HH_LL(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD24_HH_LL_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD24_HL_LH(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD24_HL_LH_S2(ae_f64 d /*inout*/, ae_f24x2 d0, ae_f24x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD32RA_HH_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD32RA_HH_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD32RA_HL_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD32RA_HL_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD32S_HH_LL(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD32S_HH_LL_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD32S_HL_LH(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD32S_HL_LH_S2(ae_f64 d /*inout*/, ae_f32x2 d0, ae_f32x2 d1);
extern void _TIE_xt_hifi2_AE_MULSSFD32X16_H1_L0(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSSFD32X16_H1_L0_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSSFD32X16_H3_L2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSSFD32X16_H3_L2_S2(ae_f64 d /*inout*/, ae_f32x2 d1, ae_f16x4 d0);
extern void _TIE_xt_hifi2_AE_MULSSFP24S_HH_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSSFP24S_HH_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSSFP24S_HL_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSSFP24S_HL_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSSP24S_HH_LL(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSSP24S_HH_LL_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSSP24S_HL_LH(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_MULSSP24S_HL_LH_S2(ae_q56s d /*inout*/, ae_p24x2s d0, ae_p24x2s d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAAAFQ32X16(ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 d2);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAAAFQ32X16_S2(ae_f32x2 d0, ae_f32x2 d1, ae_f16x4 d2);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAAAQ16(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAAAQ16_S2(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAAAQ32X16(ae_int32x2 d0, ae_int32x2 d1, ae_int16x4 d2);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAAAQ32X16_S2(ae_int32x2 d0, ae_int32x2 d1, ae_int16x4 d2);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD24_HH_LL(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD24_HH_LL_S2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD24_HL_LH(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD24_HL_LH_S2(ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULZAAD32EP_HH_LL(ae_ep acc_ep, ae_int64 q0, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULZAAD32EP_HH_LL_S2(ae_ep acc_ep, ae_int64 q0, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULZAAD32USEP_HL_LH(ae_ep acc_ep, ae_int64 q0, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULZAAD32USEP_HL_LH_S2(ae_ep acc_ep, ae_int64 q0, ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32X16_H0_L1(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32X16_H0_L1_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32X16_H1_L0(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32X16_H1_L0_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32X16_H2_L3(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32X16_H2_L3_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32X16_H3_L2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32X16_H3_L2_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32_HH_LL(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32_HH_LL_S2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32_HL_LH(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZAAD32_HL_LH_S2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZAAFD16SS_11_00(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZAAFD16SS_11_00_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZAAFD16SS_13_02(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZAAFD16SS_13_02_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZAAFD16SS_33_22(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZAAFD16SS_33_22_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD24_HH_LL(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD24_HH_LL_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD24_HL_LH(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD24_HL_LH_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32RA_HH_LL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32RA_HH_LL_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32RA_HL_LH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32RA_HL_LH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32S_HH_LL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32S_HH_LL_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32S_HL_LH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32S_HL_LH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32X16_H0_L1(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32X16_H0_L1_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32X16_H1_L0(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32X16_H1_L0_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32X16_H2_L3(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32X16_H2_L3_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32X16_H3_L2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZAAFD32X16_H3_L2_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFP24S_HH_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFP24S_HH_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFP24S_HL_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFP24S_HL_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAP24S_HH_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAP24S_HH_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAP24S_HL_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAP24S_HL_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16S_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16S_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16S_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16S_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16S_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16S_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16U_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16U_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16U_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16U_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16U_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZAAQ32SP16U_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD24_HH_LL(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD24_HH_LL_S2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD24_HL_LH(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD24_HL_LH_S2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD32X16_H1_L0(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD32X16_H1_L0_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD32X16_H3_L2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD32X16_H3_L2_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD32_HH_LL(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD32_HH_LL_S2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD32_HL_LH(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZASD32_HL_LH_S2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD24_HH_LL(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD24_HH_LL_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD24_HL_LH(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD24_HL_LH_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32RA_HH_LL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32RA_HH_LL_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32RA_HL_LH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32RA_HL_LH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32S_HH_LL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32S_HH_LL_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32S_HL_LH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32S_HL_LH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32X16_H1_L0(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32X16_H1_L0_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32X16_H3_L2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZASFD32X16_H3_L2_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFP24S_HH_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFP24S_HH_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFP24S_HL_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFP24S_HL_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16S_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16S_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16S_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16S_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16S_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16S_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16U_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16U_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16U_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16U_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16U_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASFQ32SP16U_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASP24S_HH_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASP24S_HH_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASP24S_HL_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASP24S_HL_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16S_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16S_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16S_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16S_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16S_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16S_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16U_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16U_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16U_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16U_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16U_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZASQ32SP16U_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD24_HH_LL(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD24_HH_LL_S2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD24_HL_LH(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD24_HL_LH_S2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD32X16_H1_L0(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD32X16_H1_L0_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD32X16_H3_L2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD32X16_H3_L2_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD32_HH_LL(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD32_HH_LL_S2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD32_HL_LH(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSAD32_HL_LH_S2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD24_HH_LL(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD24_HH_LL_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD24_HL_LH(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD24_HL_LH_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32RA_HH_LL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32RA_HH_LL_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32RA_HL_LH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32RA_HL_LH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32S_HH_LL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32S_HH_LL_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32S_HL_LH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32S_HL_LH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32X16_H1_L0(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32X16_H1_L0_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32X16_H3_L2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSAFD32X16_H3_L2_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFP24S_HH_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFP24S_HH_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFP24S_HL_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFP24S_HL_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAP24S_HH_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAP24S_HH_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAP24S_HL_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAP24S_HL_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16S_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16S_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16S_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16S_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16S_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16S_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16U_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16U_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16U_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16U_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16U_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSAQ32SP16U_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD24_HH_LL(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD24_HH_LL_S2(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD24_HL_LH(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD24_HL_LH_S2(ae_int24x2 d0, ae_int24x2 d1);
extern void _TIE_xt_hifi2_AE_MULZSSD32EP_HH_LL(ae_ep acc_ep, ae_int64 q0, ae_int32x2 d0, ae_int32x2 d1);
extern void _TIE_xt_hifi2_AE_MULZSSD32EP_HH_LL_S2(ae_ep acc_ep, ae_int64 q0, ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD32X16_H1_L0(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD32X16_H1_L0_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD32X16_H3_L2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD32X16_H3_L2_S2(ae_int32x2 d1, ae_int16x4 d0);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD32_HH_LL(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD32_HH_LL_S2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD32_HL_LH(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_MULZSSD32_HL_LH_S2(ae_int32x2 d0, ae_int32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZSSFD16SS_11_00(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZSSFD16SS_11_00_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZSSFD16SS_13_02(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZSSFD16SS_13_02_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZSSFD16SS_33_22(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_MULZSSFD16SS_33_22_S2(ae_f16x4 d0, ae_f16x4 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD24_HH_LL(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD24_HH_LL_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD24_HL_LH(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD24_HL_LH_S2(ae_f24x2 d0, ae_f24x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32RA_HH_LL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32RA_HH_LL_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32RA_HL_LH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32RA_HL_LH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32S_HH_LL(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32S_HH_LL_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32S_HL_LH(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32S_HL_LH_S2(ae_f32x2 d0, ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32X16_H1_L0(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32X16_H1_L0_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32X16_H3_L2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_f64 _TIE_xt_hifi2_AE_MULZSSFD32X16_H3_L2_S2(ae_f32x2 d1, ae_f16x4 d0);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFP24S_HH_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFP24S_HH_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFP24S_HL_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFP24S_HL_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSP24S_HH_LL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSP24S_HH_LL_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSP24S_HL_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSP24S_HL_LH_S2(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16S_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16S_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16S_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16S_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16S_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16S_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16U_HH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16U_HH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16U_LH(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16U_LH_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16U_LL(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_q56s _TIE_xt_hifi2_AE_MULZSSQ32SP16U_LL_S2(ae_q56s d0, ae_int24x2 d1, ae_q56s d2, ae_int24x2 d3);
extern ae_int64 _TIE_xt_hifi2_AE_NAND(ae_int64 d0, ae_int64 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_NAND16(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_NAND24(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_NAND32(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_NAND64(ae_int64 d0, ae_int64 d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_NANDP48(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_NANDQ56(ae_q56s d0, ae_q56s d1);
extern ae_int32 _TIE_xt_hifi2_AE_NAND_32(ae_int32 b, ae_int32 c);
extern ae_f16x4 _TIE_xt_hifi2_AE_NEG16S(ae_f16x4 d0);
extern ae_int16 _TIE_xt_hifi2_AE_NEG16S_scalar(ae_int16 d0);
extern ae_int16x4 _TIE_xt_hifi2_AE_NEG16S_vector(ae_int16x4 d0);
extern ae_f24x2 _TIE_xt_hifi2_AE_NEG24S(ae_f32x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_NEG32(ae_int32x2 d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_NEG32S(ae_f32x2 d0);
extern ae_int32 _TIE_xt_hifi2_AE_NEG32S_scalar(ae_int32 d0);
extern ae_int64 _TIE_xt_hifi2_AE_NEG64(ae_int64 d0);
extern ae_f64 _TIE_xt_hifi2_AE_NEG64S(ae_f64 d0);
extern ae_int64x2 _TIE_xt_hifi2_AE_NEG64X2_vector(ae_int64x2 d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_NEGP24(ae_p24x2s d0);
extern ae_q56s _TIE_xt_hifi2_AE_NEGQ56(ae_q56s d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_NEGSP24S(ae_p24x2s d0);
extern ae_q56s _TIE_xt_hifi2_AE_NEGSQ56S(ae_q56s d0);
extern ae_int32 _TIE_xt_hifi2_AE_NEG_32(ae_int32 b);
extern ae_int64 _TIE_xt_hifi2_AE_NOT(ae_int64 d0);
extern ae_int16x4 _TIE_xt_hifi2_AE_NOT16(ae_int16x4 d0);
extern ae_int24x2 _TIE_xt_hifi2_AE_NOT24(ae_int24x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_NOT32(ae_int32x2 d0);
extern ae_int64 _TIE_xt_hifi2_AE_NOT64(ae_int64 d0);
extern ae_int24x2 _TIE_xt_hifi2_AE_NOTP48(ae_int24x2 d0);
extern ae_q56s _TIE_xt_hifi2_AE_NOTQ56(ae_q56s d0);
extern int _TIE_xt_hifi2_AE_NSA64(ae_int64 d0);
extern int _TIE_xt_hifi2_AE_NSAQ56S(ae_q56s d0);
extern int _TIE_xt_hifi2_AE_NSAZ16_0(ae_int16x4 d0);
extern int _TIE_xt_hifi2_AE_NSAZ16_0_scalar(ae_int16 d0);
extern int _TIE_xt_hifi2_AE_NSAZ32_L(ae_int32x2 d0);
extern ae_int64 _TIE_xt_hifi2_AE_OR(ae_int64 d0, ae_int64 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_OR16(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_OR24(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_OR32(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_OR64(ae_int64 d0, ae_int64 d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_ORP48(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_ORQ56(ae_q56s d0, ae_q56s d1);
extern ae_int32 _TIE_xt_hifi2_AE_OR_32(ae_int32 b, ae_int32 c);
extern ae_p24f _TIE_xt_hifi2_AE_P24F_ADDS_P24F(ae_p24f d0, ae_p24f d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24F_ADDS_P24S(ae_p24f d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24F_ADDS_P24X2F(ae_p24f d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24F_ADDS_P24X2S(ae_p24f d0, ae_p24x2s d1);
extern ae_p24f _TIE_xt_hifi2_AE_P24F_AND_P24F(ae_p24f d0, ae_p24f d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24F_AND_P24S(ae_p24f d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24F_AND_P24X2F(ae_p24f d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24F_AND_P24X2S(ae_p24f d0, ae_p24x2s d1);
extern ae_p24f _TIE_xt_hifi2_AE_P24F_BNOT(ae_p24f d0);
extern ae_q56s _TIE_xt_hifi2_AE_P24F_MULF_P24F(ae_p24f d0, ae_p24f d1);
extern ae_q56s _TIE_xt_hifi2_AE_P24F_MULF_P24S(ae_p24f d0, ae_p24s d1);
extern ae_p24f _TIE_xt_hifi2_AE_P24F_NEGS(ae_p24f d0);
extern ae_p24f _TIE_xt_hifi2_AE_P24F_OR_P24F(ae_p24f d0, ae_p24f d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24F_OR_P24S(ae_p24f d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24F_OR_P24X2F(ae_p24f d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24F_OR_P24X2S(ae_p24f d0, ae_p24x2s d1);
extern ae_p24f _TIE_xt_hifi2_AE_P24F_SLAIS(ae_p24f d0, immediate sa);
extern ae_p24f _TIE_xt_hifi2_AE_P24F_SLAS(ae_p24f d0, int sa);
extern ae_p24f _TIE_xt_hifi2_AE_P24F_SRA(ae_p24f d0, int sa);
extern ae_p24f _TIE_xt_hifi2_AE_P24F_SRAI(ae_p24f d0, immediate sa);
extern ae_p24f _TIE_xt_hifi2_AE_P24F_SUBS_P24F(ae_p24f d0, ae_p24f d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24F_SUBS_P24S(ae_p24f d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24F_SUBS_P24X2F(ae_p24f d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24F_SUBS_P24X2S(ae_p24f d0, ae_p24x2s d1);
extern ae_p24f _TIE_xt_hifi2_AE_P24F_XOR_P24F(ae_p24f d0, ae_p24f d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24F_XOR_P24S(ae_p24f d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24F_XOR_P24X2F(ae_p24f d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24F_XOR_P24X2S(ae_p24f d0, ae_p24x2s d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_ADDS_P24F(ae_p24s d0, ae_p24f d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_ADDS_P24S(ae_p24s d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24S_ADDS_P24X2F(ae_p24s d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24S_ADDS_P24X2S(ae_p24s d0, ae_p24x2s d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_AND_P24F(ae_p24s d0, ae_p24f d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_AND_P24S(ae_p24s d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24S_AND_P24X2F(ae_p24s d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24S_AND_P24X2S(ae_p24s d0, ae_p24x2s d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_BNOT(ae_p24s d0);
extern ae_q56s _TIE_xt_hifi2_AE_P24S_MULF_P24F(ae_p24s d0, ae_p24f d1);
extern ae_q56s _TIE_xt_hifi2_AE_P24S_MULF_P24S(ae_p24s d0, ae_p24s d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_NEGS(ae_p24s d0);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_OR_P24F(ae_p24s d0, ae_p24f d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_OR_P24S(ae_p24s d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24S_OR_P24X2F(ae_p24s d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24S_OR_P24X2S(ae_p24s d0, ae_p24x2s d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_SLAIS(ae_p24s d0, immediate sa);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_SLAS(ae_p24s d0, int sa);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_SRA(ae_p24s d0, int sa);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_SRAI(ae_p24s d0, immediate sa);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_SUBS_P24F(ae_p24s d0, ae_p24f d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_SUBS_P24S(ae_p24s d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24S_SUBS_P24X2F(ae_p24s d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24S_SUBS_P24X2S(ae_p24s d0, ae_p24x2s d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_XOR_P24F(ae_p24s d0, ae_p24f d1);
extern ae_p24s _TIE_xt_hifi2_AE_P24S_XOR_P24S(ae_p24s d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24S_XOR_P24X2F(ae_p24s d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24S_XOR_P24X2S(ae_p24s d0, ae_p24x2s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_ADDS_P24F(ae_p24x2f d0, ae_p24f d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_ADDS_P24S(ae_p24x2f d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_ADDS_P24X2F(ae_p24x2f d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2F_ADDS_P24X2S(ae_p24x2f d0, ae_p24x2s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_AND_P24F(ae_p24x2f d0, ae_p24f d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_AND_P24S(ae_p24x2f d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_AND_P24X2F(ae_p24x2f d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2F_AND_P24X2S(ae_p24x2f d0, ae_p24x2s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_BNOT(ae_p24x2f d0);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2F_EQ_P24X2F(ae_p24x2f d0, ae_p24x2f d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2F_EQ_P24X2S(ae_p24x2f d0, ae_p24x2s d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2F_GE_P24X2F(ae_p24x2f d0, ae_p24x2f d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2F_GE_P24X2S(ae_p24x2f d0, ae_p24x2s d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2F_GT_P24X2F(ae_p24x2f d0, ae_p24x2f d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2F_GT_P24X2S(ae_p24x2f d0, ae_p24x2s d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2F_LE_P24X2F(ae_p24x2f d0, ae_p24x2f d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2F_LE_P24X2S(ae_p24x2f d0, ae_p24x2s d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2F_LT_P24X2F(ae_p24x2f d0, ae_p24x2f d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2F_LT_P24X2S(ae_p24x2f d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_P24X2F_MULF_P24X2F(ae_p24x2f d0, ae_p24x2f d1);
extern ae_q56s _TIE_xt_hifi2_AE_P24X2F_MULF_P24X2S(ae_p24x2f d0, ae_p24x2s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_NEGS(ae_p24x2f d0);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_OR_P24F(ae_p24x2f d0, ae_p24f d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_OR_P24S(ae_p24x2f d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_OR_P24X2F(ae_p24x2f d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2F_OR_P24X2S(ae_p24x2f d0, ae_p24x2s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_SLAIS(ae_p24x2f d0, immediate sa);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_SLAS(ae_p24x2f d0, int sa);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_SRA(ae_p24x2f d0, int sa);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_SRAI(ae_p24x2f d0, immediate sa);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_SUBS_P24F(ae_p24x2f d0, ae_p24f d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_SUBS_P24S(ae_p24x2f d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_SUBS_P24X2F(ae_p24x2f d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2F_SUBS_P24X2S(ae_p24x2f d0, ae_p24x2s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_XOR_P24F(ae_p24x2f d0, ae_p24f d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_XOR_P24S(ae_p24x2f d0, ae_p24s d1);
extern ae_p24x2f _TIE_xt_hifi2_AE_P24X2F_XOR_P24X2F(ae_p24x2f d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2F_XOR_P24X2S(ae_p24x2f d0, ae_p24x2s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_ADDS_P24F(ae_p24x2s d0, ae_p24f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_ADDS_P24S(ae_p24x2s d0, ae_p24s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_ADDS_P24X2F(ae_p24x2s d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_ADDS_P24X2S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_AND_P24F(ae_p24x2s d0, ae_p24f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_AND_P24S(ae_p24x2s d0, ae_p24s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_AND_P24X2F(ae_p24x2s d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_AND_P24X2S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_BNOT(ae_p24x2s d0);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2S_EQ_P24X2F(ae_p24x2s d0, ae_p24x2f d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2S_EQ_P24X2S(ae_p24x2s d0, ae_p24x2s d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2S_GE_P24X2F(ae_p24x2s d0, ae_p24x2f d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2S_GE_P24X2S(ae_p24x2s d0, ae_p24x2s d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2S_GT_P24X2F(ae_p24x2s d0, ae_p24x2f d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2S_GT_P24X2S(ae_p24x2s d0, ae_p24x2s d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2S_LE_P24X2F(ae_p24x2s d0, ae_p24x2f d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2S_LE_P24X2S(ae_p24x2s d0, ae_p24x2s d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2S_LT_P24X2F(ae_p24x2s d0, ae_p24x2f d1);
extern xtbool2 _TIE_xt_hifi2_AE_P24X2S_LT_P24X2S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_P24X2S_MULF_P24X2F(ae_p24x2s d0, ae_p24x2f d1);
extern ae_q56s _TIE_xt_hifi2_AE_P24X2S_MULF_P24X2S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_NEGS(ae_p24x2s d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_OR_P24F(ae_p24x2s d0, ae_p24f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_OR_P24S(ae_p24x2s d0, ae_p24s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_OR_P24X2F(ae_p24x2s d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_OR_P24X2S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_SLAIS(ae_p24x2s d0, immediate sa);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_SLAS(ae_p24x2s d0, int sa);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_SRA(ae_p24x2s d0, int sa);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_SRAI(ae_p24x2s d0, immediate sa);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_SUBS_P24F(ae_p24x2s d0, ae_p24f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_SUBS_P24S(ae_p24x2s d0, ae_p24s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_SUBS_P24X2F(ae_p24x2s d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_SUBS_P24X2S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_XOR_P24F(ae_p24x2s d0, ae_p24f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_XOR_P24S(ae_p24x2s d0, ae_p24s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_XOR_P24X2F(ae_p24x2s d0, ae_p24x2f d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_P24X2S_XOR_P24X2S(ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_PKSR24(ae_f24x2 d /*inout*/, ae_f64 ps, immediate pos);
extern void _TIE_xt_hifi2_AE_PKSR32(ae_f32x2 d /*inout*/, ae_f64 ps, immediate pos);
extern void _TIE_xt_hifi2_AE_PKSRF32(ae_f32x2 d /*inout*/, ae_f64 ps, immediate pos);
extern ae_q56s _TIE_xt_hifi2_AE_Q56S_ADD(ae_q56s d0, ae_q56s d1);
extern ae_q56s _TIE_xt_hifi2_AE_Q56S_AND(ae_q56s d0, ae_q56s d1);
extern ae_q56s _TIE_xt_hifi2_AE_Q56S_BNOT(ae_q56s d0);
extern xtbool _TIE_xt_hifi2_AE_Q56S_EQ(ae_q56s d0, ae_q56s d1);
extern xtbool _TIE_xt_hifi2_AE_Q56S_GE(ae_q56s d0, ae_q56s d1);
extern xtbool _TIE_xt_hifi2_AE_Q56S_GT(ae_q56s d0, ae_q56s d1);
extern xtbool _TIE_xt_hifi2_AE_Q56S_LE(ae_q56s d0, ae_q56s d1);
extern xtbool _TIE_xt_hifi2_AE_Q56S_LT(ae_q56s d0, ae_q56s d1);
extern ae_q56s _TIE_xt_hifi2_AE_Q56S_NEG(ae_q56s d0);
extern ae_q56s _TIE_xt_hifi2_AE_Q56S_OR(ae_q56s d0, ae_q56s d1);
extern ae_q56s _TIE_xt_hifi2_AE_Q56S_SLA(ae_q56s d0, int sa);
extern ae_q56s _TIE_xt_hifi2_AE_Q56S_SRA(ae_q56s d0, int sa);
extern ae_q56s _TIE_xt_hifi2_AE_Q56S_SRAI(ae_q56s d0, immediate sa);
extern ae_q56s _TIE_xt_hifi2_AE_Q56S_SUB(ae_q56s d0, ae_q56s d1);
extern ae_q56s _TIE_xt_hifi2_AE_Q56S_XOR(ae_q56s d0, ae_q56s d1);
extern int _TIE_xt_hifi2_AE_RLadd4_rfini(ae_int32 d);
extern ae_int32 _TIE_xt_hifi2_AE_RLadd4_rinit(int a);
extern ae_int32 _TIE_xt_hifi2_AE_RLadd4_rvec(ae_int32 din, ae_int32x4 d0);
extern int _TIE_xt_hifi2_AE_RLadd_rfini(ae_int32 d);
extern ae_int32 _TIE_xt_hifi2_AE_RLadd_rinit(int a);
extern ae_int32 _TIE_xt_hifi2_AE_RLadd_rvec(ae_int32 din, ae_int32x2 d0);
extern int _TIE_xt_hifi2_AE_RLmac_rfini(ae_int32 d);
extern ae_int32 _TIE_xt_hifi2_AE_RLmac_rinit(int a);
extern ae_int32 _TIE_xt_hifi2_AE_RLmac_rvec(ae_int32 din, ae_int16x4 d0, ae_int16x4 d1);
extern int _TIE_xt_hifi2_AE_RLmsu_rfini(ae_int32 d);
extern ae_int32 _TIE_xt_hifi2_AE_RLmsu_rinit(int a);
extern ae_int32 _TIE_xt_hifi2_AE_RLmsu_rvec(ae_int32 din, ae_int16x4 d0, ae_int16x4 d1);
extern int _TIE_xt_hifi2_AE_RLmula0_rfini(ae_int32 d);
extern ae_int32 _TIE_xt_hifi2_AE_RLmula0_rinit(int a);
extern ae_int32 _TIE_xt_hifi2_AE_RLmula0_rvec(ae_int32 din, ae_int16x4 d0, ae_int16x4 d1);
extern int _TIE_xt_hifi2_AE_RLmuls0_rfini(ae_int32 d);
extern ae_int32 _TIE_xt_hifi2_AE_RLmuls0_rinit(int a);
extern ae_int32 _TIE_xt_hifi2_AE_RLmuls0_rvec(ae_int32 din, ae_int16x4 d0, ae_int16x4 d1);
extern int _TIE_xt_hifi2_AE_RLsub4_rfini(ae_int32 d);
extern ae_int32 _TIE_xt_hifi2_AE_RLsub4_rinit(int a);
extern ae_int32 _TIE_xt_hifi2_AE_RLsub4_rvec(ae_int32 din, ae_int32x4 d0);
extern int _TIE_xt_hifi2_AE_RLsub_rfini(ae_int32 d);
extern ae_int32 _TIE_xt_hifi2_AE_RLsub_rinit(int a);
extern ae_int32 _TIE_xt_hifi2_AE_RLsub_rvec(ae_int32 din, ae_int32x2 d0);
extern void _TIE_xt_hifi2_AE_RNG32X2(ae_int32x2 d);
extern ae_f16x4 _TIE_xt_hifi2_AE_ROUND16X4F32SASYM(ae_f32x2 d1, ae_f32x2 d0);
extern ae_int16 _TIE_xt_hifi2_AE_ROUND16X4F32SASYM_scalar(ae_int32 d0);
extern ae_int16x4 _TIE_xt_hifi2_AE_ROUND16X4F32SASYM_vector(ae_int32x4 d0);
extern ae_f16x4 _TIE_xt_hifi2_AE_ROUND16X4F32SSYM(ae_f32x2 d1, ae_f32x2 d0);
extern ae_f24x2 _TIE_xt_hifi2_AE_ROUND24F48SASYM(ae_f64 d0);
extern ae_f24x2 _TIE_xt_hifi2_AE_ROUND24F48SSYM(ae_f64 d0);
extern ae_f24x2 _TIE_xt_hifi2_AE_ROUND24X2F48SASYM(ae_f64 d0, ae_f64 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_ROUND24X2F48SSYM(ae_f64 d0, ae_f64 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_ROUND32F48SASYM(ae_f64 d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_ROUND32F48SSYM(ae_f64 d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_ROUND32F64SASYM(ae_f64 d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_ROUND32F64SSYM(ae_f64 d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_ROUND32X2F48SASYM(ae_f64 d0, ae_f64 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_ROUND32X2F48SSYM(ae_f64 d0, ae_f64 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_ROUND32X2F64SASYM(ae_f64 d0, ae_f64 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_ROUND32X2F64SSYM(ae_f64 d0, ae_f64 d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_ROUNDSP16ASYM(ae_p24x2s d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_ROUNDSP16F24ASYM(ae_f32x2 d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_ROUNDSP16F24SYM(ae_f32x2 d0);
extern ae_f24x2 _TIE_xt_hifi2_AE_ROUNDSP16Q48ASYM(ae_f64 d0);
extern ae_f24x2 _TIE_xt_hifi2_AE_ROUNDSP16Q48SYM(ae_f64 d0);
extern ae_f24x2 _TIE_xt_hifi2_AE_ROUNDSP16Q48X2ASYM(ae_f64 d0, ae_f64 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_ROUNDSP16Q48X2SYM(ae_f64 d0, ae_f64 d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_ROUNDSP16SYM(ae_p24x2s d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_ROUNDSP24Q48ASYM(ae_q56s d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_ROUNDSP24Q48SYM(ae_q56s d0);
extern ae_q56s _TIE_xt_hifi2_AE_ROUNDSQ32ASYM(ae_q56s d0);
extern ae_int64 _TIE_xt_hifi2_AE_ROUNDSQ32F48ASYM(ae_int64 d0);
extern ae_int64 _TIE_xt_hifi2_AE_ROUNDSQ32F48SYM(ae_int64 d0);
extern ae_q56s _TIE_xt_hifi2_AE_ROUNDSQ32SYM(ae_q56s d0);
extern void _TIE_xt_hifi2_AE_S16I_N(short art, short * ars, immediate i);
extern void _TIE_xt_hifi2_AE_S16M_L_I(ae_int32x2 d, ae_p16s * a, immediate off);
extern void _TIE_xt_hifi2_AE_S16M_L_IU(ae_int32x2 d, ae_p16s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S16M_L_X(ae_int32x2 d, ae_p16s * a, int off);
extern void _TIE_xt_hifi2_AE_S16M_L_XC(ae_int32x2 d, ae_p16s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S16M_L_XC1(ae_int32x2 d, ae_p16s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S16M_L_XU(ae_int32x2 d, ae_p16s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S16X2M_I(ae_int32x2 d, ae_p16x2s * a, immediate off);
extern void _TIE_xt_hifi2_AE_S16X2M_IU(ae_int32x2 d, ae_p16x2s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S16X2M_X(ae_int32x2 d, ae_p16x2s * a, int off);
extern void _TIE_xt_hifi2_AE_S16X2M_XC(ae_int32x2 d, ae_p16x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S16X2M_XC1(ae_int32x2 d, ae_p16x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S16X2M_XU(ae_int32x2 d, ae_p16x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S16X4_I(ae_int16x4 d, ae_int16x4 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S16X4_IP(ae_int16x4 d, ae_int16x4 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S16X4_RI(ae_int16x4 d, ae_int16x4 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S16X4_RIC(ae_int16x4 d, ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_S16X4_RIC1(ae_int16x4 d, ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_S16X4_RIP(ae_int16x4 d, ae_int16x4 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S16X4_X(ae_int16x4 d, ae_int16x4 * a, int off);
extern void _TIE_xt_hifi2_AE_S16X4_XC(ae_int16x4 d, ae_int16x4 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S16X4_XC1(ae_int16x4 d, ae_int16x4 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S16X4_XP(ae_int16x4 d, ae_int16x4 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S16_0_I(ae_int16x4 d, ae_int16 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S16_0_IP(ae_int16x4 d, ae_int16 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S16_0_X(ae_int16x4 d, ae_int16 * a, int off);
extern void _TIE_xt_hifi2_AE_S16_0_XC(ae_int16x4 d, ae_int16 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S16_0_XC1(ae_int16x4 d, ae_int16 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S16_0_XP(ae_int16x4 d, ae_int16 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S24RA64S_I(ae_f64 d, ae_f24 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S24RA64S_IP(ae_f64 d, ae_f24 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S24RA64S_X(ae_f64 d, ae_f24 * a, int off);
extern void _TIE_xt_hifi2_AE_S24RA64S_XC(ae_f64 d, ae_f24 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S24RA64S_XC1(ae_f64 d, ae_f24 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S24RA64S_XP(ae_f64 d, ae_f24 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S24X2RA64S_IP(ae_f64 d2, ae_f64 d1, ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_S24X2_I(ae_int24x2 d, ae_int24x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S24X2_IP(ae_int24x2 d, ae_int24x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S24X2_X(ae_int24x2 d, ae_int24x2 * a, int off);
extern void _TIE_xt_hifi2_AE_S24X2_XP(ae_int24x2 d, ae_int24x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32F24_L_I(ae_f24x2 d, ae_f24 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S32F24_L_IP(ae_f24x2 d, ae_f24 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S32F24_L_X(ae_f24x2 d, ae_f24 * a, int off);
extern void _TIE_xt_hifi2_AE_S32F24_L_XC(ae_f24x2 d, ae_f24 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32F24_L_XC1(ae_f24x2 d, ae_f24 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32F24_L_XP(ae_f24x2 d, ae_f24 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32M_I(ae_int64 d, ae_q32s * a, immediate off);
extern void _TIE_xt_hifi2_AE_S32M_IU(ae_int64 d, ae_q32s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S32M_X(ae_int64 d, ae_q32s * a, int off);
extern void _TIE_xt_hifi2_AE_S32M_XC(ae_int64 d, ae_q32s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32M_XU(ae_int64 d, ae_q32s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32RA64S_I(ae_f64 d, ae_f32 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S32RA64S_IP(ae_f64 d, ae_f32 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S32RA64S_X(ae_f64 d, ae_f32 * a, int off);
extern void _TIE_xt_hifi2_AE_S32RA64S_XC(ae_f64 d, ae_f32 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32RA64S_XC1(ae_f64 d, ae_f32 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32RA64S_XP(ae_f64 d, ae_f32 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32X2F24_I(ae_f24x2 d, ae_f24x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S32X2F24_IP(ae_f24x2 d, ae_f24x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S32X2F24_RIC(ae_f24x2 d, ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_S32X2F24_RIC1(ae_f24x2 d, ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_S32X2F24_RIP(ae_f24x2 d, ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_S32X2F24_X(ae_f24x2 d, ae_f24x2 * a, int off);
extern void _TIE_xt_hifi2_AE_S32X2F24_XC(ae_f24x2 d, ae_f24x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32X2F24_XC1(ae_f24x2 d, ae_f24x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32X2F24_XP(ae_f24x2 d, ae_f24x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32X2RA64S_IP(ae_f64 d2, ae_f64 d1, ae_f32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_S32X2RNG_I(ae_int32x2 d, ae_int32x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S32X2RNG_IP(ae_int32x2 d, ae_int32x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S32X2RNG_X(ae_int32x2 d, ae_int32x2 * a, int off);
extern void _TIE_xt_hifi2_AE_S32X2RNG_XP(ae_int32x2 d, ae_int32x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32X2_I(ae_int32x2 d, ae_int32x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S32X2_IP(ae_int32x2 d, ae_int32x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S32X2_RI(ae_int32x2 d, ae_int32x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S32X2_RIC(ae_int32x2 d, ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_S32X2_RIC1(ae_int32x2 d, ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_S32X2_RIP(ae_int32x2 d, ae_int32x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S32X2_X(ae_int32x2 d, ae_int32x2 * a, int off);
extern void _TIE_xt_hifi2_AE_S32X2_XC(ae_int32x2 d, ae_int32x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32X2_XC1(ae_int32x2 d, ae_int32x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32X2_XP(ae_int32x2 d, ae_int32x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32_L_I(ae_int32x2 d, ae_int32 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S32_L_IP(ae_int32x2 d, ae_int32 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S32_L_X(ae_int32x2 d, ae_int32 * a, int off);
extern void _TIE_xt_hifi2_AE_S32_L_XC(ae_int32x2 d, ae_int32 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32_L_XC1(ae_int32x2 d, ae_int32 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S32_L_XP(ae_int32x2 d, ae_int32 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S64_I(ae_int64 d, ae_int64 * a, immediate off);
extern void _TIE_xt_hifi2_AE_S64_IP(ae_int64 d, ae_int64 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_S64_X(ae_int64 d, ae_int64 * a, int off);
extern void _TIE_xt_hifi2_AE_S64_XC(ae_int64 d, ae_int64 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S64_XC1(ae_int64 d, ae_int64 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_S64_XP(ae_int64 d, ae_int64 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SA16X4_IC(ae_int16x4 d, ae_valign su /*inout*/, ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA16X4_IC1(ae_int16x4 d, ae_valign su /*inout*/, ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA16X4_IP(ae_int16x4 d, ae_valign su /*inout*/, ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA16X4_RIC(ae_int16x4 d, ae_valign su /*inout*/, ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA16X4_RIC1(ae_int16x4 d, ae_valign su /*inout*/, ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA16X4_RIP(ae_int16x4 d, ae_valign su /*inout*/, ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24X2_IC(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24X2_IC1(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24X2_IP(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24X2_RIC(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24X2_RIC1(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24X2_RIP(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24_IC(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24_IP(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24_L_IC(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24_L_IC1(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24_L_IP(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24_L_RIC(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24_L_RIC1(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24_L_RIP(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24_RIC(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA24_RIP(ae_int24x2 d, ae_valign su /*inout*/, void * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2F24_IC(ae_f24x2 d, ae_valign su /*inout*/, ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2F24_IC1(ae_f24x2 d, ae_valign su /*inout*/, ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2F24_IP(ae_f24x2 d, ae_valign su /*inout*/, ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2F24_RIC(ae_f24x2 d, ae_valign su /*inout*/, ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2F24_RIC1(ae_f24x2 d, ae_valign su /*inout*/, ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2F24_RIP(ae_f24x2 d, ae_valign su /*inout*/, ae_f24x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2_IC(ae_int32x2 d, ae_valign su /*inout*/, ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2_IC1(ae_int32x2 d, ae_valign su /*inout*/, ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2_IP(ae_int32x2 d, ae_valign su /*inout*/, ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2_RIC(ae_int32x2 d, ae_valign su /*inout*/, ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2_RIC1(ae_int32x2 d, ae_valign su /*inout*/, ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA32X2_RIP(ae_int32x2 d, ae_valign su /*inout*/, ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SA64NEG_FC(ae_valign su /*inout*/, void * a);
extern void _TIE_xt_hifi2_AE_SA64NEG_FP(ae_valign su /*inout*/, void * a);
extern void _TIE_xt_hifi2_AE_SA64POS_FC(ae_valign su /*inout*/, void * a);
extern void _TIE_xt_hifi2_AE_SA64POS_FP(ae_valign su /*inout*/, void * a);
extern void _TIE_xt_hifi2_AE_SALIGN64_I(ae_valign su, ae_valign * a, immediate i64);
extern ae_int16x4 _TIE_xt_hifi2_AE_SAT16X4(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int16 _TIE_xt_hifi2_AE_SAT16X4_scalar(ae_int32 d0);
extern ae_int16x4 _TIE_xt_hifi2_AE_SAT16X4_vector(ae_int32x4 d0);
extern ae_f24x2 _TIE_xt_hifi2_AE_SAT24S(ae_f32x2 d1);
extern ae_f64 _TIE_xt_hifi2_AE_SAT48S(ae_f64 d1);
extern ae_int64 _TIE_xt_hifi2_AE_SAT64S(ae_ep e, ae_int64 v1);
extern ae_q56s _TIE_xt_hifi2_AE_SATQ48S(ae_q56s d1);
extern ae_f64 _TIE_xt_hifi2_AE_SATQ56S(ae_f64 d1);
extern void _TIE_xt_hifi2_AE_SB(unsigned short * a /*inout*/, unsigned bits);
extern void _TIE_xt_hifi2_AE_SBF(unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SBF_IC(unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SBF_IC1(unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SBF_IP(unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SBF_XC(unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_SBI(unsigned short * a /*inout*/, unsigned bits, immediate count);
extern void _TIE_xt_hifi2_AE_SBI_IC(unsigned short * a /*inout*/, unsigned bits, immediate count);
extern void _TIE_xt_hifi2_AE_SBI_IC1(unsigned short * a /*inout*/, unsigned bits, immediate count);
extern void _TIE_xt_hifi2_AE_SBI_IP(unsigned short * a /*inout*/, unsigned bits, immediate count);
extern void _TIE_xt_hifi2_AE_SBI_XC(unsigned short * a /*inout*/, unsigned bits, immediate count);
extern void _TIE_xt_hifi2_AE_SB_IC(unsigned short * a /*inout*/, unsigned bits);
extern void _TIE_xt_hifi2_AE_SB_IC1(unsigned short * a /*inout*/, unsigned bits);
extern void _TIE_xt_hifi2_AE_SB_IP(unsigned short * a /*inout*/, unsigned bits);
extern void _TIE_xt_hifi2_AE_SB_XC(unsigned short * a /*inout*/, unsigned bits);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16I(ae_int16x4 d0, ae_int16x4 d1, immediate i);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16I_N(ae_int16x4 d0, ae_int16x4 d1, immediate i);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16X4IR(ae_int16x4 v0, ae_int16x4 v1, immediate i);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_2301(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_4321(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_5140(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_5146(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_5342(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_5410(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_5432(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_6420(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_6543(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_7160(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_7362(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_7520(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_7531(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_7610(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SEL16_7632(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_SEL24_HH(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_SEL24_HL(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_SEL24_LH(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_SEL24_LL(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_SEL32I(ae_int32x2 d0, ae_int32x2 d1, immediate i);
extern ae_int32x2 _TIE_xt_hifi2_AE_SEL32X2IR(ae_int32x2 v0, ae_int32x2 v1, immediate i);
extern ae_int32x2 _TIE_xt_hifi2_AE_SEL32_HH(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_SEL32_HL(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_SEL32_LH(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_SEL32_LL(ae_int32x2 d0, ae_int32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_SELF32X2IR(ae_f32x2 v0, ae_f32x2 v1, immediate i);
extern ae_p24x2s _TIE_xt_hifi2_AE_SELP24_HH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_SELP24_HL(ae_p24x2s d0, ae_p24x2s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_SELP24_LH(ae_p24x2s d0, ae_p24x2s d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_SELP24_LL(ae_p24x2s d0, ae_p24x2s d1);
extern void _TIE_xt_hifi2_AE_SETCBEGIN0(const void * a);
extern void _TIE_xt_hifi2_AE_SETCBEGIN1(const void * a);
extern void _TIE_xt_hifi2_AE_SETCEND0(const void * a);
extern void _TIE_xt_hifi2_AE_SETCEND1(const void * a);
extern unsigned _TIE_xt_hifi2_AE_SEXT16(unsigned ars);
extern ae_int32x2 _TIE_xt_hifi2_AE_SEXT32(ae_int32x2 d0, immediate bit);
extern ae_int32x2 _TIE_xt_hifi2_AE_SEXT32X2D16_10(ae_int16x4 d0);
extern ae_int32 _TIE_xt_hifi2_AE_SEXT32X2D16_10_scalar(ae_int16 p);
extern ae_int32x4 _TIE_xt_hifi2_AE_SEXT32X2D16_10_vector(ae_int16x4 p);
extern ae_int32x2 _TIE_xt_hifi2_AE_SEXT32X2D16_32(ae_int16x4 d0);
extern ae_ep _TIE_xt_hifi2_AE_SEXT72(ae_int64 i);
extern ae_int32 _TIE_xt_hifi2_AE_SEXT_32(ae_int32 b, immediate c);
extern void _TIE_xt_hifi2_AE_SF16X4_I(ae_f16x4 d, ae_f16x4 * a, immediate off);
extern void _TIE_xt_hifi2_AE_SF16X4_IP(ae_f16x4 d, ae_f16x4 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SF16X4_X(ae_f16x4 d, ae_f16x4 * a, int off);
extern void _TIE_xt_hifi2_AE_SF16X4_XP(ae_f16x4 d, ae_f16x4 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SF24X2_I(ae_f24x2 d, ae_f24x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_SF24X2_IP(ae_f24x2 d, ae_f24x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SF24X2_X(ae_f24x2 d, ae_f24x2 * a, int off);
extern void _TIE_xt_hifi2_AE_SF24X2_XP(ae_f24x2 d, ae_f24x2 * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SF32X2_I(ae_f32x2 d, ae_f32x2 * a, immediate off);
extern void _TIE_xt_hifi2_AE_SF32X2_IP(ae_f32x2 d, ae_f32x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SF32X2_X(ae_f32x2 d, ae_f32x2 * a, int off);
extern void _TIE_xt_hifi2_AE_SF32X2_XP(ae_f32x2 d, ae_f32x2 * a /*inout*/, int off);
extern unsigned _TIE_xt_hifi2_AE_SHA32(unsigned ai);
extern ae_int16x4 _TIE_xt_hifi2_AE_SHORTSWAP(ae_int16x4 d0);
extern ae_f16x4 _TIE_xt_hifi2_AE_SLAA16S(ae_f16x4 d0, int sa);
extern ae_int16 _TIE_xt_hifi2_AE_SLAA16S_scalar(ae_int16 d0, int sa);
extern ae_int16x4 _TIE_xt_hifi2_AE_SLAA16S_vector(ae_int16x4 d0, int sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_SLAA32(ae_int32x2 d0, int sa);
extern ae_f32x2 _TIE_xt_hifi2_AE_SLAA32S(ae_f32x2 d0, int sa);
extern ae_int32 _TIE_xt_hifi2_AE_SLAA32S_scalar(ae_int32 d0, int sa);
extern ae_int32x4 _TIE_xt_hifi2_AE_SLAA32S_vector(ae_int32x4 d0, int sa);
extern ae_int64 _TIE_xt_hifi2_AE_SLAA64(ae_int64 d0, int sa);
extern ae_f64 _TIE_xt_hifi2_AE_SLAA64S(ae_f64 d0, int sa);
extern ae_int64x2 _TIE_xt_hifi2_AE_SLAA64X2_vector(ae_int64x2 d0, int sa);
extern ae_q56s _TIE_xt_hifi2_AE_SLAAQ56(ae_q56s d0, int sa);
extern ae_q56s _TIE_xt_hifi2_AE_SLAASQ56S(ae_q56s d0, int sa);
extern ae_f16x4 _TIE_xt_hifi2_AE_SLAI16S(ae_f16x4 d0, immediate sa);
extern ae_int24x2 _TIE_xt_hifi2_AE_SLAI24(ae_int24x2 d0, immediate sa);
extern ae_f24x2 _TIE_xt_hifi2_AE_SLAI24S(ae_f24x2 d0, immediate sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_SLAI32(ae_int32x2 d0, immediate sa);
extern ae_f32x2 _TIE_xt_hifi2_AE_SLAI32S(ae_f32x2 d0, immediate sa);
extern ae_int64 _TIE_xt_hifi2_AE_SLAI64(ae_int64 d0, immediate sa);
extern ae_f64 _TIE_xt_hifi2_AE_SLAI64S(ae_f64 d0, immediate sa);
extern ae_int64x2 _TIE_xt_hifi2_AE_SLAI64X2_vector(ae_int64x2 d0, immediate sa);
extern void _TIE_xt_hifi2_AE_SLAI72(ae_ep e, ae_int64 d, ae_int64 d0, immediate i);
extern ae_q56s _TIE_xt_hifi2_AE_SLAIQ56(ae_q56s d0, immediate sa);
extern ae_q56s _TIE_xt_hifi2_AE_SLAISQ56S(ae_q56s d0, immediate sa);
extern ae_int24x2 _TIE_xt_hifi2_AE_SLAS24(ae_int24x2 d0);
extern ae_f24x2 _TIE_xt_hifi2_AE_SLAS24S(ae_f24x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_SLAS32(ae_int32x2 d0);
extern ae_f32x2 _TIE_xt_hifi2_AE_SLAS32S(ae_f32x2 d0);
extern ae_int64 _TIE_xt_hifi2_AE_SLAS64(ae_int64 d0);
extern ae_f64 _TIE_xt_hifi2_AE_SLAS64S(ae_f64 d0);
extern ae_q56s _TIE_xt_hifi2_AE_SLASQ56(ae_q56s d0);
extern ae_q56s _TIE_xt_hifi2_AE_SLASSQ56S(ae_q56s d0);
extern ae_q56s _TIE_xt_hifi2_AE_SLLAQ56(ae_q56s d0, int sa);
extern ae_q56s _TIE_xt_hifi2_AE_SLLASQ56S(ae_q56s d0, int sa);
extern ae_f16x4 _TIE_xt_hifi2_AE_SLLI16S(ae_f16x4 d0, immediate sa);
extern ae_int24x2 _TIE_xt_hifi2_AE_SLLI24(ae_int24x2 d0, immediate sa);
extern ae_f24x2 _TIE_xt_hifi2_AE_SLLI24S(ae_f24x2 d0, immediate sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_SLLI32(ae_int32x2 d0, immediate sa);
extern ae_f32x2 _TIE_xt_hifi2_AE_SLLI32S(ae_f32x2 d0, immediate sa);
extern ae_int64 _TIE_xt_hifi2_AE_SLLI64(ae_int64 d0, immediate sa);
extern ae_f64 _TIE_xt_hifi2_AE_SLLI64S(ae_f64 d0, immediate sa);
extern ae_p24x2s _TIE_xt_hifi2_AE_SLLIP24(ae_p24x2s d0, immediate sa);
extern ae_q56s _TIE_xt_hifi2_AE_SLLIQ56(ae_q56s d0, immediate sa);
extern ae_p24x2s _TIE_xt_hifi2_AE_SLLISP24S(ae_p24x2s d0, immediate sa);
extern ae_q56s _TIE_xt_hifi2_AE_SLLISQ56S(ae_q56s d0, immediate sa);
extern ae_int32 _TIE_xt_hifi2_AE_SLLI_32(ae_int32 b, immediate c);
extern ae_p24x2s _TIE_xt_hifi2_AE_SLLSP24(ae_p24x2s d0);
extern ae_q56s _TIE_xt_hifi2_AE_SLLSQ56(ae_q56s d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_SLLSSP24S(ae_p24x2s d0);
extern ae_q56s _TIE_xt_hifi2_AE_SLLSSQ56S(ae_q56s d0);
extern void _TIE_xt_hifi2_AE_SP16F_L_C(ae_p24x2s d, ae_p16s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP16F_L_I(ae_p24x2s d, ae_p16s * a, immediate off);
extern void _TIE_xt_hifi2_AE_SP16F_L_IU(ae_p24x2s d, ae_p16s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SP16F_L_X(ae_p24x2s d, ae_p16s * a, int off);
extern void _TIE_xt_hifi2_AE_SP16F_L_XU(ae_p24x2s d, ae_p16s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP16X2F_C(ae_p24x2s d, ae_p16x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP16X2F_I(ae_p24x2s d, ae_p16x2s * a, immediate off);
extern void _TIE_xt_hifi2_AE_SP16X2F_IU(ae_p24x2s d, ae_p16x2s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SP16X2F_X(ae_p24x2s d, ae_p16x2s * a, int off);
extern void _TIE_xt_hifi2_AE_SP16X2F_XU(ae_p24x2s d, ae_p16x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP16X2S_I(ae_p16x2s d, ae_p16x2s * a, immediate off);
extern void _TIE_xt_hifi2_AE_SP16X2S_IU(ae_p16x2s d, ae_p16x2s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SP16X2S_X(ae_p16x2s d, ae_p16x2s * a, int off);
extern void _TIE_xt_hifi2_AE_SP16X2S_XU(ae_p16x2s d, ae_p16x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP24F_L_C(ae_p24x2s d, ae_p24f * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP24F_L_I(ae_p24x2s d, ae_p24f * a, immediate off);
extern void _TIE_xt_hifi2_AE_SP24F_L_IU(ae_p24x2s d, ae_p24f * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SP24F_L_X(ae_p24x2s d, ae_p24f * a, int off);
extern void _TIE_xt_hifi2_AE_SP24F_L_XU(ae_p24x2s d, ae_p24f * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP24S_L_C(ae_p24x2s d, ae_p24s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP24S_L_I(ae_p24x2s d, ae_p24s * a, immediate off);
extern void _TIE_xt_hifi2_AE_SP24S_L_IU(ae_p24x2s d, ae_p24s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SP24S_L_X(ae_p24x2s d, ae_p24s * a, int off);
extern void _TIE_xt_hifi2_AE_SP24S_L_XU(ae_p24x2s d, ae_p24s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP24X2F_C(ae_p24x2s d, ae_p24x2f * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP24X2F_I(ae_p24x2s d, ae_p24x2f * a, immediate off);
extern void _TIE_xt_hifi2_AE_SP24X2F_IU(ae_p24x2s d, ae_p24x2f * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SP24X2F_X(ae_p24x2s d, ae_p24x2f * a, int off);
extern void _TIE_xt_hifi2_AE_SP24X2F_XU(ae_p24x2s d, ae_p24x2f * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP24X2S_C(ae_p24x2s d, ae_p24x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SP24X2S_I(ae_p24x2s d, ae_p24x2s * a, immediate off);
extern void _TIE_xt_hifi2_AE_SP24X2S_IU(ae_p24x2s d, ae_p24x2s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SP24X2S_X(ae_p24x2s d, ae_p24x2s * a, int off);
extern void _TIE_xt_hifi2_AE_SP24X2S_XU(ae_p24x2s d, ae_p24x2s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SQ32F_C(ae_q56s d, ae_q32s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SQ32F_I(ae_q56s d, ae_q32s * a, immediate off);
extern void _TIE_xt_hifi2_AE_SQ32F_IU(ae_q56s d, ae_q32s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SQ32F_X(ae_q56s d, ae_q32s * a, int off);
extern void _TIE_xt_hifi2_AE_SQ32F_XU(ae_q56s d, ae_q32s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SQ56S_C(ae_q56s d, ae_q56s * a /*inout*/, int off);
extern void _TIE_xt_hifi2_AE_SQ56S_I(ae_q56s d, ae_q56s * a, immediate off);
extern void _TIE_xt_hifi2_AE_SQ56S_IU(ae_q56s d, ae_q56s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_AE_SQ56S_X(ae_q56s d, ae_q56s * a, int off);
extern void _TIE_xt_hifi2_AE_SQ56S_XU(ae_q56s d, ae_q56s * a /*inout*/, int off);
extern ae_int64 _TIE_xt_hifi2_AE_SRA64_32(ae_int32x2 s, unsigned sa);
extern ae_f16x4 _TIE_xt_hifi2_AE_SRAA16RS(ae_f16x4 d0, int sa);
extern ae_int16 _TIE_xt_hifi2_AE_SRAA16RS_scalar(ae_int16 d0, int sa);
extern ae_int16x4 _TIE_xt_hifi2_AE_SRAA16RS_vector(ae_int16x4 d0, int sa);
extern ae_f16x4 _TIE_xt_hifi2_AE_SRAA16S(ae_f16x4 d0, int sa);
extern ae_int16 _TIE_xt_hifi2_AE_SRAA16S_scalar(ae_int16 d0, int sa);
extern ae_int16x4 _TIE_xt_hifi2_AE_SRAA16S_vector(ae_int16x4 d0, int sa);
extern ae_int16x4 _TIE_xt_hifi2_AE_SRAA16_VECTOR(ae_int16x4 b, int sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_SRAA32(ae_int32x2 d0, int sa);
extern ae_f32x2 _TIE_xt_hifi2_AE_SRAA32RS(ae_f32x2 d0, int sa);
extern ae_int32 _TIE_xt_hifi2_AE_SRAA32RS_scalar(ae_int32 d0, int sa);
extern ae_int32x4 _TIE_xt_hifi2_AE_SRAA32RS_vector(ae_int32x4 d0, int sa);
extern ae_f32x2 _TIE_xt_hifi2_AE_SRAA32S(ae_f32x2 d0, int sa);
extern ae_int32 _TIE_xt_hifi2_AE_SRAA32S_scalar(ae_int32 d0, int sa);
extern ae_int32x4 _TIE_xt_hifi2_AE_SRAA32S_vector(ae_int32x4 d0, int sa);
extern ae_int64 _TIE_xt_hifi2_AE_SRAA64(ae_int64 d0, int sa);
extern ae_int64x2 _TIE_xt_hifi2_AE_SRAA64X2_vector(ae_int64x2 d0, int sa);
extern ae_q56s _TIE_xt_hifi2_AE_SRAAQ56(ae_q56s d0, int sa);
extern ae_int16x4 _TIE_xt_hifi2_AE_SRAI16(ae_int16x4 d0, immediate sa);
extern ae_int16x4 _TIE_xt_hifi2_AE_SRAI16R(ae_int16x4 d0, immediate sa);
extern ae_int24x2 _TIE_xt_hifi2_AE_SRAI24(ae_int24x2 d0, immediate sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_SRAI32(ae_int32x2 d0, immediate sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_SRAI32R(ae_int32x2 d0, immediate sa);
extern ae_int64 _TIE_xt_hifi2_AE_SRAI64(ae_int64 d0, immediate sa);
extern ae_int64x2 _TIE_xt_hifi2_AE_SRAI64X2_vector(ae_int64x2 d0, immediate sa);
extern ae_int64 _TIE_xt_hifi2_AE_SRAI72(ae_ep e, ae_int64 d0, immediate i);
extern ae_p24x2s _TIE_xt_hifi2_AE_SRAIP24(ae_p24x2s d0, immediate sa);
extern ae_q56s _TIE_xt_hifi2_AE_SRAIQ56(ae_q56s d0, immediate sa);
extern ae_int32 _TIE_xt_hifi2_AE_SRAI_32(ae_int32 b, immediate c);
extern ae_int24x2 _TIE_xt_hifi2_AE_SRAS24(ae_int24x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_SRAS32(ae_int32x2 d0);
extern ae_int64 _TIE_xt_hifi2_AE_SRAS64(ae_int64 d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_SRASP24(ae_p24x2s d0);
extern ae_q56s _TIE_xt_hifi2_AE_SRASQ56(ae_q56s d0);
extern short _TIE_xt_hifi2_AE_SRLA16_scalar(short var1, int var2);
extern ae_int16x4 _TIE_xt_hifi2_AE_SRLA16_vector(ae_int16x4 var1, int var2);
extern ae_int32x2 _TIE_xt_hifi2_AE_SRLA32(ae_int32x2 d0, int sa);
extern int _TIE_xt_hifi2_AE_SRLA32_scalar(int var1, int var2);
extern ae_int32x2 _TIE_xt_hifi2_AE_SRLA32_vector(ae_int32x2 var1, int var2);
extern ae_int64 _TIE_xt_hifi2_AE_SRLA64(ae_int64 d0, int sa);
extern ae_q56s _TIE_xt_hifi2_AE_SRLAQ56(ae_q56s d0, int sa);
extern ae_int24x2 _TIE_xt_hifi2_AE_SRLI24(ae_int24x2 d0, immediate sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_SRLI32(ae_int32x2 d0, immediate sa);
extern ae_int64 _TIE_xt_hifi2_AE_SRLI64(ae_int64 d0, immediate sa);
extern ae_p24x2s _TIE_xt_hifi2_AE_SRLIP24(ae_p24x2s d0, immediate sa);
extern ae_q56s _TIE_xt_hifi2_AE_SRLIQ56(ae_q56s d0, immediate sa);
extern ae_int32u _TIE_xt_hifi2_AE_SRLI_32(ae_int32u b, immediate c);
extern ae_int24x2 _TIE_xt_hifi2_AE_SRLS24(ae_int24x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_SRLS32(ae_int32x2 d0);
extern ae_int64 _TIE_xt_hifi2_AE_SRLS64(ae_int64 d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_SRLSP24(ae_p24x2s d0);
extern ae_q56s _TIE_xt_hifi2_AE_SRLSQ56(ae_q56s d0);
extern ae_int16x4 _TIE_xt_hifi2_AE_SUB16(ae_int16x4 d0, ae_int16x4 d1);
extern ae_f16x4 _TIE_xt_hifi2_AE_SUB16S(ae_f16x4 d0, ae_f16x4 d1);
extern ae_int16 _TIE_xt_hifi2_AE_SUB16S_scalar(ae_int16 d0, ae_int16 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_SUB16S_vector(ae_int16x4 d0, ae_int16x4 d1);
extern ae_f24x2 _TIE_xt_hifi2_AE_SUB24S(ae_f32x2 d0, ae_f32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_SUB32(ae_int32x2 d0, ae_int32x2 d1);
extern ae_f32x2 _TIE_xt_hifi2_AE_SUB32S(ae_f32x2 d0, ae_f32x2 d1);
extern int _TIE_xt_hifi2_AE_SUB32S_scalar(int d0, ae_int32 d1);
extern ae_int64 _TIE_xt_hifi2_AE_SUB64(ae_int64 d0, ae_int64 d1);
extern ae_f64 _TIE_xt_hifi2_AE_SUB64S(ae_f64 d0, ae_f64 d1);
extern ae_int64x2 _TIE_xt_hifi2_AE_SUB64X2_vector(ae_int64x2 d0, ae_int64x2 d1);
extern void _TIE_xt_hifi2_AE_SUB72(ae_ep ep /*inout*/, ae_int64 v /*inout*/, ae_ep ep1, ae_int64 v1);
extern void _TIE_xt_hifi2_AE_SUB72X64(ae_ep ep /*inout*/, ae_int64 v /*inout*/, ae_int64 v1);
extern ae_int32x2 _TIE_xt_hifi2_AE_SUBADD32(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_SUBADD32S(ae_int32x2 d0, ae_int32x2 d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_SUBP24(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_SUBQ56(ae_q56s d0, ae_q56s d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_SUBRNG32(ae_int32x2 v0, ae_int32x2 v1);
extern ae_p24x2s _TIE_xt_hifi2_AE_SUBSP24S(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_SUBSQ56S(ae_q56s d0, ae_q56s d1);
extern ae_int32 _TIE_xt_hifi2_AE_SUBX2_32(ae_int32 b, ae_int32 c);
extern ae_int32 _TIE_xt_hifi2_AE_SUBX4_32(ae_int32 b, ae_int32 c);
extern ae_int32 _TIE_xt_hifi2_AE_SUBX8_32(ae_int32 b, ae_int32 c);
extern ae_int32 _TIE_xt_hifi2_AE_SUB_32(ae_int32 b, ae_int32 c);
extern void _TIE_xt_hifi2_AE_S_16(ae_int16 a, ae_int16 * base, immediate c);
extern void _TIE_xt_hifi2_AE_S_32(ae_int32 a, ae_int32 * base, immediate c);
extern ae_f16x4 _TIE_xt_hifi2_AE_TRUNC16X4F32(ae_f32x2 dl, ae_f32x2 dh);
extern ae_int16 _TIE_xt_hifi2_AE_TRUNC16X4F32_scalar(ae_int32 d0);
extern ae_int16x4 _TIE_xt_hifi2_AE_TRUNC16X4F32_vector(ae_int32x4 d0);
extern int _TIE_xt_hifi2_AE_TRUNCA16P24S_H(ae_int24x2 d0);
extern int _TIE_xt_hifi2_AE_TRUNCA16P24S_L(ae_int24x2 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_TRUNCA32F64S(ae_int64 d0, int sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_TRUNCA32F64S_L(ae_int32x2 d0, ae_int64 d1, int sa);
extern int _TIE_xt_hifi2_AE_TRUNCA32Q48(ae_q56s d0);
extern int _TIE_xt_hifi2_AE_TRUNCA32Q64(ae_int64 d0);
extern ae_int32x2 _TIE_xt_hifi2_AE_TRUNCA32X2F64S(ae_int64 d0, ae_int64 d1, int sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_TRUNCI32F64S(ae_int64 d0, immediate sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_TRUNCI32F64S_L(ae_int32x2 d0, ae_int64 d1, immediate sa);
extern ae_int32x2 _TIE_xt_hifi2_AE_TRUNCI32X2F64S(ae_int64 d0, ae_int64 d1, immediate sa);
extern ae_int24x2 _TIE_xt_hifi2_AE_TRUNCP16(ae_int24x2 d0);
extern ae_int24x2 _TIE_xt_hifi2_AE_TRUNCP24A32X2(unsigned ah, unsigned al);
extern ae_p24x2s _TIE_xt_hifi2_AE_TRUNCP24Q48(ae_q56s d0);
extern ae_p24x2s _TIE_xt_hifi2_AE_TRUNCP24Q48X2(ae_q56s d0, ae_q56s d1);
extern ae_q56s _TIE_xt_hifi2_AE_TRUNCQ32(ae_q56s d0);
extern void _TIE_xt_hifi2_AE_VLDL16C(const unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_VLDL16C_IC(const unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_VLDL16C_IC1(const unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_VLDL16C_IP(const unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_VLDL16C_XC(const unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_VLDL16T(xtbool done, unsigned symbol, const unsigned short * a);
extern void _TIE_xt_hifi2_AE_VLDL32T(xtbool done, unsigned symbol, const unsigned * a);
extern void _TIE_xt_hifi2_AE_VLDSHT(unsigned ar_t);
extern void _TIE_xt_hifi2_AE_VLEL16T(xtbool done, unsigned symbol /*inout*/, const unsigned short * a);
extern void _TIE_xt_hifi2_AE_VLEL32T(xtbool done, unsigned symbol /*inout*/, const unsigned * a);
extern void _TIE_xt_hifi2_AE_VLES16C(unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_VLES16C_IC(unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_VLES16C_IC1(unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_VLES16C_IP(unsigned short * a /*inout*/);
extern void _TIE_xt_hifi2_AE_VLES16C_XC(unsigned short * a /*inout*/);
extern ae_int64 _TIE_xt_hifi2_AE_XOR(ae_int64 d0, ae_int64 d1);
extern ae_int16x4 _TIE_xt_hifi2_AE_XOR16(ae_int16x4 d0, ae_int16x4 d1);
extern ae_int24x2 _TIE_xt_hifi2_AE_XOR24(ae_int24x2 d0, ae_int24x2 d1);
extern ae_int32x2 _TIE_xt_hifi2_AE_XOR32(ae_int32x2 d0, ae_int32x2 d1);
extern ae_int64 _TIE_xt_hifi2_AE_XOR64(ae_int64 d0, ae_int64 d1);
extern ae_p24x2s _TIE_xt_hifi2_AE_XORP48(ae_p24x2s d0, ae_p24x2s d1);
extern ae_q56s _TIE_xt_hifi2_AE_XORQ56(ae_q56s d0, ae_q56s d1);
extern ae_int32 _TIE_xt_hifi2_AE_XOR_32(ae_int32 b, ae_int32 c);
extern ae_valign _TIE_xt_hifi2_AE_ZALIGN64(void);
extern ae_int64 _TIE_xt_hifi2_AE_ZERO(void);
extern ae_int16x4 _TIE_xt_hifi2_AE_ZERO16(void);
extern ae_int24x2 _TIE_xt_hifi2_AE_ZERO24(void);
extern ae_int32x2 _TIE_xt_hifi2_AE_ZERO32(void);
extern ae_int64 _TIE_xt_hifi2_AE_ZERO64(void);
extern ae_int24x2 _TIE_xt_hifi2_AE_ZEROP48(void);
extern ae_q56s _TIE_xt_hifi2_AE_ZEROQ56(void);
extern int _TIE_xt_hifi2_AE_ZEXT16(int ars);
extern unsigned _TIE_xt_hifi2_RAE_BITPTR(void);
extern unsigned _TIE_xt_hifi2_RAE_BITSUSED(void);
extern unsigned _TIE_xt_hifi2_RAE_CWRAP(void);
extern unsigned _TIE_xt_hifi2_RAE_FIRST_TS(void);
extern unsigned _TIE_xt_hifi2_RAE_NEXTOFFSET(void);
extern unsigned _TIE_xt_hifi2_RAE_OVERFLOW(void);
extern int _TIE_xt_hifi2_RAE_SAR(void);
extern unsigned _TIE_xt_hifi2_RAE_SEARCHDONE(void);
extern unsigned _TIE_xt_hifi2_RAE_TABLESIZE(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_BITHEAD(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_BITPTR(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_BITSUSED(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_CBEGIN0(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_CBEGIN1(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_CEND0(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_CEND1(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_CWRAP(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_CW_SD_NO(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_FIRST_TS(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_NEXTOFFSET(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_OVERFLOW(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_OVF_SAR(void);
extern int _TIE_xt_hifi2_RUR_AE_SAR(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_SEARCHDONE(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_TABLESIZE(void);
extern unsigned _TIE_xt_hifi2_RUR_AE_TS_FTS_BU_BP(void);
extern void _TIE_xt_hifi2_WAE_BITPTR(unsigned a);
extern void _TIE_xt_hifi2_WAE_BITSUSED(unsigned a);
extern void _TIE_xt_hifi2_WAE_CWRAP(unsigned a);
extern void _TIE_xt_hifi2_WAE_FIRST_TS(unsigned a);
extern void _TIE_xt_hifi2_WAE_NEXTOFFSET(unsigned a);
extern void _TIE_xt_hifi2_WAE_OVERFLOW(unsigned a);
extern void _TIE_xt_hifi2_WAE_SAR(int a);
extern void _TIE_xt_hifi2_WAE_SEARCHDONE(unsigned a);
extern void _TIE_xt_hifi2_WAE_TABLESIZE(unsigned a);
extern void _TIE_xt_hifi2_WUR_AE_BITHEAD(unsigned v);
extern void _TIE_xt_hifi2_WUR_AE_BITPTR(unsigned a);
extern void _TIE_xt_hifi2_WUR_AE_BITSUSED(unsigned a);
extern void _TIE_xt_hifi2_WUR_AE_CBEGIN0(unsigned v);
extern void _TIE_xt_hifi2_WUR_AE_CBEGIN1(unsigned v);
extern void _TIE_xt_hifi2_WUR_AE_CEND0(unsigned v);
extern void _TIE_xt_hifi2_WUR_AE_CEND1(unsigned v);
extern void _TIE_xt_hifi2_WUR_AE_CWRAP(unsigned a);
extern void _TIE_xt_hifi2_WUR_AE_CW_SD_NO(unsigned v);
extern void _TIE_xt_hifi2_WUR_AE_FIRST_TS(unsigned a);
extern void _TIE_xt_hifi2_WUR_AE_NEXTOFFSET(unsigned a);
extern void _TIE_xt_hifi2_WUR_AE_OVERFLOW(unsigned a);
extern void _TIE_xt_hifi2_WUR_AE_OVF_SAR(unsigned v);
extern void _TIE_xt_hifi2_WUR_AE_SAR(int a);
extern void _TIE_xt_hifi2_WUR_AE_SEARCHDONE(unsigned a);
extern void _TIE_xt_hifi2_WUR_AE_TABLESIZE(unsigned a);
extern void _TIE_xt_hifi2_WUR_AE_TS_FTS_BU_BP(unsigned v);
extern ae_ep _TIE_xt_hifi2_ae_ep_loadi(const ae_ep * a, immediate imm);
extern ae_ep _TIE_xt_hifi2_ae_ep_move(ae_ep i);
extern void _TIE_xt_hifi2_ae_ep_storei(ae_ep d, ae_ep * a, immediate imm);
extern ae_f16 _TIE_xt_hifi2_ae_f16_loadi(const ae_f16 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f16_loadip(ae_f16 d, const ae_f16 * a /*inout*/, immediate off);
extern ae_f16 _TIE_xt_hifi2_ae_f16_loadx(const ae_f16 * a, int off);
extern void _TIE_xt_hifi2_ae_f16_loadxp(ae_f16 d, const ae_f16 * a /*inout*/, int off);
extern ae_f16 _TIE_xt_hifi2_ae_f16_move(ae_f16 d0);
extern ae_f16x4 _TIE_xt_hifi2_ae_f16_rtor_ae_f16x4(ae_f16 d0);
extern ae_f24 _TIE_xt_hifi2_ae_f16_rtor_ae_f24(ae_f16 b);
extern ae_f32 _TIE_xt_hifi2_ae_f16_rtor_ae_f32(ae_f16 b);
extern ae_int16 _TIE_xt_hifi2_ae_f16_rtor_ae_int16(ae_f16 d0);
extern ae_int16x4 _TIE_xt_hifi2_ae_f16_rtor_ae_int16x4(ae_f16 d0);
extern short _TIE_xt_hifi2_ae_f16_rtor_int16(ae_f16 d);
extern int _TIE_xt_hifi2_ae_f16_rtor_int32(ae_f16 d);
extern void _TIE_xt_hifi2_ae_f16_storei(ae_f16 d, ae_f16 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f16_storeip(ae_f16 d, ae_f16 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_f16_storex(ae_f16 d, ae_f16 * a, int off);
extern void _TIE_xt_hifi2_ae_f16_storexp(ae_f16 d, ae_f16 * a /*inout*/, int off);
extern ae_f16x4 _TIE_xt_hifi2_ae_f16x4_loadi(const ae_f16x4 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f16x4_loadip(ae_f16x4 d, const ae_f16x4 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_f16x4_loadrip(ae_f16x4 d, const ae_f16x4 * a /*inout*/, immediate off);
extern ae_f16x4 _TIE_xt_hifi2_ae_f16x4_loadx(const ae_f16x4 * a, int off);
extern void _TIE_xt_hifi2_ae_f16x4_loadxp(ae_f16x4 d, const ae_f16x4 * a /*inout*/, int off);
extern ae_f16x4 _TIE_xt_hifi2_ae_f16x4_move(ae_f16x4 d0);
extern void _TIE_xt_hifi2_ae_f16x4_rtom_ae_f16(ae_f16x4 v, ae_f16 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f16x4_rtom_ae_int16(ae_f16x4 v, ae_int16 * a, immediate off);
extern ae_int16x4 _TIE_xt_hifi2_ae_f16x4_rtor_ae_int16x4(ae_f16x4 d0);
extern short _TIE_xt_hifi2_ae_f16x4_rtor_int16(ae_f16x4 d);
extern void _TIE_xt_hifi2_ae_f16x4_storei(ae_f16x4 d, ae_f16x4 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f16x4_storeip(ae_f16x4 d, ae_f16x4 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_f16x4_storerip(ae_f16x4 d, ae_f16x4 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_f16x4_storex(ae_f16x4 d, ae_f16x4 * a, int off);
extern void _TIE_xt_hifi2_ae_f16x4_storexp(ae_f16x4 d, ae_f16x4 * a /*inout*/, int off);
extern ae_f24 _TIE_xt_hifi2_ae_f24_loadi(const ae_f24 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f24_loadip(ae_f24 d, const ae_f24 * a /*inout*/, immediate off);
extern ae_f24 _TIE_xt_hifi2_ae_f24_loadx(const ae_f24 * a, int off);
extern void _TIE_xt_hifi2_ae_f24_loadxp(ae_f24 d, const ae_f24 * a /*inout*/, int off);
extern ae_f24 _TIE_xt_hifi2_ae_f24_move(ae_f24 d0);
extern ae_f16 _TIE_xt_hifi2_ae_f24_rtor_ae_f16(ae_f24 b);
extern ae_f24x2 _TIE_xt_hifi2_ae_f24_rtor_ae_f24x2(ae_f24 d0);
extern ae_f32 _TIE_xt_hifi2_ae_f24_rtor_ae_f32(ae_f24 d0);
extern ae_f32x2 _TIE_xt_hifi2_ae_f24_rtor_ae_f32x2(ae_f24 b);
extern ae_int24 _TIE_xt_hifi2_ae_f24_rtor_ae_int24(ae_f24 d0);
extern ae_int24x2 _TIE_xt_hifi2_ae_f24_rtor_ae_int24x2(ae_f24 b);
extern ae_int32 _TIE_xt_hifi2_ae_f24_rtor_ae_int32(ae_f24 d0);
extern ae_int32x2 _TIE_xt_hifi2_ae_f24_rtor_ae_int32x2(ae_f24 b);
extern int _TIE_xt_hifi2_ae_f24_rtor_int32(ae_f24 d);
extern void _TIE_xt_hifi2_ae_f24_storei(ae_f24 d, ae_f24 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f24_storeip(ae_f24 d, ae_f24 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_f24_storex(ae_f24 d, ae_f24 * a, int off);
extern void _TIE_xt_hifi2_ae_f24_storexp(ae_f24 d, ae_f24 * a /*inout*/, int off);
extern ae_f24x2 _TIE_xt_hifi2_ae_f24x2_loadi(const ae_f24x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f24x2_loadip(ae_f24x2 d, const ae_f24x2 * a /*inout*/, immediate off);
extern ae_f24x2 _TIE_xt_hifi2_ae_f24x2_loadri(const ae_f24x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f24x2_loadrip(ae_f24x2 d, const ae_f24x2 * a /*inout*/, immediate off);
extern ae_f24x2 _TIE_xt_hifi2_ae_f24x2_loadx(const ae_f24x2 * a, int off);
extern void _TIE_xt_hifi2_ae_f24x2_loadxp(ae_f24x2 d, const ae_f24x2 * a /*inout*/, int off);
extern ae_f24x2 _TIE_xt_hifi2_ae_f24x2_move(ae_f24x2 d0);
extern ae_f24 _TIE_xt_hifi2_ae_f24x2_rtor_ae_f24(ae_f24x2 d01);
extern ae_f32x2 _TIE_xt_hifi2_ae_f24x2_rtor_ae_f32x2(ae_f24x2 d0);
extern ae_int24 _TIE_xt_hifi2_ae_f24x2_rtor_ae_int24(ae_f24x2 b);
extern ae_int24x2 _TIE_xt_hifi2_ae_f24x2_rtor_ae_int24x2(ae_f24x2 d0);
extern ae_int32 _TIE_xt_hifi2_ae_f24x2_rtor_ae_int32(ae_f24x2 b);
extern ae_int32x2 _TIE_xt_hifi2_ae_f24x2_rtor_ae_int32x2(ae_f24x2 d0);
extern ae_p16s _TIE_xt_hifi2_ae_f24x2_rtor_ae_p16s(ae_f24x2 d0);
extern ae_p16x2s _TIE_xt_hifi2_ae_f24x2_rtor_ae_p16x2s(ae_f24x2 d0);
extern ae_p24f _TIE_xt_hifi2_ae_f24x2_rtor_ae_p24f(ae_f24x2 d0);
extern ae_p24s _TIE_xt_hifi2_ae_f24x2_rtor_ae_p24s(ae_f24x2 d0);
extern ae_p24x2f _TIE_xt_hifi2_ae_f24x2_rtor_ae_p24x2f(ae_f24x2 d0);
extern ae_p24x2s _TIE_xt_hifi2_ae_f24x2_rtor_ae_p24x2s(ae_f24x2 d0);
extern void _TIE_xt_hifi2_ae_f24x2_storei(ae_f24x2 d, ae_f24x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f24x2_storeip(ae_f24x2 d, ae_f24x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_f24x2_storex(ae_f24x2 d, ae_f24x2 * a, int off);
extern void _TIE_xt_hifi2_ae_f24x2_storexp(ae_f24x2 d, ae_f24x2 * a /*inout*/, int off);
extern ae_f32 _TIE_xt_hifi2_ae_f32_loadi(const ae_f32 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f32_loadip(ae_f32 d, const ae_f32 * a /*inout*/, immediate off);
extern ae_f32 _TIE_xt_hifi2_ae_f32_loadx(const ae_f32 * a, int off);
extern void _TIE_xt_hifi2_ae_f32_loadxp(ae_f32 d, const ae_f32 * a /*inout*/, int off);
extern ae_f32 _TIE_xt_hifi2_ae_f32_move(ae_f32 d0);
extern ae_f16 _TIE_xt_hifi2_ae_f32_rtor_ae_f16(ae_f32 b);
extern ae_f32x2 _TIE_xt_hifi2_ae_f32_rtor_ae_f32x2(ae_f32 d0);
extern ae_f32x4 _TIE_xt_hifi2_ae_f32_rtor_ae_f32x4(ae_f32 b);
extern ae_int32 _TIE_xt_hifi2_ae_f32_rtor_ae_int32(ae_f32 d0);
extern ae_int32x2 _TIE_xt_hifi2_ae_f32_rtor_ae_int32x2(ae_f32 b);
extern int _TIE_xt_hifi2_ae_f32_rtor_int32(ae_f32 d);
extern void _TIE_xt_hifi2_ae_f32_storei(ae_f32 d, ae_f32 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f32_storeip(ae_f32 d, ae_f32 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_f32_storex(ae_f32 d, ae_f32 * a, int off);
extern void _TIE_xt_hifi2_ae_f32_storexp(ae_f32 d, ae_f32 * a /*inout*/, int off);
extern ae_f32x2 _TIE_xt_hifi2_ae_f32x2_loadi(const ae_f32x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f32x2_loadip(ae_f32x2 d, const ae_f32x2 * a /*inout*/, immediate off);
extern ae_f32x2 _TIE_xt_hifi2_ae_f32x2_loadri(const ae_f32x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f32x2_loadrip(ae_f32x2 d, const ae_f32x2 * a /*inout*/, immediate off);
extern ae_f32x2 _TIE_xt_hifi2_ae_f32x2_loadx(const ae_f32x2 * a, int off);
extern void _TIE_xt_hifi2_ae_f32x2_loadxp(ae_f32x2 d, const ae_f32x2 * a /*inout*/, int off);
extern ae_f32x2 _TIE_xt_hifi2_ae_f32x2_move(ae_f32x2 d0);
extern ae_f32 _TIE_xt_hifi2_ae_f32x2_rtor_ae_f32(ae_f32x2 d01);
extern ae_int32 _TIE_xt_hifi2_ae_f32x2_rtor_ae_int32(ae_f32x2 b);
extern ae_int32x2 _TIE_xt_hifi2_ae_f32x2_rtor_ae_int32x2(ae_f32x2 d0);
extern void _TIE_xt_hifi2_ae_f32x2_storei(ae_f32x2 d, ae_f32x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f32x2_storeip(ae_f32x2 d, ae_f32x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_f32x2_storeri(ae_f32x2 d, ae_f32x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f32x2_storerip(ae_f32x2 d, ae_f32x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_f32x2_storex(ae_f32x2 d, ae_f32x2 * a, int off);
extern void _TIE_xt_hifi2_ae_f32x2_storexp(ae_f32x2 d, ae_f32x2 * a /*inout*/, int off);
extern ae_f32x4 _TIE_xt_hifi2_ae_f32x4_loadi(const ae_f32x4 * b, immediate c);
extern ae_f32x4 _TIE_xt_hifi2_ae_f32x4_move(ae_f32x4 b);
extern void _TIE_xt_hifi2_ae_f32x4_rtom_int32(ae_f32x4 d, int * a, immediate i);
extern int _TIE_xt_hifi2_ae_f32x4_rtor_int32(ae_f32x4 d);
extern unsigned _TIE_xt_hifi2_ae_f32x4_rtor_uint32(ae_f32x4 d);
extern void _TIE_xt_hifi2_ae_f32x4_storei(ae_f32x4 d, ae_f32x4 * b, immediate c);
extern ae_f64 _TIE_xt_hifi2_ae_f64_loadi(const ae_f64 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f64_loadip(ae_f64 d, const ae_f64 * a /*inout*/, immediate off);
extern ae_f64 _TIE_xt_hifi2_ae_f64_loadx(const ae_f64 * a, int off);
extern void _TIE_xt_hifi2_ae_f64_loadxp(ae_f64 d, const ae_f64 * a /*inout*/, int off);
extern ae_f64 _TIE_xt_hifi2_ae_f64_move(ae_f64 d0);
extern ae_int64 _TIE_xt_hifi2_ae_f64_rtor_ae_int64(ae_f64 d0);
extern ae_q56s _TIE_xt_hifi2_ae_f64_rtor_ae_q56s(ae_f64 d0);
extern long long _TIE_xt_hifi2_ae_f64_rtor_int64(ae_f64 d);
extern void _TIE_xt_hifi2_ae_f64_storei(ae_f64 d, ae_f64 * a, immediate off);
extern void _TIE_xt_hifi2_ae_f64_storeip(ae_f64 d, ae_f64 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_f64_storex(ae_f64 d, ae_f64 * a, int off);
extern void _TIE_xt_hifi2_ae_f64_storexp(ae_f64 d, ae_f64 * a /*inout*/, int off);
extern ae_int16 _TIE_xt_hifi2_ae_int16_loadi(const ae_int16 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int16_loadip(ae_int16 d, const ae_int16 * a /*inout*/, immediate off);
extern ae_int16 _TIE_xt_hifi2_ae_int16_loadx(const ae_int16 * a, int off);
extern void _TIE_xt_hifi2_ae_int16_loadxp(ae_int16 d, const ae_int16 * a /*inout*/, int off);
extern ae_int16 _TIE_xt_hifi2_ae_int16_move(ae_int16 d0);
extern void _TIE_xt_hifi2_ae_int16_rtom_int16(ae_int16 d, short * a, immediate i);
extern ae_f16 _TIE_xt_hifi2_ae_int16_rtor_ae_f16(ae_int16 d0);
extern ae_int16u _TIE_xt_hifi2_ae_int16_rtor_ae_int16u(ae_int16 b);
extern ae_int16x4 _TIE_xt_hifi2_ae_int16_rtor_ae_int16x4(ae_int16 d0);
extern ae_int24 _TIE_xt_hifi2_ae_int16_rtor_ae_int24(ae_int16 b);
extern ae_int32 _TIE_xt_hifi2_ae_int16_rtor_ae_int32(ae_int16 b);
extern ae_int32u _TIE_xt_hifi2_ae_int16_rtor_ae_int32u(ae_int16 b);
extern ae_int64 _TIE_xt_hifi2_ae_int16_rtor_ae_int64(ae_int16 a);
extern short _TIE_xt_hifi2_ae_int16_rtor_int16(ae_int16 d);
extern int _TIE_xt_hifi2_ae_int16_rtor_int32(ae_int16 d);
extern void _TIE_xt_hifi2_ae_int16_storei(ae_int16 d, ae_int16 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int16_storeip(ae_int16 d, ae_int16 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int16_storex(ae_int16 d, ae_int16 * a, int off);
extern void _TIE_xt_hifi2_ae_int16_storexp(ae_int16 d, ae_int16 * a /*inout*/, int off);
extern ae_int16u _TIE_xt_hifi2_ae_int16u_loadi(const ae_int16u * base, immediate c);
extern ae_int16u _TIE_xt_hifi2_ae_int16u_move(ae_int16u b);
extern void _TIE_xt_hifi2_ae_int16u_rtom_uint16(ae_int16u d, unsigned short * a, immediate i);
extern ae_int16 _TIE_xt_hifi2_ae_int16u_rtor_ae_int16(ae_int16u b);
extern ae_int32 _TIE_xt_hifi2_ae_int16u_rtor_ae_int32(ae_int16u b);
extern ae_int32u _TIE_xt_hifi2_ae_int16u_rtor_ae_int32u(ae_int16u b);
extern unsigned short _TIE_xt_hifi2_ae_int16u_rtor_uint16(ae_int16u d);
extern void _TIE_xt_hifi2_ae_int16u_storei(ae_int16u a, ae_int16u * base, immediate c);
extern void _TIE_xt_hifi2_ae_int16x4_aligning_load_post_update_negative(ae_int16x4 v, ae_valign u /*inout*/, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int16x4_aligning_load_post_update_positive(ae_int16x4 v, ae_valign u /*inout*/, const ae_int16x4 * a /*inout*/);
extern ae_valign _TIE_xt_hifi2_ae_int16x4_aligning_load_prime(const ae_int16x4 * a);
extern void _TIE_xt_hifi2_ae_int16x4_aligning_store_flush_negative(ae_valign u /*inout*/, ae_int16x4 * a);
extern void _TIE_xt_hifi2_ae_int16x4_aligning_store_flush_positive(ae_valign u /*inout*/, ae_int16x4 * a);
extern void _TIE_xt_hifi2_ae_int16x4_aligning_store_post_update_negative(ae_int16x4 v, ae_valign u /*inout*/, ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int16x4_aligning_store_post_update_positive(ae_int16x4 v, ae_valign u /*inout*/, ae_int16x4 * a /*inout*/);
extern ae_valign _TIE_xt_hifi2_ae_int16x4_aligning_store_prime(void);
extern void _TIE_xt_hifi2_ae_int16x4_load_post_update_negative(ae_int16x4 v, const ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int16x4_load_post_update_positive(ae_int16x4 v, const ae_int16x4 * a /*inout*/, immediate off);
extern ae_int16x4 _TIE_xt_hifi2_ae_int16x4_loadi(const ae_int16x4 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int16x4_loadip(ae_int16x4 d, const ae_int16x4 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int16x4_loadrip(ae_int16x4 d, const ae_int16x4 * a /*inout*/, immediate off);
extern ae_int16x4 _TIE_xt_hifi2_ae_int16x4_loadx(const ae_int16x4 * a, int off);
extern void _TIE_xt_hifi2_ae_int16x4_loadxp(ae_int16x4 d, const ae_int16x4 * a /*inout*/, int off);
extern ae_int16x4 _TIE_xt_hifi2_ae_int16x4_move(ae_int16x4 d0);
extern void _TIE_xt_hifi2_ae_int16x4_rtom_ae_f16(ae_int16x4 v, ae_f16 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int16x4_rtom_ae_int16(ae_int16x4 v, ae_int16 * a, immediate off);
extern ae_f16x4 _TIE_xt_hifi2_ae_int16x4_rtor_ae_f16x4(ae_int16x4 d0);
extern ae_int32x4 _TIE_xt_hifi2_ae_int16x4_rtor_ae_int32x4(ae_int16x4 b);
extern short _TIE_xt_hifi2_ae_int16x4_rtor_int16(ae_int16x4 d);
extern void _TIE_xt_hifi2_ae_int16x4_store_post_update_negative(ae_int16x4 v, ae_int16x4 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int16x4_store_post_update_positive(ae_int16x4 v, ae_int16x4 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int16x4_storei(ae_int16x4 d, ae_int16x4 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int16x4_storeip(ae_int16x4 d, ae_int16x4 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int16x4_storerip(ae_int16x4 d, ae_int16x4 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int16x4_storex(ae_int16x4 d, ae_int16x4 * a, int off);
extern void _TIE_xt_hifi2_ae_int16x4_storexp(ae_int16x4 d, ae_int16x4 * a /*inout*/, int off);
extern ae_int24 _TIE_xt_hifi2_ae_int24_loadi(const ae_int24 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int24_loadip(ae_int24 d, const ae_int24 * a /*inout*/, immediate off);
extern ae_int24 _TIE_xt_hifi2_ae_int24_loadx(const ae_int24 * a, int off);
extern void _TIE_xt_hifi2_ae_int24_loadxp(ae_int24 d, const ae_int24 * a /*inout*/, int off);
extern ae_int24 _TIE_xt_hifi2_ae_int24_move(ae_int24 d0);
extern ae_f24 _TIE_xt_hifi2_ae_int24_rtor_ae_f24(ae_int24 d0);
extern ae_f24x2 _TIE_xt_hifi2_ae_int24_rtor_ae_f24x2(ae_int24 b);
extern ae_f32 _TIE_xt_hifi2_ae_int24_rtor_ae_f32(ae_int24 d0);
extern ae_f32x2 _TIE_xt_hifi2_ae_int24_rtor_ae_f32x2(ae_int24 b);
extern ae_int16 _TIE_xt_hifi2_ae_int24_rtor_ae_int16(ae_int24 b);
extern ae_int24x2 _TIE_xt_hifi2_ae_int24_rtor_ae_int24x2(ae_int24 d0);
extern ae_int32 _TIE_xt_hifi2_ae_int24_rtor_ae_int32(ae_int24 d0);
extern ae_int32x2 _TIE_xt_hifi2_ae_int24_rtor_ae_int32x2(ae_int24 b);
extern int _TIE_xt_hifi2_ae_int24_rtor_int32(ae_int24 d);
extern void _TIE_xt_hifi2_ae_int24_storei(ae_int24 d, ae_int24 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int24_storeip(ae_int24 d, ae_int24 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int24_storex(ae_int24 d, ae_int24 * a, int off);
extern void _TIE_xt_hifi2_ae_int24_storexp(ae_int24 d, ae_int24 * a /*inout*/, int off);
extern ae_int24x2 _TIE_xt_hifi2_ae_int24x2_loadi(const ae_int24x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int24x2_loadip(ae_int24x2 d, const ae_int24x2 * a /*inout*/, immediate off);
extern ae_int24x2 _TIE_xt_hifi2_ae_int24x2_loadri(const ae_int24x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int24x2_loadrip(ae_int24x2 d, const ae_int24x2 * a /*inout*/, immediate off);
extern ae_int24x2 _TIE_xt_hifi2_ae_int24x2_loadx(const ae_int24x2 * a, int off);
extern void _TIE_xt_hifi2_ae_int24x2_loadxp(ae_int24x2 d, const ae_int24x2 * a /*inout*/, int off);
extern ae_int24x2 _TIE_xt_hifi2_ae_int24x2_move(ae_int24x2 d0);
extern ae_f24 _TIE_xt_hifi2_ae_int24x2_rtor_ae_f24(ae_int24x2 b);
extern ae_f24x2 _TIE_xt_hifi2_ae_int24x2_rtor_ae_f24x2(ae_int24x2 d0);
extern ae_f32 _TIE_xt_hifi2_ae_int24x2_rtor_ae_f32(ae_int24x2 b);
extern ae_f32x2 _TIE_xt_hifi2_ae_int24x2_rtor_ae_f32x2(ae_int24x2 d0);
extern ae_int24 _TIE_xt_hifi2_ae_int24x2_rtor_ae_int24(ae_int24x2 d01);
extern ae_int32x2 _TIE_xt_hifi2_ae_int24x2_rtor_ae_int32x2(ae_int24x2 d0);
extern ae_p16s _TIE_xt_hifi2_ae_int24x2_rtor_ae_p16s(ae_int24x2 d0);
extern ae_p16x2s _TIE_xt_hifi2_ae_int24x2_rtor_ae_p16x2s(ae_int24x2 d0);
extern ae_p24f _TIE_xt_hifi2_ae_int24x2_rtor_ae_p24f(ae_int24x2 d0);
extern ae_p24s _TIE_xt_hifi2_ae_int24x2_rtor_ae_p24s(ae_int24x2 d0);
extern ae_p24x2f _TIE_xt_hifi2_ae_int24x2_rtor_ae_p24x2f(ae_int24x2 d0);
extern ae_p24x2s _TIE_xt_hifi2_ae_int24x2_rtor_ae_p24x2s(ae_int24x2 d0);
extern void _TIE_xt_hifi2_ae_int24x2_storei(ae_int24x2 d, ae_int24x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int24x2_storeip(ae_int24x2 d, ae_int24x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int24x2_storeri(ae_int24x2 d, ae_int24x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int24x2_storerip(ae_int24x2 d, ae_int24x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int24x2_storex(ae_int24x2 d, ae_int24x2 * a, int off);
extern void _TIE_xt_hifi2_ae_int24x2_storexp(ae_int24x2 d, ae_int24x2 * a /*inout*/, int off);
extern ae_int32 _TIE_xt_hifi2_ae_int32_loadi(const ae_int32 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int32_loadip(ae_int32 d, const ae_int32 * a /*inout*/, immediate off);
extern ae_int32 _TIE_xt_hifi2_ae_int32_loadx(const ae_int32 * a, int off);
extern void _TIE_xt_hifi2_ae_int32_loadxp(ae_int32 d, const ae_int32 * a /*inout*/, int off);
extern ae_int32 _TIE_xt_hifi2_ae_int32_move(ae_int32 d0);
extern void _TIE_xt_hifi2_ae_int32_rtom_int32(ae_int32 d, int * a, immediate i);
extern ae_f32 _TIE_xt_hifi2_ae_int32_rtor_ae_f32(ae_int32 d0);
extern ae_f32x2 _TIE_xt_hifi2_ae_int32_rtor_ae_f32x2(ae_int32 b);
extern ae_int16 _TIE_xt_hifi2_ae_int32_rtor_ae_int16(ae_int32 b);
extern ae_int16u _TIE_xt_hifi2_ae_int32_rtor_ae_int16u(ae_int32 b);
extern ae_int32u _TIE_xt_hifi2_ae_int32_rtor_ae_int32u(ae_int32 b);
extern ae_int32x2 _TIE_xt_hifi2_ae_int32_rtor_ae_int32x2(ae_int32 d0);
extern ae_int32x4 _TIE_xt_hifi2_ae_int32_rtor_ae_int32x4(ae_int32 b);
extern ae_int64 _TIE_xt_hifi2_ae_int32_rtor_ae_int64(ae_int32 a);
extern short _TIE_xt_hifi2_ae_int32_rtor_int16(ae_int32 d);
extern int _TIE_xt_hifi2_ae_int32_rtor_int32(ae_int32 d);
extern unsigned _TIE_xt_hifi2_ae_int32_rtor_uint32(ae_int32 d);
extern void _TIE_xt_hifi2_ae_int32_storei(ae_int32 d, ae_int32 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int32_storeip(ae_int32 d, ae_int32 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int32_storex(ae_int32 d, ae_int32 * a, int off);
extern void _TIE_xt_hifi2_ae_int32_storexp(ae_int32 d, ae_int32 * a /*inout*/, int off);
extern ae_int32u _TIE_xt_hifi2_ae_int32u_loadi(const ae_int32u * base, immediate c);
extern ae_int32u _TIE_xt_hifi2_ae_int32u_move(ae_int32u b);
extern void _TIE_xt_hifi2_ae_int32u_rtom_uint32(ae_int32u d, unsigned * a, immediate i);
extern ae_int16 _TIE_xt_hifi2_ae_int32u_rtor_ae_int16(ae_int32u b);
extern ae_int16u _TIE_xt_hifi2_ae_int32u_rtor_ae_int16u(ae_int32u b);
extern ae_int32 _TIE_xt_hifi2_ae_int32u_rtor_ae_int32(ae_int32u b);
extern ae_int32x2 _TIE_xt_hifi2_ae_int32u_rtor_ae_int32x2(ae_int32u d0);
extern unsigned _TIE_xt_hifi2_ae_int32u_rtor_uint32(ae_int32u d);
extern void _TIE_xt_hifi2_ae_int32u_storei(ae_int32u a, ae_int32u * base, immediate c);
extern void _TIE_xt_hifi2_ae_int32x2_aligning_load_post_update_negative(ae_int32x2 v, ae_valign u /*inout*/, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int32x2_aligning_load_post_update_positive(ae_int32x2 v, ae_valign u /*inout*/, const ae_int32x2 * a /*inout*/);
extern ae_valign _TIE_xt_hifi2_ae_int32x2_aligning_load_prime(const ae_int32x2 * a);
extern void _TIE_xt_hifi2_ae_int32x2_aligning_store_flush_negative(ae_valign u /*inout*/, ae_int32x2 * a);
extern void _TIE_xt_hifi2_ae_int32x2_aligning_store_flush_positive(ae_valign u /*inout*/, ae_int32x2 * a);
extern void _TIE_xt_hifi2_ae_int32x2_aligning_store_post_update_negative(ae_int32x2 v, ae_valign u /*inout*/, ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int32x2_aligning_store_post_update_positive(ae_int32x2 v, ae_valign u /*inout*/, ae_int32x2 * a /*inout*/);
extern ae_valign _TIE_xt_hifi2_ae_int32x2_aligning_store_prime(void);
extern void _TIE_xt_hifi2_ae_int32x2_load_post_update_negative(ae_int32x2 v, const ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int32x2_load_post_update_positive(ae_int32x2 v, const ae_int32x2 * a /*inout*/, immediate off);
extern ae_int32x2 _TIE_xt_hifi2_ae_int32x2_loadi(const ae_int32x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int32x2_loadip(ae_int32x2 d, const ae_int32x2 * a /*inout*/, immediate off);
extern ae_int32x2 _TIE_xt_hifi2_ae_int32x2_loadri(const ae_int32x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int32x2_loadrip(ae_int32x2 d, const ae_int32x2 * a /*inout*/, immediate off);
extern ae_int32x2 _TIE_xt_hifi2_ae_int32x2_loadx(const ae_int32x2 * a, int off);
extern void _TIE_xt_hifi2_ae_int32x2_loadxp(ae_int32x2 d, const ae_int32x2 * a /*inout*/, int off);
extern ae_int32x2 _TIE_xt_hifi2_ae_int32x2_move(ae_int32x2 d0);
extern void _TIE_xt_hifi2_ae_int32x2_rtom_ae_int32(ae_int32x2 d, ae_int32 * a, immediate i);
extern void _TIE_xt_hifi2_ae_int32x2_rtom_int32(ae_int32x2 d, int * a, immediate i);
extern ae_f32 _TIE_xt_hifi2_ae_int32x2_rtor_ae_f32(ae_int32x2 b);
extern ae_f32x2 _TIE_xt_hifi2_ae_int32x2_rtor_ae_f32x2(ae_int32x2 d0);
extern ae_int32 _TIE_xt_hifi2_ae_int32x2_rtor_ae_int32(ae_int32x2 d01);
extern ae_int32u _TIE_xt_hifi2_ae_int32x2_rtor_ae_int32u(ae_int32x2 d01);
extern ae_int64x2 _TIE_xt_hifi2_ae_int32x2_rtor_ae_int64x2(ae_int32x2 b);
extern short _TIE_xt_hifi2_ae_int32x2_rtor_int16(ae_int32x2 d);
extern int _TIE_xt_hifi2_ae_int32x2_rtor_int32(ae_int32x2 d);
extern unsigned _TIE_xt_hifi2_ae_int32x2_rtor_uint32(ae_int32x2 d);
extern void _TIE_xt_hifi2_ae_int32x2_store_post_update_negative(ae_int32x2 v, ae_int32x2 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int32x2_store_post_update_positive(ae_int32x2 v, ae_int32x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int32x2_storei(ae_int32x2 d, ae_int32x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int32x2_storeip(ae_int32x2 d, ae_int32x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int32x2_storeri(ae_int32x2 d, ae_int32x2 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int32x2_storerip(ae_int32x2 d, ae_int32x2 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int32x2_storex(ae_int32x2 d, ae_int32x2 * a, int off);
extern void _TIE_xt_hifi2_ae_int32x2_storexp(ae_int32x2 d, ae_int32x2 * a /*inout*/, int off);
extern ae_int32 _TIE_xt_hifi2_ae_int32x2_vextract_0_ae_int32(ae_int32x2 d0);
extern int _TIE_xt_hifi2_ae_int32x2_vextract_0_p32s(ae_int32x2 d);
extern ae_int32 _TIE_xt_hifi2_ae_int32x2_vextract_1_ae_int32(ae_int32x2 d0);
extern int _TIE_xt_hifi2_ae_int32x2_vextract_1_p32s(ae_int32x2 d);
extern ae_int32x2 _TIE_xt_hifi2_ae_int32x2_vpack_ae_int32(ae_int32 d1, ae_int32 d0);
extern ae_int32x2 _TIE_xt_hifi2_ae_int32x2_vpack_p32s(int d1, int d0);
extern void _TIE_xt_hifi2_ae_int32x4_aligning_load_post_update_negative(ae_int32x4 v, ae_valign u /*inout*/, const ae_int32x4 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int32x4_aligning_load_post_update_positive(ae_int32x4 v, ae_valign u /*inout*/, const ae_int32x4 * a /*inout*/);
extern ae_valign _TIE_xt_hifi2_ae_int32x4_aligning_load_prime(const ae_int32x4 * a);
extern void _TIE_xt_hifi2_ae_int32x4_aligning_store_flush_negative(ae_valign u /*inout*/, ae_int32x4 * a);
extern void _TIE_xt_hifi2_ae_int32x4_aligning_store_flush_positive(ae_valign u /*inout*/, ae_int32x4 * a);
extern void _TIE_xt_hifi2_ae_int32x4_aligning_store_post_update_negative(ae_int32x4 v, ae_valign u /*inout*/, ae_int32x4 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int32x4_aligning_store_post_update_positive(ae_int32x4 v, ae_valign u /*inout*/, ae_int32x4 * a /*inout*/);
extern ae_valign _TIE_xt_hifi2_ae_int32x4_aligning_store_prime(void);
extern void _TIE_xt_hifi2_ae_int32x4_load_post_update_negative(ae_int32x4 v, const ae_int32x4 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int32x4_load_post_update_positive(ae_int32x4 v, const ae_int32x4 * a /*inout*/, immediate off);
extern ae_int32x4 _TIE_xt_hifi2_ae_int32x4_loadi(const ae_int32x4 * b, immediate c);
extern ae_int32x4 _TIE_xt_hifi2_ae_int32x4_move(ae_int32x4 b);
extern void _TIE_xt_hifi2_ae_int32x4_rtom_int32(ae_int32x4 d, int * a, immediate i);
extern ae_int16x4 _TIE_xt_hifi2_ae_int32x4_rtor_ae_int16x4(ae_int32x4 b);
extern int _TIE_xt_hifi2_ae_int32x4_rtor_int32(ae_int32x4 d);
extern unsigned _TIE_xt_hifi2_ae_int32x4_rtor_uint32(ae_int32x4 d);
extern void _TIE_xt_hifi2_ae_int32x4_store_post_update_negative(ae_int32x4 v, ae_int32x4 * a /*inout*/);
extern void _TIE_xt_hifi2_ae_int32x4_store_post_update_positive(ae_int32x4 v, ae_int32x4 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int32x4_storei(ae_int32x4 d, ae_int32x4 * b, immediate c);
extern ae_int64 _TIE_xt_hifi2_ae_int64_loadi(const ae_int64 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int64_loadip(ae_int64 d, const ae_int64 * a /*inout*/, immediate off);
extern ae_int64 _TIE_xt_hifi2_ae_int64_loadx(const ae_int64 * a, int off);
extern void _TIE_xt_hifi2_ae_int64_loadxp(ae_int64 d, const ae_int64 * a /*inout*/, int off);
extern ae_int64 _TIE_xt_hifi2_ae_int64_move(ae_int64 d0);
extern void _TIE_xt_hifi2_ae_int64_rtom_int64(ae_int64 d, long long * a, immediate i);
extern void _TIE_xt_hifi2_ae_int64_rtom_uint64(ae_int64 d, unsigned long long * a, immediate i);
extern ae_f64 _TIE_xt_hifi2_ae_int64_rtor_ae_f64(ae_int64 d0);
extern ae_q56s _TIE_xt_hifi2_ae_int64_rtor_ae_q56s(ae_int64 d0);
extern long long _TIE_xt_hifi2_ae_int64_rtor_int64(ae_int64 d);
extern unsigned long long _TIE_xt_hifi2_ae_int64_rtor_uint64(ae_int64 d);
extern void _TIE_xt_hifi2_ae_int64_storei(ae_int64 d, ae_int64 * a, immediate off);
extern void _TIE_xt_hifi2_ae_int64_storeip(ae_int64 d, ae_int64 * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_int64_storex(ae_int64 d, ae_int64 * a, int off);
extern void _TIE_xt_hifi2_ae_int64_storexp(ae_int64 d, ae_int64 * a /*inout*/, int off);
extern ae_int64x2 _TIE_xt_hifi2_ae_int64x2_loadi(const ae_int64x2 * b, immediate c);
extern ae_int64x2 _TIE_xt_hifi2_ae_int64x2_move(ae_int64x2 b);
extern void _TIE_xt_hifi2_ae_int64x2_storei(ae_int64x2 d, ae_int64x2 * b, immediate c);
extern ae_int64x4 _TIE_xt_hifi2_ae_int64x4_loadi(const ae_int64x4 * b, immediate c);
extern ae_int64x4 _TIE_xt_hifi2_ae_int64x4_move(ae_int64x4 b);
extern void _TIE_xt_hifi2_ae_int64x4_storei(ae_int64x4 d, ae_int64x4 * b, immediate c);
extern ae_p16s _TIE_xt_hifi2_ae_p16s_loadi(const ae_p16s * a, immediate off);
extern void _TIE_xt_hifi2_ae_p16s_loadiu(ae_p16s d, const ae_p16s * a /*inout*/, immediate off);
extern ae_p16s _TIE_xt_hifi2_ae_p16s_loadx(const ae_p16s * a, int off);
extern void _TIE_xt_hifi2_ae_p16s_loadxu(ae_p16s d, const ae_p16s * a /*inout*/, int off);
extern ae_p16s _TIE_xt_hifi2_ae_p16s_move(ae_p16s d0);
extern ae_p24f _TIE_xt_hifi2_ae_p16s_mtor_ae_p24f(const ae_p16s * a, immediate i);
extern ae_p24s _TIE_xt_hifi2_ae_p16s_mtor_ae_p24s(const ae_p16s * a, immediate i);
extern ae_p24x2f _TIE_xt_hifi2_ae_p16s_mtor_ae_p24x2f(const ae_p16s * a, immediate i);
extern ae_p24x2s _TIE_xt_hifi2_ae_p16s_mtor_ae_p24x2s(const ae_p16s * a, immediate i);
extern ae_f24x2 _TIE_xt_hifi2_ae_p16s_rtor_ae_f24x2(ae_p16s d0);
extern ae_int24x2 _TIE_xt_hifi2_ae_p16s_rtor_ae_int24x2(ae_p16s d0);
extern void _TIE_xt_hifi2_ae_p16s_storei(ae_p16s d, ae_p16s * a, immediate off);
extern void _TIE_xt_hifi2_ae_p16s_storeiu(ae_p16s d, ae_p16s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_p16s_storex(ae_p16s d, ae_p16s * a, int off);
extern void _TIE_xt_hifi2_ae_p16s_storexu(ae_p16s d, ae_p16s * a /*inout*/, int off);
extern ae_p16x2s _TIE_xt_hifi2_ae_p16x2s_loadi(const ae_p16x2s * a, immediate off);
extern void _TIE_xt_hifi2_ae_p16x2s_loadiu(ae_p16x2s d, const ae_p16x2s * a /*inout*/, immediate off);
extern ae_p16x2s _TIE_xt_hifi2_ae_p16x2s_loadx(const ae_p16x2s * a, int off);
extern void _TIE_xt_hifi2_ae_p16x2s_loadxu(ae_p16x2s d, const ae_p16x2s * a /*inout*/, int off);
extern ae_p16x2s _TIE_xt_hifi2_ae_p16x2s_move(ae_p16x2s d0);
extern ae_p24x2f _TIE_xt_hifi2_ae_p16x2s_mtor_ae_p24x2f(const ae_p16x2s * a, immediate i);
extern ae_p24x2s _TIE_xt_hifi2_ae_p16x2s_mtor_ae_p24x2s(const ae_p16x2s * a, immediate i);
extern ae_f24x2 _TIE_xt_hifi2_ae_p16x2s_rtor_ae_f24x2(ae_p16x2s d0);
extern ae_int24x2 _TIE_xt_hifi2_ae_p16x2s_rtor_ae_int24x2(ae_p16x2s d0);
extern void _TIE_xt_hifi2_ae_p16x2s_storei(ae_p16x2s d, ae_p16x2s * a, immediate off);
extern void _TIE_xt_hifi2_ae_p16x2s_storeiu(ae_p16x2s d, ae_p16x2s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_p16x2s_storex(ae_p16x2s d, ae_p16x2s * a, int off);
extern void _TIE_xt_hifi2_ae_p16x2s_storexu(ae_p16x2s d, ae_p16x2s * a /*inout*/, int off);
extern ae_p24f _TIE_xt_hifi2_ae_p24f_loadi(const ae_p24f * a, immediate off);
extern void _TIE_xt_hifi2_ae_p24f_loadip(ae_p24f d, const ae_p24f * a /*inout*/, immediate off);
extern ae_p24f _TIE_xt_hifi2_ae_p24f_loadx(const ae_p24f * a, int off);
extern void _TIE_xt_hifi2_ae_p24f_loadxp(ae_p24f d, const ae_p24f * a /*inout*/, int off);
extern ae_p24f _TIE_xt_hifi2_ae_p24f_move(ae_p24f d0);
extern ae_p24x2f _TIE_xt_hifi2_ae_p24f_mtor_ae_p24x2f(const ae_p24f * a, immediate i);
extern ae_p24x2s _TIE_xt_hifi2_ae_p24f_mtor_ae_p24x2s(const ae_p24f * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24f_rtom_ae_p16s(ae_p24f d, ae_p16s * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24f_rtom_ae_p24s(ae_p24f d, ae_p24s * a, immediate i);
extern ae_f24x2 _TIE_xt_hifi2_ae_p24f_rtor_ae_f24x2(ae_p24f d0);
extern ae_int24x2 _TIE_xt_hifi2_ae_p24f_rtor_ae_int24x2(ae_p24f d0);
extern ae_p24x2f _TIE_xt_hifi2_ae_p24f_rtor_ae_p24x2f(ae_p24f d0);
extern ae_p24x2s _TIE_xt_hifi2_ae_p24f_rtor_ae_p24x2s(ae_p24f d0);
extern void _TIE_xt_hifi2_ae_p24f_storei(ae_p24f d, ae_p24f * a, immediate off);
extern void _TIE_xt_hifi2_ae_p24f_storeip(ae_p24f d, ae_p24f * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_p24f_storex(ae_p24f d, ae_p24f * a, int off);
extern void _TIE_xt_hifi2_ae_p24f_storexp(ae_p24f d, ae_p24f * a /*inout*/, int off);
extern ae_p24s _TIE_xt_hifi2_ae_p24s_loadi(const ae_p24s * a, immediate off);
extern void _TIE_xt_hifi2_ae_p24s_loadip(ae_p24s d, const ae_p24s * a /*inout*/, immediate off);
extern ae_p24s _TIE_xt_hifi2_ae_p24s_loadx(const ae_p24s * a, int off);
extern void _TIE_xt_hifi2_ae_p24s_loadxp(ae_p24s d, const ae_p24s * a /*inout*/, int off);
extern ae_p24s _TIE_xt_hifi2_ae_p24s_move(ae_p24s d0);
extern ae_p24f _TIE_xt_hifi2_ae_p24s_mtor_ae_p24f(const ae_p24s * a, immediate i);
extern ae_p24x2f _TIE_xt_hifi2_ae_p24s_mtor_ae_p24x2f(const ae_p24s * a, immediate i);
extern ae_p24x2s _TIE_xt_hifi2_ae_p24s_mtor_ae_p24x2s(const ae_p24s * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24s_rtom_ae_p16s(ae_p24s d, ae_p16s * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24s_rtom_ae_p24f(ae_p24s d, ae_p24f * a, immediate i);
extern ae_f24x2 _TIE_xt_hifi2_ae_p24s_rtor_ae_f24x2(ae_p24s d0);
extern ae_int24x2 _TIE_xt_hifi2_ae_p24s_rtor_ae_int24x2(ae_p24s d0);
extern ae_p24x2f _TIE_xt_hifi2_ae_p24s_rtor_ae_p24x2f(ae_p24s d0);
extern ae_p24x2s _TIE_xt_hifi2_ae_p24s_rtor_ae_p24x2s(ae_p24s d0);
extern void _TIE_xt_hifi2_ae_p24s_storei(ae_p24s d, ae_p24s * a, immediate off);
extern void _TIE_xt_hifi2_ae_p24s_storeip(ae_p24s d, ae_p24s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_p24s_storex(ae_p24s d, ae_p24s * a, int off);
extern void _TIE_xt_hifi2_ae_p24s_storexp(ae_p24s d, ae_p24s * a /*inout*/, int off);
extern ae_p24x2f _TIE_xt_hifi2_ae_p24x2f_loadi(const ae_p24x2f * a, immediate off);
extern void _TIE_xt_hifi2_ae_p24x2f_loadip(ae_p24x2f d, const ae_p24x2f * a /*inout*/, immediate off);
extern ae_p24x2f _TIE_xt_hifi2_ae_p24x2f_loadri(const ae_p24x2f * a, immediate off);
extern ae_p24x2f _TIE_xt_hifi2_ae_p24x2f_loadx(const ae_p24x2f * a, int off);
extern void _TIE_xt_hifi2_ae_p24x2f_loadxp(ae_p24x2f d, const ae_p24x2f * a /*inout*/, int off);
extern ae_p24x2f _TIE_xt_hifi2_ae_p24x2f_move(ae_p24x2f d0);
extern ae_p24x2s _TIE_xt_hifi2_ae_p24x2f_mtor_ae_p24x2s(const ae_p24x2f * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24x2f_rtom_ae_p16s(ae_p24x2f d, ae_p16s * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24x2f_rtom_ae_p16x2s(ae_p24x2f d, ae_p16x2s * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24x2f_rtom_ae_p24f(ae_p24x2f d, ae_p24f * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24x2f_rtom_ae_p24s(ae_p24x2f d, ae_p24s * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24x2f_rtom_ae_p24x2s(ae_p24x2f d, ae_p24x2s * a, immediate i);
extern ae_f24x2 _TIE_xt_hifi2_ae_p24x2f_rtor_ae_f24x2(ae_p24x2f d0);
extern ae_int24x2 _TIE_xt_hifi2_ae_p24x2f_rtor_ae_int24x2(ae_p24x2f d0);
extern ae_p16s _TIE_xt_hifi2_ae_p24x2f_rtor_ae_p16s(ae_p24x2f d0);
extern ae_p16x2s _TIE_xt_hifi2_ae_p24x2f_rtor_ae_p16x2s(ae_p24x2f d0);
extern ae_p24f _TIE_xt_hifi2_ae_p24x2f_rtor_ae_p24f(ae_p24x2f d0);
extern ae_p24s _TIE_xt_hifi2_ae_p24x2f_rtor_ae_p24s(ae_p24x2f d0);
extern ae_p24x2s _TIE_xt_hifi2_ae_p24x2f_rtor_ae_p24x2s(ae_p24x2f d0);
extern void _TIE_xt_hifi2_ae_p24x2f_storei(ae_p24x2f d, ae_p24x2f * a, immediate off);
extern void _TIE_xt_hifi2_ae_p24x2f_storeip(ae_p24x2f d, ae_p24x2f * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_p24x2f_storex(ae_p24x2f d, ae_p24x2f * a, int off);
extern void _TIE_xt_hifi2_ae_p24x2f_storexp(ae_p24x2f d, ae_p24x2f * a /*inout*/, int off);
extern ae_p24x2s _TIE_xt_hifi2_ae_p24x2s_loadi(const ae_p24x2s * a, immediate off);
extern void _TIE_xt_hifi2_ae_p24x2s_loadip(ae_p24x2s d, const ae_p24x2s * a /*inout*/, immediate off);
extern ae_p24x2s _TIE_xt_hifi2_ae_p24x2s_loadri(const ae_p24x2s * a, immediate off);
extern ae_p24x2s _TIE_xt_hifi2_ae_p24x2s_loadx(const ae_p24x2s * a, int off);
extern void _TIE_xt_hifi2_ae_p24x2s_loadxp(ae_p24x2s d, const ae_p24x2s * a /*inout*/, int off);
extern ae_p24x2s _TIE_xt_hifi2_ae_p24x2s_move(ae_p24x2s d0);
extern void _TIE_xt_hifi2_ae_p24x2s_rtom_ae_p16s(ae_p24x2s d, ae_p16s * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24x2s_rtom_ae_p16x2s(ae_p24x2s d, ae_p16x2s * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24x2s_rtom_ae_p24f(ae_p24x2s d, ae_p24f * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24x2s_rtom_ae_p24s(ae_p24x2s d, ae_p24s * a, immediate i);
extern void _TIE_xt_hifi2_ae_p24x2s_rtom_ae_p24x2f(ae_p24x2s d, ae_p24x2f * a, immediate i);
extern ae_f24x2 _TIE_xt_hifi2_ae_p24x2s_rtor_ae_f24x2(ae_p24x2s d0);
extern ae_int24x2 _TIE_xt_hifi2_ae_p24x2s_rtor_ae_int24x2(ae_p24x2s d0);
extern ae_p16s _TIE_xt_hifi2_ae_p24x2s_rtor_ae_p16s(ae_p24x2s d0);
extern ae_p16x2s _TIE_xt_hifi2_ae_p24x2s_rtor_ae_p16x2s(ae_p24x2s d0);
extern ae_p24f _TIE_xt_hifi2_ae_p24x2s_rtor_ae_p24f(ae_p24x2s d0);
extern ae_p24s _TIE_xt_hifi2_ae_p24x2s_rtor_ae_p24s(ae_p24x2s d0);
extern ae_p24x2f _TIE_xt_hifi2_ae_p24x2s_rtor_ae_p24x2f(ae_p24x2s d0);
extern void _TIE_xt_hifi2_ae_p24x2s_storei(ae_p24x2s d, ae_p24x2s * a, immediate off);
extern void _TIE_xt_hifi2_ae_p24x2s_storeip(ae_p24x2s d, ae_p24x2s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_p24x2s_storeri(ae_p24x2s d, ae_p24x2s * a, immediate off);
extern void _TIE_xt_hifi2_ae_p24x2s_storex(ae_p24x2s d, ae_p24x2s * a, int off);
extern void _TIE_xt_hifi2_ae_p24x2s_storexp(ae_p24x2s d, ae_p24x2s * a /*inout*/, int off);
extern ae_q32s _TIE_xt_hifi2_ae_q32s_loadi(const ae_q32s * a, immediate off);
extern void _TIE_xt_hifi2_ae_q32s_loadiu(ae_q32s d, const ae_q32s * a /*inout*/, immediate off);
extern ae_q32s _TIE_xt_hifi2_ae_q32s_loadx(const ae_q32s * a, int off);
extern void _TIE_xt_hifi2_ae_q32s_loadxu(ae_q32s d, const ae_q32s * a /*inout*/, int off);
extern ae_q32s _TIE_xt_hifi2_ae_q32s_move(ae_q32s d0);
extern ae_q56s _TIE_xt_hifi2_ae_q32s_mtor_ae_q56s(const ae_q32s * a, immediate i);
extern void _TIE_xt_hifi2_ae_q32s_storei(ae_q32s d, ae_q32s * a, immediate off);
extern void _TIE_xt_hifi2_ae_q32s_storeiu(ae_q32s d, ae_q32s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_q32s_storex(ae_q32s d, ae_q32s * a, int off);
extern void _TIE_xt_hifi2_ae_q32s_storexu(ae_q32s d, ae_q32s * a /*inout*/, int off);
extern ae_q56s _TIE_xt_hifi2_ae_q56s_loadi(const ae_q56s * a, immediate off);
extern void _TIE_xt_hifi2_ae_q56s_loadip(ae_q56s d, const ae_q56s * a /*inout*/, immediate off);
extern ae_q56s _TIE_xt_hifi2_ae_q56s_loadx(const ae_q56s * a, int off);
extern void _TIE_xt_hifi2_ae_q56s_loadxp(ae_q56s d, const ae_q56s * a /*inout*/, int off);
extern ae_q56s _TIE_xt_hifi2_ae_q56s_move(ae_q56s d0);
extern void _TIE_xt_hifi2_ae_q56s_rtom_ae_q32s(ae_q56s d, ae_q32s * a, immediate i);
extern ae_f64 _TIE_xt_hifi2_ae_q56s_rtor_ae_f64(ae_q56s d0);
extern ae_int64 _TIE_xt_hifi2_ae_q56s_rtor_ae_int64(ae_q56s d0);
extern ae_q32s _TIE_xt_hifi2_ae_q56s_rtor_ae_q32s(ae_q56s d0);
extern void _TIE_xt_hifi2_ae_q56s_storei(ae_q56s d, ae_q56s * a, immediate off);
extern void _TIE_xt_hifi2_ae_q56s_storeip(ae_q56s d, ae_q56s * a /*inout*/, immediate off);
extern void _TIE_xt_hifi2_ae_q56s_storex(ae_q56s d, ae_q56s * a, int off);
extern void _TIE_xt_hifi2_ae_q56s_storexp(ae_q56s d, ae_q56s * a /*inout*/, int off);
extern ae_valign _TIE_xt_hifi2_ae_valign_loadi(const ae_valign * a, immediate imm);
extern ae_valign _TIE_xt_hifi2_ae_valign_move(ae_valign v);
extern void _TIE_xt_hifi2_ae_valign_storei(ae_valign su, ae_valign * a, immediate imm);
extern ae_int16 _TIE_xt_hifi2_int16_mtor_ae_int16(const short * a, immediate i);
extern ae_f16 _TIE_xt_hifi2_int16_rtor_ae_f16(short a);
extern ae_f16x4 _TIE_xt_hifi2_int16_rtor_ae_f16x4(short a);
extern ae_f24 _TIE_xt_hifi2_int16_rtor_ae_f24(short a);
extern ae_f24x2 _TIE_xt_hifi2_int16_rtor_ae_f24x2(short a);
extern ae_f32 _TIE_xt_hifi2_int16_rtor_ae_f32(short a);
extern ae_f32x2 _TIE_xt_hifi2_int16_rtor_ae_f32x2(short a);
extern ae_f64 _TIE_xt_hifi2_int16_rtor_ae_f64(short a);
extern ae_int16 _TIE_xt_hifi2_int16_rtor_ae_int16(short a);
extern ae_int16x4 _TIE_xt_hifi2_int16_rtor_ae_int16x4(short a);
extern ae_int24 _TIE_xt_hifi2_int16_rtor_ae_int24(short a);
extern ae_int24x2 _TIE_xt_hifi2_int16_rtor_ae_int24x2(short a);
extern ae_int32 _TIE_xt_hifi2_int16_rtor_ae_int32(short a);
extern ae_int32x2 _TIE_xt_hifi2_int16_rtor_ae_int32x2(short a);
extern ae_int64 _TIE_xt_hifi2_int16_rtor_ae_int64(short a);
extern ae_f32x4 _TIE_xt_hifi2_int32_mtor_ae_f32x4(const int * a, immediate i);
extern ae_int32 _TIE_xt_hifi2_int32_mtor_ae_int32(const int * a, immediate i);
extern ae_int32x2 _TIE_xt_hifi2_int32_mtor_ae_int32x2(const int * a, immediate i);
extern ae_int32x4 _TIE_xt_hifi2_int32_mtor_ae_int32x4(const int * a, immediate i);
extern ae_f16 _TIE_xt_hifi2_int32_rtor_ae_f16(int a);
extern ae_f24 _TIE_xt_hifi2_int32_rtor_ae_f24(int a);
extern ae_f24x2 _TIE_xt_hifi2_int32_rtor_ae_f24x2(int a);
extern ae_f32 _TIE_xt_hifi2_int32_rtor_ae_f32(int a);
extern ae_f32x2 _TIE_xt_hifi2_int32_rtor_ae_f32x2(int a);
extern ae_f32x4 _TIE_xt_hifi2_int32_rtor_ae_f32x4(int a);
extern ae_f64 _TIE_xt_hifi2_int32_rtor_ae_f64(int a);
extern ae_int16 _TIE_xt_hifi2_int32_rtor_ae_int16(int a);
extern ae_int16x4 _TIE_xt_hifi2_int32_rtor_ae_int16x4(int a);
extern ae_int24 _TIE_xt_hifi2_int32_rtor_ae_int24(int a);
extern ae_int24x2 _TIE_xt_hifi2_int32_rtor_ae_int24x2(int a);
extern ae_int32 _TIE_xt_hifi2_int32_rtor_ae_int32(int a);
extern ae_int32x2 _TIE_xt_hifi2_int32_rtor_ae_int32x2(int a);
extern ae_int32x4 _TIE_xt_hifi2_int32_rtor_ae_int32x4(int a);
extern ae_int64 _TIE_xt_hifi2_int32_rtor_ae_int64(int a);
extern xtbool2 _TIE_xt_hifi2_int32_rtor_xtbool2(int b);
extern xtbool4 _TIE_xt_hifi2_int32_rtor_xtbool4(int b);
extern ae_int64 _TIE_xt_hifi2_int64_mtor_ae_int64(const long long * a, immediate i);
extern ae_f64 _TIE_xt_hifi2_int64_rtor_ae_f64(long long a);
extern ae_int64 _TIE_xt_hifi2_int64_rtor_ae_int64(long long a);
extern ae_int32 _TIE_xt_hifi2_int8_rtor_ae_int32(signed char a);
extern ae_int32x2 _TIE_xt_hifi2_int8_rtor_ae_int32x2(signed char a);
extern ae_int16u _TIE_xt_hifi2_uint16_mtor_ae_int16u(const unsigned short * a, immediate i);
extern ae_int16u _TIE_xt_hifi2_uint16_rtor_ae_int16u(unsigned short a);
extern ae_int32 _TIE_xt_hifi2_uint16_rtor_ae_int32(unsigned short a);
extern ae_int32x2 _TIE_xt_hifi2_uint16_rtor_ae_int32x2(unsigned short a);
extern ae_int32u _TIE_xt_hifi2_uint32_mtor_ae_int32u(const unsigned * a, immediate i);
extern ae_f24x2 _TIE_xt_hifi2_uint32_rtor_ae_f24x2(unsigned a);
extern ae_f32x2 _TIE_xt_hifi2_uint32_rtor_ae_f32x2(unsigned a);
extern ae_f32x4 _TIE_xt_hifi2_uint32_rtor_ae_f32x4(unsigned a);
extern ae_int24x2 _TIE_xt_hifi2_uint32_rtor_ae_int24x2(unsigned a);
extern ae_int32 _TIE_xt_hifi2_uint32_rtor_ae_int32(unsigned a);
extern ae_int32u _TIE_xt_hifi2_uint32_rtor_ae_int32u(unsigned a);
extern ae_int32x2 _TIE_xt_hifi2_uint32_rtor_ae_int32x2(unsigned a);
extern ae_int32x4 _TIE_xt_hifi2_uint32_rtor_ae_int32x4(unsigned a);
extern xtbool2 _TIE_xt_hifi2_uint32_rtor_xtbool2(unsigned b);
extern xtbool4 _TIE_xt_hifi2_uint32_rtor_xtbool4(unsigned b);
extern ae_int64 _TIE_xt_hifi2_uint64_mtor_ae_int64(const unsigned long long * a, immediate i);
extern ae_int64 _TIE_xt_hifi2_uint64_rtor_ae_int64(unsigned long long a);
extern ae_int32 _TIE_xt_hifi2_uint8_rtor_ae_int32(unsigned char a);
extern ae_int32x2 _TIE_xt_hifi2_uint8_rtor_ae_int32x2(unsigned char a);
extern xtbool _TIE_xt_hifi2_xtbool2_extract_0(xtbool2 src);
extern xtbool _TIE_xt_hifi2_xtbool2_extract_1(xtbool2 src);
extern xtbool2 _TIE_xt_hifi2_xtbool2_loadi(const xtbool2 * s, immediate o);
extern xtbool2 _TIE_xt_hifi2_xtbool2_move(xtbool2 s);
extern int _TIE_xt_hifi2_xtbool2_rtor_int32(xtbool2 b);
extern unsigned _TIE_xt_hifi2_xtbool2_rtor_uint32(xtbool2 b);
extern void _TIE_xt_hifi2_xtbool2_storei(xtbool2 r, xtbool2 * s, immediate o);
extern xtbool _TIE_xt_hifi2_xtbool4_extract_0(xtbool4 src);
extern xtbool _TIE_xt_hifi2_xtbool4_extract_1(xtbool4 src);
extern xtbool _TIE_xt_hifi2_xtbool4_extract_2(xtbool4 src);
extern xtbool _TIE_xt_hifi2_xtbool4_extract_3(xtbool4 src);
extern xtbool4 _TIE_xt_hifi2_xtbool4_loadi(const xtbool4 * s, immediate o);
extern xtbool4 _TIE_xt_hifi2_xtbool4_move(xtbool4 s);
extern int _TIE_xt_hifi2_xtbool4_rtor_int32(xtbool4 b);
extern unsigned _TIE_xt_hifi2_xtbool4_rtor_uint32(xtbool4 b);
extern void _TIE_xt_hifi2_xtbool4_storei(xtbool4 r, xtbool4 * s, immediate o);
extern xtbool2 _TIE_xt_hifi2_xtbool_join_xtbool2(xtbool src0, xtbool src1);
extern xtbool4 _TIE_xt_hifi2_xtbool_join_xtbool4(xtbool src0, xtbool src1, xtbool src2, xtbool src3);
extern xtbool _TIE_xt_hifi2_xtbool_loadi(const xtbool * s, immediate o);
extern void _TIE_xt_hifi2_xtbool_storei(xtbool r, xtbool * s, immediate o);

#endif /*__ASSEMBLER__*/
#endif /*_NOCLANGUAGE*/
#endif /*_ASMLANGUAGE*/

#define AE_ABS16S _TIE_xt_hifi2_AE_ABS16S
#define AE_ABS16S_scalar _TIE_xt_hifi2_AE_ABS16S_scalar
#define AE_ABS16S_vector _TIE_xt_hifi2_AE_ABS16S_vector
#define AE_ABS24S _TIE_xt_hifi2_AE_ABS24S
#define AE_ABS32 _TIE_xt_hifi2_AE_ABS32
#define AE_ABS32S _TIE_xt_hifi2_AE_ABS32S
#define AE_ABS32S_scalar _TIE_xt_hifi2_AE_ABS32S_scalar
#define AE_ABS64 _TIE_xt_hifi2_AE_ABS64
#define AE_ABS64S _TIE_xt_hifi2_AE_ABS64S
#define AE_ABSP24 _TIE_xt_hifi2_AE_ABSP24
#define AE_ABSQ56 _TIE_xt_hifi2_AE_ABSQ56
#define AE_ABSSP24S _TIE_xt_hifi2_AE_ABSSP24S
#define AE_ABSSQ56S _TIE_xt_hifi2_AE_ABSSQ56S
#define AE_ABS_32 _TIE_xt_hifi2_AE_ABS_32
#define AE_ADD16 _TIE_xt_hifi2_AE_ADD16
#define AE_ADD16S _TIE_xt_hifi2_AE_ADD16S
#define AE_ADD16S_scalar _TIE_xt_hifi2_AE_ADD16S_scalar
#define AE_ADD16S_vector _TIE_xt_hifi2_AE_ADD16S_vector
#define AE_ADD24S _TIE_xt_hifi2_AE_ADD24S
#define AE_ADD32 _TIE_xt_hifi2_AE_ADD32
#define AE_ADD32S _TIE_xt_hifi2_AE_ADD32S
#define AE_ADD32S_HL_LH _TIE_xt_hifi2_AE_ADD32S_HL_LH
#define AE_ADD32S_scalar _TIE_xt_hifi2_AE_ADD32S_scalar
#define AE_ADD32_HL_LH _TIE_xt_hifi2_AE_ADD32_HL_LH
#define AE_ADD64 _TIE_xt_hifi2_AE_ADD64
#define AE_ADD64S _TIE_xt_hifi2_AE_ADD64S
#define AE_ADD64X2_vector _TIE_xt_hifi2_AE_ADD64X2_vector
#define AE_ADD72 _TIE_xt_hifi2_AE_ADD72
#define AE_ADD72X64 _TIE_xt_hifi2_AE_ADD72X64
#define AE_ADDANDSUB32S _TIE_xt_hifi2_AE_ADDANDSUB32S
#define AE_ADDANDSUBRNG32 _TIE_xt_hifi2_AE_ADDANDSUBRNG32
#define AE_ADDBRBA32 _TIE_xt_hifi2_AE_ADDBRBA32
#define AE_ADDCIRC16X4_XC _TIE_xt_hifi2_AE_ADDCIRC16X4_XC
#define AE_ADDCIRC16X4_XC1 _TIE_xt_hifi2_AE_ADDCIRC16X4_XC1
#define AE_ADDCIRC32X2_XC _TIE_xt_hifi2_AE_ADDCIRC32X2_XC
#define AE_ADDCIRC32X2_XC1 _TIE_xt_hifi2_AE_ADDCIRC32X2_XC1
#define AE_ADDCIRC64_XC _TIE_xt_hifi2_AE_ADDCIRC64_XC
#define AE_ADDCIRC64_XC1 _TIE_xt_hifi2_AE_ADDCIRC64_XC1
#define AE_ADDCIRC_XC _TIE_xt_hifi2_AE_ADDCIRC_XC
#define AE_ADDCIRC_XC1 _TIE_xt_hifi2_AE_ADDCIRC_XC1
#define AE_ADDICIRC _TIE_xt_hifi2_AE_ADDICIRC
#define AE_ADDI_32 _TIE_xt_hifi2_AE_ADDI_32
#define AE_ADDMI_32 _TIE_xt_hifi2_AE_ADDMI_32
#define AE_ADDP24 _TIE_xt_hifi2_AE_ADDP24
#define AE_ADDQ56 _TIE_xt_hifi2_AE_ADDQ56
#define AE_ADDRNG32 _TIE_xt_hifi2_AE_ADDRNG32
#define AE_ADDSP24S _TIE_xt_hifi2_AE_ADDSP24S
#define AE_ADDSQ56S _TIE_xt_hifi2_AE_ADDSQ56S
#define AE_ADDSUB32 _TIE_xt_hifi2_AE_ADDSUB32
#define AE_ADDSUB32S _TIE_xt_hifi2_AE_ADDSUB32S
#define AE_ADDX2_32 _TIE_xt_hifi2_AE_ADDX2_32
#define AE_ADDX4_32 _TIE_xt_hifi2_AE_ADDX4_32
#define AE_ADDX8_32 _TIE_xt_hifi2_AE_ADDX8_32
#define AE_ADD_32 _TIE_xt_hifi2_AE_ADD_32
#define AE_AND _TIE_xt_hifi2_AE_AND
#define AE_AND16 _TIE_xt_hifi2_AE_AND16
#define AE_AND24 _TIE_xt_hifi2_AE_AND24
#define AE_AND32 _TIE_xt_hifi2_AE_AND32
#define AE_AND64 _TIE_xt_hifi2_AE_AND64
#define AE_ANDP48 _TIE_xt_hifi2_AE_ANDP48
#define AE_ANDQ56 _TIE_xt_hifi2_AE_ANDQ56
#define AE_AND_32 _TIE_xt_hifi2_AE_AND_32
#define AE_BITSWAP _TIE_xt_hifi2_AE_BITSWAP
#define AE_CALCRNG1 _TIE_xt_hifi2_AE_CALCRNG1
#define AE_CALCRNG2 _TIE_xt_hifi2_AE_CALCRNG2
#define AE_CALCRNG3 _TIE_xt_hifi2_AE_CALCRNG3
#define AE_CLAMPS16 _TIE_xt_hifi2_AE_CLAMPS16
#define AE_CVT16X4 _TIE_xt_hifi2_AE_CVT16X4
#define AE_CVT16X4_scalar _TIE_xt_hifi2_AE_CVT16X4_scalar
#define AE_CVT16X4_vector _TIE_xt_hifi2_AE_CVT16X4_vector
#define AE_CVT32X2F16_10 _TIE_xt_hifi2_AE_CVT32X2F16_10
#define AE_CVT32X2F16_10_scalar _TIE_xt_hifi2_AE_CVT32X2F16_10_scalar
#define AE_CVT32X2F16_10_vector _TIE_xt_hifi2_AE_CVT32X2F16_10_vector
#define AE_CVT32X2F16_32 _TIE_xt_hifi2_AE_CVT32X2F16_32
#define AE_CVT48A32 _TIE_xt_hifi2_AE_CVT48A32
#define AE_CVT48F32_H _TIE_xt_hifi2_AE_CVT48F32_H
#define AE_CVT48F32_L _TIE_xt_hifi2_AE_CVT48F32_L
#define AE_CVT64A32 _TIE_xt_hifi2_AE_CVT64A32
#define AE_CVT64F32_H _TIE_xt_hifi2_AE_CVT64F32_H
#define AE_CVT64F32_L _TIE_xt_hifi2_AE_CVT64F32_L
#define AE_CVTA32F24S_H _TIE_xt_hifi2_AE_CVTA32F24S_H
#define AE_CVTA32F24S_L _TIE_xt_hifi2_AE_CVTA32F24S_L
#define AE_CVTA32P24_H _TIE_xt_hifi2_AE_CVTA32P24_H
#define AE_CVTA32P24_L _TIE_xt_hifi2_AE_CVTA32P24_L
#define AE_CVTP24A16 _TIE_xt_hifi2_AE_CVTP24A16
#define AE_CVTP24A16X2 _TIE_xt_hifi2_AE_CVTP24A16X2
#define AE_CVTP24A16X2_HH _TIE_xt_hifi2_AE_CVTP24A16X2_HH
#define AE_CVTP24A16X2_HL _TIE_xt_hifi2_AE_CVTP24A16X2_HL
#define AE_CVTP24A16X2_LH _TIE_xt_hifi2_AE_CVTP24A16X2_LH
#define AE_CVTP24A16X2_LL _TIE_xt_hifi2_AE_CVTP24A16X2_LL
#define AE_CVTQ48A32S _TIE_xt_hifi2_AE_CVTQ48A32S
#define AE_CVTQ48P24S_H _TIE_xt_hifi2_AE_CVTQ48P24S_H
#define AE_CVTQ48P24S_L _TIE_xt_hifi2_AE_CVTQ48P24S_L
#define AE_CVTQ56A32S _TIE_xt_hifi2_AE_CVTQ56A32S
#define AE_CVTQ56P32S_H _TIE_xt_hifi2_AE_CVTQ56P32S_H
#define AE_CVTQ56P32S_L _TIE_xt_hifi2_AE_CVTQ56P32S_L
#define AE_DB _TIE_xt_hifi2_AE_DB
#define AE_DBI _TIE_xt_hifi2_AE_DBI
#define AE_DBI_IC _TIE_xt_hifi2_AE_DBI_IC
#define AE_DBI_IC1 _TIE_xt_hifi2_AE_DBI_IC1
#define AE_DBI_IP _TIE_xt_hifi2_AE_DBI_IP
#define AE_DBI_XC _TIE_xt_hifi2_AE_DBI_XC
#define AE_DB_IC _TIE_xt_hifi2_AE_DB_IC
#define AE_DB_IC1 _TIE_xt_hifi2_AE_DB_IC1
#define AE_DB_IP _TIE_xt_hifi2_AE_DB_IP
#define AE_DB_XC _TIE_xt_hifi2_AE_DB_XC
#define AE_DIV64D32_H _TIE_xt_hifi2_AE_DIV64D32_H
#define AE_DIV64D32_L _TIE_xt_hifi2_AE_DIV64D32_L
#define AE_EQ16 _TIE_xt_hifi2_AE_EQ16
#define AE_EQ32 _TIE_xt_hifi2_AE_EQ32
#define AE_EQ64 _TIE_xt_hifi2_AE_EQ64
#define AE_EQP24 _TIE_xt_hifi2_AE_EQP24
#define AE_EQQ56 _TIE_xt_hifi2_AE_EQQ56
#define AE_F16X4_ADDS_F16 _TIE_xt_hifi2_AE_F16X4_ADDS_F16
#define AE_F16X4_ADDS_F16X4 _TIE_xt_hifi2_AE_F16X4_ADDS_F16X4
#define AE_F16X4_AND_F16 _TIE_xt_hifi2_AE_F16X4_AND_F16
#define AE_F16X4_AND_F16X4 _TIE_xt_hifi2_AE_F16X4_AND_F16X4
#define AE_F16X4_BNOT _TIE_xt_hifi2_AE_F16X4_BNOT
#define AE_F16X4_EQ_F16X4 _TIE_xt_hifi2_AE_F16X4_EQ_F16X4
#define AE_F16X4_F32X4_MUL _TIE_xt_hifi2_AE_F16X4_F32X4_MUL
#define AE_F16X4_GE_F16X4 _TIE_xt_hifi2_AE_F16X4_GE_F16X4
#define AE_F16X4_GT_F16X4 _TIE_xt_hifi2_AE_F16X4_GT_F16X4
#define AE_F16X4_LE_F16X4 _TIE_xt_hifi2_AE_F16X4_LE_F16X4
#define AE_F16X4_LT_F16X4 _TIE_xt_hifi2_AE_F16X4_LT_F16X4
#define AE_F16X4_MULF_F16X4 _TIE_xt_hifi2_AE_F16X4_MULF_F16X4
#define AE_F16X4_NEGS _TIE_xt_hifi2_AE_F16X4_NEGS
#define AE_F16X4_OR_F16 _TIE_xt_hifi2_AE_F16X4_OR_F16
#define AE_F16X4_OR_F16X4 _TIE_xt_hifi2_AE_F16X4_OR_F16X4
#define AE_F16X4_SLAIS _TIE_xt_hifi2_AE_F16X4_SLAIS
#define AE_F16X4_SLAS _TIE_xt_hifi2_AE_F16X4_SLAS
#define AE_F16X4_SRA _TIE_xt_hifi2_AE_F16X4_SRA
#define AE_F16X4_SRAI _TIE_xt_hifi2_AE_F16X4_SRAI
#define AE_F16X4_SUBS_F16 _TIE_xt_hifi2_AE_F16X4_SUBS_F16
#define AE_F16X4_SUBS_F16X4 _TIE_xt_hifi2_AE_F16X4_SUBS_F16X4
#define AE_F16X4_XOR_F16 _TIE_xt_hifi2_AE_F16X4_XOR_F16
#define AE_F16X4_XOR_F16X4 _TIE_xt_hifi2_AE_F16X4_XOR_F16X4
#define AE_F16_ADDS_F16 _TIE_xt_hifi2_AE_F16_ADDS_F16
#define AE_F16_ADDS_F16X4 _TIE_xt_hifi2_AE_F16_ADDS_F16X4
#define AE_F16_AND_F16 _TIE_xt_hifi2_AE_F16_AND_F16
#define AE_F16_AND_F16X4 _TIE_xt_hifi2_AE_F16_AND_F16X4
#define AE_F16_BNOT _TIE_xt_hifi2_AE_F16_BNOT
#define AE_F16_NEGS _TIE_xt_hifi2_AE_F16_NEGS
#define AE_F16_OR_F16 _TIE_xt_hifi2_AE_F16_OR_F16
#define AE_F16_OR_F16X4 _TIE_xt_hifi2_AE_F16_OR_F16X4
#define AE_F16_SLAIS _TIE_xt_hifi2_AE_F16_SLAIS
#define AE_F16_SLAS _TIE_xt_hifi2_AE_F16_SLAS
#define AE_F16_SRA _TIE_xt_hifi2_AE_F16_SRA
#define AE_F16_SRAI _TIE_xt_hifi2_AE_F16_SRAI
#define AE_F16_SUBS_F16 _TIE_xt_hifi2_AE_F16_SUBS_F16
#define AE_F16_SUBS_F16X4 _TIE_xt_hifi2_AE_F16_SUBS_F16X4
#define AE_F16_XOR_F16 _TIE_xt_hifi2_AE_F16_XOR_F16
#define AE_F16_XOR_F16X4 _TIE_xt_hifi2_AE_F16_XOR_F16X4
#define AE_F24X2_ADDS_F24 _TIE_xt_hifi2_AE_F24X2_ADDS_F24
#define AE_F24X2_ADDS_F24X2 _TIE_xt_hifi2_AE_F24X2_ADDS_F24X2
#define AE_F24X2_AND_F24 _TIE_xt_hifi2_AE_F24X2_AND_F24
#define AE_F24X2_AND_F24X2 _TIE_xt_hifi2_AE_F24X2_AND_F24X2
#define AE_F24X2_BNOT _TIE_xt_hifi2_AE_F24X2_BNOT
#define AE_F24X2_EQ_F24X2 _TIE_xt_hifi2_AE_F24X2_EQ_F24X2
#define AE_F24X2_GE_F24X2 _TIE_xt_hifi2_AE_F24X2_GE_F24X2
#define AE_F24X2_GT_F24X2 _TIE_xt_hifi2_AE_F24X2_GT_F24X2
#define AE_F24X2_LE_F24X2 _TIE_xt_hifi2_AE_F24X2_LE_F24X2
#define AE_F24X2_LT_F24X2 _TIE_xt_hifi2_AE_F24X2_LT_F24X2
#define AE_F24X2_MULF_F24X2 _TIE_xt_hifi2_AE_F24X2_MULF_F24X2
#define AE_F24X2_NEGS _TIE_xt_hifi2_AE_F24X2_NEGS
#define AE_F24X2_OR_F24 _TIE_xt_hifi2_AE_F24X2_OR_F24
#define AE_F24X2_OR_F24X2 _TIE_xt_hifi2_AE_F24X2_OR_F24X2
#define AE_F24X2_SLA _TIE_xt_hifi2_AE_F24X2_SLA
#define AE_F24X2_SLAI _TIE_xt_hifi2_AE_F24X2_SLAI
#define AE_F24X2_SRA _TIE_xt_hifi2_AE_F24X2_SRA
#define AE_F24X2_SRAI _TIE_xt_hifi2_AE_F24X2_SRAI
#define AE_F24X2_SUBS_F24 _TIE_xt_hifi2_AE_F24X2_SUBS_F24
#define AE_F24X2_SUBS_F24X2 _TIE_xt_hifi2_AE_F24X2_SUBS_F24X2
#define AE_F24X2_XOR_F24 _TIE_xt_hifi2_AE_F24X2_XOR_F24
#define AE_F24X2_XOR_F24X2 _TIE_xt_hifi2_AE_F24X2_XOR_F24X2
#define AE_F24_ADDS_F24 _TIE_xt_hifi2_AE_F24_ADDS_F24
#define AE_F24_ADDS_F24X2 _TIE_xt_hifi2_AE_F24_ADDS_F24X2
#define AE_F24_AND_F24 _TIE_xt_hifi2_AE_F24_AND_F24
#define AE_F24_AND_F24X2 _TIE_xt_hifi2_AE_F24_AND_F24X2
#define AE_F24_BNOT _TIE_xt_hifi2_AE_F24_BNOT
#define AE_F24_MULF_F24 _TIE_xt_hifi2_AE_F24_MULF_F24
#define AE_F24_NEGS _TIE_xt_hifi2_AE_F24_NEGS
#define AE_F24_OR_F24 _TIE_xt_hifi2_AE_F24_OR_F24
#define AE_F24_OR_F24X2 _TIE_xt_hifi2_AE_F24_OR_F24X2
#define AE_F24_SLA _TIE_xt_hifi2_AE_F24_SLA
#define AE_F24_SLAI _TIE_xt_hifi2_AE_F24_SLAI
#define AE_F24_SRA _TIE_xt_hifi2_AE_F24_SRA
#define AE_F24_SRAI _TIE_xt_hifi2_AE_F24_SRAI
#define AE_F24_SUBS_F24 _TIE_xt_hifi2_AE_F24_SUBS_F24
#define AE_F24_SUBS_F24X2 _TIE_xt_hifi2_AE_F24_SUBS_F24X2
#define AE_F24_XOR_F24 _TIE_xt_hifi2_AE_F24_XOR_F24
#define AE_F24_XOR_F24X2 _TIE_xt_hifi2_AE_F24_XOR_F24X2
#define AE_F32X2_ADDS_F32 _TIE_xt_hifi2_AE_F32X2_ADDS_F32
#define AE_F32X2_ADDS_F32X2 _TIE_xt_hifi2_AE_F32X2_ADDS_F32X2
#define AE_F32X2_AND_F32 _TIE_xt_hifi2_AE_F32X2_AND_F32
#define AE_F32X2_AND_F32X2 _TIE_xt_hifi2_AE_F32X2_AND_F32X2
#define AE_F32X2_BNOT _TIE_xt_hifi2_AE_F32X2_BNOT
#define AE_F32X2_EQ_F32X2 _TIE_xt_hifi2_AE_F32X2_EQ_F32X2
#define AE_F32X2_GE_F32X2 _TIE_xt_hifi2_AE_F32X2_GE_F32X2
#define AE_F32X2_GT_F32X2 _TIE_xt_hifi2_AE_F32X2_GT_F32X2
#define AE_F32X2_LE_F32X2 _TIE_xt_hifi2_AE_F32X2_LE_F32X2
#define AE_F32X2_LT_F32X2 _TIE_xt_hifi2_AE_F32X2_LT_F32X2
#define AE_F32X2_MULF_F32X2 _TIE_xt_hifi2_AE_F32X2_MULF_F32X2
#define AE_F32X2_NEGS _TIE_xt_hifi2_AE_F32X2_NEGS
#define AE_F32X2_OR_F32 _TIE_xt_hifi2_AE_F32X2_OR_F32
#define AE_F32X2_OR_F32X2 _TIE_xt_hifi2_AE_F32X2_OR_F32X2
#define AE_F32X2_RADD _TIE_xt_hifi2_AE_F32X2_RADD
#define AE_F32X2_SLAIS _TIE_xt_hifi2_AE_F32X2_SLAIS
#define AE_F32X2_SLAS _TIE_xt_hifi2_AE_F32X2_SLAS
#define AE_F32X2_SRA _TIE_xt_hifi2_AE_F32X2_SRA
#define AE_F32X2_SRAI _TIE_xt_hifi2_AE_F32X2_SRAI
#define AE_F32X2_SUBS_F32 _TIE_xt_hifi2_AE_F32X2_SUBS_F32
#define AE_F32X2_SUBS_F32X2 _TIE_xt_hifi2_AE_F32X2_SUBS_F32X2
#define AE_F32X2_XOR_F32 _TIE_xt_hifi2_AE_F32X2_XOR_F32
#define AE_F32X2_XOR_F32X2 _TIE_xt_hifi2_AE_F32X2_XOR_F32X2
#define AE_F32X4_ADD _TIE_xt_hifi2_AE_F32X4_ADD
#define AE_F32X4_AND _TIE_xt_hifi2_AE_F32X4_AND
#define AE_F32X4_BNOT _TIE_xt_hifi2_AE_F32X4_BNOT
#define AE_F32X4_F16X4_MUL _TIE_xt_hifi2_AE_F32X4_F16X4_MUL
#define AE_F32X4_NEG32 _TIE_xt_hifi2_AE_F32X4_NEG32
#define AE_F32X4_OR _TIE_xt_hifi2_AE_F32X4_OR
#define AE_F32X4_RADD _TIE_xt_hifi2_AE_F32X4_RADD
#define AE_F32X4_SLAA32S _TIE_xt_hifi2_AE_F32X4_SLAA32S
#define AE_F32X4_SLAI32S _TIE_xt_hifi2_AE_F32X4_SLAI32S
#define AE_F32X4_SRAA32 _TIE_xt_hifi2_AE_F32X4_SRAA32
#define AE_F32X4_SRAI32 _TIE_xt_hifi2_AE_F32X4_SRAI32
#define AE_F32X4_SUB _TIE_xt_hifi2_AE_F32X4_SUB
#define AE_F32X4_XOR _TIE_xt_hifi2_AE_F32X4_XOR
#define AE_F32_ADDS_F32 _TIE_xt_hifi2_AE_F32_ADDS_F32
#define AE_F32_ADDS_F32X2 _TIE_xt_hifi2_AE_F32_ADDS_F32X2
#define AE_F32_AND_F32 _TIE_xt_hifi2_AE_F32_AND_F32
#define AE_F32_AND_F32X2 _TIE_xt_hifi2_AE_F32_AND_F32X2
#define AE_F32_BNOT _TIE_xt_hifi2_AE_F32_BNOT
#define AE_F32_MULF_F32 _TIE_xt_hifi2_AE_F32_MULF_F32
#define AE_F32_MUL_F16 _TIE_xt_hifi2_AE_F32_MUL_F16
#define AE_F32_NEGS _TIE_xt_hifi2_AE_F32_NEGS
#define AE_F32_OR_F32 _TIE_xt_hifi2_AE_F32_OR_F32
#define AE_F32_OR_F32X2 _TIE_xt_hifi2_AE_F32_OR_F32X2
#define AE_F32_SLAIS _TIE_xt_hifi2_AE_F32_SLAIS
#define AE_F32_SLAS _TIE_xt_hifi2_AE_F32_SLAS
#define AE_F32_SRA _TIE_xt_hifi2_AE_F32_SRA
#define AE_F32_SRAI _TIE_xt_hifi2_AE_F32_SRAI
#define AE_F32_SUBS_F32 _TIE_xt_hifi2_AE_F32_SUBS_F32
#define AE_F32_SUBS_F32X2 _TIE_xt_hifi2_AE_F32_SUBS_F32X2
#define AE_F32_XOR_F32 _TIE_xt_hifi2_AE_F32_XOR_F32
#define AE_F32_XOR_F32X2 _TIE_xt_hifi2_AE_F32_XOR_F32X2
#define AE_F64_ADDS _TIE_xt_hifi2_AE_F64_ADDS
#define AE_F64_AND _TIE_xt_hifi2_AE_F64_AND
#define AE_F64_BNOT _TIE_xt_hifi2_AE_F64_BNOT
#define AE_F64_EQ _TIE_xt_hifi2_AE_F64_EQ
#define AE_F64_GE _TIE_xt_hifi2_AE_F64_GE
#define AE_F64_GT _TIE_xt_hifi2_AE_F64_GT
#define AE_F64_LE _TIE_xt_hifi2_AE_F64_LE
#define AE_F64_LT _TIE_xt_hifi2_AE_F64_LT
#define AE_F64_NEGS _TIE_xt_hifi2_AE_F64_NEGS
#define AE_F64_OR _TIE_xt_hifi2_AE_F64_OR
#define AE_F64_SLAIS _TIE_xt_hifi2_AE_F64_SLAIS
#define AE_F64_SLAS _TIE_xt_hifi2_AE_F64_SLAS
#define AE_F64_SRA _TIE_xt_hifi2_AE_F64_SRA
#define AE_F64_SRAI _TIE_xt_hifi2_AE_F64_SRAI
#define AE_F64_SUBS _TIE_xt_hifi2_AE_F64_SUBS
#define AE_F64_XOR _TIE_xt_hifi2_AE_F64_XOR
#define AE_GETCBEGIN0 _TIE_xt_hifi2_AE_GETCBEGIN0
#define AE_GETCBEGIN1 _TIE_xt_hifi2_AE_GETCBEGIN1
#define AE_GETCEND0 _TIE_xt_hifi2_AE_GETCEND0
#define AE_GETCEND1 _TIE_xt_hifi2_AE_GETCEND1
#define AE_INT16X4_ADD_INT16 _TIE_xt_hifi2_AE_INT16X4_ADD_INT16
#define AE_INT16X4_ADD_INT16X4 _TIE_xt_hifi2_AE_INT16X4_ADD_INT16X4
#define AE_INT16X4_AND_INT16 _TIE_xt_hifi2_AE_INT16X4_AND_INT16
#define AE_INT16X4_AND_INT16X4 _TIE_xt_hifi2_AE_INT16X4_AND_INT16X4
#define AE_INT16X4_BNOT _TIE_xt_hifi2_AE_INT16X4_BNOT
#define AE_INT16X4_EQ_INT16X4 _TIE_xt_hifi2_AE_INT16X4_EQ_INT16X4
#define AE_INT16X4_GE_INT16X4 _TIE_xt_hifi2_AE_INT16X4_GE_INT16X4
#define AE_INT16X4_GT_INT16X4 _TIE_xt_hifi2_AE_INT16X4_GT_INT16X4
#define AE_INT16X4_INT32X4_MUL _TIE_xt_hifi2_AE_INT16X4_INT32X4_MUL
#define AE_INT16X4_LE_INT16X4 _TIE_xt_hifi2_AE_INT16X4_LE_INT16X4
#define AE_INT16X4_LT_INT16X4 _TIE_xt_hifi2_AE_INT16X4_LT_INT16X4
#define AE_INT16X4_MAX _TIE_xt_hifi2_AE_INT16X4_MAX
#define AE_INT16X4_MIN _TIE_xt_hifi2_AE_INT16X4_MIN
#define AE_INT16X4_MUL_INT16X4 _TIE_xt_hifi2_AE_INT16X4_MUL_INT16X4
#define AE_INT16X4_NAND_INT16X4 _TIE_xt_hifi2_AE_INT16X4_NAND_INT16X4
#define AE_INT16X4_NEG _TIE_xt_hifi2_AE_INT16X4_NEG
#define AE_INT16X4_OR_INT16 _TIE_xt_hifi2_AE_INT16X4_OR_INT16
#define AE_INT16X4_OR_INT16X4 _TIE_xt_hifi2_AE_INT16X4_OR_INT16X4
#define AE_INT16X4_RADD _TIE_xt_hifi2_AE_INT16X4_RADD
#define AE_INT16X4_RMADD_INT16X4_scalar _TIE_xt_hifi2_AE_INT16X4_RMADD_INT16X4_scalar
#define AE_INT16X4_RMADD_INT16X4_vector _TIE_xt_hifi2_AE_INT16X4_RMADD_INT16X4_vector
#define AE_INT16X4_RMAX _TIE_xt_hifi2_AE_INT16X4_RMAX
#define AE_INT16X4_RMIN _TIE_xt_hifi2_AE_INT16X4_RMIN
#define AE_INT16X4_SRA _TIE_xt_hifi2_AE_INT16X4_SRA
#define AE_INT16X4_SRAI _TIE_xt_hifi2_AE_INT16X4_SRAI
#define AE_INT16X4_SUB_INT16 _TIE_xt_hifi2_AE_INT16X4_SUB_INT16
#define AE_INT16X4_SUB_INT16X4 _TIE_xt_hifi2_AE_INT16X4_SUB_INT16X4
#define AE_INT16X4_XOR_INT16 _TIE_xt_hifi2_AE_INT16X4_XOR_INT16
#define AE_INT16X4_XOR_INT16X4 _TIE_xt_hifi2_AE_INT16X4_XOR_INT16X4
#define AE_INT16_ADD_INT16 _TIE_xt_hifi2_AE_INT16_ADD_INT16
#define AE_INT16_ADD_INT16X4 _TIE_xt_hifi2_AE_INT16_ADD_INT16X4
#define AE_INT16_AND_INT16 _TIE_xt_hifi2_AE_INT16_AND_INT16
#define AE_INT16_AND_INT16X4 _TIE_xt_hifi2_AE_INT16_AND_INT16X4
#define AE_INT16_BNOT _TIE_xt_hifi2_AE_INT16_BNOT
#define AE_INT16_NEG _TIE_xt_hifi2_AE_INT16_NEG
#define AE_INT16_OR_INT16 _TIE_xt_hifi2_AE_INT16_OR_INT16
#define AE_INT16_OR_INT16X4 _TIE_xt_hifi2_AE_INT16_OR_INT16X4
#define AE_INT16_SRA _TIE_xt_hifi2_AE_INT16_SRA
#define AE_INT16_SRAI _TIE_xt_hifi2_AE_INT16_SRAI
#define AE_INT16_SUB_INT16 _TIE_xt_hifi2_AE_INT16_SUB_INT16
#define AE_INT16_SUB_INT16X4 _TIE_xt_hifi2_AE_INT16_SUB_INT16X4
#define AE_INT16_XOR_INT16 _TIE_xt_hifi2_AE_INT16_XOR_INT16
#define AE_INT16_XOR_INT16X4 _TIE_xt_hifi2_AE_INT16_XOR_INT16X4
#define AE_INT24X2_ADD_INT24 _TIE_xt_hifi2_AE_INT24X2_ADD_INT24
#define AE_INT24X2_ADD_INT24X2 _TIE_xt_hifi2_AE_INT24X2_ADD_INT24X2
#define AE_INT24X2_AND_INT24 _TIE_xt_hifi2_AE_INT24X2_AND_INT24
#define AE_INT24X2_AND_INT24X2 _TIE_xt_hifi2_AE_INT24X2_AND_INT24X2
#define AE_INT24X2_BNOT _TIE_xt_hifi2_AE_INT24X2_BNOT
#define AE_INT24X2_EQ_INT24X2 _TIE_xt_hifi2_AE_INT24X2_EQ_INT24X2
#define AE_INT24X2_GE_INT24X2 _TIE_xt_hifi2_AE_INT24X2_GE_INT24X2
#define AE_INT24X2_GT_INT24X2 _TIE_xt_hifi2_AE_INT24X2_GT_INT24X2
#define AE_INT24X2_LE_INT24X2 _TIE_xt_hifi2_AE_INT24X2_LE_INT24X2
#define AE_INT24X2_LT_INT24X2 _TIE_xt_hifi2_AE_INT24X2_LT_INT24X2
#define AE_INT24X2_MUL_INT24X2 _TIE_xt_hifi2_AE_INT24X2_MUL_INT24X2
#define AE_INT24X2_NEG _TIE_xt_hifi2_AE_INT24X2_NEG
#define AE_INT24X2_OR_INT24 _TIE_xt_hifi2_AE_INT24X2_OR_INT24
#define AE_INT24X2_OR_INT24X2 _TIE_xt_hifi2_AE_INT24X2_OR_INT24X2
#define AE_INT24X2_SLA _TIE_xt_hifi2_AE_INT24X2_SLA
#define AE_INT24X2_SLAI _TIE_xt_hifi2_AE_INT24X2_SLAI
#define AE_INT24X2_SRA _TIE_xt_hifi2_AE_INT24X2_SRA
#define AE_INT24X2_SRAI _TIE_xt_hifi2_AE_INT24X2_SRAI
#define AE_INT24X2_SUB_INT24 _TIE_xt_hifi2_AE_INT24X2_SUB_INT24
#define AE_INT24X2_SUB_INT24X2 _TIE_xt_hifi2_AE_INT24X2_SUB_INT24X2
#define AE_INT24X2_XOR_INT24 _TIE_xt_hifi2_AE_INT24X2_XOR_INT24
#define AE_INT24X2_XOR_INT24X2 _TIE_xt_hifi2_AE_INT24X2_XOR_INT24X2
#define AE_INT24_ADD_INT24 _TIE_xt_hifi2_AE_INT24_ADD_INT24
#define AE_INT24_ADD_INT24X2 _TIE_xt_hifi2_AE_INT24_ADD_INT24X2
#define AE_INT24_AND_INT24 _TIE_xt_hifi2_AE_INT24_AND_INT24
#define AE_INT24_AND_INT24X2 _TIE_xt_hifi2_AE_INT24_AND_INT24X2
#define AE_INT24_BNOT _TIE_xt_hifi2_AE_INT24_BNOT
#define AE_INT24_MUL_INT24 _TIE_xt_hifi2_AE_INT24_MUL_INT24
#define AE_INT24_NEG _TIE_xt_hifi2_AE_INT24_NEG
#define AE_INT24_OR_INT24 _TIE_xt_hifi2_AE_INT24_OR_INT24
#define AE_INT24_OR_INT24X2 _TIE_xt_hifi2_AE_INT24_OR_INT24X2
#define AE_INT24_SLA _TIE_xt_hifi2_AE_INT24_SLA
#define AE_INT24_SLAI _TIE_xt_hifi2_AE_INT24_SLAI
#define AE_INT24_SRA _TIE_xt_hifi2_AE_INT24_SRA
#define AE_INT24_SRAI _TIE_xt_hifi2_AE_INT24_SRAI
#define AE_INT24_SUB_INT24 _TIE_xt_hifi2_AE_INT24_SUB_INT24
#define AE_INT24_SUB_INT24X2 _TIE_xt_hifi2_AE_INT24_SUB_INT24X2
#define AE_INT24_XOR_INT24 _TIE_xt_hifi2_AE_INT24_XOR_INT24
#define AE_INT24_XOR_INT24X2 _TIE_xt_hifi2_AE_INT24_XOR_INT24X2
#define AE_INT32X2_ABS32S _TIE_xt_hifi2_AE_INT32X2_ABS32S
#define AE_INT32X2_ADD32S _TIE_xt_hifi2_AE_INT32X2_ADD32S
#define AE_INT32X2_ADD_INT32 _TIE_xt_hifi2_AE_INT32X2_ADD_INT32
#define AE_INT32X2_ADD_INT32X2 _TIE_xt_hifi2_AE_INT32X2_ADD_INT32X2
#define AE_INT32X2_AND_INT32 _TIE_xt_hifi2_AE_INT32X2_AND_INT32
#define AE_INT32X2_AND_INT32X2 _TIE_xt_hifi2_AE_INT32X2_AND_INT32X2
#define AE_INT32X2_AND_rfini _TIE_xt_hifi2_AE_INT32X2_AND_rfini
#define AE_INT32X2_AND_rinit _TIE_xt_hifi2_AE_INT32X2_AND_rinit
#define AE_INT32X2_AND_rvec _TIE_xt_hifi2_AE_INT32X2_AND_rvec
#define AE_INT32X2_BNOT _TIE_xt_hifi2_AE_INT32X2_BNOT
#define AE_INT32X2_EQ_INT32X2 _TIE_xt_hifi2_AE_INT32X2_EQ_INT32X2
#define AE_INT32X2_GE_INT32X2 _TIE_xt_hifi2_AE_INT32X2_GE_INT32X2
#define AE_INT32X2_GT_INT32X2 _TIE_xt_hifi2_AE_INT32X2_GT_INT32X2
#define AE_INT32X2_LE_INT32X2 _TIE_xt_hifi2_AE_INT32X2_LE_INT32X2
#define AE_INT32X2_LT_INT32X2 _TIE_xt_hifi2_AE_INT32X2_LT_INT32X2
#define AE_INT32X2_MUL_INT32X2 _TIE_xt_hifi2_AE_INT32X2_MUL_INT32X2
#define AE_INT32X2_NEG _TIE_xt_hifi2_AE_INT32X2_NEG
#define AE_INT32X2_NEG32S _TIE_xt_hifi2_AE_INT32X2_NEG32S
#define AE_INT32X2_NOT _TIE_xt_hifi2_AE_INT32X2_NOT
#define AE_INT32X2_OR_INT32 _TIE_xt_hifi2_AE_INT32X2_OR_INT32
#define AE_INT32X2_OR_INT32X2 _TIE_xt_hifi2_AE_INT32X2_OR_INT32X2
#define AE_INT32X2_OR_rfini _TIE_xt_hifi2_AE_INT32X2_OR_rfini
#define AE_INT32X2_OR_rinit _TIE_xt_hifi2_AE_INT32X2_OR_rinit
#define AE_INT32X2_OR_rvec _TIE_xt_hifi2_AE_INT32X2_OR_rvec
#define AE_INT32X2_RADD _TIE_xt_hifi2_AE_INT32X2_RADD
#define AE_INT32X2_RMAX _TIE_xt_hifi2_AE_INT32X2_RMAX
#define AE_INT32X2_RMIN _TIE_xt_hifi2_AE_INT32X2_RMIN
#define AE_INT32X2_SLA _TIE_xt_hifi2_AE_INT32X2_SLA
#define AE_INT32X2_SLAI _TIE_xt_hifi2_AE_INT32X2_SLAI
#define AE_INT32X2_SRA _TIE_xt_hifi2_AE_INT32X2_SRA
#define AE_INT32X2_SRAI _TIE_xt_hifi2_AE_INT32X2_SRAI
#define AE_INT32X2_SUB32S _TIE_xt_hifi2_AE_INT32X2_SUB32S
#define AE_INT32X2_SUB_INT32 _TIE_xt_hifi2_AE_INT32X2_SUB_INT32
#define AE_INT32X2_SUB_INT32X2 _TIE_xt_hifi2_AE_INT32X2_SUB_INT32X2
#define AE_INT32X2_XOR_INT32 _TIE_xt_hifi2_AE_INT32X2_XOR_INT32
#define AE_INT32X2_XOR_INT32X2 _TIE_xt_hifi2_AE_INT32X2_XOR_INT32X2
#define AE_INT32X2_XOR_rfini _TIE_xt_hifi2_AE_INT32X2_XOR_rfini
#define AE_INT32X2_XOR_rinit _TIE_xt_hifi2_AE_INT32X2_XOR_rinit
#define AE_INT32X2_XOR_rvec _TIE_xt_hifi2_AE_INT32X2_XOR_rvec
#define AE_INT32X4_ABS32 _TIE_xt_hifi2_AE_INT32X4_ABS32
#define AE_INT32X4_ABS32S _TIE_xt_hifi2_AE_INT32X4_ABS32S
#define AE_INT32X4_ADD _TIE_xt_hifi2_AE_INT32X4_ADD
#define AE_INT32X4_ADD32S _TIE_xt_hifi2_AE_INT32X4_ADD32S
#define AE_INT32X4_AND _TIE_xt_hifi2_AE_INT32X4_AND
#define AE_INT32X4_BNOT _TIE_xt_hifi2_AE_INT32X4_BNOT
#define AE_INT32X4_INT16X4_MUL _TIE_xt_hifi2_AE_INT32X4_INT16X4_MUL
#define AE_INT32X4_MAX _TIE_xt_hifi2_AE_INT32X4_MAX
#define AE_INT32X4_MIN _TIE_xt_hifi2_AE_INT32X4_MIN
#define AE_INT32X4_NEG32 _TIE_xt_hifi2_AE_INT32X4_NEG32
#define AE_INT32X4_NEG32S _TIE_xt_hifi2_AE_INT32X4_NEG32S
#define AE_INT32X4_OR _TIE_xt_hifi2_AE_INT32X4_OR
#define AE_INT32X4_RADD _TIE_xt_hifi2_AE_INT32X4_RADD
#define AE_INT32X4_SLAA32 _TIE_xt_hifi2_AE_INT32X4_SLAA32
#define AE_INT32X4_SLAI32 _TIE_xt_hifi2_AE_INT32X4_SLAI32
#define AE_INT32X4_SRAA32 _TIE_xt_hifi2_AE_INT32X4_SRAA32
#define AE_INT32X4_SRAI32 _TIE_xt_hifi2_AE_INT32X4_SRAI32
#define AE_INT32X4_SUB _TIE_xt_hifi2_AE_INT32X4_SUB
#define AE_INT32X4_SUB32S _TIE_xt_hifi2_AE_INT32X4_SUB32S
#define AE_INT32X4_XOR _TIE_xt_hifi2_AE_INT32X4_XOR
#define AE_INT32_ADD_INT32 _TIE_xt_hifi2_AE_INT32_ADD_INT32
#define AE_INT32_ADD_INT32X2 _TIE_xt_hifi2_AE_INT32_ADD_INT32X2
#define AE_INT32_AND_INT32 _TIE_xt_hifi2_AE_INT32_AND_INT32
#define AE_INT32_AND_INT32X2 _TIE_xt_hifi2_AE_INT32_AND_INT32X2
#define AE_INT32_BNOT _TIE_xt_hifi2_AE_INT32_BNOT
#define AE_INT32_MUL_INT16 _TIE_xt_hifi2_AE_INT32_MUL_INT16
#define AE_INT32_MUL_INT32 _TIE_xt_hifi2_AE_INT32_MUL_INT32
#define AE_INT32_NEG _TIE_xt_hifi2_AE_INT32_NEG
#define AE_INT32_OR_INT32 _TIE_xt_hifi2_AE_INT32_OR_INT32
#define AE_INT32_OR_INT32X2 _TIE_xt_hifi2_AE_INT32_OR_INT32X2
#define AE_INT32_SLA _TIE_xt_hifi2_AE_INT32_SLA
#define AE_INT32_SLAI _TIE_xt_hifi2_AE_INT32_SLAI
#define AE_INT32_SRA _TIE_xt_hifi2_AE_INT32_SRA
#define AE_INT32_SRAI _TIE_xt_hifi2_AE_INT32_SRAI
#define AE_INT32_SUB_INT32 _TIE_xt_hifi2_AE_INT32_SUB_INT32
#define AE_INT32_SUB_INT32X2 _TIE_xt_hifi2_AE_INT32_SUB_INT32X2
#define AE_INT32_XOR_INT32 _TIE_xt_hifi2_AE_INT32_XOR_INT32
#define AE_INT32_XOR_INT32X2 _TIE_xt_hifi2_AE_INT32_XOR_INT32X2
#define AE_INT64X2_RADD _TIE_xt_hifi2_AE_INT64X2_RADD
#define AE_INT64X2_RMAX _TIE_xt_hifi2_AE_INT64X2_RMAX
#define AE_INT64X2_RMIN _TIE_xt_hifi2_AE_INT64X2_RMIN
#define AE_INT64_ADD _TIE_xt_hifi2_AE_INT64_ADD
#define AE_INT64_AND _TIE_xt_hifi2_AE_INT64_AND
#define AE_INT64_BNOT _TIE_xt_hifi2_AE_INT64_BNOT
#define AE_INT64_EQ _TIE_xt_hifi2_AE_INT64_EQ
#define AE_INT64_GE _TIE_xt_hifi2_AE_INT64_GE
#define AE_INT64_GT _TIE_xt_hifi2_AE_INT64_GT
#define AE_INT64_LE _TIE_xt_hifi2_AE_INT64_LE
#define AE_INT64_LT _TIE_xt_hifi2_AE_INT64_LT
#define AE_INT64_NEG _TIE_xt_hifi2_AE_INT64_NEG
#define AE_INT64_OR _TIE_xt_hifi2_AE_INT64_OR
#define AE_INT64_SLA _TIE_xt_hifi2_AE_INT64_SLA
#define AE_INT64_SLAI _TIE_xt_hifi2_AE_INT64_SLAI
#define AE_INT64_SRA _TIE_xt_hifi2_AE_INT64_SRA
#define AE_INT64_SRAI _TIE_xt_hifi2_AE_INT64_SRAI
#define AE_INT64_SUB _TIE_xt_hifi2_AE_INT64_SUB
#define AE_INT64_XOR _TIE_xt_hifi2_AE_INT64_XOR
#define AE_L16M_I _TIE_xt_hifi2_AE_L16M_I
#define AE_L16M_IU _TIE_xt_hifi2_AE_L16M_IU
#define AE_L16M_X _TIE_xt_hifi2_AE_L16M_X
#define AE_L16M_XC _TIE_xt_hifi2_AE_L16M_XC
#define AE_L16M_XC1 _TIE_xt_hifi2_AE_L16M_XC1
#define AE_L16M_XU _TIE_xt_hifi2_AE_L16M_XU
#define AE_L16SI_N _TIE_xt_hifi2_AE_L16SI_N
#define AE_L16UI_N _TIE_xt_hifi2_AE_L16UI_N
#define AE_L16X2M_I _TIE_xt_hifi2_AE_L16X2M_I
#define AE_L16X2M_IU _TIE_xt_hifi2_AE_L16X2M_IU
#define AE_L16X2M_X _TIE_xt_hifi2_AE_L16X2M_X
#define AE_L16X2M_XC _TIE_xt_hifi2_AE_L16X2M_XC
#define AE_L16X2M_XC1 _TIE_xt_hifi2_AE_L16X2M_XC1
#define AE_L16X2M_XU _TIE_xt_hifi2_AE_L16X2M_XU
#define AE_L16X4_I _TIE_xt_hifi2_AE_L16X4_I
#define AE_L16X4_IP _TIE_xt_hifi2_AE_L16X4_IP
#define AE_L16X4_RI _TIE_xt_hifi2_AE_L16X4_RI
#define AE_L16X4_RIC _TIE_xt_hifi2_AE_L16X4_RIC
#define AE_L16X4_RIC1 _TIE_xt_hifi2_AE_L16X4_RIC1
#define AE_L16X4_RIP _TIE_xt_hifi2_AE_L16X4_RIP
#define AE_L16X4_X _TIE_xt_hifi2_AE_L16X4_X
#define AE_L16X4_XC _TIE_xt_hifi2_AE_L16X4_XC
#define AE_L16X4_XC1 _TIE_xt_hifi2_AE_L16X4_XC1
#define AE_L16X4_XP _TIE_xt_hifi2_AE_L16X4_XP
#define AE_L16_I _TIE_xt_hifi2_AE_L16_I
#define AE_L16_IP _TIE_xt_hifi2_AE_L16_IP
#define AE_L16_X _TIE_xt_hifi2_AE_L16_X
#define AE_L16_XC _TIE_xt_hifi2_AE_L16_XC
#define AE_L16_XC1 _TIE_xt_hifi2_AE_L16_XC1
#define AE_L16_XP _TIE_xt_hifi2_AE_L16_XP
#define AE_L24X2_I _TIE_xt_hifi2_AE_L24X2_I
#define AE_L24X2_IP _TIE_xt_hifi2_AE_L24X2_IP
#define AE_L24X2_X _TIE_xt_hifi2_AE_L24X2_X
#define AE_L24X2_XP _TIE_xt_hifi2_AE_L24X2_XP
#define AE_L32F24_I _TIE_xt_hifi2_AE_L32F24_I
#define AE_L32F24_IP _TIE_xt_hifi2_AE_L32F24_IP
#define AE_L32F24_X _TIE_xt_hifi2_AE_L32F24_X
#define AE_L32F24_XC _TIE_xt_hifi2_AE_L32F24_XC
#define AE_L32F24_XC1 _TIE_xt_hifi2_AE_L32F24_XC1
#define AE_L32F24_XP _TIE_xt_hifi2_AE_L32F24_XP
#define AE_L32M_I _TIE_xt_hifi2_AE_L32M_I
#define AE_L32M_IU _TIE_xt_hifi2_AE_L32M_IU
#define AE_L32M_X _TIE_xt_hifi2_AE_L32M_X
#define AE_L32M_XC _TIE_xt_hifi2_AE_L32M_XC
#define AE_L32M_XU _TIE_xt_hifi2_AE_L32M_XU
#define AE_L32X2F24_I _TIE_xt_hifi2_AE_L32X2F24_I
#define AE_L32X2F24_IP _TIE_xt_hifi2_AE_L32X2F24_IP
#define AE_L32X2F24_RI _TIE_xt_hifi2_AE_L32X2F24_RI
#define AE_L32X2F24_RIC _TIE_xt_hifi2_AE_L32X2F24_RIC
#define AE_L32X2F24_RIC1 _TIE_xt_hifi2_AE_L32X2F24_RIC1
#define AE_L32X2F24_RIP _TIE_xt_hifi2_AE_L32X2F24_RIP
#define AE_L32X2F24_X _TIE_xt_hifi2_AE_L32X2F24_X
#define AE_L32X2F24_XC _TIE_xt_hifi2_AE_L32X2F24_XC
#define AE_L32X2F24_XC1 _TIE_xt_hifi2_AE_L32X2F24_XC1
#define AE_L32X2F24_XP _TIE_xt_hifi2_AE_L32X2F24_XP
#define AE_L32X2_I _TIE_xt_hifi2_AE_L32X2_I
#define AE_L32X2_IP _TIE_xt_hifi2_AE_L32X2_IP
#define AE_L32X2_RI _TIE_xt_hifi2_AE_L32X2_RI
#define AE_L32X2_RIC _TIE_xt_hifi2_AE_L32X2_RIC
#define AE_L32X2_RIC1 _TIE_xt_hifi2_AE_L32X2_RIC1
#define AE_L32X2_RIP _TIE_xt_hifi2_AE_L32X2_RIP
#define AE_L32X2_X _TIE_xt_hifi2_AE_L32X2_X
#define AE_L32X2_XC _TIE_xt_hifi2_AE_L32X2_XC
#define AE_L32X2_XC1 _TIE_xt_hifi2_AE_L32X2_XC1
#define AE_L32X2_XP _TIE_xt_hifi2_AE_L32X2_XP
#define AE_L32_I _TIE_xt_hifi2_AE_L32_I
#define AE_L32_IP _TIE_xt_hifi2_AE_L32_IP
#define AE_L32_X _TIE_xt_hifi2_AE_L32_X
#define AE_L32_XC _TIE_xt_hifi2_AE_L32_XC
#define AE_L32_XC1 _TIE_xt_hifi2_AE_L32_XC1
#define AE_L32_XP _TIE_xt_hifi2_AE_L32_XP
#define AE_L64_I _TIE_xt_hifi2_AE_L64_I
#define AE_L64_IP _TIE_xt_hifi2_AE_L64_IP
#define AE_L64_X _TIE_xt_hifi2_AE_L64_X
#define AE_L64_XC _TIE_xt_hifi2_AE_L64_XC
#define AE_L64_XC1 _TIE_xt_hifi2_AE_L64_XC1
#define AE_L64_XP _TIE_xt_hifi2_AE_L64_XP
#define AE_L8X4F_I _TIE_xt_hifi2_AE_L8X4F_I
#define AE_L8X4F_IP _TIE_xt_hifi2_AE_L8X4F_IP
#define AE_LA16X4NEG_PC _TIE_xt_hifi2_AE_LA16X4NEG_PC
#define AE_LA16X4NEG_PC1 _TIE_xt_hifi2_AE_LA16X4NEG_PC1
#define AE_LA16X4POS_PC _TIE_xt_hifi2_AE_LA16X4POS_PC
#define AE_LA16X4POS_PC1 _TIE_xt_hifi2_AE_LA16X4POS_PC1
#define AE_LA16X4_IC _TIE_xt_hifi2_AE_LA16X4_IC
#define AE_LA16X4_IC1 _TIE_xt_hifi2_AE_LA16X4_IC1
#define AE_LA16X4_IP _TIE_xt_hifi2_AE_LA16X4_IP
#define AE_LA16X4_RIC _TIE_xt_hifi2_AE_LA16X4_RIC
#define AE_LA16X4_RIC1 _TIE_xt_hifi2_AE_LA16X4_RIC1
#define AE_LA16X4_RIP _TIE_xt_hifi2_AE_LA16X4_RIP
#define AE_LA24NEG_PC _TIE_xt_hifi2_AE_LA24NEG_PC
#define AE_LA24NEG_PC1 _TIE_xt_hifi2_AE_LA24NEG_PC1
#define AE_LA24POS_PC _TIE_xt_hifi2_AE_LA24POS_PC
#define AE_LA24POS_PC1 _TIE_xt_hifi2_AE_LA24POS_PC1
#define AE_LA24X2NEG_PC _TIE_xt_hifi2_AE_LA24X2NEG_PC
#define AE_LA24X2NEG_PC1 _TIE_xt_hifi2_AE_LA24X2NEG_PC1
#define AE_LA24X2POS_PC _TIE_xt_hifi2_AE_LA24X2POS_PC
#define AE_LA24X2POS_PC1 _TIE_xt_hifi2_AE_LA24X2POS_PC1
#define AE_LA24X2_IC _TIE_xt_hifi2_AE_LA24X2_IC
#define AE_LA24X2_IC1 _TIE_xt_hifi2_AE_LA24X2_IC1
#define AE_LA24X2_IP _TIE_xt_hifi2_AE_LA24X2_IP
#define AE_LA24X2_RIC _TIE_xt_hifi2_AE_LA24X2_RIC
#define AE_LA24X2_RIC1 _TIE_xt_hifi2_AE_LA24X2_RIC1
#define AE_LA24X2_RIP _TIE_xt_hifi2_AE_LA24X2_RIP
#define AE_LA24_IC _TIE_xt_hifi2_AE_LA24_IC
#define AE_LA24_IC1 _TIE_xt_hifi2_AE_LA24_IC1
#define AE_LA24_IP _TIE_xt_hifi2_AE_LA24_IP
#define AE_LA24_RIC _TIE_xt_hifi2_AE_LA24_RIC
#define AE_LA24_RIC1 _TIE_xt_hifi2_AE_LA24_RIC1
#define AE_LA24_RIP _TIE_xt_hifi2_AE_LA24_RIP
#define AE_LA32X2F24NEG_PC _TIE_xt_hifi2_AE_LA32X2F24NEG_PC
#define AE_LA32X2F24NEG_PC1 _TIE_xt_hifi2_AE_LA32X2F24NEG_PC1
#define AE_LA32X2F24POS_PC _TIE_xt_hifi2_AE_LA32X2F24POS_PC
#define AE_LA32X2F24POS_PC1 _TIE_xt_hifi2_AE_LA32X2F24POS_PC1
#define AE_LA32X2F24_IC _TIE_xt_hifi2_AE_LA32X2F24_IC
#define AE_LA32X2F24_IC1 _TIE_xt_hifi2_AE_LA32X2F24_IC1
#define AE_LA32X2F24_IP _TIE_xt_hifi2_AE_LA32X2F24_IP
#define AE_LA32X2F24_RIC _TIE_xt_hifi2_AE_LA32X2F24_RIC
#define AE_LA32X2F24_RIC1 _TIE_xt_hifi2_AE_LA32X2F24_RIC1
#define AE_LA32X2F24_RIP _TIE_xt_hifi2_AE_LA32X2F24_RIP
#define AE_LA32X2NEG_PC _TIE_xt_hifi2_AE_LA32X2NEG_PC
#define AE_LA32X2NEG_PC1 _TIE_xt_hifi2_AE_LA32X2NEG_PC1
#define AE_LA32X2POS_PC _TIE_xt_hifi2_AE_LA32X2POS_PC
#define AE_LA32X2POS_PC1 _TIE_xt_hifi2_AE_LA32X2POS_PC1
#define AE_LA32X2_IC _TIE_xt_hifi2_AE_LA32X2_IC
#define AE_LA32X2_IC1 _TIE_xt_hifi2_AE_LA32X2_IC1
#define AE_LA32X2_IP _TIE_xt_hifi2_AE_LA32X2_IP
#define AE_LA32X2_RIC _TIE_xt_hifi2_AE_LA32X2_RIC
#define AE_LA32X2_RIC1 _TIE_xt_hifi2_AE_LA32X2_RIC1
#define AE_LA32X2_RIP _TIE_xt_hifi2_AE_LA32X2_RIP
#define AE_LA64_PP _TIE_xt_hifi2_AE_LA64_PP
#define AE_LALIGN64_I _TIE_xt_hifi2_AE_LALIGN64_I
#define AE_LB _TIE_xt_hifi2_AE_LB
#define AE_LBI _TIE_xt_hifi2_AE_LBI
#define AE_LBK _TIE_xt_hifi2_AE_LBK
#define AE_LBKI _TIE_xt_hifi2_AE_LBKI
#define AE_LBS _TIE_xt_hifi2_AE_LBS
#define AE_LBSI _TIE_xt_hifi2_AE_LBSI
#define AE_LE16 _TIE_xt_hifi2_AE_LE16
#define AE_LE32 _TIE_xt_hifi2_AE_LE32
#define AE_LE64 _TIE_xt_hifi2_AE_LE64
#define AE_LEP24S _TIE_xt_hifi2_AE_LEP24S
#define AE_LEQ56S _TIE_xt_hifi2_AE_LEQ56S
#define AE_LF16X4_I _TIE_xt_hifi2_AE_LF16X4_I
#define AE_LF16X4_IP _TIE_xt_hifi2_AE_LF16X4_IP
#define AE_LF16X4_X _TIE_xt_hifi2_AE_LF16X4_X
#define AE_LF16X4_XP _TIE_xt_hifi2_AE_LF16X4_XP
#define AE_LF24X2_I _TIE_xt_hifi2_AE_LF24X2_I
#define AE_LF24X2_IP _TIE_xt_hifi2_AE_LF24X2_IP
#define AE_LF24X2_RI _TIE_xt_hifi2_AE_LF24X2_RI
#define AE_LF24X2_X _TIE_xt_hifi2_AE_LF24X2_X
#define AE_LF24X2_XP _TIE_xt_hifi2_AE_LF24X2_XP
#define AE_LF24_I _TIE_xt_hifi2_AE_LF24_I
#define AE_LF24_IP _TIE_xt_hifi2_AE_LF24_IP
#define AE_LF24_X _TIE_xt_hifi2_AE_LF24_X
#define AE_LF24_XP _TIE_xt_hifi2_AE_LF24_XP
#define AE_LF32X2_I _TIE_xt_hifi2_AE_LF32X2_I
#define AE_LF32X2_IP _TIE_xt_hifi2_AE_LF32X2_IP
#define AE_LF32X2_X _TIE_xt_hifi2_AE_LF32X2_X
#define AE_LF32X2_XP _TIE_xt_hifi2_AE_LF32X2_XP
#define AE_LP16F_C _TIE_xt_hifi2_AE_LP16F_C
#define AE_LP16F_I _TIE_xt_hifi2_AE_LP16F_I
#define AE_LP16F_IU _TIE_xt_hifi2_AE_LP16F_IU
#define AE_LP16F_X _TIE_xt_hifi2_AE_LP16F_X
#define AE_LP16F_XU _TIE_xt_hifi2_AE_LP16F_XU
#define AE_LP16S_I _TIE_xt_hifi2_AE_LP16S_I
#define AE_LP16S_IU _TIE_xt_hifi2_AE_LP16S_IU
#define AE_LP16S_X _TIE_xt_hifi2_AE_LP16S_X
#define AE_LP16S_XU _TIE_xt_hifi2_AE_LP16S_XU
#define AE_LP16X2F_C _TIE_xt_hifi2_AE_LP16X2F_C
#define AE_LP16X2F_I _TIE_xt_hifi2_AE_LP16X2F_I
#define AE_LP16X2F_IU _TIE_xt_hifi2_AE_LP16X2F_IU
#define AE_LP16X2F_X _TIE_xt_hifi2_AE_LP16X2F_X
#define AE_LP16X2F_XU _TIE_xt_hifi2_AE_LP16X2F_XU
#define AE_LP16X2S_I _TIE_xt_hifi2_AE_LP16X2S_I
#define AE_LP16X2S_IU _TIE_xt_hifi2_AE_LP16X2S_IU
#define AE_LP16X2S_X _TIE_xt_hifi2_AE_LP16X2S_X
#define AE_LP16X2S_XU _TIE_xt_hifi2_AE_LP16X2S_XU
#define AE_LP24F_C _TIE_xt_hifi2_AE_LP24F_C
#define AE_LP24F_I _TIE_xt_hifi2_AE_LP24F_I
#define AE_LP24F_IU _TIE_xt_hifi2_AE_LP24F_IU
#define AE_LP24F_X _TIE_xt_hifi2_AE_LP24F_X
#define AE_LP24F_XU _TIE_xt_hifi2_AE_LP24F_XU
#define AE_LP24X2F_C _TIE_xt_hifi2_AE_LP24X2F_C
#define AE_LP24X2F_I _TIE_xt_hifi2_AE_LP24X2F_I
#define AE_LP24X2F_IU _TIE_xt_hifi2_AE_LP24X2F_IU
#define AE_LP24X2F_RI _TIE_xt_hifi2_AE_LP24X2F_RI
#define AE_LP24X2F_X _TIE_xt_hifi2_AE_LP24X2F_X
#define AE_LP24X2F_XU _TIE_xt_hifi2_AE_LP24X2F_XU
#define AE_LP24X2S_I _TIE_xt_hifi2_AE_LP24X2S_I
#define AE_LP24X2S_IP _TIE_xt_hifi2_AE_LP24X2S_IP
#define AE_LP24X2S_X _TIE_xt_hifi2_AE_LP24X2S_X
#define AE_LP24X2S_XP _TIE_xt_hifi2_AE_LP24X2S_XP
#define AE_LP24X2_C _TIE_xt_hifi2_AE_LP24X2_C
#define AE_LP24X2_I _TIE_xt_hifi2_AE_LP24X2_I
#define AE_LP24X2_IU _TIE_xt_hifi2_AE_LP24X2_IU
#define AE_LP24X2_X _TIE_xt_hifi2_AE_LP24X2_X
#define AE_LP24X2_XU _TIE_xt_hifi2_AE_LP24X2_XU
#define AE_LP24_C _TIE_xt_hifi2_AE_LP24_C
#define AE_LP24_I _TIE_xt_hifi2_AE_LP24_I
#define AE_LP24_IU _TIE_xt_hifi2_AE_LP24_IU
#define AE_LP24_X _TIE_xt_hifi2_AE_LP24_X
#define AE_LP24_XU _TIE_xt_hifi2_AE_LP24_XU
#define AE_LQ32F_C _TIE_xt_hifi2_AE_LQ32F_C
#define AE_LQ32F_I _TIE_xt_hifi2_AE_LQ32F_I
#define AE_LQ32F_IU _TIE_xt_hifi2_AE_LQ32F_IU
#define AE_LQ32F_X _TIE_xt_hifi2_AE_LQ32F_X
#define AE_LQ32F_XU _TIE_xt_hifi2_AE_LQ32F_XU
#define AE_LQ56_C _TIE_xt_hifi2_AE_LQ56_C
#define AE_LQ56_I _TIE_xt_hifi2_AE_LQ56_I
#define AE_LQ56_IU _TIE_xt_hifi2_AE_LQ56_IU
#define AE_LQ56_X _TIE_xt_hifi2_AE_LQ56_X
#define AE_LQ56_XU _TIE_xt_hifi2_AE_LQ56_XU
#define AE_LT16 _TIE_xt_hifi2_AE_LT16
#define AE_LT32 _TIE_xt_hifi2_AE_LT32
#define AE_LT64 _TIE_xt_hifi2_AE_LT64
#define AE_LTP24S _TIE_xt_hifi2_AE_LTP24S
#define AE_LTQ56S _TIE_xt_hifi2_AE_LTQ56S
#define AE_L_16 _TIE_xt_hifi2_AE_L_16
#define AE_L_16U _TIE_xt_hifi2_AE_L_16U
#define AE_L_32 _TIE_xt_hifi2_AE_L_32
#define AE_MAX32 _TIE_xt_hifi2_AE_MAX32
#define AE_MAX64 _TIE_xt_hifi2_AE_MAX64
#define AE_MAXABS32S _TIE_xt_hifi2_AE_MAXABS32S
#define AE_MAXABS64S _TIE_xt_hifi2_AE_MAXABS64S
#define AE_MAXABSSP24S _TIE_xt_hifi2_AE_MAXABSSP24S
#define AE_MAXABSSQ56S _TIE_xt_hifi2_AE_MAXABSSQ56S
#define AE_MAXB32 _TIE_xt_hifi2_AE_MAXB32
#define AE_MAXB64 _TIE_xt_hifi2_AE_MAXB64
#define AE_MAXBP24S _TIE_xt_hifi2_AE_MAXBP24S
#define AE_MAXBQ56S _TIE_xt_hifi2_AE_MAXBQ56S
#define AE_MAXP24S _TIE_xt_hifi2_AE_MAXP24S
#define AE_MAXQ56S _TIE_xt_hifi2_AE_MAXQ56S
#define AE_MAX_32_signed _TIE_xt_hifi2_AE_MAX_32_signed
#define AE_MIN32 _TIE_xt_hifi2_AE_MIN32
#define AE_MIN64 _TIE_xt_hifi2_AE_MIN64
#define AE_MINABS32S _TIE_xt_hifi2_AE_MINABS32S
#define AE_MINABS64S _TIE_xt_hifi2_AE_MINABS64S
#define AE_MINABSSP24S _TIE_xt_hifi2_AE_MINABSSP24S
#define AE_MINABSSQ56S _TIE_xt_hifi2_AE_MINABSSQ56S
#define AE_MINB32 _TIE_xt_hifi2_AE_MINB32
#define AE_MINB64 _TIE_xt_hifi2_AE_MINB64
#define AE_MINBP24S _TIE_xt_hifi2_AE_MINBP24S
#define AE_MINBQ56S _TIE_xt_hifi2_AE_MINBQ56S
#define AE_MINP24S _TIE_xt_hifi2_AE_MINP24S
#define AE_MINQ56S _TIE_xt_hifi2_AE_MINQ56S
#define AE_MIN_32_signed _TIE_xt_hifi2_AE_MIN_32_signed
#define AE_MOV _TIE_xt_hifi2_AE_MOV
#define AE_MOV16 _TIE_xt_hifi2_AE_MOV16
#define AE_MOV24 _TIE_xt_hifi2_AE_MOV24
#define AE_MOV32 _TIE_xt_hifi2_AE_MOV32
#define AE_MOV64 _TIE_xt_hifi2_AE_MOV64
#define AE_MOVAB _TIE_xt_hifi2_AE_MOVAB
#define AE_MOVAB2 _TIE_xt_hifi2_AE_MOVAB2
#define AE_MOVAB4 _TIE_xt_hifi2_AE_MOVAB4
#define AE_MOVAD16_0 _TIE_xt_hifi2_AE_MOVAD16_0
#define AE_MOVAD16_1 _TIE_xt_hifi2_AE_MOVAD16_1
#define AE_MOVAD16_2 _TIE_xt_hifi2_AE_MOVAD16_2
#define AE_MOVAD16_3 _TIE_xt_hifi2_AE_MOVAD16_3
#define AE_MOVAD32_H _TIE_xt_hifi2_AE_MOVAD32_H
#define AE_MOVAD32_L _TIE_xt_hifi2_AE_MOVAD32_L
#define AE_MOVAE _TIE_xt_hifi2_AE_MOVAE
#define AE_MOVALIGN _TIE_xt_hifi2_AE_MOVALIGN
#define AE_MOVAP24S_H _TIE_xt_hifi2_AE_MOVAP24S_H
#define AE_MOVAP24S_L _TIE_xt_hifi2_AE_MOVAP24S_L
#define AE_MOVASAR _TIE_xt_hifi2_AE_MOVASAR
#define AE_MOVB2 _TIE_xt_hifi2_AE_MOVB2
#define AE_MOVB4 _TIE_xt_hifi2_AE_MOVB4
#define AE_MOVBA _TIE_xt_hifi2_AE_MOVBA
#define AE_MOVBA1X2 _TIE_xt_hifi2_AE_MOVBA1X2
#define AE_MOVBA2 _TIE_xt_hifi2_AE_MOVBA2
#define AE_MOVBA4 _TIE_xt_hifi2_AE_MOVBA4
#define AE_MOVDA16 _TIE_xt_hifi2_AE_MOVDA16
#define AE_MOVDA16X2 _TIE_xt_hifi2_AE_MOVDA16X2
#define AE_MOVDA32 _TIE_xt_hifi2_AE_MOVDA32
#define AE_MOVDA32X2 _TIE_xt_hifi2_AE_MOVDA32X2
#define AE_MOVEA _TIE_xt_hifi2_AE_MOVEA
#define AE_MOVEEP _TIE_xt_hifi2_AE_MOVEEP
#define AE_MOVEQZ_32 _TIE_xt_hifi2_AE_MOVEQZ_32
#define AE_MOVF16X4 _TIE_xt_hifi2_AE_MOVF16X4
#define AE_MOVF16X4_FROMF16 _TIE_xt_hifi2_AE_MOVF16X4_FROMF16
#define AE_MOVF16X4_FROMF24 _TIE_xt_hifi2_AE_MOVF16X4_FROMF24
#define AE_MOVF16X4_FROMF24X2 _TIE_xt_hifi2_AE_MOVF16X4_FROMF24X2
#define AE_MOVF16X4_FROMF32 _TIE_xt_hifi2_AE_MOVF16X4_FROMF32
#define AE_MOVF16X4_FROMF32X2 _TIE_xt_hifi2_AE_MOVF16X4_FROMF32X2
#define AE_MOVF16X4_FROMF64 _TIE_xt_hifi2_AE_MOVF16X4_FROMF64
#define AE_MOVF16X4_FROMINT16 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT16
#define AE_MOVF16X4_FROMINT16X4 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT16X4
#define AE_MOVF16X4_FROMINT24 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT24
#define AE_MOVF16X4_FROMINT24X2 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT24X2
#define AE_MOVF16X4_FROMINT32 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT32
#define AE_MOVF16X4_FROMINT32X2 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT32X2
#define AE_MOVF16X4_FROMINT64 _TIE_xt_hifi2_AE_MOVF16X4_FROMINT64
#define AE_MOVF16_FROMF16X4 _TIE_xt_hifi2_AE_MOVF16_FROMF16X4
#define AE_MOVF16_FROMF24 _TIE_xt_hifi2_AE_MOVF16_FROMF24
#define AE_MOVF16_FROMF24X2 _TIE_xt_hifi2_AE_MOVF16_FROMF24X2
#define AE_MOVF16_FROMF32 _TIE_xt_hifi2_AE_MOVF16_FROMF32
#define AE_MOVF16_FROMF32X2 _TIE_xt_hifi2_AE_MOVF16_FROMF32X2
#define AE_MOVF16_FROMF64 _TIE_xt_hifi2_AE_MOVF16_FROMF64
#define AE_MOVF16_FROMINT16 _TIE_xt_hifi2_AE_MOVF16_FROMINT16
#define AE_MOVF16_FROMINT16X4 _TIE_xt_hifi2_AE_MOVF16_FROMINT16X4
#define AE_MOVF16_FROMINT24 _TIE_xt_hifi2_AE_MOVF16_FROMINT24
#define AE_MOVF16_FROMINT24X2 _TIE_xt_hifi2_AE_MOVF16_FROMINT24X2
#define AE_MOVF16_FROMINT32 _TIE_xt_hifi2_AE_MOVF16_FROMINT32
#define AE_MOVF16_FROMINT32X2 _TIE_xt_hifi2_AE_MOVF16_FROMINT32X2
#define AE_MOVF16_FROMINT64 _TIE_xt_hifi2_AE_MOVF16_FROMINT64
#define AE_MOVF24X2_FROMF16 _TIE_xt_hifi2_AE_MOVF24X2_FROMF16
#define AE_MOVF24X2_FROMF16X4 _TIE_xt_hifi2_AE_MOVF24X2_FROMF16X4
#define AE_MOVF24X2_FROMF24 _TIE_xt_hifi2_AE_MOVF24X2_FROMF24
#define AE_MOVF24X2_FROMF32 _TIE_xt_hifi2_AE_MOVF24X2_FROMF32
#define AE_MOVF24X2_FROMF32X2 _TIE_xt_hifi2_AE_MOVF24X2_FROMF32X2
#define AE_MOVF24X2_FROMF64 _TIE_xt_hifi2_AE_MOVF24X2_FROMF64
#define AE_MOVF24X2_FROMINT16 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT16
#define AE_MOVF24X2_FROMINT16X4 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT16X4
#define AE_MOVF24X2_FROMINT24 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT24
#define AE_MOVF24X2_FROMINT24X2 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT24X2
#define AE_MOVF24X2_FROMINT32 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT32
#define AE_MOVF24X2_FROMINT32X2 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT32X2
#define AE_MOVF24X2_FROMINT64 _TIE_xt_hifi2_AE_MOVF24X2_FROMINT64
#define AE_MOVF24_FROMF16 _TIE_xt_hifi2_AE_MOVF24_FROMF16
#define AE_MOVF24_FROMF16X4 _TIE_xt_hifi2_AE_MOVF24_FROMF16X4
#define AE_MOVF24_FROMF24X2 _TIE_xt_hifi2_AE_MOVF24_FROMF24X2
#define AE_MOVF24_FROMF32 _TIE_xt_hifi2_AE_MOVF24_FROMF32
#define AE_MOVF24_FROMF32X2 _TIE_xt_hifi2_AE_MOVF24_FROMF32X2
#define AE_MOVF24_FROMF64 _TIE_xt_hifi2_AE_MOVF24_FROMF64
#define AE_MOVF24_FROMINT16 _TIE_xt_hifi2_AE_MOVF24_FROMINT16
#define AE_MOVF24_FROMINT16X4 _TIE_xt_hifi2_AE_MOVF24_FROMINT16X4
#define AE_MOVF24_FROMINT24 _TIE_xt_hifi2_AE_MOVF24_FROMINT24
#define AE_MOVF24_FROMINT24X2 _TIE_xt_hifi2_AE_MOVF24_FROMINT24X2
#define AE_MOVF24_FROMINT32 _TIE_xt_hifi2_AE_MOVF24_FROMINT32
#define AE_MOVF24_FROMINT32X2 _TIE_xt_hifi2_AE_MOVF24_FROMINT32X2
#define AE_MOVF24_FROMINT64 _TIE_xt_hifi2_AE_MOVF24_FROMINT64
#define AE_MOVF32X2 _TIE_xt_hifi2_AE_MOVF32X2
#define AE_MOVF32X2_FROMF16 _TIE_xt_hifi2_AE_MOVF32X2_FROMF16
#define AE_MOVF32X2_FROMF16X4 _TIE_xt_hifi2_AE_MOVF32X2_FROMF16X4
#define AE_MOVF32X2_FROMF24 _TIE_xt_hifi2_AE_MOVF32X2_FROMF24
#define AE_MOVF32X2_FROMF24X2 _TIE_xt_hifi2_AE_MOVF32X2_FROMF24X2
#define AE_MOVF32X2_FROMF32 _TIE_xt_hifi2_AE_MOVF32X2_FROMF32
#define AE_MOVF32X2_FROMF64 _TIE_xt_hifi2_AE_MOVF32X2_FROMF64
#define AE_MOVF32X2_FROMINT16 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT16
#define AE_MOVF32X2_FROMINT16X4 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT16X4
#define AE_MOVF32X2_FROMINT24 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT24
#define AE_MOVF32X2_FROMINT24X2 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT24X2
#define AE_MOVF32X2_FROMINT32 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT32
#define AE_MOVF32X2_FROMINT32X2 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT32X2
#define AE_MOVF32X2_FROMINT64 _TIE_xt_hifi2_AE_MOVF32X2_FROMINT64
#define AE_MOVF32_FROMF16 _TIE_xt_hifi2_AE_MOVF32_FROMF16
#define AE_MOVF32_FROMF16X4 _TIE_xt_hifi2_AE_MOVF32_FROMF16X4
#define AE_MOVF32_FROMF24 _TIE_xt_hifi2_AE_MOVF32_FROMF24
#define AE_MOVF32_FROMF24X2 _TIE_xt_hifi2_AE_MOVF32_FROMF24X2
#define AE_MOVF32_FROMF32X2 _TIE_xt_hifi2_AE_MOVF32_FROMF32X2
#define AE_MOVF32_FROMF64 _TIE_xt_hifi2_AE_MOVF32_FROMF64
#define AE_MOVF32_FROMINT16 _TIE_xt_hifi2_AE_MOVF32_FROMINT16
#define AE_MOVF32_FROMINT16X4 _TIE_xt_hifi2_AE_MOVF32_FROMINT16X4
#define AE_MOVF32_FROMINT24 _TIE_xt_hifi2_AE_MOVF32_FROMINT24
#define AE_MOVF32_FROMINT24X2 _TIE_xt_hifi2_AE_MOVF32_FROMINT24X2
#define AE_MOVF32_FROMINT32 _TIE_xt_hifi2_AE_MOVF32_FROMINT32
#define AE_MOVF32_FROMINT32X2 _TIE_xt_hifi2_AE_MOVF32_FROMINT32X2
#define AE_MOVF32_FROMINT64 _TIE_xt_hifi2_AE_MOVF32_FROMINT64
#define AE_MOVF64 _TIE_xt_hifi2_AE_MOVF64
#define AE_MOVF64_FROMF16 _TIE_xt_hifi2_AE_MOVF64_FROMF16
#define AE_MOVF64_FROMF16X4 _TIE_xt_hifi2_AE_MOVF64_FROMF16X4
#define AE_MOVF64_FROMF24 _TIE_xt_hifi2_AE_MOVF64_FROMF24
#define AE_MOVF64_FROMF24X2 _TIE_xt_hifi2_AE_MOVF64_FROMF24X2
#define AE_MOVF64_FROMF32 _TIE_xt_hifi2_AE_MOVF64_FROMF32
#define AE_MOVF64_FROMF32X2 _TIE_xt_hifi2_AE_MOVF64_FROMF32X2
#define AE_MOVF64_FROMINT16 _TIE_xt_hifi2_AE_MOVF64_FROMINT16
#define AE_MOVF64_FROMINT16X4 _TIE_xt_hifi2_AE_MOVF64_FROMINT16X4
#define AE_MOVF64_FROMINT24 _TIE_xt_hifi2_AE_MOVF64_FROMINT24
#define AE_MOVF64_FROMINT24X2 _TIE_xt_hifi2_AE_MOVF64_FROMINT24X2
#define AE_MOVF64_FROMINT32 _TIE_xt_hifi2_AE_MOVF64_FROMINT32
#define AE_MOVF64_FROMINT32X2 _TIE_xt_hifi2_AE_MOVF64_FROMINT32X2
#define AE_MOVF64_FROMINT64 _TIE_xt_hifi2_AE_MOVF64_FROMINT64
#define AE_MOVFP24X2 _TIE_xt_hifi2_AE_MOVFP24X2
#define AE_MOVFP48 _TIE_xt_hifi2_AE_MOVFP48
#define AE_MOVFQ56 _TIE_xt_hifi2_AE_MOVFQ56
#define AE_MOVF_32 _TIE_xt_hifi2_AE_MOVF_32
#define AE_MOVF_32_unsigned _TIE_xt_hifi2_AE_MOVF_32_unsigned
#define AE_MOVGEZ_32 _TIE_xt_hifi2_AE_MOVGEZ_32
#define AE_MOVI _TIE_xt_hifi2_AE_MOVI
#define AE_MOVINT16X4_FROMF16 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF16
#define AE_MOVINT16X4_FROMF16X4 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF16X4
#define AE_MOVINT16X4_FROMF24 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF24
#define AE_MOVINT16X4_FROMF24X2 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF24X2
#define AE_MOVINT16X4_FROMF32 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF32
#define AE_MOVINT16X4_FROMF32X2 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF32X2
#define AE_MOVINT16X4_FROMF64 _TIE_xt_hifi2_AE_MOVINT16X4_FROMF64
#define AE_MOVINT16X4_FROMINT16 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT16
#define AE_MOVINT16X4_FROMINT24 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT24
#define AE_MOVINT16X4_FROMINT24X2 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT24X2
#define AE_MOVINT16X4_FROMINT32 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT32
#define AE_MOVINT16X4_FROMINT32X2 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT32X2
#define AE_MOVINT16X4_FROMINT64 _TIE_xt_hifi2_AE_MOVINT16X4_FROMINT64
#define AE_MOVINT16_FROMF16 _TIE_xt_hifi2_AE_MOVINT16_FROMF16
#define AE_MOVINT16_FROMF16X4 _TIE_xt_hifi2_AE_MOVINT16_FROMF16X4
#define AE_MOVINT16_FROMF24 _TIE_xt_hifi2_AE_MOVINT16_FROMF24
#define AE_MOVINT16_FROMF24X2 _TIE_xt_hifi2_AE_MOVINT16_FROMF24X2
#define AE_MOVINT16_FROMF32 _TIE_xt_hifi2_AE_MOVINT16_FROMF32
#define AE_MOVINT16_FROMF32X2 _TIE_xt_hifi2_AE_MOVINT16_FROMF32X2
#define AE_MOVINT16_FROMF64 _TIE_xt_hifi2_AE_MOVINT16_FROMF64
#define AE_MOVINT16_FROMINT16X4 _TIE_xt_hifi2_AE_MOVINT16_FROMINT16X4
#define AE_MOVINT16_FROMINT24 _TIE_xt_hifi2_AE_MOVINT16_FROMINT24
#define AE_MOVINT16_FROMINT24X2 _TIE_xt_hifi2_AE_MOVINT16_FROMINT24X2
#define AE_MOVINT16_FROMINT32 _TIE_xt_hifi2_AE_MOVINT16_FROMINT32
#define AE_MOVINT16_FROMINT32X2 _TIE_xt_hifi2_AE_MOVINT16_FROMINT32X2
#define AE_MOVINT16_FROMINT64 _TIE_xt_hifi2_AE_MOVINT16_FROMINT64
#define AE_MOVINT24X2_FROMF16 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF16
#define AE_MOVINT24X2_FROMF16X4 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF16X4
#define AE_MOVINT24X2_FROMF24 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF24
#define AE_MOVINT24X2_FROMF24X2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF24X2
#define AE_MOVINT24X2_FROMF32 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF32
#define AE_MOVINT24X2_FROMF32X2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF32X2
#define AE_MOVINT24X2_FROMF64 _TIE_xt_hifi2_AE_MOVINT24X2_FROMF64
#define AE_MOVINT24X2_FROMINT16 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT16
#define AE_MOVINT24X2_FROMINT16X4 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT16X4
#define AE_MOVINT24X2_FROMINT24 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT24
#define AE_MOVINT24X2_FROMINT32 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT32
#define AE_MOVINT24X2_FROMINT32X2 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT32X2
#define AE_MOVINT24X2_FROMINT64 _TIE_xt_hifi2_AE_MOVINT24X2_FROMINT64
#define AE_MOVINT24_FROMF16 _TIE_xt_hifi2_AE_MOVINT24_FROMF16
#define AE_MOVINT24_FROMF16X4 _TIE_xt_hifi2_AE_MOVINT24_FROMF16X4
#define AE_MOVINT24_FROMF24 _TIE_xt_hifi2_AE_MOVINT24_FROMF24
#define AE_MOVINT24_FROMF24X2 _TIE_xt_hifi2_AE_MOVINT24_FROMF24X2
#define AE_MOVINT24_FROMF32 _TIE_xt_hifi2_AE_MOVINT24_FROMF32
#define AE_MOVINT24_FROMF32X2 _TIE_xt_hifi2_AE_MOVINT24_FROMF32X2
#define AE_MOVINT24_FROMF64 _TIE_xt_hifi2_AE_MOVINT24_FROMF64
#define AE_MOVINT24_FROMINT16 _TIE_xt_hifi2_AE_MOVINT24_FROMINT16
#define AE_MOVINT24_FROMINT16X4 _TIE_xt_hifi2_AE_MOVINT24_FROMINT16X4
#define AE_MOVINT24_FROMINT24X2 _TIE_xt_hifi2_AE_MOVINT24_FROMINT24X2
#define AE_MOVINT24_FROMINT32 _TIE_xt_hifi2_AE_MOVINT24_FROMINT32
#define AE_MOVINT24_FROMINT32X2 _TIE_xt_hifi2_AE_MOVINT24_FROMINT32X2
#define AE_MOVINT24_FROMINT64 _TIE_xt_hifi2_AE_MOVINT24_FROMINT64
#define AE_MOVINT32X2_FROMF16 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF16
#define AE_MOVINT32X2_FROMF16X4 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF16X4
#define AE_MOVINT32X2_FROMF24 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF24
#define AE_MOVINT32X2_FROMF24X2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF24X2
#define AE_MOVINT32X2_FROMF32 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF32
#define AE_MOVINT32X2_FROMF32X2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF32X2
#define AE_MOVINT32X2_FROMF64 _TIE_xt_hifi2_AE_MOVINT32X2_FROMF64
#define AE_MOVINT32X2_FROMINT16 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT16
#define AE_MOVINT32X2_FROMINT16X4 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT16X4
#define AE_MOVINT32X2_FROMINT24 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT24
#define AE_MOVINT32X2_FROMINT24X2 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT24X2
#define AE_MOVINT32X2_FROMINT32 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT32
#define AE_MOVINT32X2_FROMINT64 _TIE_xt_hifi2_AE_MOVINT32X2_FROMINT64
#define AE_MOVINT32_FROMF16 _TIE_xt_hifi2_AE_MOVINT32_FROMF16
#define AE_MOVINT32_FROMF16X4 _TIE_xt_hifi2_AE_MOVINT32_FROMF16X4
#define AE_MOVINT32_FROMF24 _TIE_xt_hifi2_AE_MOVINT32_FROMF24
#define AE_MOVINT32_FROMF24X2 _TIE_xt_hifi2_AE_MOVINT32_FROMF24X2
#define AE_MOVINT32_FROMF32 _TIE_xt_hifi2_AE_MOVINT32_FROMF32
#define AE_MOVINT32_FROMF32X2 _TIE_xt_hifi2_AE_MOVINT32_FROMF32X2
#define AE_MOVINT32_FROMF64 _TIE_xt_hifi2_AE_MOVINT32_FROMF64
#define AE_MOVINT32_FROMINT16 _TIE_xt_hifi2_AE_MOVINT32_FROMINT16
#define AE_MOVINT32_FROMINT16X4 _TIE_xt_hifi2_AE_MOVINT32_FROMINT16X4
#define AE_MOVINT32_FROMINT24 _TIE_xt_hifi2_AE_MOVINT32_FROMINT24
#define AE_MOVINT32_FROMINT24X2 _TIE_xt_hifi2_AE_MOVINT32_FROMINT24X2
#define AE_MOVINT32_FROMINT32X2 _TIE_xt_hifi2_AE_MOVINT32_FROMINT32X2
#define AE_MOVINT32_FROMINT64 _TIE_xt_hifi2_AE_MOVINT32_FROMINT64
#define AE_MOVINT64_FROMF16 _TIE_xt_hifi2_AE_MOVINT64_FROMF16
#define AE_MOVINT64_FROMF16X4 _TIE_xt_hifi2_AE_MOVINT64_FROMF16X4
#define AE_MOVINT64_FROMF24 _TIE_xt_hifi2_AE_MOVINT64_FROMF24
#define AE_MOVINT64_FROMF24X2 _TIE_xt_hifi2_AE_MOVINT64_FROMF24X2
#define AE_MOVINT64_FROMF32 _TIE_xt_hifi2_AE_MOVINT64_FROMF32
#define AE_MOVINT64_FROMF32X2 _TIE_xt_hifi2_AE_MOVINT64_FROMF32X2
#define AE_MOVINT64_FROMF64 _TIE_xt_hifi2_AE_MOVINT64_FROMF64
#define AE_MOVINT64_FROMINT16 _TIE_xt_hifi2_AE_MOVINT64_FROMINT16
#define AE_MOVINT64_FROMINT16X4 _TIE_xt_hifi2_AE_MOVINT64_FROMINT16X4
#define AE_MOVINT64_FROMINT24 _TIE_xt_hifi2_AE_MOVINT64_FROMINT24
#define AE_MOVINT64_FROMINT24X2 _TIE_xt_hifi2_AE_MOVINT64_FROMINT24X2
#define AE_MOVINT64_FROMINT32 _TIE_xt_hifi2_AE_MOVINT64_FROMINT32
#define AE_MOVINT64_FROMINT32X2 _TIE_xt_hifi2_AE_MOVINT64_FROMINT32X2
#define AE_MOVI_32 _TIE_xt_hifi2_AE_MOVI_32
#define AE_MOVLTZ_32 _TIE_xt_hifi2_AE_MOVLTZ_32
#define AE_MOVNEZ_32 _TIE_xt_hifi2_AE_MOVNEZ_32
#define AE_MOVP48 _TIE_xt_hifi2_AE_MOVP48
#define AE_MOVPA24 _TIE_xt_hifi2_AE_MOVPA24
#define AE_MOVPA24X2 _TIE_xt_hifi2_AE_MOVPA24X2
#define AE_MOVQ56 _TIE_xt_hifi2_AE_MOVQ56
#define AE_MOVSARA7X2 _TIE_xt_hifi2_AE_MOVSARA7X2
#define AE_MOVSARD7 _TIE_xt_hifi2_AE_MOVSARD7
#define AE_MOVT16X4 _TIE_xt_hifi2_AE_MOVT16X4
#define AE_MOVT32X2 _TIE_xt_hifi2_AE_MOVT32X2
#define AE_MOVT64 _TIE_xt_hifi2_AE_MOVT64
#define AE_MOVTP24X2 _TIE_xt_hifi2_AE_MOVTP24X2
#define AE_MOVTP48 _TIE_xt_hifi2_AE_MOVTP48
#define AE_MOVTQ56 _TIE_xt_hifi2_AE_MOVTQ56
#define AE_MOVT_32 _TIE_xt_hifi2_AE_MOVT_32
#define AE_MOVT_32_unsigned _TIE_xt_hifi2_AE_MOVT_32_unsigned
#define AE_MOV_32 _TIE_xt_hifi2_AE_MOV_32
#define AE_MUL16S _TIE_xt_hifi2_AE_MUL16S
#define AE_MUL16X4 _TIE_xt_hifi2_AE_MUL16X4
#define AE_MUL16X4_vector _TIE_xt_hifi2_AE_MUL16X4_vector
#define AE_MUL16_00 _TIE_xt_hifi2_AE_MUL16_00
#define AE_MUL16_00_S2 _TIE_xt_hifi2_AE_MUL16_00_S2
#define AE_MUL24_HH _TIE_xt_hifi2_AE_MUL24_HH
#define AE_MUL24_HH_S2 _TIE_xt_hifi2_AE_MUL24_HH_S2
#define AE_MUL24_HL _TIE_xt_hifi2_AE_MUL24_HL
#define AE_MUL24_LH _TIE_xt_hifi2_AE_MUL24_LH
#define AE_MUL24_LH_S2 _TIE_xt_hifi2_AE_MUL24_LH_S2
#define AE_MUL24_LL _TIE_xt_hifi2_AE_MUL24_LL
#define AE_MUL24_LL_S2 _TIE_xt_hifi2_AE_MUL24_LL_S2
#define AE_MUL32EP_HH _TIE_xt_hifi2_AE_MUL32EP_HH
#define AE_MUL32EP_HH_S2 _TIE_xt_hifi2_AE_MUL32EP_HH_S2
#define AE_MUL32JS _TIE_xt_hifi2_AE_MUL32JS
#define AE_MUL32USEP_LH _TIE_xt_hifi2_AE_MUL32USEP_LH
#define AE_MUL32USEP_LL _TIE_xt_hifi2_AE_MUL32USEP_LL
#define AE_MUL32U_LL _TIE_xt_hifi2_AE_MUL32U_LL
#define AE_MUL32X16_H0 _TIE_xt_hifi2_AE_MUL32X16_H0
#define AE_MUL32X16_H0_S2 _TIE_xt_hifi2_AE_MUL32X16_H0_S2
#define AE_MUL32X16_H1 _TIE_xt_hifi2_AE_MUL32X16_H1
#define AE_MUL32X16_H1_S2 _TIE_xt_hifi2_AE_MUL32X16_H1_S2
#define AE_MUL32X16_H2 _TIE_xt_hifi2_AE_MUL32X16_H2
#define AE_MUL32X16_H2_S2 _TIE_xt_hifi2_AE_MUL32X16_H2_S2
#define AE_MUL32X16_H3 _TIE_xt_hifi2_AE_MUL32X16_H3
#define AE_MUL32X16_H3_S2 _TIE_xt_hifi2_AE_MUL32X16_H3_S2
#define AE_MUL32X16_L0 _TIE_xt_hifi2_AE_MUL32X16_L0
#define AE_MUL32X16_L0_S2 _TIE_xt_hifi2_AE_MUL32X16_L0_S2
#define AE_MUL32X16_L1 _TIE_xt_hifi2_AE_MUL32X16_L1
#define AE_MUL32X16_L1_S2 _TIE_xt_hifi2_AE_MUL32X16_L1_S2
#define AE_MUL32X16_L2 _TIE_xt_hifi2_AE_MUL32X16_L2
#define AE_MUL32X16_L2_S2 _TIE_xt_hifi2_AE_MUL32X16_L2_S2
#define AE_MUL32X16_L3 _TIE_xt_hifi2_AE_MUL32X16_L3
#define AE_MUL32X16_L3_S2 _TIE_xt_hifi2_AE_MUL32X16_L3_S2
#define AE_MUL32X2_vector _TIE_xt_hifi2_AE_MUL32X2_vector
#define AE_MUL32_HH _TIE_xt_hifi2_AE_MUL32_HH
#define AE_MUL32_HH_S2 _TIE_xt_hifi2_AE_MUL32_HH_S2
#define AE_MUL32_HL _TIE_xt_hifi2_AE_MUL32_HL
#define AE_MUL32_LH _TIE_xt_hifi2_AE_MUL32_LH
#define AE_MUL32_LH_S2 _TIE_xt_hifi2_AE_MUL32_LH_S2
#define AE_MUL32_LL _TIE_xt_hifi2_AE_MUL32_LL
#define AE_MUL32_LL_S2 _TIE_xt_hifi2_AE_MUL32_LL_S2
#define AE_MULA16S_scalar _TIE_xt_hifi2_AE_MULA16S_scalar
#define AE_MULA16S_vector _TIE_xt_hifi2_AE_MULA16S_vector
#define AE_MULA16X4 _TIE_xt_hifi2_AE_MULA16X4
#define AE_MULA16X4_vector _TIE_xt_hifi2_AE_MULA16X4_vector
#define AE_MULA16_00 _TIE_xt_hifi2_AE_MULA16_00
#define AE_MULA16_00_S2 _TIE_xt_hifi2_AE_MULA16_00_S2
#define AE_MULA24_HH _TIE_xt_hifi2_AE_MULA24_HH
#define AE_MULA24_HH_S2 _TIE_xt_hifi2_AE_MULA24_HH_S2
#define AE_MULA24_HL _TIE_xt_hifi2_AE_MULA24_HL
#define AE_MULA24_LH _TIE_xt_hifi2_AE_MULA24_LH
#define AE_MULA24_LH_S2 _TIE_xt_hifi2_AE_MULA24_LH_S2
#define AE_MULA24_LL _TIE_xt_hifi2_AE_MULA24_LL
#define AE_MULA24_LL_S2 _TIE_xt_hifi2_AE_MULA24_LL_S2
#define AE_MULA32EP_HH _TIE_xt_hifi2_AE_MULA32EP_HH
#define AE_MULA32EP_HH_S2 _TIE_xt_hifi2_AE_MULA32EP_HH_S2
#define AE_MULA32USEP_LH _TIE_xt_hifi2_AE_MULA32USEP_LH
#define AE_MULA32USEP_LL _TIE_xt_hifi2_AE_MULA32USEP_LL
#define AE_MULA32U_LL _TIE_xt_hifi2_AE_MULA32U_LL
#define AE_MULA32X16_H0 _TIE_xt_hifi2_AE_MULA32X16_H0
#define AE_MULA32X16_H0_S2 _TIE_xt_hifi2_AE_MULA32X16_H0_S2
#define AE_MULA32X16_H1 _TIE_xt_hifi2_AE_MULA32X16_H1
#define AE_MULA32X16_H1_S2 _TIE_xt_hifi2_AE_MULA32X16_H1_S2
#define AE_MULA32X16_H2 _TIE_xt_hifi2_AE_MULA32X16_H2
#define AE_MULA32X16_H2_S2 _TIE_xt_hifi2_AE_MULA32X16_H2_S2
#define AE_MULA32X16_H3 _TIE_xt_hifi2_AE_MULA32X16_H3
#define AE_MULA32X16_H3_S2 _TIE_xt_hifi2_AE_MULA32X16_H3_S2
#define AE_MULA32X16_L0 _TIE_xt_hifi2_AE_MULA32X16_L0
#define AE_MULA32X16_L0_S2 _TIE_xt_hifi2_AE_MULA32X16_L0_S2
#define AE_MULA32X16_L1 _TIE_xt_hifi2_AE_MULA32X16_L1
#define AE_MULA32X16_L1_S2 _TIE_xt_hifi2_AE_MULA32X16_L1_S2
#define AE_MULA32X16_L2 _TIE_xt_hifi2_AE_MULA32X16_L2
#define AE_MULA32X16_L2_S2 _TIE_xt_hifi2_AE_MULA32X16_L2_S2
#define AE_MULA32X16_L3 _TIE_xt_hifi2_AE_MULA32X16_L3
#define AE_MULA32X16_L3_S2 _TIE_xt_hifi2_AE_MULA32X16_L3_S2
#define AE_MULA32X2_vector _TIE_xt_hifi2_AE_MULA32X2_vector
#define AE_MULA32_HH _TIE_xt_hifi2_AE_MULA32_HH
#define AE_MULA32_HH_S2 _TIE_xt_hifi2_AE_MULA32_HH_S2
#define AE_MULA32_HL _TIE_xt_hifi2_AE_MULA32_HL
#define AE_MULA32_LH _TIE_xt_hifi2_AE_MULA32_LH
#define AE_MULA32_LH_S2 _TIE_xt_hifi2_AE_MULA32_LH_S2
#define AE_MULA32_LL _TIE_xt_hifi2_AE_MULA32_LL
#define AE_MULA32_LL_S2 _TIE_xt_hifi2_AE_MULA32_LL_S2
#define AE_MULAAAAFQ32X16 _TIE_xt_hifi2_AE_MULAAAAFQ32X16
#define AE_MULAAAAFQ32X16_S2 _TIE_xt_hifi2_AE_MULAAAAFQ32X16_S2
#define AE_MULAAAAQ16 _TIE_xt_hifi2_AE_MULAAAAQ16
#define AE_MULAAAAQ16_S2 _TIE_xt_hifi2_AE_MULAAAAQ16_S2
#define AE_MULAAAAQ32X16 _TIE_xt_hifi2_AE_MULAAAAQ32X16
#define AE_MULAAAAQ32X16_S2 _TIE_xt_hifi2_AE_MULAAAAQ32X16_S2
#define AE_MULAAD24_HH_LL _TIE_xt_hifi2_AE_MULAAD24_HH_LL
#define AE_MULAAD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULAAD24_HH_LL_S2
#define AE_MULAAD24_HL_LH _TIE_xt_hifi2_AE_MULAAD24_HL_LH
#define AE_MULAAD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULAAD24_HL_LH_S2
#define AE_MULAAD32EP_HH_LL _TIE_xt_hifi2_AE_MULAAD32EP_HH_LL
#define AE_MULAAD32EP_HH_LL_S2 _TIE_xt_hifi2_AE_MULAAD32EP_HH_LL_S2
#define AE_MULAAD32USEP_HL_LH _TIE_xt_hifi2_AE_MULAAD32USEP_HL_LH
#define AE_MULAAD32USEP_HL_LH_S2 _TIE_xt_hifi2_AE_MULAAD32USEP_HL_LH_S2
#define AE_MULAAD32X16_H0_L1 _TIE_xt_hifi2_AE_MULAAD32X16_H0_L1
#define AE_MULAAD32X16_H0_L1_S2 _TIE_xt_hifi2_AE_MULAAD32X16_H0_L1_S2
#define AE_MULAAD32X16_H1_L0 _TIE_xt_hifi2_AE_MULAAD32X16_H1_L0
#define AE_MULAAD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULAAD32X16_H1_L0_S2
#define AE_MULAAD32X16_H2_L3 _TIE_xt_hifi2_AE_MULAAD32X16_H2_L3
#define AE_MULAAD32X16_H2_L3_S2 _TIE_xt_hifi2_AE_MULAAD32X16_H2_L3_S2
#define AE_MULAAD32X16_H3_L2 _TIE_xt_hifi2_AE_MULAAD32X16_H3_L2
#define AE_MULAAD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULAAD32X16_H3_L2_S2
#define AE_MULAAD32_HH_LL _TIE_xt_hifi2_AE_MULAAD32_HH_LL
#define AE_MULAAD32_HH_LL_S2 _TIE_xt_hifi2_AE_MULAAD32_HH_LL_S2
#define AE_MULAAD32_HL_LH _TIE_xt_hifi2_AE_MULAAD32_HL_LH
#define AE_MULAAD32_HL_LH_S2 _TIE_xt_hifi2_AE_MULAAD32_HL_LH_S2
#define AE_MULAAFD16SS_11_00 _TIE_xt_hifi2_AE_MULAAFD16SS_11_00
#define AE_MULAAFD16SS_11_00_S2 _TIE_xt_hifi2_AE_MULAAFD16SS_11_00_S2
#define AE_MULAAFD16SS_13_02 _TIE_xt_hifi2_AE_MULAAFD16SS_13_02
#define AE_MULAAFD16SS_13_02_S2 _TIE_xt_hifi2_AE_MULAAFD16SS_13_02_S2
#define AE_MULAAFD16SS_33_22 _TIE_xt_hifi2_AE_MULAAFD16SS_33_22
#define AE_MULAAFD16SS_33_22_S2 _TIE_xt_hifi2_AE_MULAAFD16SS_33_22_S2
#define AE_MULAAFD24_HH_LL _TIE_xt_hifi2_AE_MULAAFD24_HH_LL
#define AE_MULAAFD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULAAFD24_HH_LL_S2
#define AE_MULAAFD24_HL_LH _TIE_xt_hifi2_AE_MULAAFD24_HL_LH
#define AE_MULAAFD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULAAFD24_HL_LH_S2
#define AE_MULAAFD32RA_HH_LL _TIE_xt_hifi2_AE_MULAAFD32RA_HH_LL
#define AE_MULAAFD32RA_HH_LL_S2 _TIE_xt_hifi2_AE_MULAAFD32RA_HH_LL_S2
#define AE_MULAAFD32RA_HL_LH _TIE_xt_hifi2_AE_MULAAFD32RA_HL_LH
#define AE_MULAAFD32RA_HL_LH_S2 _TIE_xt_hifi2_AE_MULAAFD32RA_HL_LH_S2
#define AE_MULAAFD32S_HH_LL _TIE_xt_hifi2_AE_MULAAFD32S_HH_LL
#define AE_MULAAFD32S_HH_LL_S2 _TIE_xt_hifi2_AE_MULAAFD32S_HH_LL_S2
#define AE_MULAAFD32S_HL_LH _TIE_xt_hifi2_AE_MULAAFD32S_HL_LH
#define AE_MULAAFD32S_HL_LH_S2 _TIE_xt_hifi2_AE_MULAAFD32S_HL_LH_S2
#define AE_MULAAFD32X16_H0_L1 _TIE_xt_hifi2_AE_MULAAFD32X16_H0_L1
#define AE_MULAAFD32X16_H0_L1_S2 _TIE_xt_hifi2_AE_MULAAFD32X16_H0_L1_S2
#define AE_MULAAFD32X16_H1_L0 _TIE_xt_hifi2_AE_MULAAFD32X16_H1_L0
#define AE_MULAAFD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULAAFD32X16_H1_L0_S2
#define AE_MULAAFD32X16_H2_L3 _TIE_xt_hifi2_AE_MULAAFD32X16_H2_L3
#define AE_MULAAFD32X16_H2_L3_S2 _TIE_xt_hifi2_AE_MULAAFD32X16_H2_L3_S2
#define AE_MULAAFD32X16_H3_L2 _TIE_xt_hifi2_AE_MULAAFD32X16_H3_L2
#define AE_MULAAFD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULAAFD32X16_H3_L2_S2
#define AE_MULAAFP24S_HH_LL _TIE_xt_hifi2_AE_MULAAFP24S_HH_LL
#define AE_MULAAFP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULAAFP24S_HH_LL_S2
#define AE_MULAAFP24S_HL_LH _TIE_xt_hifi2_AE_MULAAFP24S_HL_LH
#define AE_MULAAFP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULAAFP24S_HL_LH_S2
#define AE_MULAAP24S_HH_LL _TIE_xt_hifi2_AE_MULAAP24S_HH_LL
#define AE_MULAAP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULAAP24S_HH_LL_S2
#define AE_MULAAP24S_HL_LH _TIE_xt_hifi2_AE_MULAAP24S_HL_LH
#define AE_MULAAP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULAAP24S_HL_LH_S2
#define AE_MULAAR16P16X4S_vector _TIE_xt_hifi2_AE_MULAAR16P16X4S_vector
#define AE_MULAC24 _TIE_xt_hifi2_AE_MULAC24
#define AE_MULAC32 _TIE_xt_hifi2_AE_MULAC32
#define AE_MULAC32X16_H _TIE_xt_hifi2_AE_MULAC32X16_H
#define AE_MULAC32X16_L _TIE_xt_hifi2_AE_MULAC32X16_L
#define AE_MULAF16SS_00 _TIE_xt_hifi2_AE_MULAF16SS_00
#define AE_MULAF16SS_00_S2 _TIE_xt_hifi2_AE_MULAF16SS_00_S2
#define AE_MULAF16SS_00_scalar _TIE_xt_hifi2_AE_MULAF16SS_00_scalar
#define AE_MULAF16SS_10 _TIE_xt_hifi2_AE_MULAF16SS_10
#define AE_MULAF16SS_10_S2 _TIE_xt_hifi2_AE_MULAF16SS_10_S2
#define AE_MULAF16SS_11 _TIE_xt_hifi2_AE_MULAF16SS_11
#define AE_MULAF16SS_11_S2 _TIE_xt_hifi2_AE_MULAF16SS_11_S2
#define AE_MULAF16SS_20 _TIE_xt_hifi2_AE_MULAF16SS_20
#define AE_MULAF16SS_20_S2 _TIE_xt_hifi2_AE_MULAF16SS_20_S2
#define AE_MULAF16SS_21 _TIE_xt_hifi2_AE_MULAF16SS_21
#define AE_MULAF16SS_21_S2 _TIE_xt_hifi2_AE_MULAF16SS_21_S2
#define AE_MULAF16SS_22 _TIE_xt_hifi2_AE_MULAF16SS_22
#define AE_MULAF16SS_22_S2 _TIE_xt_hifi2_AE_MULAF16SS_22_S2
#define AE_MULAF16SS_30 _TIE_xt_hifi2_AE_MULAF16SS_30
#define AE_MULAF16SS_30_S2 _TIE_xt_hifi2_AE_MULAF16SS_30_S2
#define AE_MULAF16SS_30_scalar _TIE_xt_hifi2_AE_MULAF16SS_30_scalar
#define AE_MULAF16SS_31 _TIE_xt_hifi2_AE_MULAF16SS_31
#define AE_MULAF16SS_31_S2 _TIE_xt_hifi2_AE_MULAF16SS_31_S2
#define AE_MULAF16SS_32 _TIE_xt_hifi2_AE_MULAF16SS_32
#define AE_MULAF16SS_32_S2 _TIE_xt_hifi2_AE_MULAF16SS_32_S2
#define AE_MULAF16SS_33 _TIE_xt_hifi2_AE_MULAF16SS_33
#define AE_MULAF16SS_33_S2 _TIE_xt_hifi2_AE_MULAF16SS_33_S2
#define AE_MULAF16X4SS _TIE_xt_hifi2_AE_MULAF16X4SS
#define AE_MULAF16X4SS_scalar _TIE_xt_hifi2_AE_MULAF16X4SS_scalar
#define AE_MULAF16X4SS_vector _TIE_xt_hifi2_AE_MULAF16X4SS_vector
#define AE_MULAF24S_HH _TIE_xt_hifi2_AE_MULAF24S_HH
#define AE_MULAF24S_HH_S2 _TIE_xt_hifi2_AE_MULAF24S_HH_S2
#define AE_MULAF24S_HL _TIE_xt_hifi2_AE_MULAF24S_HL
#define AE_MULAF24S_LH _TIE_xt_hifi2_AE_MULAF24S_LH
#define AE_MULAF24S_LH_S2 _TIE_xt_hifi2_AE_MULAF24S_LH_S2
#define AE_MULAF24S_LL _TIE_xt_hifi2_AE_MULAF24S_LL
#define AE_MULAF24S_LL_S2 _TIE_xt_hifi2_AE_MULAF24S_LL_S2
#define AE_MULAF32RA_HH _TIE_xt_hifi2_AE_MULAF32RA_HH
#define AE_MULAF32RA_HH_S2 _TIE_xt_hifi2_AE_MULAF32RA_HH_S2
#define AE_MULAF32RA_HL _TIE_xt_hifi2_AE_MULAF32RA_HL
#define AE_MULAF32RA_LH _TIE_xt_hifi2_AE_MULAF32RA_LH
#define AE_MULAF32RA_LH_S2 _TIE_xt_hifi2_AE_MULAF32RA_LH_S2
#define AE_MULAF32RA_LL _TIE_xt_hifi2_AE_MULAF32RA_LL
#define AE_MULAF32RA_LL_S2 _TIE_xt_hifi2_AE_MULAF32RA_LL_S2
#define AE_MULAF32R_HH _TIE_xt_hifi2_AE_MULAF32R_HH
#define AE_MULAF32R_HH_S2 _TIE_xt_hifi2_AE_MULAF32R_HH_S2
#define AE_MULAF32R_HL _TIE_xt_hifi2_AE_MULAF32R_HL
#define AE_MULAF32R_LH _TIE_xt_hifi2_AE_MULAF32R_LH
#define AE_MULAF32R_LH_S2 _TIE_xt_hifi2_AE_MULAF32R_LH_S2
#define AE_MULAF32R_LL _TIE_xt_hifi2_AE_MULAF32R_LL
#define AE_MULAF32R_LL_S2 _TIE_xt_hifi2_AE_MULAF32R_LL_S2
#define AE_MULAF32S_HH _TIE_xt_hifi2_AE_MULAF32S_HH
#define AE_MULAF32S_HH_S2 _TIE_xt_hifi2_AE_MULAF32S_HH_S2
#define AE_MULAF32S_HL _TIE_xt_hifi2_AE_MULAF32S_HL
#define AE_MULAF32S_LH _TIE_xt_hifi2_AE_MULAF32S_LH
#define AE_MULAF32S_LH_S2 _TIE_xt_hifi2_AE_MULAF32S_LH_S2
#define AE_MULAF32S_LL _TIE_xt_hifi2_AE_MULAF32S_LL
#define AE_MULAF32S_LL_S2 _TIE_xt_hifi2_AE_MULAF32S_LL_S2
#define AE_MULAF32X16_H0 _TIE_xt_hifi2_AE_MULAF32X16_H0
#define AE_MULAF32X16_H0_S2 _TIE_xt_hifi2_AE_MULAF32X16_H0_S2
#define AE_MULAF32X16_H1 _TIE_xt_hifi2_AE_MULAF32X16_H1
#define AE_MULAF32X16_H1_S2 _TIE_xt_hifi2_AE_MULAF32X16_H1_S2
#define AE_MULAF32X16_H2 _TIE_xt_hifi2_AE_MULAF32X16_H2
#define AE_MULAF32X16_H2_S2 _TIE_xt_hifi2_AE_MULAF32X16_H2_S2
#define AE_MULAF32X16_H3 _TIE_xt_hifi2_AE_MULAF32X16_H3
#define AE_MULAF32X16_H3_S2 _TIE_xt_hifi2_AE_MULAF32X16_H3_S2
#define AE_MULAF32X16_L0 _TIE_xt_hifi2_AE_MULAF32X16_L0
#define AE_MULAF32X16_L0_S2 _TIE_xt_hifi2_AE_MULAF32X16_L0_S2
#define AE_MULAF32X16_L1 _TIE_xt_hifi2_AE_MULAF32X16_L1
#define AE_MULAF32X16_L1_S2 _TIE_xt_hifi2_AE_MULAF32X16_L1_S2
#define AE_MULAF32X16_L2 _TIE_xt_hifi2_AE_MULAF32X16_L2
#define AE_MULAF32X16_L2_S2 _TIE_xt_hifi2_AE_MULAF32X16_L2_S2
#define AE_MULAF32X16_L3 _TIE_xt_hifi2_AE_MULAF32X16_L3
#define AE_MULAF32X16_L3_S2 _TIE_xt_hifi2_AE_MULAF32X16_L3_S2
#define AE_MULAF48Q32SP16S_H _TIE_xt_hifi2_AE_MULAF48Q32SP16S_H
#define AE_MULAF48Q32SP16S_L _TIE_xt_hifi2_AE_MULAF48Q32SP16S_L
#define AE_MULAF48Q32SP16S_L_S2 _TIE_xt_hifi2_AE_MULAF48Q32SP16S_L_S2
#define AE_MULAF48Q32SP16U_H _TIE_xt_hifi2_AE_MULAF48Q32SP16U_H
#define AE_MULAF48Q32SP16U_L _TIE_xt_hifi2_AE_MULAF48Q32SP16U_L
#define AE_MULAF48Q32SP16U_L_S2 _TIE_xt_hifi2_AE_MULAF48Q32SP16U_L_S2
#define AE_MULAFC24RA _TIE_xt_hifi2_AE_MULAFC24RA
#define AE_MULAFC32RAS _TIE_xt_hifi2_AE_MULAFC32RAS
#define AE_MULAFC32X16RAS_H _TIE_xt_hifi2_AE_MULAFC32X16RAS_H
#define AE_MULAFC32X16RAS_L _TIE_xt_hifi2_AE_MULAFC32X16RAS_L
#define AE_MULAFD24X2_FIR_H _TIE_xt_hifi2_AE_MULAFD24X2_FIR_H
#define AE_MULAFD24X2_FIR_L _TIE_xt_hifi2_AE_MULAFD24X2_FIR_L
#define AE_MULAFD32X16X2_FIR_HH _TIE_xt_hifi2_AE_MULAFD32X16X2_FIR_HH
#define AE_MULAFD32X16X2_FIR_HL _TIE_xt_hifi2_AE_MULAFD32X16X2_FIR_HL
#define AE_MULAFD32X16X2_FIR_LH _TIE_xt_hifi2_AE_MULAFD32X16X2_FIR_LH
#define AE_MULAFD32X16X2_FIR_LL _TIE_xt_hifi2_AE_MULAFD32X16X2_FIR_LL
#define AE_MULAFD32X2RA_FIR_H _TIE_xt_hifi2_AE_MULAFD32X2RA_FIR_H
#define AE_MULAFD32X2RA_FIR_L _TIE_xt_hifi2_AE_MULAFD32X2RA_FIR_L
#define AE_MULAFD32X2S_FIR_H _TIE_xt_hifi2_AE_MULAFD32X2S_FIR_H
#define AE_MULAFD32X2S_FIR_L _TIE_xt_hifi2_AE_MULAFD32X2S_FIR_L
#define AE_MULAFP24S_HH _TIE_xt_hifi2_AE_MULAFP24S_HH
#define AE_MULAFP24S_HH_S2 _TIE_xt_hifi2_AE_MULAFP24S_HH_S2
#define AE_MULAFP24S_HL _TIE_xt_hifi2_AE_MULAFP24S_HL
#define AE_MULAFP24S_LH _TIE_xt_hifi2_AE_MULAFP24S_LH
#define AE_MULAFP24S_LH_S2 _TIE_xt_hifi2_AE_MULAFP24S_LH_S2
#define AE_MULAFP24S_LL _TIE_xt_hifi2_AE_MULAFP24S_LL
#define AE_MULAFP24S_LL_S2 _TIE_xt_hifi2_AE_MULAFP24S_LL_S2
#define AE_MULAFP24X2R _TIE_xt_hifi2_AE_MULAFP24X2R
#define AE_MULAFP24X2RA _TIE_xt_hifi2_AE_MULAFP24X2RA
#define AE_MULAFP24X2RA_S2 _TIE_xt_hifi2_AE_MULAFP24X2RA_S2
#define AE_MULAFP24X2R_S2 _TIE_xt_hifi2_AE_MULAFP24X2R_S2
#define AE_MULAFP32X16X2RAS_H _TIE_xt_hifi2_AE_MULAFP32X16X2RAS_H
#define AE_MULAFP32X16X2RAS_H_S2 _TIE_xt_hifi2_AE_MULAFP32X16X2RAS_H_S2
#define AE_MULAFP32X16X2RAS_L _TIE_xt_hifi2_AE_MULAFP32X16X2RAS_L
#define AE_MULAFP32X16X2RAS_L_S2 _TIE_xt_hifi2_AE_MULAFP32X16X2RAS_L_S2
#define AE_MULAFP32X16X2RS_H _TIE_xt_hifi2_AE_MULAFP32X16X2RS_H
#define AE_MULAFP32X16X2RS_H_S2 _TIE_xt_hifi2_AE_MULAFP32X16X2RS_H_S2
#define AE_MULAFP32X16X2RS_L _TIE_xt_hifi2_AE_MULAFP32X16X2RS_L
#define AE_MULAFP32X16X2RS_L_S2 _TIE_xt_hifi2_AE_MULAFP32X16X2RS_L_S2
#define AE_MULAFP32X16X2S_H _TIE_xt_hifi2_AE_MULAFP32X16X2S_H
#define AE_MULAFP32X16X2S_H_S2 _TIE_xt_hifi2_AE_MULAFP32X16X2S_H_S2
#define AE_MULAFP32X16X2S_L _TIE_xt_hifi2_AE_MULAFP32X16X2S_L
#define AE_MULAFP32X16X2S_L_S2 _TIE_xt_hifi2_AE_MULAFP32X16X2S_L_S2
#define AE_MULAFP32X2RAS _TIE_xt_hifi2_AE_MULAFP32X2RAS
#define AE_MULAFP32X2RAS_S2 _TIE_xt_hifi2_AE_MULAFP32X2RAS_S2
#define AE_MULAFP32X2RS _TIE_xt_hifi2_AE_MULAFP32X2RS
#define AE_MULAFP32X2RS_S2 _TIE_xt_hifi2_AE_MULAFP32X2RS_S2
#define AE_MULAFQ32SP16S_H _TIE_xt_hifi2_AE_MULAFQ32SP16S_H
#define AE_MULAFQ32SP16S_L _TIE_xt_hifi2_AE_MULAFQ32SP16S_L
#define AE_MULAFQ32SP16S_L_S2 _TIE_xt_hifi2_AE_MULAFQ32SP16S_L_S2
#define AE_MULAFQ32SP16U_H _TIE_xt_hifi2_AE_MULAFQ32SP16U_H
#define AE_MULAFQ32SP16U_L _TIE_xt_hifi2_AE_MULAFQ32SP16U_L
#define AE_MULAFQ32SP16U_L_S2 _TIE_xt_hifi2_AE_MULAFQ32SP16U_L_S2
#define AE_MULAFS32P16S_HH _TIE_xt_hifi2_AE_MULAFS32P16S_HH
#define AE_MULAFS32P16S_HH_S2 _TIE_xt_hifi2_AE_MULAFS32P16S_HH_S2
#define AE_MULAFS32P16S_HL _TIE_xt_hifi2_AE_MULAFS32P16S_HL
#define AE_MULAFS32P16S_LH _TIE_xt_hifi2_AE_MULAFS32P16S_LH
#define AE_MULAFS32P16S_LH_S2 _TIE_xt_hifi2_AE_MULAFS32P16S_LH_S2
#define AE_MULAFS32P16S_LL _TIE_xt_hifi2_AE_MULAFS32P16S_LL
#define AE_MULAFS32P16S_LL_S2 _TIE_xt_hifi2_AE_MULAFS32P16S_LL_S2
#define AE_MULAFS56P24S_HH _TIE_xt_hifi2_AE_MULAFS56P24S_HH
#define AE_MULAFS56P24S_HL _TIE_xt_hifi2_AE_MULAFS56P24S_HL
#define AE_MULAFS56P24S_LH _TIE_xt_hifi2_AE_MULAFS56P24S_LH
#define AE_MULAFS56P24S_LL _TIE_xt_hifi2_AE_MULAFS56P24S_LL
#define AE_MULAP24S_HH _TIE_xt_hifi2_AE_MULAP24S_HH
#define AE_MULAP24S_HH_S2 _TIE_xt_hifi2_AE_MULAP24S_HH_S2
#define AE_MULAP24S_HL _TIE_xt_hifi2_AE_MULAP24S_HL
#define AE_MULAP24S_LH _TIE_xt_hifi2_AE_MULAP24S_LH
#define AE_MULAP24S_LH_S2 _TIE_xt_hifi2_AE_MULAP24S_LH_S2
#define AE_MULAP24S_LL _TIE_xt_hifi2_AE_MULAP24S_LL
#define AE_MULAP24S_LL_S2 _TIE_xt_hifi2_AE_MULAP24S_LL_S2
#define AE_MULAP24X2 _TIE_xt_hifi2_AE_MULAP24X2
#define AE_MULAP32X16X2_H _TIE_xt_hifi2_AE_MULAP32X16X2_H
#define AE_MULAP32X16X2_H_S2 _TIE_xt_hifi2_AE_MULAP32X16X2_H_S2
#define AE_MULAP32X16X2_L _TIE_xt_hifi2_AE_MULAP32X16X2_L
#define AE_MULAP32X16X2_L_S2 _TIE_xt_hifi2_AE_MULAP32X16X2_L_S2
#define AE_MULAP32X2 _TIE_xt_hifi2_AE_MULAP32X2
#define AE_MULAP32X2_S2 _TIE_xt_hifi2_AE_MULAP32X2_S2
#define AE_MULAQ32SP16S_H _TIE_xt_hifi2_AE_MULAQ32SP16S_H
#define AE_MULAQ32SP16S_L _TIE_xt_hifi2_AE_MULAQ32SP16S_L
#define AE_MULAQ32SP16S_L_S2 _TIE_xt_hifi2_AE_MULAQ32SP16S_L_S2
#define AE_MULAQ32SP16U_H _TIE_xt_hifi2_AE_MULAQ32SP16U_H
#define AE_MULAQ32SP16U_L _TIE_xt_hifi2_AE_MULAQ32SP16U_L
#define AE_MULAQ32SP16U_L_S2 _TIE_xt_hifi2_AE_MULAQ32SP16U_L_S2
#define AE_MULAS32F48P16S_HH _TIE_xt_hifi2_AE_MULAS32F48P16S_HH
#define AE_MULAS32F48P16S_HH_S2 _TIE_xt_hifi2_AE_MULAS32F48P16S_HH_S2
#define AE_MULAS32F48P16S_HL _TIE_xt_hifi2_AE_MULAS32F48P16S_HL
#define AE_MULAS32F48P16S_LH _TIE_xt_hifi2_AE_MULAS32F48P16S_LH
#define AE_MULAS32F48P16S_LH_S2 _TIE_xt_hifi2_AE_MULAS32F48P16S_LH_S2
#define AE_MULAS32F48P16S_LL _TIE_xt_hifi2_AE_MULAS32F48P16S_LL
#define AE_MULAS32F48P16S_LL_S2 _TIE_xt_hifi2_AE_MULAS32F48P16S_LL_S2
#define AE_MULAS56P24S_HH _TIE_xt_hifi2_AE_MULAS56P24S_HH
#define AE_MULAS56P24S_HL _TIE_xt_hifi2_AE_MULAS56P24S_HL
#define AE_MULAS56P24S_LH _TIE_xt_hifi2_AE_MULAS56P24S_LH
#define AE_MULAS56P24S_LL _TIE_xt_hifi2_AE_MULAS56P24S_LL
#define AE_MULASD24_HH_LL _TIE_xt_hifi2_AE_MULASD24_HH_LL
#define AE_MULASD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULASD24_HH_LL_S2
#define AE_MULASD24_HL_LH _TIE_xt_hifi2_AE_MULASD24_HL_LH
#define AE_MULASD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULASD24_HL_LH_S2
#define AE_MULASD32X16_H1_L0 _TIE_xt_hifi2_AE_MULASD32X16_H1_L0
#define AE_MULASD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULASD32X16_H1_L0_S2
#define AE_MULASD32X16_H3_L2 _TIE_xt_hifi2_AE_MULASD32X16_H3_L2
#define AE_MULASD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULASD32X16_H3_L2_S2
#define AE_MULASD32_HH_LL _TIE_xt_hifi2_AE_MULASD32_HH_LL
#define AE_MULASD32_HH_LL_S2 _TIE_xt_hifi2_AE_MULASD32_HH_LL_S2
#define AE_MULASD32_HL_LH _TIE_xt_hifi2_AE_MULASD32_HL_LH
#define AE_MULASD32_HL_LH_S2 _TIE_xt_hifi2_AE_MULASD32_HL_LH_S2
#define AE_MULASFD24_HH_LL _TIE_xt_hifi2_AE_MULASFD24_HH_LL
#define AE_MULASFD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULASFD24_HH_LL_S2
#define AE_MULASFD24_HL_LH _TIE_xt_hifi2_AE_MULASFD24_HL_LH
#define AE_MULASFD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULASFD24_HL_LH_S2
#define AE_MULASFD32RA_HH_LL _TIE_xt_hifi2_AE_MULASFD32RA_HH_LL
#define AE_MULASFD32RA_HH_LL_S2 _TIE_xt_hifi2_AE_MULASFD32RA_HH_LL_S2
#define AE_MULASFD32RA_HL_LH _TIE_xt_hifi2_AE_MULASFD32RA_HL_LH
#define AE_MULASFD32RA_HL_LH_S2 _TIE_xt_hifi2_AE_MULASFD32RA_HL_LH_S2
#define AE_MULASFD32S_HH_LL _TIE_xt_hifi2_AE_MULASFD32S_HH_LL
#define AE_MULASFD32S_HH_LL_S2 _TIE_xt_hifi2_AE_MULASFD32S_HH_LL_S2
#define AE_MULASFD32S_HL_LH _TIE_xt_hifi2_AE_MULASFD32S_HL_LH
#define AE_MULASFD32S_HL_LH_S2 _TIE_xt_hifi2_AE_MULASFD32S_HL_LH_S2
#define AE_MULASFD32X16_H1_L0 _TIE_xt_hifi2_AE_MULASFD32X16_H1_L0
#define AE_MULASFD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULASFD32X16_H1_L0_S2
#define AE_MULASFD32X16_H3_L2 _TIE_xt_hifi2_AE_MULASFD32X16_H3_L2
#define AE_MULASFD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULASFD32X16_H3_L2_S2
#define AE_MULASFP24S_HH_LL _TIE_xt_hifi2_AE_MULASFP24S_HH_LL
#define AE_MULASFP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULASFP24S_HH_LL_S2
#define AE_MULASFP24S_HL_LH _TIE_xt_hifi2_AE_MULASFP24S_HL_LH
#define AE_MULASFP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULASFP24S_HL_LH_S2
#define AE_MULASP24S_HH_LL _TIE_xt_hifi2_AE_MULASP24S_HH_LL
#define AE_MULASP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULASP24S_HH_LL_S2
#define AE_MULASP24S_HL_LH _TIE_xt_hifi2_AE_MULASP24S_HL_LH
#define AE_MULASP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULASP24S_HL_LH_S2
#define AE_MULC24 _TIE_xt_hifi2_AE_MULC24
#define AE_MULC32 _TIE_xt_hifi2_AE_MULC32
#define AE_MULC32X16_H _TIE_xt_hifi2_AE_MULC32X16_H
#define AE_MULC32X16_L _TIE_xt_hifi2_AE_MULC32X16_L
#define AE_MULF16SS_00 _TIE_xt_hifi2_AE_MULF16SS_00
#define AE_MULF16SS_00_S2 _TIE_xt_hifi2_AE_MULF16SS_00_S2
#define AE_MULF16SS_10 _TIE_xt_hifi2_AE_MULF16SS_10
#define AE_MULF16SS_10_S2 _TIE_xt_hifi2_AE_MULF16SS_10_S2
#define AE_MULF16SS_11 _TIE_xt_hifi2_AE_MULF16SS_11
#define AE_MULF16SS_11_S2 _TIE_xt_hifi2_AE_MULF16SS_11_S2
#define AE_MULF16SS_20 _TIE_xt_hifi2_AE_MULF16SS_20
#define AE_MULF16SS_20_S2 _TIE_xt_hifi2_AE_MULF16SS_20_S2
#define AE_MULF16SS_21 _TIE_xt_hifi2_AE_MULF16SS_21
#define AE_MULF16SS_21_S2 _TIE_xt_hifi2_AE_MULF16SS_21_S2
#define AE_MULF16SS_22 _TIE_xt_hifi2_AE_MULF16SS_22
#define AE_MULF16SS_22_S2 _TIE_xt_hifi2_AE_MULF16SS_22_S2
#define AE_MULF16SS_30 _TIE_xt_hifi2_AE_MULF16SS_30
#define AE_MULF16SS_30_S2 _TIE_xt_hifi2_AE_MULF16SS_30_S2
#define AE_MULF16SS_30_scalar _TIE_xt_hifi2_AE_MULF16SS_30_scalar
#define AE_MULF16SS_31 _TIE_xt_hifi2_AE_MULF16SS_31
#define AE_MULF16SS_31_S2 _TIE_xt_hifi2_AE_MULF16SS_31_S2
#define AE_MULF16SS_32 _TIE_xt_hifi2_AE_MULF16SS_32
#define AE_MULF16SS_32_S2 _TIE_xt_hifi2_AE_MULF16SS_32_S2
#define AE_MULF16SS_33 _TIE_xt_hifi2_AE_MULF16SS_33
#define AE_MULF16SS_33_S2 _TIE_xt_hifi2_AE_MULF16SS_33_S2
#define AE_MULF16X4SS _TIE_xt_hifi2_AE_MULF16X4SS
#define AE_MULF16X4SS_scalar _TIE_xt_hifi2_AE_MULF16X4SS_scalar
#define AE_MULF16X4SS_vector _TIE_xt_hifi2_AE_MULF16X4SS_vector
#define AE_MULF24S_HH _TIE_xt_hifi2_AE_MULF24S_HH
#define AE_MULF24S_HH_S2 _TIE_xt_hifi2_AE_MULF24S_HH_S2
#define AE_MULF24S_HL _TIE_xt_hifi2_AE_MULF24S_HL
#define AE_MULF24S_LH _TIE_xt_hifi2_AE_MULF24S_LH
#define AE_MULF24S_LH_S2 _TIE_xt_hifi2_AE_MULF24S_LH_S2
#define AE_MULF24S_LL _TIE_xt_hifi2_AE_MULF24S_LL
#define AE_MULF24S_LL_S2 _TIE_xt_hifi2_AE_MULF24S_LL_S2
#define AE_MULF32RA_HH _TIE_xt_hifi2_AE_MULF32RA_HH
#define AE_MULF32RA_HH_S2 _TIE_xt_hifi2_AE_MULF32RA_HH_S2
#define AE_MULF32RA_HL _TIE_xt_hifi2_AE_MULF32RA_HL
#define AE_MULF32RA_LH _TIE_xt_hifi2_AE_MULF32RA_LH
#define AE_MULF32RA_LH_S2 _TIE_xt_hifi2_AE_MULF32RA_LH_S2
#define AE_MULF32RA_LL _TIE_xt_hifi2_AE_MULF32RA_LL
#define AE_MULF32RA_LL_S2 _TIE_xt_hifi2_AE_MULF32RA_LL_S2
#define AE_MULF32R_HH _TIE_xt_hifi2_AE_MULF32R_HH
#define AE_MULF32R_HH_S2 _TIE_xt_hifi2_AE_MULF32R_HH_S2
#define AE_MULF32R_HL _TIE_xt_hifi2_AE_MULF32R_HL
#define AE_MULF32R_LH _TIE_xt_hifi2_AE_MULF32R_LH
#define AE_MULF32R_LH_S2 _TIE_xt_hifi2_AE_MULF32R_LH_S2
#define AE_MULF32R_LL _TIE_xt_hifi2_AE_MULF32R_LL
#define AE_MULF32R_LL_S2 _TIE_xt_hifi2_AE_MULF32R_LL_S2
#define AE_MULF32S_HH _TIE_xt_hifi2_AE_MULF32S_HH
#define AE_MULF32S_HH_S2 _TIE_xt_hifi2_AE_MULF32S_HH_S2
#define AE_MULF32S_HL _TIE_xt_hifi2_AE_MULF32S_HL
#define AE_MULF32S_LH _TIE_xt_hifi2_AE_MULF32S_LH
#define AE_MULF32S_LH_S2 _TIE_xt_hifi2_AE_MULF32S_LH_S2
#define AE_MULF32S_LL _TIE_xt_hifi2_AE_MULF32S_LL
#define AE_MULF32S_LL_S2 _TIE_xt_hifi2_AE_MULF32S_LL_S2
#define AE_MULF32X16_H0 _TIE_xt_hifi2_AE_MULF32X16_H0
#define AE_MULF32X16_H0_S2 _TIE_xt_hifi2_AE_MULF32X16_H0_S2
#define AE_MULF32X16_H1 _TIE_xt_hifi2_AE_MULF32X16_H1
#define AE_MULF32X16_H1_S2 _TIE_xt_hifi2_AE_MULF32X16_H1_S2
#define AE_MULF32X16_H2 _TIE_xt_hifi2_AE_MULF32X16_H2
#define AE_MULF32X16_H2_S2 _TIE_xt_hifi2_AE_MULF32X16_H2_S2
#define AE_MULF32X16_H3 _TIE_xt_hifi2_AE_MULF32X16_H3
#define AE_MULF32X16_H3_S2 _TIE_xt_hifi2_AE_MULF32X16_H3_S2
#define AE_MULF32X16_L0 _TIE_xt_hifi2_AE_MULF32X16_L0
#define AE_MULF32X16_L0_S2 _TIE_xt_hifi2_AE_MULF32X16_L0_S2
#define AE_MULF32X16_L1 _TIE_xt_hifi2_AE_MULF32X16_L1
#define AE_MULF32X16_L1_S2 _TIE_xt_hifi2_AE_MULF32X16_L1_S2
#define AE_MULF32X16_L2 _TIE_xt_hifi2_AE_MULF32X16_L2
#define AE_MULF32X16_L2_S2 _TIE_xt_hifi2_AE_MULF32X16_L2_S2
#define AE_MULF32X16_L3 _TIE_xt_hifi2_AE_MULF32X16_L3
#define AE_MULF32X16_L3_S2 _TIE_xt_hifi2_AE_MULF32X16_L3_S2
#define AE_MULF48Q32SP16S_H _TIE_xt_hifi2_AE_MULF48Q32SP16S_H
#define AE_MULF48Q32SP16S_L _TIE_xt_hifi2_AE_MULF48Q32SP16S_L
#define AE_MULF48Q32SP16S_L_S2 _TIE_xt_hifi2_AE_MULF48Q32SP16S_L_S2
#define AE_MULF48Q32SP16U_H _TIE_xt_hifi2_AE_MULF48Q32SP16U_H
#define AE_MULF48Q32SP16U_L _TIE_xt_hifi2_AE_MULF48Q32SP16U_L
#define AE_MULF48Q32SP16U_L_S2 _TIE_xt_hifi2_AE_MULF48Q32SP16U_L_S2
#define AE_MULFC24RA _TIE_xt_hifi2_AE_MULFC24RA
#define AE_MULFC32RAS _TIE_xt_hifi2_AE_MULFC32RAS
#define AE_MULFC32X16RAS_H _TIE_xt_hifi2_AE_MULFC32X16RAS_H
#define AE_MULFC32X16RAS_L _TIE_xt_hifi2_AE_MULFC32X16RAS_L
#define AE_MULFD24X2_FIR_H _TIE_xt_hifi2_AE_MULFD24X2_FIR_H
#define AE_MULFD24X2_FIR_L _TIE_xt_hifi2_AE_MULFD24X2_FIR_L
#define AE_MULFD32X16X2_FIR_HH _TIE_xt_hifi2_AE_MULFD32X16X2_FIR_HH
#define AE_MULFD32X16X2_FIR_HL _TIE_xt_hifi2_AE_MULFD32X16X2_FIR_HL
#define AE_MULFD32X16X2_FIR_LH _TIE_xt_hifi2_AE_MULFD32X16X2_FIR_LH
#define AE_MULFD32X16X2_FIR_LL _TIE_xt_hifi2_AE_MULFD32X16X2_FIR_LL
#define AE_MULFD32X2RA_FIR_H _TIE_xt_hifi2_AE_MULFD32X2RA_FIR_H
#define AE_MULFD32X2RA_FIR_L _TIE_xt_hifi2_AE_MULFD32X2RA_FIR_L
#define AE_MULFD32X2S_FIR_H _TIE_xt_hifi2_AE_MULFD32X2S_FIR_H
#define AE_MULFD32X2S_FIR_L _TIE_xt_hifi2_AE_MULFD32X2S_FIR_L
#define AE_MULFP16X4RAS _TIE_xt_hifi2_AE_MULFP16X4RAS
#define AE_MULFP16X4RAS_scalar _TIE_xt_hifi2_AE_MULFP16X4RAS_scalar
#define AE_MULFP16X4RAS_vector _TIE_xt_hifi2_AE_MULFP16X4RAS_vector
#define AE_MULFP16X4S _TIE_xt_hifi2_AE_MULFP16X4S
#define AE_MULFP16X4S_scalar _TIE_xt_hifi2_AE_MULFP16X4S_scalar
#define AE_MULFP16X4S_vector _TIE_xt_hifi2_AE_MULFP16X4S_vector
#define AE_MULFP24S_HH _TIE_xt_hifi2_AE_MULFP24S_HH
#define AE_MULFP24S_HH_S2 _TIE_xt_hifi2_AE_MULFP24S_HH_S2
#define AE_MULFP24S_HL _TIE_xt_hifi2_AE_MULFP24S_HL
#define AE_MULFP24S_LH _TIE_xt_hifi2_AE_MULFP24S_LH
#define AE_MULFP24S_LH_S2 _TIE_xt_hifi2_AE_MULFP24S_LH_S2
#define AE_MULFP24S_LL _TIE_xt_hifi2_AE_MULFP24S_LL
#define AE_MULFP24S_LL_S2 _TIE_xt_hifi2_AE_MULFP24S_LL_S2
#define AE_MULFP24X2R _TIE_xt_hifi2_AE_MULFP24X2R
#define AE_MULFP24X2RA _TIE_xt_hifi2_AE_MULFP24X2RA
#define AE_MULFP24X2RA_S2 _TIE_xt_hifi2_AE_MULFP24X2RA_S2
#define AE_MULFP24X2R_S2 _TIE_xt_hifi2_AE_MULFP24X2R_S2
#define AE_MULFP32X16X2RAS_H _TIE_xt_hifi2_AE_MULFP32X16X2RAS_H
#define AE_MULFP32X16X2RAS_H_S2 _TIE_xt_hifi2_AE_MULFP32X16X2RAS_H_S2
#define AE_MULFP32X16X2RAS_L _TIE_xt_hifi2_AE_MULFP32X16X2RAS_L
#define AE_MULFP32X16X2RAS_L_S2 _TIE_xt_hifi2_AE_MULFP32X16X2RAS_L_S2
#define AE_MULFP32X16X2RS_H _TIE_xt_hifi2_AE_MULFP32X16X2RS_H
#define AE_MULFP32X16X2RS_H_S2 _TIE_xt_hifi2_AE_MULFP32X16X2RS_H_S2
#define AE_MULFP32X16X2RS_L _TIE_xt_hifi2_AE_MULFP32X16X2RS_L
#define AE_MULFP32X16X2RS_L_S2 _TIE_xt_hifi2_AE_MULFP32X16X2RS_L_S2
#define AE_MULFP32X16X2S_H _TIE_xt_hifi2_AE_MULFP32X16X2S_H
#define AE_MULFP32X16X2S_H_S2 _TIE_xt_hifi2_AE_MULFP32X16X2S_H_S2
#define AE_MULFP32X16X2S_L _TIE_xt_hifi2_AE_MULFP32X16X2S_L
#define AE_MULFP32X16X2S_L_S2 _TIE_xt_hifi2_AE_MULFP32X16X2S_L_S2
#define AE_MULFP32X2RAS _TIE_xt_hifi2_AE_MULFP32X2RAS
#define AE_MULFP32X2RAS_S2 _TIE_xt_hifi2_AE_MULFP32X2RAS_S2
#define AE_MULFP32X2RS _TIE_xt_hifi2_AE_MULFP32X2RS
#define AE_MULFP32X2RS_S2 _TIE_xt_hifi2_AE_MULFP32X2RS_S2
#define AE_MULFQ32SP16S_H _TIE_xt_hifi2_AE_MULFQ32SP16S_H
#define AE_MULFQ32SP16S_L _TIE_xt_hifi2_AE_MULFQ32SP16S_L
#define AE_MULFQ32SP16S_L_S2 _TIE_xt_hifi2_AE_MULFQ32SP16S_L_S2
#define AE_MULFQ32SP16U_H _TIE_xt_hifi2_AE_MULFQ32SP16U_H
#define AE_MULFQ32SP16U_L _TIE_xt_hifi2_AE_MULFQ32SP16U_L
#define AE_MULFQ32SP16U_L_S2 _TIE_xt_hifi2_AE_MULFQ32SP16U_L_S2
#define AE_MULFS32P16S_HH _TIE_xt_hifi2_AE_MULFS32P16S_HH
#define AE_MULFS32P16S_HH_S2 _TIE_xt_hifi2_AE_MULFS32P16S_HH_S2
#define AE_MULFS32P16S_HL _TIE_xt_hifi2_AE_MULFS32P16S_HL
#define AE_MULFS32P16S_LH _TIE_xt_hifi2_AE_MULFS32P16S_LH
#define AE_MULFS32P16S_LH_S2 _TIE_xt_hifi2_AE_MULFS32P16S_LH_S2
#define AE_MULFS32P16S_LL _TIE_xt_hifi2_AE_MULFS32P16S_LL
#define AE_MULFS32P16S_LL_S2 _TIE_xt_hifi2_AE_MULFS32P16S_LL_S2
#define AE_MULP24S_HH _TIE_xt_hifi2_AE_MULP24S_HH
#define AE_MULP24S_HH_S2 _TIE_xt_hifi2_AE_MULP24S_HH_S2
#define AE_MULP24S_HL _TIE_xt_hifi2_AE_MULP24S_HL
#define AE_MULP24S_LH _TIE_xt_hifi2_AE_MULP24S_LH
#define AE_MULP24S_LH_S2 _TIE_xt_hifi2_AE_MULP24S_LH_S2
#define AE_MULP24S_LL _TIE_xt_hifi2_AE_MULP24S_LL
#define AE_MULP24S_LL_S2 _TIE_xt_hifi2_AE_MULP24S_LL_S2
#define AE_MULP24X2 _TIE_xt_hifi2_AE_MULP24X2
#define AE_MULP32X16X2_H _TIE_xt_hifi2_AE_MULP32X16X2_H
#define AE_MULP32X16X2_H_S2 _TIE_xt_hifi2_AE_MULP32X16X2_H_S2
#define AE_MULP32X16X2_L _TIE_xt_hifi2_AE_MULP32X16X2_L
#define AE_MULP32X16X2_L_S2 _TIE_xt_hifi2_AE_MULP32X16X2_L_S2
#define AE_MULP32X2 _TIE_xt_hifi2_AE_MULP32X2
#define AE_MULP32X2_S2 _TIE_xt_hifi2_AE_MULP32X2_S2
#define AE_MULQ32SP16S_H _TIE_xt_hifi2_AE_MULQ32SP16S_H
#define AE_MULQ32SP16S_L _TIE_xt_hifi2_AE_MULQ32SP16S_L
#define AE_MULQ32SP16S_L_S2 _TIE_xt_hifi2_AE_MULQ32SP16S_L_S2
#define AE_MULQ32SP16U_H _TIE_xt_hifi2_AE_MULQ32SP16U_H
#define AE_MULQ32SP16U_L _TIE_xt_hifi2_AE_MULQ32SP16U_L
#define AE_MULQ32SP16U_L_S2 _TIE_xt_hifi2_AE_MULQ32SP16U_L_S2
#define AE_MULR16P16X4S_vector _TIE_xt_hifi2_AE_MULR16P16X4S_vector
#define AE_MULS16S_scalar _TIE_xt_hifi2_AE_MULS16S_scalar
#define AE_MULS16S_vector _TIE_xt_hifi2_AE_MULS16S_vector
#define AE_MULS16X4 _TIE_xt_hifi2_AE_MULS16X4
#define AE_MULS24_HH _TIE_xt_hifi2_AE_MULS24_HH
#define AE_MULS24_HH_S2 _TIE_xt_hifi2_AE_MULS24_HH_S2
#define AE_MULS24_HL _TIE_xt_hifi2_AE_MULS24_HL
#define AE_MULS24_LH _TIE_xt_hifi2_AE_MULS24_LH
#define AE_MULS24_LH_S2 _TIE_xt_hifi2_AE_MULS24_LH_S2
#define AE_MULS24_LL _TIE_xt_hifi2_AE_MULS24_LL
#define AE_MULS24_LL_S2 _TIE_xt_hifi2_AE_MULS24_LL_S2
#define AE_MULS32EP_HH _TIE_xt_hifi2_AE_MULS32EP_HH
#define AE_MULS32EP_HH_S2 _TIE_xt_hifi2_AE_MULS32EP_HH_S2
#define AE_MULS32F48P16S_HH _TIE_xt_hifi2_AE_MULS32F48P16S_HH
#define AE_MULS32F48P16S_HH_S2 _TIE_xt_hifi2_AE_MULS32F48P16S_HH_S2
#define AE_MULS32F48P16S_HL _TIE_xt_hifi2_AE_MULS32F48P16S_HL
#define AE_MULS32F48P16S_LH _TIE_xt_hifi2_AE_MULS32F48P16S_LH
#define AE_MULS32F48P16S_LH_S2 _TIE_xt_hifi2_AE_MULS32F48P16S_LH_S2
#define AE_MULS32F48P16S_LL _TIE_xt_hifi2_AE_MULS32F48P16S_LL
#define AE_MULS32F48P16S_LL_S2 _TIE_xt_hifi2_AE_MULS32F48P16S_LL_S2
#define AE_MULS32U_LL _TIE_xt_hifi2_AE_MULS32U_LL
#define AE_MULS32X16_H0 _TIE_xt_hifi2_AE_MULS32X16_H0
#define AE_MULS32X16_H0_S2 _TIE_xt_hifi2_AE_MULS32X16_H0_S2
#define AE_MULS32X16_H1 _TIE_xt_hifi2_AE_MULS32X16_H1
#define AE_MULS32X16_H1_S2 _TIE_xt_hifi2_AE_MULS32X16_H1_S2
#define AE_MULS32X16_H2 _TIE_xt_hifi2_AE_MULS32X16_H2
#define AE_MULS32X16_H2_S2 _TIE_xt_hifi2_AE_MULS32X16_H2_S2
#define AE_MULS32X16_H3 _TIE_xt_hifi2_AE_MULS32X16_H3
#define AE_MULS32X16_H3_S2 _TIE_xt_hifi2_AE_MULS32X16_H3_S2
#define AE_MULS32X16_L0 _TIE_xt_hifi2_AE_MULS32X16_L0
#define AE_MULS32X16_L0_S2 _TIE_xt_hifi2_AE_MULS32X16_L0_S2
#define AE_MULS32X16_L1 _TIE_xt_hifi2_AE_MULS32X16_L1
#define AE_MULS32X16_L1_S2 _TIE_xt_hifi2_AE_MULS32X16_L1_S2
#define AE_MULS32X16_L2 _TIE_xt_hifi2_AE_MULS32X16_L2
#define AE_MULS32X16_L2_S2 _TIE_xt_hifi2_AE_MULS32X16_L2_S2
#define AE_MULS32X16_L3 _TIE_xt_hifi2_AE_MULS32X16_L3
#define AE_MULS32X16_L3_S2 _TIE_xt_hifi2_AE_MULS32X16_L3_S2
#define AE_MULS32_HH _TIE_xt_hifi2_AE_MULS32_HH
#define AE_MULS32_HH_S2 _TIE_xt_hifi2_AE_MULS32_HH_S2
#define AE_MULS32_HL _TIE_xt_hifi2_AE_MULS32_HL
#define AE_MULS32_LH _TIE_xt_hifi2_AE_MULS32_LH
#define AE_MULS32_LH_S2 _TIE_xt_hifi2_AE_MULS32_LH_S2
#define AE_MULS32_LL _TIE_xt_hifi2_AE_MULS32_LL
#define AE_MULS32_LL_S2 _TIE_xt_hifi2_AE_MULS32_LL_S2
#define AE_MULSAD24_HH_LL _TIE_xt_hifi2_AE_MULSAD24_HH_LL
#define AE_MULSAD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULSAD24_HH_LL_S2
#define AE_MULSAD24_HL_LH _TIE_xt_hifi2_AE_MULSAD24_HL_LH
#define AE_MULSAD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULSAD24_HL_LH_S2
#define AE_MULSAD32X16_H1_L0 _TIE_xt_hifi2_AE_MULSAD32X16_H1_L0
#define AE_MULSAD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULSAD32X16_H1_L0_S2
#define AE_MULSAD32X16_H3_L2 _TIE_xt_hifi2_AE_MULSAD32X16_H3_L2
#define AE_MULSAD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULSAD32X16_H3_L2_S2
#define AE_MULSAD32_HH_LL _TIE_xt_hifi2_AE_MULSAD32_HH_LL
#define AE_MULSAD32_HH_LL_S2 _TIE_xt_hifi2_AE_MULSAD32_HH_LL_S2
#define AE_MULSAD32_HL_LH _TIE_xt_hifi2_AE_MULSAD32_HL_LH
#define AE_MULSAD32_HL_LH_S2 _TIE_xt_hifi2_AE_MULSAD32_HL_LH_S2
#define AE_MULSAFD24_HH_LL _TIE_xt_hifi2_AE_MULSAFD24_HH_LL
#define AE_MULSAFD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULSAFD24_HH_LL_S2
#define AE_MULSAFD24_HL_LH _TIE_xt_hifi2_AE_MULSAFD24_HL_LH
#define AE_MULSAFD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULSAFD24_HL_LH_S2
#define AE_MULSAFD32RA_HH_LL _TIE_xt_hifi2_AE_MULSAFD32RA_HH_LL
#define AE_MULSAFD32RA_HH_LL_S2 _TIE_xt_hifi2_AE_MULSAFD32RA_HH_LL_S2
#define AE_MULSAFD32RA_HL_LH _TIE_xt_hifi2_AE_MULSAFD32RA_HL_LH
#define AE_MULSAFD32RA_HL_LH_S2 _TIE_xt_hifi2_AE_MULSAFD32RA_HL_LH_S2
#define AE_MULSAFD32S_HH_LL _TIE_xt_hifi2_AE_MULSAFD32S_HH_LL
#define AE_MULSAFD32S_HH_LL_S2 _TIE_xt_hifi2_AE_MULSAFD32S_HH_LL_S2
#define AE_MULSAFD32S_HL_LH _TIE_xt_hifi2_AE_MULSAFD32S_HL_LH
#define AE_MULSAFD32S_HL_LH_S2 _TIE_xt_hifi2_AE_MULSAFD32S_HL_LH_S2
#define AE_MULSAFD32X16_H1_L0 _TIE_xt_hifi2_AE_MULSAFD32X16_H1_L0
#define AE_MULSAFD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULSAFD32X16_H1_L0_S2
#define AE_MULSAFD32X16_H3_L2 _TIE_xt_hifi2_AE_MULSAFD32X16_H3_L2
#define AE_MULSAFD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULSAFD32X16_H3_L2_S2
#define AE_MULSAFP24S_HH_LL _TIE_xt_hifi2_AE_MULSAFP24S_HH_LL
#define AE_MULSAFP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULSAFP24S_HH_LL_S2
#define AE_MULSAFP24S_HL_LH _TIE_xt_hifi2_AE_MULSAFP24S_HL_LH
#define AE_MULSAFP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULSAFP24S_HL_LH_S2
#define AE_MULSAP24S_HH_LL _TIE_xt_hifi2_AE_MULSAP24S_HH_LL
#define AE_MULSAP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULSAP24S_HH_LL_S2
#define AE_MULSAP24S_HL_LH _TIE_xt_hifi2_AE_MULSAP24S_HL_LH
#define AE_MULSAP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULSAP24S_HL_LH_S2
#define AE_MULSF16SS_00 _TIE_xt_hifi2_AE_MULSF16SS_00
#define AE_MULSF16SS_00_S2 _TIE_xt_hifi2_AE_MULSF16SS_00_S2
#define AE_MULSF16SS_10 _TIE_xt_hifi2_AE_MULSF16SS_10
#define AE_MULSF16SS_10_S2 _TIE_xt_hifi2_AE_MULSF16SS_10_S2
#define AE_MULSF16SS_11 _TIE_xt_hifi2_AE_MULSF16SS_11
#define AE_MULSF16SS_11_S2 _TIE_xt_hifi2_AE_MULSF16SS_11_S2
#define AE_MULSF16SS_20 _TIE_xt_hifi2_AE_MULSF16SS_20
#define AE_MULSF16SS_20_S2 _TIE_xt_hifi2_AE_MULSF16SS_20_S2
#define AE_MULSF16SS_21 _TIE_xt_hifi2_AE_MULSF16SS_21
#define AE_MULSF16SS_21_S2 _TIE_xt_hifi2_AE_MULSF16SS_21_S2
#define AE_MULSF16SS_22 _TIE_xt_hifi2_AE_MULSF16SS_22
#define AE_MULSF16SS_22_S2 _TIE_xt_hifi2_AE_MULSF16SS_22_S2
#define AE_MULSF16SS_30 _TIE_xt_hifi2_AE_MULSF16SS_30
#define AE_MULSF16SS_30_S2 _TIE_xt_hifi2_AE_MULSF16SS_30_S2
#define AE_MULSF16SS_31 _TIE_xt_hifi2_AE_MULSF16SS_31
#define AE_MULSF16SS_31_S2 _TIE_xt_hifi2_AE_MULSF16SS_31_S2
#define AE_MULSF16SS_32 _TIE_xt_hifi2_AE_MULSF16SS_32
#define AE_MULSF16SS_32_S2 _TIE_xt_hifi2_AE_MULSF16SS_32_S2
#define AE_MULSF16SS_33 _TIE_xt_hifi2_AE_MULSF16SS_33
#define AE_MULSF16SS_33_S2 _TIE_xt_hifi2_AE_MULSF16SS_33_S2
#define AE_MULSF16X4SS _TIE_xt_hifi2_AE_MULSF16X4SS
#define AE_MULSF16X4SS_scalar _TIE_xt_hifi2_AE_MULSF16X4SS_scalar
#define AE_MULSF16X4SS_vector _TIE_xt_hifi2_AE_MULSF16X4SS_vector
#define AE_MULSF24S_HH _TIE_xt_hifi2_AE_MULSF24S_HH
#define AE_MULSF24S_HH_S2 _TIE_xt_hifi2_AE_MULSF24S_HH_S2
#define AE_MULSF24S_HL _TIE_xt_hifi2_AE_MULSF24S_HL
#define AE_MULSF24S_LH _TIE_xt_hifi2_AE_MULSF24S_LH
#define AE_MULSF24S_LH_S2 _TIE_xt_hifi2_AE_MULSF24S_LH_S2
#define AE_MULSF24S_LL _TIE_xt_hifi2_AE_MULSF24S_LL
#define AE_MULSF24S_LL_S2 _TIE_xt_hifi2_AE_MULSF24S_LL_S2
#define AE_MULSF32RA_HH _TIE_xt_hifi2_AE_MULSF32RA_HH
#define AE_MULSF32RA_HH_S2 _TIE_xt_hifi2_AE_MULSF32RA_HH_S2
#define AE_MULSF32RA_HL _TIE_xt_hifi2_AE_MULSF32RA_HL
#define AE_MULSF32RA_LH _TIE_xt_hifi2_AE_MULSF32RA_LH
#define AE_MULSF32RA_LH_S2 _TIE_xt_hifi2_AE_MULSF32RA_LH_S2
#define AE_MULSF32RA_LL _TIE_xt_hifi2_AE_MULSF32RA_LL
#define AE_MULSF32RA_LL_S2 _TIE_xt_hifi2_AE_MULSF32RA_LL_S2
#define AE_MULSF32R_HH _TIE_xt_hifi2_AE_MULSF32R_HH
#define AE_MULSF32R_HH_S2 _TIE_xt_hifi2_AE_MULSF32R_HH_S2
#define AE_MULSF32R_HL _TIE_xt_hifi2_AE_MULSF32R_HL
#define AE_MULSF32R_LH _TIE_xt_hifi2_AE_MULSF32R_LH
#define AE_MULSF32R_LH_S2 _TIE_xt_hifi2_AE_MULSF32R_LH_S2
#define AE_MULSF32R_LL _TIE_xt_hifi2_AE_MULSF32R_LL
#define AE_MULSF32R_LL_S2 _TIE_xt_hifi2_AE_MULSF32R_LL_S2
#define AE_MULSF32S_HH _TIE_xt_hifi2_AE_MULSF32S_HH
#define AE_MULSF32S_HH_S2 _TIE_xt_hifi2_AE_MULSF32S_HH_S2
#define AE_MULSF32S_HL _TIE_xt_hifi2_AE_MULSF32S_HL
#define AE_MULSF32S_LH _TIE_xt_hifi2_AE_MULSF32S_LH
#define AE_MULSF32S_LH_S2 _TIE_xt_hifi2_AE_MULSF32S_LH_S2
#define AE_MULSF32S_LL _TIE_xt_hifi2_AE_MULSF32S_LL
#define AE_MULSF32S_LL_S2 _TIE_xt_hifi2_AE_MULSF32S_LL_S2
#define AE_MULSF32X16_H0 _TIE_xt_hifi2_AE_MULSF32X16_H0
#define AE_MULSF32X16_H0_S2 _TIE_xt_hifi2_AE_MULSF32X16_H0_S2
#define AE_MULSF32X16_H1 _TIE_xt_hifi2_AE_MULSF32X16_H1
#define AE_MULSF32X16_H1_S2 _TIE_xt_hifi2_AE_MULSF32X16_H1_S2
#define AE_MULSF32X16_H2 _TIE_xt_hifi2_AE_MULSF32X16_H2
#define AE_MULSF32X16_H2_S2 _TIE_xt_hifi2_AE_MULSF32X16_H2_S2
#define AE_MULSF32X16_H3 _TIE_xt_hifi2_AE_MULSF32X16_H3
#define AE_MULSF32X16_H3_S2 _TIE_xt_hifi2_AE_MULSF32X16_H3_S2
#define AE_MULSF32X16_L0 _TIE_xt_hifi2_AE_MULSF32X16_L0
#define AE_MULSF32X16_L0_S2 _TIE_xt_hifi2_AE_MULSF32X16_L0_S2
#define AE_MULSF32X16_L1 _TIE_xt_hifi2_AE_MULSF32X16_L1
#define AE_MULSF32X16_L1_S2 _TIE_xt_hifi2_AE_MULSF32X16_L1_S2
#define AE_MULSF32X16_L2 _TIE_xt_hifi2_AE_MULSF32X16_L2
#define AE_MULSF32X16_L2_S2 _TIE_xt_hifi2_AE_MULSF32X16_L2_S2
#define AE_MULSF32X16_L3 _TIE_xt_hifi2_AE_MULSF32X16_L3
#define AE_MULSF32X16_L3_S2 _TIE_xt_hifi2_AE_MULSF32X16_L3_S2
#define AE_MULSF48Q32SP16S_H _TIE_xt_hifi2_AE_MULSF48Q32SP16S_H
#define AE_MULSF48Q32SP16S_L _TIE_xt_hifi2_AE_MULSF48Q32SP16S_L
#define AE_MULSF48Q32SP16S_L_S2 _TIE_xt_hifi2_AE_MULSF48Q32SP16S_L_S2
#define AE_MULSF48Q32SP16U_H _TIE_xt_hifi2_AE_MULSF48Q32SP16U_H
#define AE_MULSF48Q32SP16U_L _TIE_xt_hifi2_AE_MULSF48Q32SP16U_L
#define AE_MULSF48Q32SP16U_L_S2 _TIE_xt_hifi2_AE_MULSF48Q32SP16U_L_S2
#define AE_MULSFP24S_HH _TIE_xt_hifi2_AE_MULSFP24S_HH
#define AE_MULSFP24S_HH_S2 _TIE_xt_hifi2_AE_MULSFP24S_HH_S2
#define AE_MULSFP24S_HL _TIE_xt_hifi2_AE_MULSFP24S_HL
#define AE_MULSFP24S_LH _TIE_xt_hifi2_AE_MULSFP24S_LH
#define AE_MULSFP24S_LH_S2 _TIE_xt_hifi2_AE_MULSFP24S_LH_S2
#define AE_MULSFP24S_LL _TIE_xt_hifi2_AE_MULSFP24S_LL
#define AE_MULSFP24S_LL_S2 _TIE_xt_hifi2_AE_MULSFP24S_LL_S2
#define AE_MULSFP24X2R _TIE_xt_hifi2_AE_MULSFP24X2R
#define AE_MULSFP24X2RA _TIE_xt_hifi2_AE_MULSFP24X2RA
#define AE_MULSFP24X2RA_S2 _TIE_xt_hifi2_AE_MULSFP24X2RA_S2
#define AE_MULSFP24X2R_S2 _TIE_xt_hifi2_AE_MULSFP24X2R_S2
#define AE_MULSFP32X16X2RAS_H _TIE_xt_hifi2_AE_MULSFP32X16X2RAS_H
#define AE_MULSFP32X16X2RAS_H_S2 _TIE_xt_hifi2_AE_MULSFP32X16X2RAS_H_S2
#define AE_MULSFP32X16X2RAS_L _TIE_xt_hifi2_AE_MULSFP32X16X2RAS_L
#define AE_MULSFP32X16X2RAS_L_S2 _TIE_xt_hifi2_AE_MULSFP32X16X2RAS_L_S2
#define AE_MULSFP32X16X2RS_H _TIE_xt_hifi2_AE_MULSFP32X16X2RS_H
#define AE_MULSFP32X16X2RS_H_S2 _TIE_xt_hifi2_AE_MULSFP32X16X2RS_H_S2
#define AE_MULSFP32X16X2RS_L _TIE_xt_hifi2_AE_MULSFP32X16X2RS_L
#define AE_MULSFP32X16X2RS_L_S2 _TIE_xt_hifi2_AE_MULSFP32X16X2RS_L_S2
#define AE_MULSFP32X16X2S_H _TIE_xt_hifi2_AE_MULSFP32X16X2S_H
#define AE_MULSFP32X16X2S_H_S2 _TIE_xt_hifi2_AE_MULSFP32X16X2S_H_S2
#define AE_MULSFP32X16X2S_L _TIE_xt_hifi2_AE_MULSFP32X16X2S_L
#define AE_MULSFP32X16X2S_L_S2 _TIE_xt_hifi2_AE_MULSFP32X16X2S_L_S2
#define AE_MULSFP32X2RAS _TIE_xt_hifi2_AE_MULSFP32X2RAS
#define AE_MULSFP32X2RAS_S2 _TIE_xt_hifi2_AE_MULSFP32X2RAS_S2
#define AE_MULSFP32X2RS _TIE_xt_hifi2_AE_MULSFP32X2RS
#define AE_MULSFP32X2RS_S2 _TIE_xt_hifi2_AE_MULSFP32X2RS_S2
#define AE_MULSFQ32SP16S_H _TIE_xt_hifi2_AE_MULSFQ32SP16S_H
#define AE_MULSFQ32SP16S_L _TIE_xt_hifi2_AE_MULSFQ32SP16S_L
#define AE_MULSFQ32SP16S_L_S2 _TIE_xt_hifi2_AE_MULSFQ32SP16S_L_S2
#define AE_MULSFQ32SP16U_H _TIE_xt_hifi2_AE_MULSFQ32SP16U_H
#define AE_MULSFQ32SP16U_L _TIE_xt_hifi2_AE_MULSFQ32SP16U_L
#define AE_MULSFQ32SP16U_L_S2 _TIE_xt_hifi2_AE_MULSFQ32SP16U_L_S2
#define AE_MULSFS32P16S_HH _TIE_xt_hifi2_AE_MULSFS32P16S_HH
#define AE_MULSFS32P16S_HH_S2 _TIE_xt_hifi2_AE_MULSFS32P16S_HH_S2
#define AE_MULSFS32P16S_HL _TIE_xt_hifi2_AE_MULSFS32P16S_HL
#define AE_MULSFS32P16S_LH _TIE_xt_hifi2_AE_MULSFS32P16S_LH
#define AE_MULSFS32P16S_LH_S2 _TIE_xt_hifi2_AE_MULSFS32P16S_LH_S2
#define AE_MULSFS32P16S_LL _TIE_xt_hifi2_AE_MULSFS32P16S_LL
#define AE_MULSFS32P16S_LL_S2 _TIE_xt_hifi2_AE_MULSFS32P16S_LL_S2
#define AE_MULSFS56P24S_HH _TIE_xt_hifi2_AE_MULSFS56P24S_HH
#define AE_MULSFS56P24S_HL _TIE_xt_hifi2_AE_MULSFS56P24S_HL
#define AE_MULSFS56P24S_LH _TIE_xt_hifi2_AE_MULSFS56P24S_LH
#define AE_MULSFS56P24S_LL _TIE_xt_hifi2_AE_MULSFS56P24S_LL
#define AE_MULSP24S_HH _TIE_xt_hifi2_AE_MULSP24S_HH
#define AE_MULSP24S_HH_S2 _TIE_xt_hifi2_AE_MULSP24S_HH_S2
#define AE_MULSP24S_HL _TIE_xt_hifi2_AE_MULSP24S_HL
#define AE_MULSP24S_LH _TIE_xt_hifi2_AE_MULSP24S_LH
#define AE_MULSP24S_LH_S2 _TIE_xt_hifi2_AE_MULSP24S_LH_S2
#define AE_MULSP24S_LL _TIE_xt_hifi2_AE_MULSP24S_LL
#define AE_MULSP24S_LL_S2 _TIE_xt_hifi2_AE_MULSP24S_LL_S2
#define AE_MULSP24X2 _TIE_xt_hifi2_AE_MULSP24X2
#define AE_MULSP32X16X2_H _TIE_xt_hifi2_AE_MULSP32X16X2_H
#define AE_MULSP32X16X2_H_S2 _TIE_xt_hifi2_AE_MULSP32X16X2_H_S2
#define AE_MULSP32X16X2_L _TIE_xt_hifi2_AE_MULSP32X16X2_L
#define AE_MULSP32X16X2_L_S2 _TIE_xt_hifi2_AE_MULSP32X16X2_L_S2
#define AE_MULSP32X2 _TIE_xt_hifi2_AE_MULSP32X2
#define AE_MULSP32X2_S2 _TIE_xt_hifi2_AE_MULSP32X2_S2
#define AE_MULSQ32SP16S_H _TIE_xt_hifi2_AE_MULSQ32SP16S_H
#define AE_MULSQ32SP16S_L _TIE_xt_hifi2_AE_MULSQ32SP16S_L
#define AE_MULSQ32SP16S_L_S2 _TIE_xt_hifi2_AE_MULSQ32SP16S_L_S2
#define AE_MULSQ32SP16U_H _TIE_xt_hifi2_AE_MULSQ32SP16U_H
#define AE_MULSQ32SP16U_L _TIE_xt_hifi2_AE_MULSQ32SP16U_L
#define AE_MULSQ32SP16U_L_S2 _TIE_xt_hifi2_AE_MULSQ32SP16U_L_S2
#define AE_MULSS32F48P16S_HH _TIE_xt_hifi2_AE_MULSS32F48P16S_HH
#define AE_MULSS32F48P16S_HH_S2 _TIE_xt_hifi2_AE_MULSS32F48P16S_HH_S2
#define AE_MULSS32F48P16S_HL _TIE_xt_hifi2_AE_MULSS32F48P16S_HL
#define AE_MULSS32F48P16S_LH _TIE_xt_hifi2_AE_MULSS32F48P16S_LH
#define AE_MULSS32F48P16S_LH_S2 _TIE_xt_hifi2_AE_MULSS32F48P16S_LH_S2
#define AE_MULSS32F48P16S_LL _TIE_xt_hifi2_AE_MULSS32F48P16S_LL
#define AE_MULSS32F48P16S_LL_S2 _TIE_xt_hifi2_AE_MULSS32F48P16S_LL_S2
#define AE_MULSS56P24S_HH _TIE_xt_hifi2_AE_MULSS56P24S_HH
#define AE_MULSS56P24S_HL _TIE_xt_hifi2_AE_MULSS56P24S_HL
#define AE_MULSS56P24S_LH _TIE_xt_hifi2_AE_MULSS56P24S_LH
#define AE_MULSS56P24S_LL _TIE_xt_hifi2_AE_MULSS56P24S_LL
#define AE_MULSSD24_HH_LL _TIE_xt_hifi2_AE_MULSSD24_HH_LL
#define AE_MULSSD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULSSD24_HH_LL_S2
#define AE_MULSSD24_HL_LH _TIE_xt_hifi2_AE_MULSSD24_HL_LH
#define AE_MULSSD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULSSD24_HL_LH_S2
#define AE_MULSSD32EP_HH_LL _TIE_xt_hifi2_AE_MULSSD32EP_HH_LL
#define AE_MULSSD32EP_HH_LL_S2 _TIE_xt_hifi2_AE_MULSSD32EP_HH_LL_S2
#define AE_MULSSD32X16_H1_L0 _TIE_xt_hifi2_AE_MULSSD32X16_H1_L0
#define AE_MULSSD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULSSD32X16_H1_L0_S2
#define AE_MULSSD32X16_H3_L2 _TIE_xt_hifi2_AE_MULSSD32X16_H3_L2
#define AE_MULSSD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULSSD32X16_H3_L2_S2
#define AE_MULSSD32_HH_LL _TIE_xt_hifi2_AE_MULSSD32_HH_LL
#define AE_MULSSD32_HH_LL_S2 _TIE_xt_hifi2_AE_MULSSD32_HH_LL_S2
#define AE_MULSSD32_HL_LH _TIE_xt_hifi2_AE_MULSSD32_HL_LH
#define AE_MULSSD32_HL_LH_S2 _TIE_xt_hifi2_AE_MULSSD32_HL_LH_S2
#define AE_MULSSFD16SS_11_00 _TIE_xt_hifi2_AE_MULSSFD16SS_11_00
#define AE_MULSSFD16SS_11_00_S2 _TIE_xt_hifi2_AE_MULSSFD16SS_11_00_S2
#define AE_MULSSFD16SS_13_02 _TIE_xt_hifi2_AE_MULSSFD16SS_13_02
#define AE_MULSSFD16SS_13_02_S2 _TIE_xt_hifi2_AE_MULSSFD16SS_13_02_S2
#define AE_MULSSFD16SS_33_22 _TIE_xt_hifi2_AE_MULSSFD16SS_33_22
#define AE_MULSSFD16SS_33_22_S2 _TIE_xt_hifi2_AE_MULSSFD16SS_33_22_S2
#define AE_MULSSFD24_HH_LL _TIE_xt_hifi2_AE_MULSSFD24_HH_LL
#define AE_MULSSFD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULSSFD24_HH_LL_S2
#define AE_MULSSFD24_HL_LH _TIE_xt_hifi2_AE_MULSSFD24_HL_LH
#define AE_MULSSFD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULSSFD24_HL_LH_S2
#define AE_MULSSFD32RA_HH_LL _TIE_xt_hifi2_AE_MULSSFD32RA_HH_LL
#define AE_MULSSFD32RA_HH_LL_S2 _TIE_xt_hifi2_AE_MULSSFD32RA_HH_LL_S2
#define AE_MULSSFD32RA_HL_LH _TIE_xt_hifi2_AE_MULSSFD32RA_HL_LH
#define AE_MULSSFD32RA_HL_LH_S2 _TIE_xt_hifi2_AE_MULSSFD32RA_HL_LH_S2
#define AE_MULSSFD32S_HH_LL _TIE_xt_hifi2_AE_MULSSFD32S_HH_LL
#define AE_MULSSFD32S_HH_LL_S2 _TIE_xt_hifi2_AE_MULSSFD32S_HH_LL_S2
#define AE_MULSSFD32S_HL_LH _TIE_xt_hifi2_AE_MULSSFD32S_HL_LH
#define AE_MULSSFD32S_HL_LH_S2 _TIE_xt_hifi2_AE_MULSSFD32S_HL_LH_S2
#define AE_MULSSFD32X16_H1_L0 _TIE_xt_hifi2_AE_MULSSFD32X16_H1_L0
#define AE_MULSSFD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULSSFD32X16_H1_L0_S2
#define AE_MULSSFD32X16_H3_L2 _TIE_xt_hifi2_AE_MULSSFD32X16_H3_L2
#define AE_MULSSFD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULSSFD32X16_H3_L2_S2
#define AE_MULSSFP24S_HH_LL _TIE_xt_hifi2_AE_MULSSFP24S_HH_LL
#define AE_MULSSFP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULSSFP24S_HH_LL_S2
#define AE_MULSSFP24S_HL_LH _TIE_xt_hifi2_AE_MULSSFP24S_HL_LH
#define AE_MULSSFP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULSSFP24S_HL_LH_S2
#define AE_MULSSP24S_HH_LL _TIE_xt_hifi2_AE_MULSSP24S_HH_LL
#define AE_MULSSP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULSSP24S_HH_LL_S2
#define AE_MULSSP24S_HL_LH _TIE_xt_hifi2_AE_MULSSP24S_HL_LH
#define AE_MULSSP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULSSP24S_HL_LH_S2
#define AE_MULZAAAAFQ32X16 _TIE_xt_hifi2_AE_MULZAAAAFQ32X16
#define AE_MULZAAAAFQ32X16_S2 _TIE_xt_hifi2_AE_MULZAAAAFQ32X16_S2
#define AE_MULZAAAAQ16 _TIE_xt_hifi2_AE_MULZAAAAQ16
#define AE_MULZAAAAQ16_S2 _TIE_xt_hifi2_AE_MULZAAAAQ16_S2
#define AE_MULZAAAAQ32X16 _TIE_xt_hifi2_AE_MULZAAAAQ32X16
#define AE_MULZAAAAQ32X16_S2 _TIE_xt_hifi2_AE_MULZAAAAQ32X16_S2
#define AE_MULZAAD24_HH_LL _TIE_xt_hifi2_AE_MULZAAD24_HH_LL
#define AE_MULZAAD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULZAAD24_HH_LL_S2
#define AE_MULZAAD24_HL_LH _TIE_xt_hifi2_AE_MULZAAD24_HL_LH
#define AE_MULZAAD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULZAAD24_HL_LH_S2
#define AE_MULZAAD32EP_HH_LL _TIE_xt_hifi2_AE_MULZAAD32EP_HH_LL
#define AE_MULZAAD32EP_HH_LL_S2 _TIE_xt_hifi2_AE_MULZAAD32EP_HH_LL_S2
#define AE_MULZAAD32USEP_HL_LH _TIE_xt_hifi2_AE_MULZAAD32USEP_HL_LH
#define AE_MULZAAD32USEP_HL_LH_S2 _TIE_xt_hifi2_AE_MULZAAD32USEP_HL_LH_S2
#define AE_MULZAAD32X16_H0_L1 _TIE_xt_hifi2_AE_MULZAAD32X16_H0_L1
#define AE_MULZAAD32X16_H0_L1_S2 _TIE_xt_hifi2_AE_MULZAAD32X16_H0_L1_S2
#define AE_MULZAAD32X16_H1_L0 _TIE_xt_hifi2_AE_MULZAAD32X16_H1_L0
#define AE_MULZAAD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULZAAD32X16_H1_L0_S2
#define AE_MULZAAD32X16_H2_L3 _TIE_xt_hifi2_AE_MULZAAD32X16_H2_L3
#define AE_MULZAAD32X16_H2_L3_S2 _TIE_xt_hifi2_AE_MULZAAD32X16_H2_L3_S2
#define AE_MULZAAD32X16_H3_L2 _TIE_xt_hifi2_AE_MULZAAD32X16_H3_L2
#define AE_MULZAAD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULZAAD32X16_H3_L2_S2
#define AE_MULZAAD32_HH_LL _TIE_xt_hifi2_AE_MULZAAD32_HH_LL
#define AE_MULZAAD32_HH_LL_S2 _TIE_xt_hifi2_AE_MULZAAD32_HH_LL_S2
#define AE_MULZAAD32_HL_LH _TIE_xt_hifi2_AE_MULZAAD32_HL_LH
#define AE_MULZAAD32_HL_LH_S2 _TIE_xt_hifi2_AE_MULZAAD32_HL_LH_S2
#define AE_MULZAAFD16SS_11_00 _TIE_xt_hifi2_AE_MULZAAFD16SS_11_00
#define AE_MULZAAFD16SS_11_00_S2 _TIE_xt_hifi2_AE_MULZAAFD16SS_11_00_S2
#define AE_MULZAAFD16SS_13_02 _TIE_xt_hifi2_AE_MULZAAFD16SS_13_02
#define AE_MULZAAFD16SS_13_02_S2 _TIE_xt_hifi2_AE_MULZAAFD16SS_13_02_S2
#define AE_MULZAAFD16SS_33_22 _TIE_xt_hifi2_AE_MULZAAFD16SS_33_22
#define AE_MULZAAFD16SS_33_22_S2 _TIE_xt_hifi2_AE_MULZAAFD16SS_33_22_S2
#define AE_MULZAAFD24_HH_LL _TIE_xt_hifi2_AE_MULZAAFD24_HH_LL
#define AE_MULZAAFD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULZAAFD24_HH_LL_S2
#define AE_MULZAAFD24_HL_LH _TIE_xt_hifi2_AE_MULZAAFD24_HL_LH
#define AE_MULZAAFD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULZAAFD24_HL_LH_S2
#define AE_MULZAAFD32RA_HH_LL _TIE_xt_hifi2_AE_MULZAAFD32RA_HH_LL
#define AE_MULZAAFD32RA_HH_LL_S2 _TIE_xt_hifi2_AE_MULZAAFD32RA_HH_LL_S2
#define AE_MULZAAFD32RA_HL_LH _TIE_xt_hifi2_AE_MULZAAFD32RA_HL_LH
#define AE_MULZAAFD32RA_HL_LH_S2 _TIE_xt_hifi2_AE_MULZAAFD32RA_HL_LH_S2
#define AE_MULZAAFD32S_HH_LL _TIE_xt_hifi2_AE_MULZAAFD32S_HH_LL
#define AE_MULZAAFD32S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZAAFD32S_HH_LL_S2
#define AE_MULZAAFD32S_HL_LH _TIE_xt_hifi2_AE_MULZAAFD32S_HL_LH
#define AE_MULZAAFD32S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZAAFD32S_HL_LH_S2
#define AE_MULZAAFD32X16_H0_L1 _TIE_xt_hifi2_AE_MULZAAFD32X16_H0_L1
#define AE_MULZAAFD32X16_H0_L1_S2 _TIE_xt_hifi2_AE_MULZAAFD32X16_H0_L1_S2
#define AE_MULZAAFD32X16_H1_L0 _TIE_xt_hifi2_AE_MULZAAFD32X16_H1_L0
#define AE_MULZAAFD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULZAAFD32X16_H1_L0_S2
#define AE_MULZAAFD32X16_H2_L3 _TIE_xt_hifi2_AE_MULZAAFD32X16_H2_L3
#define AE_MULZAAFD32X16_H2_L3_S2 _TIE_xt_hifi2_AE_MULZAAFD32X16_H2_L3_S2
#define AE_MULZAAFD32X16_H3_L2 _TIE_xt_hifi2_AE_MULZAAFD32X16_H3_L2
#define AE_MULZAAFD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULZAAFD32X16_H3_L2_S2
#define AE_MULZAAFP24S_HH_LL _TIE_xt_hifi2_AE_MULZAAFP24S_HH_LL
#define AE_MULZAAFP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZAAFP24S_HH_LL_S2
#define AE_MULZAAFP24S_HL_LH _TIE_xt_hifi2_AE_MULZAAFP24S_HL_LH
#define AE_MULZAAFP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZAAFP24S_HL_LH_S2
#define AE_MULZAAFQ32SP16S_HH _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_HH
#define AE_MULZAAFQ32SP16S_HH_S2 _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_HH_S2
#define AE_MULZAAFQ32SP16S_LH _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_LH
#define AE_MULZAAFQ32SP16S_LH_S2 _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_LH_S2
#define AE_MULZAAFQ32SP16S_LL _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_LL
#define AE_MULZAAFQ32SP16S_LL_S2 _TIE_xt_hifi2_AE_MULZAAFQ32SP16S_LL_S2
#define AE_MULZAAFQ32SP16U_HH _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_HH
#define AE_MULZAAFQ32SP16U_HH_S2 _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_HH_S2
#define AE_MULZAAFQ32SP16U_LH _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_LH
#define AE_MULZAAFQ32SP16U_LH_S2 _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_LH_S2
#define AE_MULZAAFQ32SP16U_LL _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_LL
#define AE_MULZAAFQ32SP16U_LL_S2 _TIE_xt_hifi2_AE_MULZAAFQ32SP16U_LL_S2
#define AE_MULZAAP24S_HH_LL _TIE_xt_hifi2_AE_MULZAAP24S_HH_LL
#define AE_MULZAAP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZAAP24S_HH_LL_S2
#define AE_MULZAAP24S_HL_LH _TIE_xt_hifi2_AE_MULZAAP24S_HL_LH
#define AE_MULZAAP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZAAP24S_HL_LH_S2
#define AE_MULZAAQ32SP16S_HH _TIE_xt_hifi2_AE_MULZAAQ32SP16S_HH
#define AE_MULZAAQ32SP16S_HH_S2 _TIE_xt_hifi2_AE_MULZAAQ32SP16S_HH_S2
#define AE_MULZAAQ32SP16S_LH _TIE_xt_hifi2_AE_MULZAAQ32SP16S_LH
#define AE_MULZAAQ32SP16S_LH_S2 _TIE_xt_hifi2_AE_MULZAAQ32SP16S_LH_S2
#define AE_MULZAAQ32SP16S_LL _TIE_xt_hifi2_AE_MULZAAQ32SP16S_LL
#define AE_MULZAAQ32SP16S_LL_S2 _TIE_xt_hifi2_AE_MULZAAQ32SP16S_LL_S2
#define AE_MULZAAQ32SP16U_HH _TIE_xt_hifi2_AE_MULZAAQ32SP16U_HH
#define AE_MULZAAQ32SP16U_HH_S2 _TIE_xt_hifi2_AE_MULZAAQ32SP16U_HH_S2
#define AE_MULZAAQ32SP16U_LH _TIE_xt_hifi2_AE_MULZAAQ32SP16U_LH
#define AE_MULZAAQ32SP16U_LH_S2 _TIE_xt_hifi2_AE_MULZAAQ32SP16U_LH_S2
#define AE_MULZAAQ32SP16U_LL _TIE_xt_hifi2_AE_MULZAAQ32SP16U_LL
#define AE_MULZAAQ32SP16U_LL_S2 _TIE_xt_hifi2_AE_MULZAAQ32SP16U_LL_S2
#define AE_MULZASD24_HH_LL _TIE_xt_hifi2_AE_MULZASD24_HH_LL
#define AE_MULZASD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULZASD24_HH_LL_S2
#define AE_MULZASD24_HL_LH _TIE_xt_hifi2_AE_MULZASD24_HL_LH
#define AE_MULZASD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULZASD24_HL_LH_S2
#define AE_MULZASD32X16_H1_L0 _TIE_xt_hifi2_AE_MULZASD32X16_H1_L0
#define AE_MULZASD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULZASD32X16_H1_L0_S2
#define AE_MULZASD32X16_H3_L2 _TIE_xt_hifi2_AE_MULZASD32X16_H3_L2
#define AE_MULZASD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULZASD32X16_H3_L2_S2
#define AE_MULZASD32_HH_LL _TIE_xt_hifi2_AE_MULZASD32_HH_LL
#define AE_MULZASD32_HH_LL_S2 _TIE_xt_hifi2_AE_MULZASD32_HH_LL_S2
#define AE_MULZASD32_HL_LH _TIE_xt_hifi2_AE_MULZASD32_HL_LH
#define AE_MULZASD32_HL_LH_S2 _TIE_xt_hifi2_AE_MULZASD32_HL_LH_S2
#define AE_MULZASFD24_HH_LL _TIE_xt_hifi2_AE_MULZASFD24_HH_LL
#define AE_MULZASFD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULZASFD24_HH_LL_S2
#define AE_MULZASFD24_HL_LH _TIE_xt_hifi2_AE_MULZASFD24_HL_LH
#define AE_MULZASFD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULZASFD24_HL_LH_S2
#define AE_MULZASFD32RA_HH_LL _TIE_xt_hifi2_AE_MULZASFD32RA_HH_LL
#define AE_MULZASFD32RA_HH_LL_S2 _TIE_xt_hifi2_AE_MULZASFD32RA_HH_LL_S2
#define AE_MULZASFD32RA_HL_LH _TIE_xt_hifi2_AE_MULZASFD32RA_HL_LH
#define AE_MULZASFD32RA_HL_LH_S2 _TIE_xt_hifi2_AE_MULZASFD32RA_HL_LH_S2
#define AE_MULZASFD32S_HH_LL _TIE_xt_hifi2_AE_MULZASFD32S_HH_LL
#define AE_MULZASFD32S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZASFD32S_HH_LL_S2
#define AE_MULZASFD32S_HL_LH _TIE_xt_hifi2_AE_MULZASFD32S_HL_LH
#define AE_MULZASFD32S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZASFD32S_HL_LH_S2
#define AE_MULZASFD32X16_H1_L0 _TIE_xt_hifi2_AE_MULZASFD32X16_H1_L0
#define AE_MULZASFD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULZASFD32X16_H1_L0_S2
#define AE_MULZASFD32X16_H3_L2 _TIE_xt_hifi2_AE_MULZASFD32X16_H3_L2
#define AE_MULZASFD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULZASFD32X16_H3_L2_S2
#define AE_MULZASFP24S_HH_LL _TIE_xt_hifi2_AE_MULZASFP24S_HH_LL
#define AE_MULZASFP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZASFP24S_HH_LL_S2
#define AE_MULZASFP24S_HL_LH _TIE_xt_hifi2_AE_MULZASFP24S_HL_LH
#define AE_MULZASFP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZASFP24S_HL_LH_S2
#define AE_MULZASFQ32SP16S_HH _TIE_xt_hifi2_AE_MULZASFQ32SP16S_HH
#define AE_MULZASFQ32SP16S_HH_S2 _TIE_xt_hifi2_AE_MULZASFQ32SP16S_HH_S2
#define AE_MULZASFQ32SP16S_LH _TIE_xt_hifi2_AE_MULZASFQ32SP16S_LH
#define AE_MULZASFQ32SP16S_LH_S2 _TIE_xt_hifi2_AE_MULZASFQ32SP16S_LH_S2
#define AE_MULZASFQ32SP16S_LL _TIE_xt_hifi2_AE_MULZASFQ32SP16S_LL
#define AE_MULZASFQ32SP16S_LL_S2 _TIE_xt_hifi2_AE_MULZASFQ32SP16S_LL_S2
#define AE_MULZASFQ32SP16U_HH _TIE_xt_hifi2_AE_MULZASFQ32SP16U_HH
#define AE_MULZASFQ32SP16U_HH_S2 _TIE_xt_hifi2_AE_MULZASFQ32SP16U_HH_S2
#define AE_MULZASFQ32SP16U_LH _TIE_xt_hifi2_AE_MULZASFQ32SP16U_LH
#define AE_MULZASFQ32SP16U_LH_S2 _TIE_xt_hifi2_AE_MULZASFQ32SP16U_LH_S2
#define AE_MULZASFQ32SP16U_LL _TIE_xt_hifi2_AE_MULZASFQ32SP16U_LL
#define AE_MULZASFQ32SP16U_LL_S2 _TIE_xt_hifi2_AE_MULZASFQ32SP16U_LL_S2
#define AE_MULZASP24S_HH_LL _TIE_xt_hifi2_AE_MULZASP24S_HH_LL
#define AE_MULZASP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZASP24S_HH_LL_S2
#define AE_MULZASP24S_HL_LH _TIE_xt_hifi2_AE_MULZASP24S_HL_LH
#define AE_MULZASP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZASP24S_HL_LH_S2
#define AE_MULZASQ32SP16S_HH _TIE_xt_hifi2_AE_MULZASQ32SP16S_HH
#define AE_MULZASQ32SP16S_HH_S2 _TIE_xt_hifi2_AE_MULZASQ32SP16S_HH_S2
#define AE_MULZASQ32SP16S_LH _TIE_xt_hifi2_AE_MULZASQ32SP16S_LH
#define AE_MULZASQ32SP16S_LH_S2 _TIE_xt_hifi2_AE_MULZASQ32SP16S_LH_S2
#define AE_MULZASQ32SP16S_LL _TIE_xt_hifi2_AE_MULZASQ32SP16S_LL
#define AE_MULZASQ32SP16S_LL_S2 _TIE_xt_hifi2_AE_MULZASQ32SP16S_LL_S2
#define AE_MULZASQ32SP16U_HH _TIE_xt_hifi2_AE_MULZASQ32SP16U_HH
#define AE_MULZASQ32SP16U_HH_S2 _TIE_xt_hifi2_AE_MULZASQ32SP16U_HH_S2
#define AE_MULZASQ32SP16U_LH _TIE_xt_hifi2_AE_MULZASQ32SP16U_LH
#define AE_MULZASQ32SP16U_LH_S2 _TIE_xt_hifi2_AE_MULZASQ32SP16U_LH_S2
#define AE_MULZASQ32SP16U_LL _TIE_xt_hifi2_AE_MULZASQ32SP16U_LL
#define AE_MULZASQ32SP16U_LL_S2 _TIE_xt_hifi2_AE_MULZASQ32SP16U_LL_S2
#define AE_MULZSAD24_HH_LL _TIE_xt_hifi2_AE_MULZSAD24_HH_LL
#define AE_MULZSAD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSAD24_HH_LL_S2
#define AE_MULZSAD24_HL_LH _TIE_xt_hifi2_AE_MULZSAD24_HL_LH
#define AE_MULZSAD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSAD24_HL_LH_S2
#define AE_MULZSAD32X16_H1_L0 _TIE_xt_hifi2_AE_MULZSAD32X16_H1_L0
#define AE_MULZSAD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULZSAD32X16_H1_L0_S2
#define AE_MULZSAD32X16_H3_L2 _TIE_xt_hifi2_AE_MULZSAD32X16_H3_L2
#define AE_MULZSAD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULZSAD32X16_H3_L2_S2
#define AE_MULZSAD32_HH_LL _TIE_xt_hifi2_AE_MULZSAD32_HH_LL
#define AE_MULZSAD32_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSAD32_HH_LL_S2
#define AE_MULZSAD32_HL_LH _TIE_xt_hifi2_AE_MULZSAD32_HL_LH
#define AE_MULZSAD32_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSAD32_HL_LH_S2
#define AE_MULZSAFD24_HH_LL _TIE_xt_hifi2_AE_MULZSAFD24_HH_LL
#define AE_MULZSAFD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSAFD24_HH_LL_S2
#define AE_MULZSAFD24_HL_LH _TIE_xt_hifi2_AE_MULZSAFD24_HL_LH
#define AE_MULZSAFD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSAFD24_HL_LH_S2
#define AE_MULZSAFD32RA_HH_LL _TIE_xt_hifi2_AE_MULZSAFD32RA_HH_LL
#define AE_MULZSAFD32RA_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSAFD32RA_HH_LL_S2
#define AE_MULZSAFD32RA_HL_LH _TIE_xt_hifi2_AE_MULZSAFD32RA_HL_LH
#define AE_MULZSAFD32RA_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSAFD32RA_HL_LH_S2
#define AE_MULZSAFD32S_HH_LL _TIE_xt_hifi2_AE_MULZSAFD32S_HH_LL
#define AE_MULZSAFD32S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSAFD32S_HH_LL_S2
#define AE_MULZSAFD32S_HL_LH _TIE_xt_hifi2_AE_MULZSAFD32S_HL_LH
#define AE_MULZSAFD32S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSAFD32S_HL_LH_S2
#define AE_MULZSAFD32X16_H1_L0 _TIE_xt_hifi2_AE_MULZSAFD32X16_H1_L0
#define AE_MULZSAFD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULZSAFD32X16_H1_L0_S2
#define AE_MULZSAFD32X16_H3_L2 _TIE_xt_hifi2_AE_MULZSAFD32X16_H3_L2
#define AE_MULZSAFD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULZSAFD32X16_H3_L2_S2
#define AE_MULZSAFP24S_HH_LL _TIE_xt_hifi2_AE_MULZSAFP24S_HH_LL
#define AE_MULZSAFP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSAFP24S_HH_LL_S2
#define AE_MULZSAFP24S_HL_LH _TIE_xt_hifi2_AE_MULZSAFP24S_HL_LH
#define AE_MULZSAFP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSAFP24S_HL_LH_S2
#define AE_MULZSAFQ32SP16S_HH _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_HH
#define AE_MULZSAFQ32SP16S_HH_S2 _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_HH_S2
#define AE_MULZSAFQ32SP16S_LH _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_LH
#define AE_MULZSAFQ32SP16S_LH_S2 _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_LH_S2
#define AE_MULZSAFQ32SP16S_LL _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_LL
#define AE_MULZSAFQ32SP16S_LL_S2 _TIE_xt_hifi2_AE_MULZSAFQ32SP16S_LL_S2
#define AE_MULZSAFQ32SP16U_HH _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_HH
#define AE_MULZSAFQ32SP16U_HH_S2 _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_HH_S2
#define AE_MULZSAFQ32SP16U_LH _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_LH
#define AE_MULZSAFQ32SP16U_LH_S2 _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_LH_S2
#define AE_MULZSAFQ32SP16U_LL _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_LL
#define AE_MULZSAFQ32SP16U_LL_S2 _TIE_xt_hifi2_AE_MULZSAFQ32SP16U_LL_S2
#define AE_MULZSAP24S_HH_LL _TIE_xt_hifi2_AE_MULZSAP24S_HH_LL
#define AE_MULZSAP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSAP24S_HH_LL_S2
#define AE_MULZSAP24S_HL_LH _TIE_xt_hifi2_AE_MULZSAP24S_HL_LH
#define AE_MULZSAP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSAP24S_HL_LH_S2
#define AE_MULZSAQ32SP16S_HH _TIE_xt_hifi2_AE_MULZSAQ32SP16S_HH
#define AE_MULZSAQ32SP16S_HH_S2 _TIE_xt_hifi2_AE_MULZSAQ32SP16S_HH_S2
#define AE_MULZSAQ32SP16S_LH _TIE_xt_hifi2_AE_MULZSAQ32SP16S_LH
#define AE_MULZSAQ32SP16S_LH_S2 _TIE_xt_hifi2_AE_MULZSAQ32SP16S_LH_S2
#define AE_MULZSAQ32SP16S_LL _TIE_xt_hifi2_AE_MULZSAQ32SP16S_LL
#define AE_MULZSAQ32SP16S_LL_S2 _TIE_xt_hifi2_AE_MULZSAQ32SP16S_LL_S2
#define AE_MULZSAQ32SP16U_HH _TIE_xt_hifi2_AE_MULZSAQ32SP16U_HH
#define AE_MULZSAQ32SP16U_HH_S2 _TIE_xt_hifi2_AE_MULZSAQ32SP16U_HH_S2
#define AE_MULZSAQ32SP16U_LH _TIE_xt_hifi2_AE_MULZSAQ32SP16U_LH
#define AE_MULZSAQ32SP16U_LH_S2 _TIE_xt_hifi2_AE_MULZSAQ32SP16U_LH_S2
#define AE_MULZSAQ32SP16U_LL _TIE_xt_hifi2_AE_MULZSAQ32SP16U_LL
#define AE_MULZSAQ32SP16U_LL_S2 _TIE_xt_hifi2_AE_MULZSAQ32SP16U_LL_S2
#define AE_MULZSSD24_HH_LL _TIE_xt_hifi2_AE_MULZSSD24_HH_LL
#define AE_MULZSSD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSSD24_HH_LL_S2
#define AE_MULZSSD24_HL_LH _TIE_xt_hifi2_AE_MULZSSD24_HL_LH
#define AE_MULZSSD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSSD24_HL_LH_S2
#define AE_MULZSSD32EP_HH_LL _TIE_xt_hifi2_AE_MULZSSD32EP_HH_LL
#define AE_MULZSSD32EP_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSSD32EP_HH_LL_S2
#define AE_MULZSSD32X16_H1_L0 _TIE_xt_hifi2_AE_MULZSSD32X16_H1_L0
#define AE_MULZSSD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULZSSD32X16_H1_L0_S2
#define AE_MULZSSD32X16_H3_L2 _TIE_xt_hifi2_AE_MULZSSD32X16_H3_L2
#define AE_MULZSSD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULZSSD32X16_H3_L2_S2
#define AE_MULZSSD32_HH_LL _TIE_xt_hifi2_AE_MULZSSD32_HH_LL
#define AE_MULZSSD32_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSSD32_HH_LL_S2
#define AE_MULZSSD32_HL_LH _TIE_xt_hifi2_AE_MULZSSD32_HL_LH
#define AE_MULZSSD32_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSSD32_HL_LH_S2
#define AE_MULZSSFD16SS_11_00 _TIE_xt_hifi2_AE_MULZSSFD16SS_11_00
#define AE_MULZSSFD16SS_11_00_S2 _TIE_xt_hifi2_AE_MULZSSFD16SS_11_00_S2
#define AE_MULZSSFD16SS_13_02 _TIE_xt_hifi2_AE_MULZSSFD16SS_13_02
#define AE_MULZSSFD16SS_13_02_S2 _TIE_xt_hifi2_AE_MULZSSFD16SS_13_02_S2
#define AE_MULZSSFD16SS_33_22 _TIE_xt_hifi2_AE_MULZSSFD16SS_33_22
#define AE_MULZSSFD16SS_33_22_S2 _TIE_xt_hifi2_AE_MULZSSFD16SS_33_22_S2
#define AE_MULZSSFD24_HH_LL _TIE_xt_hifi2_AE_MULZSSFD24_HH_LL
#define AE_MULZSSFD24_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSSFD24_HH_LL_S2
#define AE_MULZSSFD24_HL_LH _TIE_xt_hifi2_AE_MULZSSFD24_HL_LH
#define AE_MULZSSFD24_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSSFD24_HL_LH_S2
#define AE_MULZSSFD32RA_HH_LL _TIE_xt_hifi2_AE_MULZSSFD32RA_HH_LL
#define AE_MULZSSFD32RA_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSSFD32RA_HH_LL_S2
#define AE_MULZSSFD32RA_HL_LH _TIE_xt_hifi2_AE_MULZSSFD32RA_HL_LH
#define AE_MULZSSFD32RA_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSSFD32RA_HL_LH_S2
#define AE_MULZSSFD32S_HH_LL _TIE_xt_hifi2_AE_MULZSSFD32S_HH_LL
#define AE_MULZSSFD32S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSSFD32S_HH_LL_S2
#define AE_MULZSSFD32S_HL_LH _TIE_xt_hifi2_AE_MULZSSFD32S_HL_LH
#define AE_MULZSSFD32S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSSFD32S_HL_LH_S2
#define AE_MULZSSFD32X16_H1_L0 _TIE_xt_hifi2_AE_MULZSSFD32X16_H1_L0
#define AE_MULZSSFD32X16_H1_L0_S2 _TIE_xt_hifi2_AE_MULZSSFD32X16_H1_L0_S2
#define AE_MULZSSFD32X16_H3_L2 _TIE_xt_hifi2_AE_MULZSSFD32X16_H3_L2
#define AE_MULZSSFD32X16_H3_L2_S2 _TIE_xt_hifi2_AE_MULZSSFD32X16_H3_L2_S2
#define AE_MULZSSFP24S_HH_LL _TIE_xt_hifi2_AE_MULZSSFP24S_HH_LL
#define AE_MULZSSFP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSSFP24S_HH_LL_S2
#define AE_MULZSSFP24S_HL_LH _TIE_xt_hifi2_AE_MULZSSFP24S_HL_LH
#define AE_MULZSSFP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSSFP24S_HL_LH_S2
#define AE_MULZSSFQ32SP16S_HH _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_HH
#define AE_MULZSSFQ32SP16S_HH_S2 _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_HH_S2
#define AE_MULZSSFQ32SP16S_LH _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_LH
#define AE_MULZSSFQ32SP16S_LH_S2 _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_LH_S2
#define AE_MULZSSFQ32SP16S_LL _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_LL
#define AE_MULZSSFQ32SP16S_LL_S2 _TIE_xt_hifi2_AE_MULZSSFQ32SP16S_LL_S2
#define AE_MULZSSFQ32SP16U_HH _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_HH
#define AE_MULZSSFQ32SP16U_HH_S2 _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_HH_S2
#define AE_MULZSSFQ32SP16U_LH _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_LH
#define AE_MULZSSFQ32SP16U_LH_S2 _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_LH_S2
#define AE_MULZSSFQ32SP16U_LL _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_LL
#define AE_MULZSSFQ32SP16U_LL_S2 _TIE_xt_hifi2_AE_MULZSSFQ32SP16U_LL_S2
#define AE_MULZSSP24S_HH_LL _TIE_xt_hifi2_AE_MULZSSP24S_HH_LL
#define AE_MULZSSP24S_HH_LL_S2 _TIE_xt_hifi2_AE_MULZSSP24S_HH_LL_S2
#define AE_MULZSSP24S_HL_LH _TIE_xt_hifi2_AE_MULZSSP24S_HL_LH
#define AE_MULZSSP24S_HL_LH_S2 _TIE_xt_hifi2_AE_MULZSSP24S_HL_LH_S2
#define AE_MULZSSQ32SP16S_HH _TIE_xt_hifi2_AE_MULZSSQ32SP16S_HH
#define AE_MULZSSQ32SP16S_HH_S2 _TIE_xt_hifi2_AE_MULZSSQ32SP16S_HH_S2
#define AE_MULZSSQ32SP16S_LH _TIE_xt_hifi2_AE_MULZSSQ32SP16S_LH
#define AE_MULZSSQ32SP16S_LH_S2 _TIE_xt_hifi2_AE_MULZSSQ32SP16S_LH_S2
#define AE_MULZSSQ32SP16S_LL _TIE_xt_hifi2_AE_MULZSSQ32SP16S_LL
#define AE_MULZSSQ32SP16S_LL_S2 _TIE_xt_hifi2_AE_MULZSSQ32SP16S_LL_S2
#define AE_MULZSSQ32SP16U_HH _TIE_xt_hifi2_AE_MULZSSQ32SP16U_HH
#define AE_MULZSSQ32SP16U_HH_S2 _TIE_xt_hifi2_AE_MULZSSQ32SP16U_HH_S2
#define AE_MULZSSQ32SP16U_LH _TIE_xt_hifi2_AE_MULZSSQ32SP16U_LH
#define AE_MULZSSQ32SP16U_LH_S2 _TIE_xt_hifi2_AE_MULZSSQ32SP16U_LH_S2
#define AE_MULZSSQ32SP16U_LL _TIE_xt_hifi2_AE_MULZSSQ32SP16U_LL
#define AE_MULZSSQ32SP16U_LL_S2 _TIE_xt_hifi2_AE_MULZSSQ32SP16U_LL_S2
#define AE_NAND _TIE_xt_hifi2_AE_NAND
#define AE_NAND16 _TIE_xt_hifi2_AE_NAND16
#define AE_NAND24 _TIE_xt_hifi2_AE_NAND24
#define AE_NAND32 _TIE_xt_hifi2_AE_NAND32
#define AE_NAND64 _TIE_xt_hifi2_AE_NAND64
#define AE_NANDP48 _TIE_xt_hifi2_AE_NANDP48
#define AE_NANDQ56 _TIE_xt_hifi2_AE_NANDQ56
#define AE_NAND_32 _TIE_xt_hifi2_AE_NAND_32
#define AE_NEG16S _TIE_xt_hifi2_AE_NEG16S
#define AE_NEG16S_scalar _TIE_xt_hifi2_AE_NEG16S_scalar
#define AE_NEG16S_vector _TIE_xt_hifi2_AE_NEG16S_vector
#define AE_NEG24S _TIE_xt_hifi2_AE_NEG24S
#define AE_NEG32 _TIE_xt_hifi2_AE_NEG32
#define AE_NEG32S _TIE_xt_hifi2_AE_NEG32S
#define AE_NEG32S_scalar _TIE_xt_hifi2_AE_NEG32S_scalar
#define AE_NEG64 _TIE_xt_hifi2_AE_NEG64
#define AE_NEG64S _TIE_xt_hifi2_AE_NEG64S
#define AE_NEG64X2_vector _TIE_xt_hifi2_AE_NEG64X2_vector
#define AE_NEGP24 _TIE_xt_hifi2_AE_NEGP24
#define AE_NEGQ56 _TIE_xt_hifi2_AE_NEGQ56
#define AE_NEGSP24S _TIE_xt_hifi2_AE_NEGSP24S
#define AE_NEGSQ56S _TIE_xt_hifi2_AE_NEGSQ56S
#define AE_NEG_32 _TIE_xt_hifi2_AE_NEG_32
#define AE_NOT _TIE_xt_hifi2_AE_NOT
#define AE_NOT16 _TIE_xt_hifi2_AE_NOT16
#define AE_NOT24 _TIE_xt_hifi2_AE_NOT24
#define AE_NOT32 _TIE_xt_hifi2_AE_NOT32
#define AE_NOT64 _TIE_xt_hifi2_AE_NOT64
#define AE_NOTP48 _TIE_xt_hifi2_AE_NOTP48
#define AE_NOTQ56 _TIE_xt_hifi2_AE_NOTQ56
#define AE_NSA64 _TIE_xt_hifi2_AE_NSA64
#define AE_NSAQ56S _TIE_xt_hifi2_AE_NSAQ56S
#define AE_NSAZ16_0 _TIE_xt_hifi2_AE_NSAZ16_0
#define AE_NSAZ16_0_scalar _TIE_xt_hifi2_AE_NSAZ16_0_scalar
#define AE_NSAZ32_L _TIE_xt_hifi2_AE_NSAZ32_L
#define AE_OR _TIE_xt_hifi2_AE_OR
#define AE_OR16 _TIE_xt_hifi2_AE_OR16
#define AE_OR24 _TIE_xt_hifi2_AE_OR24
#define AE_OR32 _TIE_xt_hifi2_AE_OR32
#define AE_OR64 _TIE_xt_hifi2_AE_OR64
#define AE_ORP48 _TIE_xt_hifi2_AE_ORP48
#define AE_ORQ56 _TIE_xt_hifi2_AE_ORQ56
#define AE_OR_32 _TIE_xt_hifi2_AE_OR_32
#define AE_P24F_ADDS_P24F _TIE_xt_hifi2_AE_P24F_ADDS_P24F
#define AE_P24F_ADDS_P24S _TIE_xt_hifi2_AE_P24F_ADDS_P24S
#define AE_P24F_ADDS_P24X2F _TIE_xt_hifi2_AE_P24F_ADDS_P24X2F
#define AE_P24F_ADDS_P24X2S _TIE_xt_hifi2_AE_P24F_ADDS_P24X2S
#define AE_P24F_AND_P24F _TIE_xt_hifi2_AE_P24F_AND_P24F
#define AE_P24F_AND_P24S _TIE_xt_hifi2_AE_P24F_AND_P24S
#define AE_P24F_AND_P24X2F _TIE_xt_hifi2_AE_P24F_AND_P24X2F
#define AE_P24F_AND_P24X2S _TIE_xt_hifi2_AE_P24F_AND_P24X2S
#define AE_P24F_BNOT _TIE_xt_hifi2_AE_P24F_BNOT
#define AE_P24F_MULF_P24F _TIE_xt_hifi2_AE_P24F_MULF_P24F
#define AE_P24F_MULF_P24S _TIE_xt_hifi2_AE_P24F_MULF_P24S
#define AE_P24F_NEGS _TIE_xt_hifi2_AE_P24F_NEGS
#define AE_P24F_OR_P24F _TIE_xt_hifi2_AE_P24F_OR_P24F
#define AE_P24F_OR_P24S _TIE_xt_hifi2_AE_P24F_OR_P24S
#define AE_P24F_OR_P24X2F _TIE_xt_hifi2_AE_P24F_OR_P24X2F
#define AE_P24F_OR_P24X2S _TIE_xt_hifi2_AE_P24F_OR_P24X2S
#define AE_P24F_SLAIS _TIE_xt_hifi2_AE_P24F_SLAIS
#define AE_P24F_SLAS _TIE_xt_hifi2_AE_P24F_SLAS
#define AE_P24F_SRA _TIE_xt_hifi2_AE_P24F_SRA
#define AE_P24F_SRAI _TIE_xt_hifi2_AE_P24F_SRAI
#define AE_P24F_SUBS_P24F _TIE_xt_hifi2_AE_P24F_SUBS_P24F
#define AE_P24F_SUBS_P24S _TIE_xt_hifi2_AE_P24F_SUBS_P24S
#define AE_P24F_SUBS_P24X2F _TIE_xt_hifi2_AE_P24F_SUBS_P24X2F
#define AE_P24F_SUBS_P24X2S _TIE_xt_hifi2_AE_P24F_SUBS_P24X2S
#define AE_P24F_XOR_P24F _TIE_xt_hifi2_AE_P24F_XOR_P24F
#define AE_P24F_XOR_P24S _TIE_xt_hifi2_AE_P24F_XOR_P24S
#define AE_P24F_XOR_P24X2F _TIE_xt_hifi2_AE_P24F_XOR_P24X2F
#define AE_P24F_XOR_P24X2S _TIE_xt_hifi2_AE_P24F_XOR_P24X2S
#define AE_P24S_ADDS_P24F _TIE_xt_hifi2_AE_P24S_ADDS_P24F
#define AE_P24S_ADDS_P24S _TIE_xt_hifi2_AE_P24S_ADDS_P24S
#define AE_P24S_ADDS_P24X2F _TIE_xt_hifi2_AE_P24S_ADDS_P24X2F
#define AE_P24S_ADDS_P24X2S _TIE_xt_hifi2_AE_P24S_ADDS_P24X2S
#define AE_P24S_AND_P24F _TIE_xt_hifi2_AE_P24S_AND_P24F
#define AE_P24S_AND_P24S _TIE_xt_hifi2_AE_P24S_AND_P24S
#define AE_P24S_AND_P24X2F _TIE_xt_hifi2_AE_P24S_AND_P24X2F
#define AE_P24S_AND_P24X2S _TIE_xt_hifi2_AE_P24S_AND_P24X2S
#define AE_P24S_BNOT _TIE_xt_hifi2_AE_P24S_BNOT
#define AE_P24S_MULF_P24F _TIE_xt_hifi2_AE_P24S_MULF_P24F
#define AE_P24S_MULF_P24S _TIE_xt_hifi2_AE_P24S_MULF_P24S
#define AE_P24S_NEGS _TIE_xt_hifi2_AE_P24S_NEGS
#define AE_P24S_OR_P24F _TIE_xt_hifi2_AE_P24S_OR_P24F
#define AE_P24S_OR_P24S _TIE_xt_hifi2_AE_P24S_OR_P24S
#define AE_P24S_OR_P24X2F _TIE_xt_hifi2_AE_P24S_OR_P24X2F
#define AE_P24S_OR_P24X2S _TIE_xt_hifi2_AE_P24S_OR_P24X2S
#define AE_P24S_SLAIS _TIE_xt_hifi2_AE_P24S_SLAIS
#define AE_P24S_SLAS _TIE_xt_hifi2_AE_P24S_SLAS
#define AE_P24S_SRA _TIE_xt_hifi2_AE_P24S_SRA
#define AE_P24S_SRAI _TIE_xt_hifi2_AE_P24S_SRAI
#define AE_P24S_SUBS_P24F _TIE_xt_hifi2_AE_P24S_SUBS_P24F
#define AE_P24S_SUBS_P24S _TIE_xt_hifi2_AE_P24S_SUBS_P24S
#define AE_P24S_SUBS_P24X2F _TIE_xt_hifi2_AE_P24S_SUBS_P24X2F
#define AE_P24S_SUBS_P24X2S _TIE_xt_hifi2_AE_P24S_SUBS_P24X2S
#define AE_P24S_XOR_P24F _TIE_xt_hifi2_AE_P24S_XOR_P24F
#define AE_P24S_XOR_P24S _TIE_xt_hifi2_AE_P24S_XOR_P24S
#define AE_P24S_XOR_P24X2F _TIE_xt_hifi2_AE_P24S_XOR_P24X2F
#define AE_P24S_XOR_P24X2S _TIE_xt_hifi2_AE_P24S_XOR_P24X2S
#define AE_P24X2F_ADDS_P24F _TIE_xt_hifi2_AE_P24X2F_ADDS_P24F
#define AE_P24X2F_ADDS_P24S _TIE_xt_hifi2_AE_P24X2F_ADDS_P24S
#define AE_P24X2F_ADDS_P24X2F _TIE_xt_hifi2_AE_P24X2F_ADDS_P24X2F
#define AE_P24X2F_ADDS_P24X2S _TIE_xt_hifi2_AE_P24X2F_ADDS_P24X2S
#define AE_P24X2F_AND_P24F _TIE_xt_hifi2_AE_P24X2F_AND_P24F
#define AE_P24X2F_AND_P24S _TIE_xt_hifi2_AE_P24X2F_AND_P24S
#define AE_P24X2F_AND_P24X2F _TIE_xt_hifi2_AE_P24X2F_AND_P24X2F
#define AE_P24X2F_AND_P24X2S _TIE_xt_hifi2_AE_P24X2F_AND_P24X2S
#define AE_P24X2F_BNOT _TIE_xt_hifi2_AE_P24X2F_BNOT
#define AE_P24X2F_EQ_P24X2F _TIE_xt_hifi2_AE_P24X2F_EQ_P24X2F
#define AE_P24X2F_EQ_P24X2S _TIE_xt_hifi2_AE_P24X2F_EQ_P24X2S
#define AE_P24X2F_GE_P24X2F _TIE_xt_hifi2_AE_P24X2F_GE_P24X2F
#define AE_P24X2F_GE_P24X2S _TIE_xt_hifi2_AE_P24X2F_GE_P24X2S
#define AE_P24X2F_GT_P24X2F _TIE_xt_hifi2_AE_P24X2F_GT_P24X2F
#define AE_P24X2F_GT_P24X2S _TIE_xt_hifi2_AE_P24X2F_GT_P24X2S
#define AE_P24X2F_LE_P24X2F _TIE_xt_hifi2_AE_P24X2F_LE_P24X2F
#define AE_P24X2F_LE_P24X2S _TIE_xt_hifi2_AE_P24X2F_LE_P24X2S
#define AE_P24X2F_LT_P24X2F _TIE_xt_hifi2_AE_P24X2F_LT_P24X2F
#define AE_P24X2F_LT_P24X2S _TIE_xt_hifi2_AE_P24X2F_LT_P24X2S
#define AE_P24X2F_MULF_P24X2F _TIE_xt_hifi2_AE_P24X2F_MULF_P24X2F
#define AE_P24X2F_MULF_P24X2S _TIE_xt_hifi2_AE_P24X2F_MULF_P24X2S
#define AE_P24X2F_NEGS _TIE_xt_hifi2_AE_P24X2F_NEGS
#define AE_P24X2F_OR_P24F _TIE_xt_hifi2_AE_P24X2F_OR_P24F
#define AE_P24X2F_OR_P24S _TIE_xt_hifi2_AE_P24X2F_OR_P24S
#define AE_P24X2F_OR_P24X2F _TIE_xt_hifi2_AE_P24X2F_OR_P24X2F
#define AE_P24X2F_OR_P24X2S _TIE_xt_hifi2_AE_P24X2F_OR_P24X2S
#define AE_P24X2F_SLAIS _TIE_xt_hifi2_AE_P24X2F_SLAIS
#define AE_P24X2F_SLAS _TIE_xt_hifi2_AE_P24X2F_SLAS
#define AE_P24X2F_SRA _TIE_xt_hifi2_AE_P24X2F_SRA
#define AE_P24X2F_SRAI _TIE_xt_hifi2_AE_P24X2F_SRAI
#define AE_P24X2F_SUBS_P24F _TIE_xt_hifi2_AE_P24X2F_SUBS_P24F
#define AE_P24X2F_SUBS_P24S _TIE_xt_hifi2_AE_P24X2F_SUBS_P24S
#define AE_P24X2F_SUBS_P24X2F _TIE_xt_hifi2_AE_P24X2F_SUBS_P24X2F
#define AE_P24X2F_SUBS_P24X2S _TIE_xt_hifi2_AE_P24X2F_SUBS_P24X2S
#define AE_P24X2F_XOR_P24F _TIE_xt_hifi2_AE_P24X2F_XOR_P24F
#define AE_P24X2F_XOR_P24S _TIE_xt_hifi2_AE_P24X2F_XOR_P24S
#define AE_P24X2F_XOR_P24X2F _TIE_xt_hifi2_AE_P24X2F_XOR_P24X2F
#define AE_P24X2F_XOR_P24X2S _TIE_xt_hifi2_AE_P24X2F_XOR_P24X2S
#define AE_P24X2S_ADDS_P24F _TIE_xt_hifi2_AE_P24X2S_ADDS_P24F
#define AE_P24X2S_ADDS_P24S _TIE_xt_hifi2_AE_P24X2S_ADDS_P24S
#define AE_P24X2S_ADDS_P24X2F _TIE_xt_hifi2_AE_P24X2S_ADDS_P24X2F
#define AE_P24X2S_ADDS_P24X2S _TIE_xt_hifi2_AE_P24X2S_ADDS_P24X2S
#define AE_P24X2S_AND_P24F _TIE_xt_hifi2_AE_P24X2S_AND_P24F
#define AE_P24X2S_AND_P24S _TIE_xt_hifi2_AE_P24X2S_AND_P24S
#define AE_P24X2S_AND_P24X2F _TIE_xt_hifi2_AE_P24X2S_AND_P24X2F
#define AE_P24X2S_AND_P24X2S _TIE_xt_hifi2_AE_P24X2S_AND_P24X2S
#define AE_P24X2S_BNOT _TIE_xt_hifi2_AE_P24X2S_BNOT
#define AE_P24X2S_EQ_P24X2F _TIE_xt_hifi2_AE_P24X2S_EQ_P24X2F
#define AE_P24X2S_EQ_P24X2S _TIE_xt_hifi2_AE_P24X2S_EQ_P24X2S
#define AE_P24X2S_GE_P24X2F _TIE_xt_hifi2_AE_P24X2S_GE_P24X2F
#define AE_P24X2S_GE_P24X2S _TIE_xt_hifi2_AE_P24X2S_GE_P24X2S
#define AE_P24X2S_GT_P24X2F _TIE_xt_hifi2_AE_P24X2S_GT_P24X2F
#define AE_P24X2S_GT_P24X2S _TIE_xt_hifi2_AE_P24X2S_GT_P24X2S
#define AE_P24X2S_LE_P24X2F _TIE_xt_hifi2_AE_P24X2S_LE_P24X2F
#define AE_P24X2S_LE_P24X2S _TIE_xt_hifi2_AE_P24X2S_LE_P24X2S
#define AE_P24X2S_LT_P24X2F _TIE_xt_hifi2_AE_P24X2S_LT_P24X2F
#define AE_P24X2S_LT_P24X2S _TIE_xt_hifi2_AE_P24X2S_LT_P24X2S
#define AE_P24X2S_MULF_P24X2F _TIE_xt_hifi2_AE_P24X2S_MULF_P24X2F
#define AE_P24X2S_MULF_P24X2S _TIE_xt_hifi2_AE_P24X2S_MULF_P24X2S
#define AE_P24X2S_NEGS _TIE_xt_hifi2_AE_P24X2S_NEGS
#define AE_P24X2S_OR_P24F _TIE_xt_hifi2_AE_P24X2S_OR_P24F
#define AE_P24X2S_OR_P24S _TIE_xt_hifi2_AE_P24X2S_OR_P24S
#define AE_P24X2S_OR_P24X2F _TIE_xt_hifi2_AE_P24X2S_OR_P24X2F
#define AE_P24X2S_OR_P24X2S _TIE_xt_hifi2_AE_P24X2S_OR_P24X2S
#define AE_P24X2S_SLAIS _TIE_xt_hifi2_AE_P24X2S_SLAIS
#define AE_P24X2S_SLAS _TIE_xt_hifi2_AE_P24X2S_SLAS
#define AE_P24X2S_SRA _TIE_xt_hifi2_AE_P24X2S_SRA
#define AE_P24X2S_SRAI _TIE_xt_hifi2_AE_P24X2S_SRAI
#define AE_P24X2S_SUBS_P24F _TIE_xt_hifi2_AE_P24X2S_SUBS_P24F
#define AE_P24X2S_SUBS_P24S _TIE_xt_hifi2_AE_P24X2S_SUBS_P24S
#define AE_P24X2S_SUBS_P24X2F _TIE_xt_hifi2_AE_P24X2S_SUBS_P24X2F
#define AE_P24X2S_SUBS_P24X2S _TIE_xt_hifi2_AE_P24X2S_SUBS_P24X2S
#define AE_P24X2S_XOR_P24F _TIE_xt_hifi2_AE_P24X2S_XOR_P24F
#define AE_P24X2S_XOR_P24S _TIE_xt_hifi2_AE_P24X2S_XOR_P24S
#define AE_P24X2S_XOR_P24X2F _TIE_xt_hifi2_AE_P24X2S_XOR_P24X2F
#define AE_P24X2S_XOR_P24X2S _TIE_xt_hifi2_AE_P24X2S_XOR_P24X2S
#define AE_PKSR24 _TIE_xt_hifi2_AE_PKSR24
#define AE_PKSR32 _TIE_xt_hifi2_AE_PKSR32
#define AE_PKSRF32 _TIE_xt_hifi2_AE_PKSRF32
#define AE_Q56S_ADD _TIE_xt_hifi2_AE_Q56S_ADD
#define AE_Q56S_AND _TIE_xt_hifi2_AE_Q56S_AND
#define AE_Q56S_BNOT _TIE_xt_hifi2_AE_Q56S_BNOT
#define AE_Q56S_EQ _TIE_xt_hifi2_AE_Q56S_EQ
#define AE_Q56S_GE _TIE_xt_hifi2_AE_Q56S_GE
#define AE_Q56S_GT _TIE_xt_hifi2_AE_Q56S_GT
#define AE_Q56S_LE _TIE_xt_hifi2_AE_Q56S_LE
#define AE_Q56S_LT _TIE_xt_hifi2_AE_Q56S_LT
#define AE_Q56S_NEG _TIE_xt_hifi2_AE_Q56S_NEG
#define AE_Q56S_OR _TIE_xt_hifi2_AE_Q56S_OR
#define AE_Q56S_SLA _TIE_xt_hifi2_AE_Q56S_SLA
#define AE_Q56S_SRA _TIE_xt_hifi2_AE_Q56S_SRA
#define AE_Q56S_SRAI _TIE_xt_hifi2_AE_Q56S_SRAI
#define AE_Q56S_SUB _TIE_xt_hifi2_AE_Q56S_SUB
#define AE_Q56S_XOR _TIE_xt_hifi2_AE_Q56S_XOR
#define AE_RLadd4_rfini _TIE_xt_hifi2_AE_RLadd4_rfini
#define AE_RLadd4_rinit _TIE_xt_hifi2_AE_RLadd4_rinit
#define AE_RLadd4_rvec _TIE_xt_hifi2_AE_RLadd4_rvec
#define AE_RLadd_rfini _TIE_xt_hifi2_AE_RLadd_rfini
#define AE_RLadd_rinit _TIE_xt_hifi2_AE_RLadd_rinit
#define AE_RLadd_rvec _TIE_xt_hifi2_AE_RLadd_rvec
#define AE_RLmac_rfini _TIE_xt_hifi2_AE_RLmac_rfini
#define AE_RLmac_rinit _TIE_xt_hifi2_AE_RLmac_rinit
#define AE_RLmac_rvec _TIE_xt_hifi2_AE_RLmac_rvec
#define AE_RLmsu_rfini _TIE_xt_hifi2_AE_RLmsu_rfini
#define AE_RLmsu_rinit _TIE_xt_hifi2_AE_RLmsu_rinit
#define AE_RLmsu_rvec _TIE_xt_hifi2_AE_RLmsu_rvec
#define AE_RLmula0_rfini _TIE_xt_hifi2_AE_RLmula0_rfini
#define AE_RLmula0_rinit _TIE_xt_hifi2_AE_RLmula0_rinit
#define AE_RLmula0_rvec _TIE_xt_hifi2_AE_RLmula0_rvec
#define AE_RLmuls0_rfini _TIE_xt_hifi2_AE_RLmuls0_rfini
#define AE_RLmuls0_rinit _TIE_xt_hifi2_AE_RLmuls0_rinit
#define AE_RLmuls0_rvec _TIE_xt_hifi2_AE_RLmuls0_rvec
#define AE_RLsub4_rfini _TIE_xt_hifi2_AE_RLsub4_rfini
#define AE_RLsub4_rinit _TIE_xt_hifi2_AE_RLsub4_rinit
#define AE_RLsub4_rvec _TIE_xt_hifi2_AE_RLsub4_rvec
#define AE_RLsub_rfini _TIE_xt_hifi2_AE_RLsub_rfini
#define AE_RLsub_rinit _TIE_xt_hifi2_AE_RLsub_rinit
#define AE_RLsub_rvec _TIE_xt_hifi2_AE_RLsub_rvec
#define AE_RNG32X2 _TIE_xt_hifi2_AE_RNG32X2
#define AE_ROUND16X4F32SASYM _TIE_xt_hifi2_AE_ROUND16X4F32SASYM
#define AE_ROUND16X4F32SASYM_scalar _TIE_xt_hifi2_AE_ROUND16X4F32SASYM_scalar
#define AE_ROUND16X4F32SASYM_vector _TIE_xt_hifi2_AE_ROUND16X4F32SASYM_vector
#define AE_ROUND16X4F32SSYM _TIE_xt_hifi2_AE_ROUND16X4F32SSYM
#define AE_ROUND24F48SASYM _TIE_xt_hifi2_AE_ROUND24F48SASYM
#define AE_ROUND24F48SSYM _TIE_xt_hifi2_AE_ROUND24F48SSYM
#define AE_ROUND24X2F48SASYM _TIE_xt_hifi2_AE_ROUND24X2F48SASYM
#define AE_ROUND24X2F48SSYM _TIE_xt_hifi2_AE_ROUND24X2F48SSYM
#define AE_ROUND32F48SASYM _TIE_xt_hifi2_AE_ROUND32F48SASYM
#define AE_ROUND32F48SSYM _TIE_xt_hifi2_AE_ROUND32F48SSYM
#define AE_ROUND32F64SASYM _TIE_xt_hifi2_AE_ROUND32F64SASYM
#define AE_ROUND32F64SSYM _TIE_xt_hifi2_AE_ROUND32F64SSYM
#define AE_ROUND32X2F48SASYM _TIE_xt_hifi2_AE_ROUND32X2F48SASYM
#define AE_ROUND32X2F48SSYM _TIE_xt_hifi2_AE_ROUND32X2F48SSYM
#define AE_ROUND32X2F64SASYM _TIE_xt_hifi2_AE_ROUND32X2F64SASYM
#define AE_ROUND32X2F64SSYM _TIE_xt_hifi2_AE_ROUND32X2F64SSYM
#define AE_ROUNDSP16ASYM _TIE_xt_hifi2_AE_ROUNDSP16ASYM
#define AE_ROUNDSP16F24ASYM _TIE_xt_hifi2_AE_ROUNDSP16F24ASYM
#define AE_ROUNDSP16F24SYM _TIE_xt_hifi2_AE_ROUNDSP16F24SYM
#define AE_ROUNDSP16Q48ASYM _TIE_xt_hifi2_AE_ROUNDSP16Q48ASYM
#define AE_ROUNDSP16Q48SYM _TIE_xt_hifi2_AE_ROUNDSP16Q48SYM
#define AE_ROUNDSP16Q48X2ASYM _TIE_xt_hifi2_AE_ROUNDSP16Q48X2ASYM
#define AE_ROUNDSP16Q48X2SYM _TIE_xt_hifi2_AE_ROUNDSP16Q48X2SYM
#define AE_ROUNDSP16SYM _TIE_xt_hifi2_AE_ROUNDSP16SYM
#define AE_ROUNDSP24Q48ASYM _TIE_xt_hifi2_AE_ROUNDSP24Q48ASYM
#define AE_ROUNDSP24Q48SYM _TIE_xt_hifi2_AE_ROUNDSP24Q48SYM
#define AE_ROUNDSQ32ASYM _TIE_xt_hifi2_AE_ROUNDSQ32ASYM
#define AE_ROUNDSQ32F48ASYM _TIE_xt_hifi2_AE_ROUNDSQ32F48ASYM
#define AE_ROUNDSQ32F48SYM _TIE_xt_hifi2_AE_ROUNDSQ32F48SYM
#define AE_ROUNDSQ32SYM _TIE_xt_hifi2_AE_ROUNDSQ32SYM
#define AE_S16I_N _TIE_xt_hifi2_AE_S16I_N
#define AE_S16M_L_I _TIE_xt_hifi2_AE_S16M_L_I
#define AE_S16M_L_IU _TIE_xt_hifi2_AE_S16M_L_IU
#define AE_S16M_L_X _TIE_xt_hifi2_AE_S16M_L_X
#define AE_S16M_L_XC _TIE_xt_hifi2_AE_S16M_L_XC
#define AE_S16M_L_XC1 _TIE_xt_hifi2_AE_S16M_L_XC1
#define AE_S16M_L_XU _TIE_xt_hifi2_AE_S16M_L_XU
#define AE_S16X2M_I _TIE_xt_hifi2_AE_S16X2M_I
#define AE_S16X2M_IU _TIE_xt_hifi2_AE_S16X2M_IU
#define AE_S16X2M_X _TIE_xt_hifi2_AE_S16X2M_X
#define AE_S16X2M_XC _TIE_xt_hifi2_AE_S16X2M_XC
#define AE_S16X2M_XC1 _TIE_xt_hifi2_AE_S16X2M_XC1
#define AE_S16X2M_XU _TIE_xt_hifi2_AE_S16X2M_XU
#define AE_S16X4_I _TIE_xt_hifi2_AE_S16X4_I
#define AE_S16X4_IP _TIE_xt_hifi2_AE_S16X4_IP
#define AE_S16X4_RI _TIE_xt_hifi2_AE_S16X4_RI
#define AE_S16X4_RIC _TIE_xt_hifi2_AE_S16X4_RIC
#define AE_S16X4_RIC1 _TIE_xt_hifi2_AE_S16X4_RIC1
#define AE_S16X4_RIP _TIE_xt_hifi2_AE_S16X4_RIP
#define AE_S16X4_X _TIE_xt_hifi2_AE_S16X4_X
#define AE_S16X4_XC _TIE_xt_hifi2_AE_S16X4_XC
#define AE_S16X4_XC1 _TIE_xt_hifi2_AE_S16X4_XC1
#define AE_S16X4_XP _TIE_xt_hifi2_AE_S16X4_XP
#define AE_S16_0_I _TIE_xt_hifi2_AE_S16_0_I
#define AE_S16_0_IP _TIE_xt_hifi2_AE_S16_0_IP
#define AE_S16_0_X _TIE_xt_hifi2_AE_S16_0_X
#define AE_S16_0_XC _TIE_xt_hifi2_AE_S16_0_XC
#define AE_S16_0_XC1 _TIE_xt_hifi2_AE_S16_0_XC1
#define AE_S16_0_XP _TIE_xt_hifi2_AE_S16_0_XP
#define AE_S24RA64S_I _TIE_xt_hifi2_AE_S24RA64S_I
#define AE_S24RA64S_IP _TIE_xt_hifi2_AE_S24RA64S_IP
#define AE_S24RA64S_X _TIE_xt_hifi2_AE_S24RA64S_X
#define AE_S24RA64S_XC _TIE_xt_hifi2_AE_S24RA64S_XC
#define AE_S24RA64S_XC1 _TIE_xt_hifi2_AE_S24RA64S_XC1
#define AE_S24RA64S_XP _TIE_xt_hifi2_AE_S24RA64S_XP
#define AE_S24X2RA64S_IP _TIE_xt_hifi2_AE_S24X2RA64S_IP
#define AE_S24X2_I _TIE_xt_hifi2_AE_S24X2_I
#define AE_S24X2_IP _TIE_xt_hifi2_AE_S24X2_IP
#define AE_S24X2_X _TIE_xt_hifi2_AE_S24X2_X
#define AE_S24X2_XP _TIE_xt_hifi2_AE_S24X2_XP
#define AE_S32F24_L_I _TIE_xt_hifi2_AE_S32F24_L_I
#define AE_S32F24_L_IP _TIE_xt_hifi2_AE_S32F24_L_IP
#define AE_S32F24_L_X _TIE_xt_hifi2_AE_S32F24_L_X
#define AE_S32F24_L_XC _TIE_xt_hifi2_AE_S32F24_L_XC
#define AE_S32F24_L_XC1 _TIE_xt_hifi2_AE_S32F24_L_XC1
#define AE_S32F24_L_XP _TIE_xt_hifi2_AE_S32F24_L_XP
#define AE_S32M_I _TIE_xt_hifi2_AE_S32M_I
#define AE_S32M_IU _TIE_xt_hifi2_AE_S32M_IU
#define AE_S32M_X _TIE_xt_hifi2_AE_S32M_X
#define AE_S32M_XC _TIE_xt_hifi2_AE_S32M_XC
#define AE_S32M_XU _TIE_xt_hifi2_AE_S32M_XU
#define AE_S32RA64S_I _TIE_xt_hifi2_AE_S32RA64S_I
#define AE_S32RA64S_IP _TIE_xt_hifi2_AE_S32RA64S_IP
#define AE_S32RA64S_X _TIE_xt_hifi2_AE_S32RA64S_X
#define AE_S32RA64S_XC _TIE_xt_hifi2_AE_S32RA64S_XC
#define AE_S32RA64S_XC1 _TIE_xt_hifi2_AE_S32RA64S_XC1
#define AE_S32RA64S_XP _TIE_xt_hifi2_AE_S32RA64S_XP
#define AE_S32X2F24_I _TIE_xt_hifi2_AE_S32X2F24_I
#define AE_S32X2F24_IP _TIE_xt_hifi2_AE_S32X2F24_IP
#define AE_S32X2F24_RIC _TIE_xt_hifi2_AE_S32X2F24_RIC
#define AE_S32X2F24_RIC1 _TIE_xt_hifi2_AE_S32X2F24_RIC1
#define AE_S32X2F24_RIP _TIE_xt_hifi2_AE_S32X2F24_RIP
#define AE_S32X2F24_X _TIE_xt_hifi2_AE_S32X2F24_X
#define AE_S32X2F24_XC _TIE_xt_hifi2_AE_S32X2F24_XC
#define AE_S32X2F24_XC1 _TIE_xt_hifi2_AE_S32X2F24_XC1
#define AE_S32X2F24_XP _TIE_xt_hifi2_AE_S32X2F24_XP
#define AE_S32X2RA64S_IP _TIE_xt_hifi2_AE_S32X2RA64S_IP
#define AE_S32X2RNG_I _TIE_xt_hifi2_AE_S32X2RNG_I
#define AE_S32X2RNG_IP _TIE_xt_hifi2_AE_S32X2RNG_IP
#define AE_S32X2RNG_X _TIE_xt_hifi2_AE_S32X2RNG_X
#define AE_S32X2RNG_XP _TIE_xt_hifi2_AE_S32X2RNG_XP
#define AE_S32X2_I _TIE_xt_hifi2_AE_S32X2_I
#define AE_S32X2_IP _TIE_xt_hifi2_AE_S32X2_IP
#define AE_S32X2_RI _TIE_xt_hifi2_AE_S32X2_RI
#define AE_S32X2_RIC _TIE_xt_hifi2_AE_S32X2_RIC
#define AE_S32X2_RIC1 _TIE_xt_hifi2_AE_S32X2_RIC1
#define AE_S32X2_RIP _TIE_xt_hifi2_AE_S32X2_RIP
#define AE_S32X2_X _TIE_xt_hifi2_AE_S32X2_X
#define AE_S32X2_XC _TIE_xt_hifi2_AE_S32X2_XC
#define AE_S32X2_XC1 _TIE_xt_hifi2_AE_S32X2_XC1
#define AE_S32X2_XP _TIE_xt_hifi2_AE_S32X2_XP
#define AE_S32_L_I _TIE_xt_hifi2_AE_S32_L_I
#define AE_S32_L_IP _TIE_xt_hifi2_AE_S32_L_IP
#define AE_S32_L_X _TIE_xt_hifi2_AE_S32_L_X
#define AE_S32_L_XC _TIE_xt_hifi2_AE_S32_L_XC
#define AE_S32_L_XC1 _TIE_xt_hifi2_AE_S32_L_XC1
#define AE_S32_L_XP _TIE_xt_hifi2_AE_S32_L_XP
#define AE_S64_I _TIE_xt_hifi2_AE_S64_I
#define AE_S64_IP _TIE_xt_hifi2_AE_S64_IP
#define AE_S64_X _TIE_xt_hifi2_AE_S64_X
#define AE_S64_XC _TIE_xt_hifi2_AE_S64_XC
#define AE_S64_XC1 _TIE_xt_hifi2_AE_S64_XC1
#define AE_S64_XP _TIE_xt_hifi2_AE_S64_XP
#define AE_SA16X4_IC _TIE_xt_hifi2_AE_SA16X4_IC
#define AE_SA16X4_IC1 _TIE_xt_hifi2_AE_SA16X4_IC1
#define AE_SA16X4_IP _TIE_xt_hifi2_AE_SA16X4_IP
#define AE_SA16X4_RIC _TIE_xt_hifi2_AE_SA16X4_RIC
#define AE_SA16X4_RIC1 _TIE_xt_hifi2_AE_SA16X4_RIC1
#define AE_SA16X4_RIP _TIE_xt_hifi2_AE_SA16X4_RIP
#define AE_SA24X2_IC _TIE_xt_hifi2_AE_SA24X2_IC
#define AE_SA24X2_IC1 _TIE_xt_hifi2_AE_SA24X2_IC1
#define AE_SA24X2_IP _TIE_xt_hifi2_AE_SA24X2_IP
#define AE_SA24X2_RIC _TIE_xt_hifi2_AE_SA24X2_RIC
#define AE_SA24X2_RIC1 _TIE_xt_hifi2_AE_SA24X2_RIC1
#define AE_SA24X2_RIP _TIE_xt_hifi2_AE_SA24X2_RIP
#define AE_SA24_IC _TIE_xt_hifi2_AE_SA24_IC
#define AE_SA24_IP _TIE_xt_hifi2_AE_SA24_IP
#define AE_SA24_L_IC _TIE_xt_hifi2_AE_SA24_L_IC
#define AE_SA24_L_IC1 _TIE_xt_hifi2_AE_SA24_L_IC1
#define AE_SA24_L_IP _TIE_xt_hifi2_AE_SA24_L_IP
#define AE_SA24_L_RIC _TIE_xt_hifi2_AE_SA24_L_RIC
#define AE_SA24_L_RIC1 _TIE_xt_hifi2_AE_SA24_L_RIC1
#define AE_SA24_L_RIP _TIE_xt_hifi2_AE_SA24_L_RIP
#define AE_SA24_RIC _TIE_xt_hifi2_AE_SA24_RIC
#define AE_SA24_RIP _TIE_xt_hifi2_AE_SA24_RIP
#define AE_SA32X2F24_IC _TIE_xt_hifi2_AE_SA32X2F24_IC
#define AE_SA32X2F24_IC1 _TIE_xt_hifi2_AE_SA32X2F24_IC1
#define AE_SA32X2F24_IP _TIE_xt_hifi2_AE_SA32X2F24_IP
#define AE_SA32X2F24_RIC _TIE_xt_hifi2_AE_SA32X2F24_RIC
#define AE_SA32X2F24_RIC1 _TIE_xt_hifi2_AE_SA32X2F24_RIC1
#define AE_SA32X2F24_RIP _TIE_xt_hifi2_AE_SA32X2F24_RIP
#define AE_SA32X2_IC _TIE_xt_hifi2_AE_SA32X2_IC
#define AE_SA32X2_IC1 _TIE_xt_hifi2_AE_SA32X2_IC1
#define AE_SA32X2_IP _TIE_xt_hifi2_AE_SA32X2_IP
#define AE_SA32X2_RIC _TIE_xt_hifi2_AE_SA32X2_RIC
#define AE_SA32X2_RIC1 _TIE_xt_hifi2_AE_SA32X2_RIC1
#define AE_SA32X2_RIP _TIE_xt_hifi2_AE_SA32X2_RIP
#define AE_SA64NEG_FC _TIE_xt_hifi2_AE_SA64NEG_FC
#define AE_SA64NEG_FP _TIE_xt_hifi2_AE_SA64NEG_FP
#define AE_SA64POS_FC _TIE_xt_hifi2_AE_SA64POS_FC
#define AE_SA64POS_FP _TIE_xt_hifi2_AE_SA64POS_FP
#define AE_SALIGN64_I _TIE_xt_hifi2_AE_SALIGN64_I
#define AE_SAT16X4 _TIE_xt_hifi2_AE_SAT16X4
#define AE_SAT16X4_scalar _TIE_xt_hifi2_AE_SAT16X4_scalar
#define AE_SAT16X4_vector _TIE_xt_hifi2_AE_SAT16X4_vector
#define AE_SAT24S _TIE_xt_hifi2_AE_SAT24S
#define AE_SAT48S _TIE_xt_hifi2_AE_SAT48S
#define AE_SAT64S _TIE_xt_hifi2_AE_SAT64S
#define AE_SATQ48S _TIE_xt_hifi2_AE_SATQ48S
#define AE_SATQ56S _TIE_xt_hifi2_AE_SATQ56S
#define AE_SB _TIE_xt_hifi2_AE_SB
#define AE_SBF _TIE_xt_hifi2_AE_SBF
#define AE_SBF_IC _TIE_xt_hifi2_AE_SBF_IC
#define AE_SBF_IC1 _TIE_xt_hifi2_AE_SBF_IC1
#define AE_SBF_IP _TIE_xt_hifi2_AE_SBF_IP
#define AE_SBF_XC _TIE_xt_hifi2_AE_SBF_XC
#define AE_SBI _TIE_xt_hifi2_AE_SBI
#define AE_SBI_IC _TIE_xt_hifi2_AE_SBI_IC
#define AE_SBI_IC1 _TIE_xt_hifi2_AE_SBI_IC1
#define AE_SBI_IP _TIE_xt_hifi2_AE_SBI_IP
#define AE_SBI_XC _TIE_xt_hifi2_AE_SBI_XC
#define AE_SB_IC _TIE_xt_hifi2_AE_SB_IC
#define AE_SB_IC1 _TIE_xt_hifi2_AE_SB_IC1
#define AE_SB_IP _TIE_xt_hifi2_AE_SB_IP
#define AE_SB_XC _TIE_xt_hifi2_AE_SB_XC
#define AE_SEL16I _TIE_xt_hifi2_AE_SEL16I
#define AE_SEL16I_N _TIE_xt_hifi2_AE_SEL16I_N
#define AE_SEL16X4IR _TIE_xt_hifi2_AE_SEL16X4IR
#define AE_SEL16_2301 _TIE_xt_hifi2_AE_SEL16_2301
#define AE_SEL16_4321 _TIE_xt_hifi2_AE_SEL16_4321
#define AE_SEL16_5140 _TIE_xt_hifi2_AE_SEL16_5140
#define AE_SEL16_5146 _TIE_xt_hifi2_AE_SEL16_5146
#define AE_SEL16_5342 _TIE_xt_hifi2_AE_SEL16_5342
#define AE_SEL16_5410 _TIE_xt_hifi2_AE_SEL16_5410
#define AE_SEL16_5432 _TIE_xt_hifi2_AE_SEL16_5432
#define AE_SEL16_6420 _TIE_xt_hifi2_AE_SEL16_6420
#define AE_SEL16_6543 _TIE_xt_hifi2_AE_SEL16_6543
#define AE_SEL16_7160 _TIE_xt_hifi2_AE_SEL16_7160
#define AE_SEL16_7362 _TIE_xt_hifi2_AE_SEL16_7362
#define AE_SEL16_7520 _TIE_xt_hifi2_AE_SEL16_7520
#define AE_SEL16_7531 _TIE_xt_hifi2_AE_SEL16_7531
#define AE_SEL16_7610 _TIE_xt_hifi2_AE_SEL16_7610
#define AE_SEL16_7632 _TIE_xt_hifi2_AE_SEL16_7632
#define AE_SEL24_HH _TIE_xt_hifi2_AE_SEL24_HH
#define AE_SEL24_HL _TIE_xt_hifi2_AE_SEL24_HL
#define AE_SEL24_LH _TIE_xt_hifi2_AE_SEL24_LH
#define AE_SEL24_LL _TIE_xt_hifi2_AE_SEL24_LL
#define AE_SEL32I _TIE_xt_hifi2_AE_SEL32I
#define AE_SEL32X2IR _TIE_xt_hifi2_AE_SEL32X2IR
#define AE_SEL32_HH _TIE_xt_hifi2_AE_SEL32_HH
#define AE_SEL32_HL _TIE_xt_hifi2_AE_SEL32_HL
#define AE_SEL32_LH _TIE_xt_hifi2_AE_SEL32_LH
#define AE_SEL32_LL _TIE_xt_hifi2_AE_SEL32_LL
#define AE_SELF32X2IR _TIE_xt_hifi2_AE_SELF32X2IR
#define AE_SELP24_HH _TIE_xt_hifi2_AE_SELP24_HH
#define AE_SELP24_HL _TIE_xt_hifi2_AE_SELP24_HL
#define AE_SELP24_LH _TIE_xt_hifi2_AE_SELP24_LH
#define AE_SELP24_LL _TIE_xt_hifi2_AE_SELP24_LL
#define AE_SETCBEGIN0 _TIE_xt_hifi2_AE_SETCBEGIN0
#define AE_SETCBEGIN1 _TIE_xt_hifi2_AE_SETCBEGIN1
#define AE_SETCEND0 _TIE_xt_hifi2_AE_SETCEND0
#define AE_SETCEND1 _TIE_xt_hifi2_AE_SETCEND1
#define AE_SEXT16 _TIE_xt_hifi2_AE_SEXT16
#define AE_SEXT32 _TIE_xt_hifi2_AE_SEXT32
#define AE_SEXT32X2D16_10 _TIE_xt_hifi2_AE_SEXT32X2D16_10
#define AE_SEXT32X2D16_10_scalar _TIE_xt_hifi2_AE_SEXT32X2D16_10_scalar
#define AE_SEXT32X2D16_10_vector _TIE_xt_hifi2_AE_SEXT32X2D16_10_vector
#define AE_SEXT32X2D16_32 _TIE_xt_hifi2_AE_SEXT32X2D16_32
#define AE_SEXT72 _TIE_xt_hifi2_AE_SEXT72
#define AE_SEXT_32 _TIE_xt_hifi2_AE_SEXT_32
#define AE_SF16X4_I _TIE_xt_hifi2_AE_SF16X4_I
#define AE_SF16X4_IP _TIE_xt_hifi2_AE_SF16X4_IP
#define AE_SF16X4_X _TIE_xt_hifi2_AE_SF16X4_X
#define AE_SF16X4_XP _TIE_xt_hifi2_AE_SF16X4_XP
#define AE_SF24X2_I _TIE_xt_hifi2_AE_SF24X2_I
#define AE_SF24X2_IP _TIE_xt_hifi2_AE_SF24X2_IP
#define AE_SF24X2_X _TIE_xt_hifi2_AE_SF24X2_X
#define AE_SF24X2_XP _TIE_xt_hifi2_AE_SF24X2_XP
#define AE_SF32X2_I _TIE_xt_hifi2_AE_SF32X2_I
#define AE_SF32X2_IP _TIE_xt_hifi2_AE_SF32X2_IP
#define AE_SF32X2_X _TIE_xt_hifi2_AE_SF32X2_X
#define AE_SF32X2_XP _TIE_xt_hifi2_AE_SF32X2_XP
#define AE_SHA32 _TIE_xt_hifi2_AE_SHA32
#define AE_SHORTSWAP _TIE_xt_hifi2_AE_SHORTSWAP
#define AE_SLAA16S _TIE_xt_hifi2_AE_SLAA16S
#define AE_SLAA16S_scalar _TIE_xt_hifi2_AE_SLAA16S_scalar
#define AE_SLAA16S_vector _TIE_xt_hifi2_AE_SLAA16S_vector
#define AE_SLAA32 _TIE_xt_hifi2_AE_SLAA32
#define AE_SLAA32S _TIE_xt_hifi2_AE_SLAA32S
#define AE_SLAA32S_scalar _TIE_xt_hifi2_AE_SLAA32S_scalar
#define AE_SLAA32S_vector _TIE_xt_hifi2_AE_SLAA32S_vector
#define AE_SLAA64 _TIE_xt_hifi2_AE_SLAA64
#define AE_SLAA64S _TIE_xt_hifi2_AE_SLAA64S
#define AE_SLAA64X2_vector _TIE_xt_hifi2_AE_SLAA64X2_vector
#define AE_SLAAQ56 _TIE_xt_hifi2_AE_SLAAQ56
#define AE_SLAASQ56S _TIE_xt_hifi2_AE_SLAASQ56S
#define AE_SLAI16S _TIE_xt_hifi2_AE_SLAI16S
#define AE_SLAI24 _TIE_xt_hifi2_AE_SLAI24
#define AE_SLAI24S _TIE_xt_hifi2_AE_SLAI24S
#define AE_SLAI32 _TIE_xt_hifi2_AE_SLAI32
#define AE_SLAI32S _TIE_xt_hifi2_AE_SLAI32S
#define AE_SLAI64 _TIE_xt_hifi2_AE_SLAI64
#define AE_SLAI64S _TIE_xt_hifi2_AE_SLAI64S
#define AE_SLAI64X2_vector _TIE_xt_hifi2_AE_SLAI64X2_vector
#define AE_SLAI72 _TIE_xt_hifi2_AE_SLAI72
#define AE_SLAIQ56 _TIE_xt_hifi2_AE_SLAIQ56
#define AE_SLAISQ56S _TIE_xt_hifi2_AE_SLAISQ56S
#define AE_SLAS24 _TIE_xt_hifi2_AE_SLAS24
#define AE_SLAS24S _TIE_xt_hifi2_AE_SLAS24S
#define AE_SLAS32 _TIE_xt_hifi2_AE_SLAS32
#define AE_SLAS32S _TIE_xt_hifi2_AE_SLAS32S
#define AE_SLAS64 _TIE_xt_hifi2_AE_SLAS64
#define AE_SLAS64S _TIE_xt_hifi2_AE_SLAS64S
#define AE_SLASQ56 _TIE_xt_hifi2_AE_SLASQ56
#define AE_SLASSQ56S _TIE_xt_hifi2_AE_SLASSQ56S
#define AE_SLLAQ56 _TIE_xt_hifi2_AE_SLLAQ56
#define AE_SLLASQ56S _TIE_xt_hifi2_AE_SLLASQ56S
#define AE_SLLI16S _TIE_xt_hifi2_AE_SLLI16S
#define AE_SLLI24 _TIE_xt_hifi2_AE_SLLI24
#define AE_SLLI24S _TIE_xt_hifi2_AE_SLLI24S
#define AE_SLLI32 _TIE_xt_hifi2_AE_SLLI32
#define AE_SLLI32S _TIE_xt_hifi2_AE_SLLI32S
#define AE_SLLI64 _TIE_xt_hifi2_AE_SLLI64
#define AE_SLLI64S _TIE_xt_hifi2_AE_SLLI64S
#define AE_SLLIP24 _TIE_xt_hifi2_AE_SLLIP24
#define AE_SLLIQ56 _TIE_xt_hifi2_AE_SLLIQ56
#define AE_SLLISP24S _TIE_xt_hifi2_AE_SLLISP24S
#define AE_SLLISQ56S _TIE_xt_hifi2_AE_SLLISQ56S
#define AE_SLLI_32 _TIE_xt_hifi2_AE_SLLI_32
#define AE_SLLSP24 _TIE_xt_hifi2_AE_SLLSP24
#define AE_SLLSQ56 _TIE_xt_hifi2_AE_SLLSQ56
#define AE_SLLSSP24S _TIE_xt_hifi2_AE_SLLSSP24S
#define AE_SLLSSQ56S _TIE_xt_hifi2_AE_SLLSSQ56S
#define AE_SP16F_L_C _TIE_xt_hifi2_AE_SP16F_L_C
#define AE_SP16F_L_I _TIE_xt_hifi2_AE_SP16F_L_I
#define AE_SP16F_L_IU _TIE_xt_hifi2_AE_SP16F_L_IU
#define AE_SP16F_L_X _TIE_xt_hifi2_AE_SP16F_L_X
#define AE_SP16F_L_XU _TIE_xt_hifi2_AE_SP16F_L_XU
#define AE_SP16X2F_C _TIE_xt_hifi2_AE_SP16X2F_C
#define AE_SP16X2F_I _TIE_xt_hifi2_AE_SP16X2F_I
#define AE_SP16X2F_IU _TIE_xt_hifi2_AE_SP16X2F_IU
#define AE_SP16X2F_X _TIE_xt_hifi2_AE_SP16X2F_X
#define AE_SP16X2F_XU _TIE_xt_hifi2_AE_SP16X2F_XU
#define AE_SP16X2S_I _TIE_xt_hifi2_AE_SP16X2S_I
#define AE_SP16X2S_IU _TIE_xt_hifi2_AE_SP16X2S_IU
#define AE_SP16X2S_X _TIE_xt_hifi2_AE_SP16X2S_X
#define AE_SP16X2S_XU _TIE_xt_hifi2_AE_SP16X2S_XU
#define AE_SP24F_L_C _TIE_xt_hifi2_AE_SP24F_L_C
#define AE_SP24F_L_I _TIE_xt_hifi2_AE_SP24F_L_I
#define AE_SP24F_L_IU _TIE_xt_hifi2_AE_SP24F_L_IU
#define AE_SP24F_L_X _TIE_xt_hifi2_AE_SP24F_L_X
#define AE_SP24F_L_XU _TIE_xt_hifi2_AE_SP24F_L_XU
#define AE_SP24S_L_C _TIE_xt_hifi2_AE_SP24S_L_C
#define AE_SP24S_L_I _TIE_xt_hifi2_AE_SP24S_L_I
#define AE_SP24S_L_IU _TIE_xt_hifi2_AE_SP24S_L_IU
#define AE_SP24S_L_X _TIE_xt_hifi2_AE_SP24S_L_X
#define AE_SP24S_L_XU _TIE_xt_hifi2_AE_SP24S_L_XU
#define AE_SP24X2F_C _TIE_xt_hifi2_AE_SP24X2F_C
#define AE_SP24X2F_I _TIE_xt_hifi2_AE_SP24X2F_I
#define AE_SP24X2F_IU _TIE_xt_hifi2_AE_SP24X2F_IU
#define AE_SP24X2F_X _TIE_xt_hifi2_AE_SP24X2F_X
#define AE_SP24X2F_XU _TIE_xt_hifi2_AE_SP24X2F_XU
#define AE_SP24X2S_C _TIE_xt_hifi2_AE_SP24X2S_C
#define AE_SP24X2S_I _TIE_xt_hifi2_AE_SP24X2S_I
#define AE_SP24X2S_IU _TIE_xt_hifi2_AE_SP24X2S_IU
#define AE_SP24X2S_X _TIE_xt_hifi2_AE_SP24X2S_X
#define AE_SP24X2S_XU _TIE_xt_hifi2_AE_SP24X2S_XU
#define AE_SQ32F_C _TIE_xt_hifi2_AE_SQ32F_C
#define AE_SQ32F_I _TIE_xt_hifi2_AE_SQ32F_I
#define AE_SQ32F_IU _TIE_xt_hifi2_AE_SQ32F_IU
#define AE_SQ32F_X _TIE_xt_hifi2_AE_SQ32F_X
#define AE_SQ32F_XU _TIE_xt_hifi2_AE_SQ32F_XU
#define AE_SQ56S_C _TIE_xt_hifi2_AE_SQ56S_C
#define AE_SQ56S_I _TIE_xt_hifi2_AE_SQ56S_I
#define AE_SQ56S_IU _TIE_xt_hifi2_AE_SQ56S_IU
#define AE_SQ56S_X _TIE_xt_hifi2_AE_SQ56S_X
#define AE_SQ56S_XU _TIE_xt_hifi2_AE_SQ56S_XU
#define AE_SRA64_32 _TIE_xt_hifi2_AE_SRA64_32
#define AE_SRAA16RS _TIE_xt_hifi2_AE_SRAA16RS
#define AE_SRAA16RS_scalar _TIE_xt_hifi2_AE_SRAA16RS_scalar
#define AE_SRAA16RS_vector _TIE_xt_hifi2_AE_SRAA16RS_vector
#define AE_SRAA16S _TIE_xt_hifi2_AE_SRAA16S
#define AE_SRAA16S_scalar _TIE_xt_hifi2_AE_SRAA16S_scalar
#define AE_SRAA16S_vector _TIE_xt_hifi2_AE_SRAA16S_vector
#define AE_SRAA16_VECTOR _TIE_xt_hifi2_AE_SRAA16_VECTOR
#define AE_SRAA32 _TIE_xt_hifi2_AE_SRAA32
#define AE_SRAA32RS _TIE_xt_hifi2_AE_SRAA32RS
#define AE_SRAA32RS_scalar _TIE_xt_hifi2_AE_SRAA32RS_scalar
#define AE_SRAA32RS_vector _TIE_xt_hifi2_AE_SRAA32RS_vector
#define AE_SRAA32S _TIE_xt_hifi2_AE_SRAA32S
#define AE_SRAA32S_scalar _TIE_xt_hifi2_AE_SRAA32S_scalar
#define AE_SRAA32S_vector _TIE_xt_hifi2_AE_SRAA32S_vector
#define AE_SRAA64 _TIE_xt_hifi2_AE_SRAA64
#define AE_SRAA64X2_vector _TIE_xt_hifi2_AE_SRAA64X2_vector
#define AE_SRAAQ56 _TIE_xt_hifi2_AE_SRAAQ56
#define AE_SRAI16 _TIE_xt_hifi2_AE_SRAI16
#define AE_SRAI16R _TIE_xt_hifi2_AE_SRAI16R
#define AE_SRAI24 _TIE_xt_hifi2_AE_SRAI24
#define AE_SRAI32 _TIE_xt_hifi2_AE_SRAI32
#define AE_SRAI32R _TIE_xt_hifi2_AE_SRAI32R
#define AE_SRAI64 _TIE_xt_hifi2_AE_SRAI64
#define AE_SRAI64X2_vector _TIE_xt_hifi2_AE_SRAI64X2_vector
#define AE_SRAI72 _TIE_xt_hifi2_AE_SRAI72
#define AE_SRAIP24 _TIE_xt_hifi2_AE_SRAIP24
#define AE_SRAIQ56 _TIE_xt_hifi2_AE_SRAIQ56
#define AE_SRAI_32 _TIE_xt_hifi2_AE_SRAI_32
#define AE_SRAS24 _TIE_xt_hifi2_AE_SRAS24
#define AE_SRAS32 _TIE_xt_hifi2_AE_SRAS32
#define AE_SRAS64 _TIE_xt_hifi2_AE_SRAS64
#define AE_SRASP24 _TIE_xt_hifi2_AE_SRASP24
#define AE_SRASQ56 _TIE_xt_hifi2_AE_SRASQ56
#define AE_SRLA16_scalar _TIE_xt_hifi2_AE_SRLA16_scalar
#define AE_SRLA16_vector _TIE_xt_hifi2_AE_SRLA16_vector
#define AE_SRLA32 _TIE_xt_hifi2_AE_SRLA32
#define AE_SRLA32_scalar _TIE_xt_hifi2_AE_SRLA32_scalar
#define AE_SRLA32_vector _TIE_xt_hifi2_AE_SRLA32_vector
#define AE_SRLA64 _TIE_xt_hifi2_AE_SRLA64
#define AE_SRLAQ56 _TIE_xt_hifi2_AE_SRLAQ56
#define AE_SRLI24 _TIE_xt_hifi2_AE_SRLI24
#define AE_SRLI32 _TIE_xt_hifi2_AE_SRLI32
#define AE_SRLI64 _TIE_xt_hifi2_AE_SRLI64
#define AE_SRLIP24 _TIE_xt_hifi2_AE_SRLIP24
#define AE_SRLIQ56 _TIE_xt_hifi2_AE_SRLIQ56
#define AE_SRLI_32 _TIE_xt_hifi2_AE_SRLI_32
#define AE_SRLS24 _TIE_xt_hifi2_AE_SRLS24
#define AE_SRLS32 _TIE_xt_hifi2_AE_SRLS32
#define AE_SRLS64 _TIE_xt_hifi2_AE_SRLS64
#define AE_SRLSP24 _TIE_xt_hifi2_AE_SRLSP24
#define AE_SRLSQ56 _TIE_xt_hifi2_AE_SRLSQ56
#define AE_SUB16 _TIE_xt_hifi2_AE_SUB16
#define AE_SUB16S _TIE_xt_hifi2_AE_SUB16S
#define AE_SUB16S_scalar _TIE_xt_hifi2_AE_SUB16S_scalar
#define AE_SUB16S_vector _TIE_xt_hifi2_AE_SUB16S_vector
#define AE_SUB24S _TIE_xt_hifi2_AE_SUB24S
#define AE_SUB32 _TIE_xt_hifi2_AE_SUB32
#define AE_SUB32S _TIE_xt_hifi2_AE_SUB32S
#define AE_SUB32S_scalar _TIE_xt_hifi2_AE_SUB32S_scalar
#define AE_SUB64 _TIE_xt_hifi2_AE_SUB64
#define AE_SUB64S _TIE_xt_hifi2_AE_SUB64S
#define AE_SUB64X2_vector _TIE_xt_hifi2_AE_SUB64X2_vector
#define AE_SUB72 _TIE_xt_hifi2_AE_SUB72
#define AE_SUB72X64 _TIE_xt_hifi2_AE_SUB72X64
#define AE_SUBADD32 _TIE_xt_hifi2_AE_SUBADD32
#define AE_SUBADD32S _TIE_xt_hifi2_AE_SUBADD32S
#define AE_SUBP24 _TIE_xt_hifi2_AE_SUBP24
#define AE_SUBQ56 _TIE_xt_hifi2_AE_SUBQ56
#define AE_SUBRNG32 _TIE_xt_hifi2_AE_SUBRNG32
#define AE_SUBSP24S _TIE_xt_hifi2_AE_SUBSP24S
#define AE_SUBSQ56S _TIE_xt_hifi2_AE_SUBSQ56S
#define AE_SUBX2_32 _TIE_xt_hifi2_AE_SUBX2_32
#define AE_SUBX4_32 _TIE_xt_hifi2_AE_SUBX4_32
#define AE_SUBX8_32 _TIE_xt_hifi2_AE_SUBX8_32
#define AE_SUB_32 _TIE_xt_hifi2_AE_SUB_32
#define AE_S_16 _TIE_xt_hifi2_AE_S_16
#define AE_S_32 _TIE_xt_hifi2_AE_S_32
#define AE_TRUNC16X4F32 _TIE_xt_hifi2_AE_TRUNC16X4F32
#define AE_TRUNC16X4F32_scalar _TIE_xt_hifi2_AE_TRUNC16X4F32_scalar
#define AE_TRUNC16X4F32_vector _TIE_xt_hifi2_AE_TRUNC16X4F32_vector
#define AE_TRUNCA16P24S_H _TIE_xt_hifi2_AE_TRUNCA16P24S_H
#define AE_TRUNCA16P24S_L _TIE_xt_hifi2_AE_TRUNCA16P24S_L
#define AE_TRUNCA32F64S _TIE_xt_hifi2_AE_TRUNCA32F64S
#define AE_TRUNCA32F64S_L _TIE_xt_hifi2_AE_TRUNCA32F64S_L
#define AE_TRUNCA32Q48 _TIE_xt_hifi2_AE_TRUNCA32Q48
#define AE_TRUNCA32Q64 _TIE_xt_hifi2_AE_TRUNCA32Q64
#define AE_TRUNCA32X2F64S _TIE_xt_hifi2_AE_TRUNCA32X2F64S
#define AE_TRUNCI32F64S _TIE_xt_hifi2_AE_TRUNCI32F64S
#define AE_TRUNCI32F64S_L _TIE_xt_hifi2_AE_TRUNCI32F64S_L
#define AE_TRUNCI32X2F64S _TIE_xt_hifi2_AE_TRUNCI32X2F64S
#define AE_TRUNCP16 _TIE_xt_hifi2_AE_TRUNCP16
#define AE_TRUNCP24A32X2 _TIE_xt_hifi2_AE_TRUNCP24A32X2
#define AE_TRUNCP24Q48 _TIE_xt_hifi2_AE_TRUNCP24Q48
#define AE_TRUNCP24Q48X2 _TIE_xt_hifi2_AE_TRUNCP24Q48X2
#define AE_TRUNCQ32 _TIE_xt_hifi2_AE_TRUNCQ32
#define AE_VLDL16C _TIE_xt_hifi2_AE_VLDL16C
#define AE_VLDL16C_IC _TIE_xt_hifi2_AE_VLDL16C_IC
#define AE_VLDL16C_IC1 _TIE_xt_hifi2_AE_VLDL16C_IC1
#define AE_VLDL16C_IP _TIE_xt_hifi2_AE_VLDL16C_IP
#define AE_VLDL16C_XC _TIE_xt_hifi2_AE_VLDL16C_XC
#define AE_VLDL16T _TIE_xt_hifi2_AE_VLDL16T
#define AE_VLDL32T _TIE_xt_hifi2_AE_VLDL32T
#define AE_VLDSHT _TIE_xt_hifi2_AE_VLDSHT
#define AE_VLEL16T _TIE_xt_hifi2_AE_VLEL16T
#define AE_VLEL32T _TIE_xt_hifi2_AE_VLEL32T
#define AE_VLES16C _TIE_xt_hifi2_AE_VLES16C
#define AE_VLES16C_IC _TIE_xt_hifi2_AE_VLES16C_IC
#define AE_VLES16C_IC1 _TIE_xt_hifi2_AE_VLES16C_IC1
#define AE_VLES16C_IP _TIE_xt_hifi2_AE_VLES16C_IP
#define AE_VLES16C_XC _TIE_xt_hifi2_AE_VLES16C_XC
#define AE_XOR _TIE_xt_hifi2_AE_XOR
#define AE_XOR16 _TIE_xt_hifi2_AE_XOR16
#define AE_XOR24 _TIE_xt_hifi2_AE_XOR24
#define AE_XOR32 _TIE_xt_hifi2_AE_XOR32
#define AE_XOR64 _TIE_xt_hifi2_AE_XOR64
#define AE_XORP48 _TIE_xt_hifi2_AE_XORP48
#define AE_XORQ56 _TIE_xt_hifi2_AE_XORQ56
#define AE_XOR_32 _TIE_xt_hifi2_AE_XOR_32
#define AE_ZALIGN64 _TIE_xt_hifi2_AE_ZALIGN64
#define AE_ZERO _TIE_xt_hifi2_AE_ZERO
#define AE_ZERO16 _TIE_xt_hifi2_AE_ZERO16
#define AE_ZERO24 _TIE_xt_hifi2_AE_ZERO24
#define AE_ZERO32 _TIE_xt_hifi2_AE_ZERO32
#define AE_ZERO64 _TIE_xt_hifi2_AE_ZERO64
#define AE_ZEROP48 _TIE_xt_hifi2_AE_ZEROP48
#define AE_ZEROQ56 _TIE_xt_hifi2_AE_ZEROQ56
#define AE_ZEXT16 _TIE_xt_hifi2_AE_ZEXT16
#define RAE_BITPTR _TIE_xt_hifi2_RAE_BITPTR
#define RAE_BITSUSED _TIE_xt_hifi2_RAE_BITSUSED
#define RAE_CWRAP _TIE_xt_hifi2_RAE_CWRAP
#define RAE_FIRST_TS _TIE_xt_hifi2_RAE_FIRST_TS
#define RAE_NEXTOFFSET _TIE_xt_hifi2_RAE_NEXTOFFSET
#define RAE_OVERFLOW _TIE_xt_hifi2_RAE_OVERFLOW
#define RAE_SAR _TIE_xt_hifi2_RAE_SAR
#define RAE_SEARCHDONE _TIE_xt_hifi2_RAE_SEARCHDONE
#define RAE_TABLESIZE _TIE_xt_hifi2_RAE_TABLESIZE
#define RUR_AE_BITHEAD _TIE_xt_hifi2_RUR_AE_BITHEAD
#define RAE_BITHEAD _TIE_xt_hifi2_RUR_AE_BITHEAD
#define RUR241 _TIE_xt_hifi2_RUR_AE_BITHEAD
#define RUR_AE_BITPTR _TIE_xt_hifi2_RUR_AE_BITPTR
#define RUR_AE_BITSUSED _TIE_xt_hifi2_RUR_AE_BITSUSED
#define RUR_AE_CBEGIN0 _TIE_xt_hifi2_RUR_AE_CBEGIN0
#define RAE_CBEGIN0 _TIE_xt_hifi2_RUR_AE_CBEGIN0
#define RUR246 _TIE_xt_hifi2_RUR_AE_CBEGIN0
#define RUR_AE_CBEGIN1 _TIE_xt_hifi2_RUR_AE_CBEGIN1
#define RAE_CBEGIN1 _TIE_xt_hifi2_RUR_AE_CBEGIN1
#define RUR248 _TIE_xt_hifi2_RUR_AE_CBEGIN1
#define RUR_AE_CEND0 _TIE_xt_hifi2_RUR_AE_CEND0
#define RAE_CEND0 _TIE_xt_hifi2_RUR_AE_CEND0
#define RUR247 _TIE_xt_hifi2_RUR_AE_CEND0
#define RUR_AE_CEND1 _TIE_xt_hifi2_RUR_AE_CEND1
#define RAE_CEND1 _TIE_xt_hifi2_RUR_AE_CEND1
#define RUR249 _TIE_xt_hifi2_RUR_AE_CEND1
#define RUR_AE_CWRAP _TIE_xt_hifi2_RUR_AE_CWRAP
#define RUR_AE_CW_SD_NO _TIE_xt_hifi2_RUR_AE_CW_SD_NO
#define RAE_CW_SD_NO _TIE_xt_hifi2_RUR_AE_CW_SD_NO
#define RUR243 _TIE_xt_hifi2_RUR_AE_CW_SD_NO
#define RUR_AE_FIRST_TS _TIE_xt_hifi2_RUR_AE_FIRST_TS
#define RUR_AE_NEXTOFFSET _TIE_xt_hifi2_RUR_AE_NEXTOFFSET
#define RUR_AE_OVERFLOW _TIE_xt_hifi2_RUR_AE_OVERFLOW
#define RUR_AE_OVF_SAR _TIE_xt_hifi2_RUR_AE_OVF_SAR
#define RAE_OVF_SAR _TIE_xt_hifi2_RUR_AE_OVF_SAR
#define RUR240 _TIE_xt_hifi2_RUR_AE_OVF_SAR
#define RUR_AE_SAR _TIE_xt_hifi2_RUR_AE_SAR
#define RUR_AE_SEARCHDONE _TIE_xt_hifi2_RUR_AE_SEARCHDONE
#define RUR_AE_TABLESIZE _TIE_xt_hifi2_RUR_AE_TABLESIZE
#define RUR_AE_TS_FTS_BU_BP _TIE_xt_hifi2_RUR_AE_TS_FTS_BU_BP
#define RAE_TS_FTS_BU_BP _TIE_xt_hifi2_RUR_AE_TS_FTS_BU_BP
#define RUR242 _TIE_xt_hifi2_RUR_AE_TS_FTS_BU_BP
#define WAE_BITPTR _TIE_xt_hifi2_WAE_BITPTR
#define WAE_BITSUSED _TIE_xt_hifi2_WAE_BITSUSED
#define WAE_CWRAP _TIE_xt_hifi2_WAE_CWRAP
#define WAE_FIRST_TS _TIE_xt_hifi2_WAE_FIRST_TS
#define WAE_NEXTOFFSET _TIE_xt_hifi2_WAE_NEXTOFFSET
#define WAE_OVERFLOW _TIE_xt_hifi2_WAE_OVERFLOW
#define WAE_SAR _TIE_xt_hifi2_WAE_SAR
#define WAE_SEARCHDONE _TIE_xt_hifi2_WAE_SEARCHDONE
#define WAE_TABLESIZE _TIE_xt_hifi2_WAE_TABLESIZE
#define WUR_AE_BITHEAD _TIE_xt_hifi2_WUR_AE_BITHEAD
#define WAE_BITHEAD _TIE_xt_hifi2_WUR_AE_BITHEAD
#define WUR241 _TIE_xt_hifi2_WUR_AE_BITHEAD
#define WUR_AE_BITPTR _TIE_xt_hifi2_WUR_AE_BITPTR
#define WUR_AE_BITSUSED _TIE_xt_hifi2_WUR_AE_BITSUSED
#define WUR_AE_CBEGIN0 _TIE_xt_hifi2_WUR_AE_CBEGIN0
#define WAE_CBEGIN0 _TIE_xt_hifi2_WUR_AE_CBEGIN0
#define WUR246 _TIE_xt_hifi2_WUR_AE_CBEGIN0
#define WUR_AE_CBEGIN1 _TIE_xt_hifi2_WUR_AE_CBEGIN1
#define WAE_CBEGIN1 _TIE_xt_hifi2_WUR_AE_CBEGIN1
#define WUR248 _TIE_xt_hifi2_WUR_AE_CBEGIN1
#define WUR_AE_CEND0 _TIE_xt_hifi2_WUR_AE_CEND0
#define WAE_CEND0 _TIE_xt_hifi2_WUR_AE_CEND0
#define WUR247 _TIE_xt_hifi2_WUR_AE_CEND0
#define WUR_AE_CEND1 _TIE_xt_hifi2_WUR_AE_CEND1
#define WAE_CEND1 _TIE_xt_hifi2_WUR_AE_CEND1
#define WUR249 _TIE_xt_hifi2_WUR_AE_CEND1
#define WUR_AE_CWRAP _TIE_xt_hifi2_WUR_AE_CWRAP
#define WUR_AE_CW_SD_NO _TIE_xt_hifi2_WUR_AE_CW_SD_NO
#define WAE_CW_SD_NO _TIE_xt_hifi2_WUR_AE_CW_SD_NO
#define WUR243 _TIE_xt_hifi2_WUR_AE_CW_SD_NO
#define WUR_AE_FIRST_TS _TIE_xt_hifi2_WUR_AE_FIRST_TS
#define WUR_AE_NEXTOFFSET _TIE_xt_hifi2_WUR_AE_NEXTOFFSET
#define WUR_AE_OVERFLOW _TIE_xt_hifi2_WUR_AE_OVERFLOW
#define WUR_AE_OVF_SAR _TIE_xt_hifi2_WUR_AE_OVF_SAR
#define WAE_OVF_SAR _TIE_xt_hifi2_WUR_AE_OVF_SAR
#define WUR240 _TIE_xt_hifi2_WUR_AE_OVF_SAR
#define WUR_AE_SAR _TIE_xt_hifi2_WUR_AE_SAR
#define WUR_AE_SEARCHDONE _TIE_xt_hifi2_WUR_AE_SEARCHDONE
#define WUR_AE_TABLESIZE _TIE_xt_hifi2_WUR_AE_TABLESIZE
#define WUR_AE_TS_FTS_BU_BP _TIE_xt_hifi2_WUR_AE_TS_FTS_BU_BP
#define WAE_TS_FTS_BU_BP _TIE_xt_hifi2_WUR_AE_TS_FTS_BU_BP
#define WUR242 _TIE_xt_hifi2_WUR_AE_TS_FTS_BU_BP
#define ae_ep_loadi _TIE_xt_hifi2_ae_ep_loadi
#define ae_ep_move _TIE_xt_hifi2_ae_ep_move
#define ae_ep_storei _TIE_xt_hifi2_ae_ep_storei
#define ae_f16_loadi _TIE_xt_hifi2_ae_f16_loadi
#define ae_f16_loadip _TIE_xt_hifi2_ae_f16_loadip
#define ae_f16_loadx _TIE_xt_hifi2_ae_f16_loadx
#define ae_f16_loadxp _TIE_xt_hifi2_ae_f16_loadxp
#define ae_f16_move _TIE_xt_hifi2_ae_f16_move
#define ae_f16_rtor_ae_f16x4 _TIE_xt_hifi2_ae_f16_rtor_ae_f16x4
#define ae_f16_rtor_ae_f24 _TIE_xt_hifi2_ae_f16_rtor_ae_f24
#define ae_f16_rtor_ae_f32 _TIE_xt_hifi2_ae_f16_rtor_ae_f32
#define ae_f16_rtor_ae_int16 _TIE_xt_hifi2_ae_f16_rtor_ae_int16
#define ae_f16_rtor_ae_int16x4 _TIE_xt_hifi2_ae_f16_rtor_ae_int16x4
#define ae_f16_rtor_int16 _TIE_xt_hifi2_ae_f16_rtor_int16
#define ae_f16_rtor_int32 _TIE_xt_hifi2_ae_f16_rtor_int32
#define ae_f16_storei _TIE_xt_hifi2_ae_f16_storei
#define ae_f16_storeip _TIE_xt_hifi2_ae_f16_storeip
#define ae_f16_storex _TIE_xt_hifi2_ae_f16_storex
#define ae_f16_storexp _TIE_xt_hifi2_ae_f16_storexp
#define ae_f16x4_loadi _TIE_xt_hifi2_ae_f16x4_loadi
#define ae_f16x4_loadip _TIE_xt_hifi2_ae_f16x4_loadip
#define ae_f16x4_loadrip _TIE_xt_hifi2_ae_f16x4_loadrip
#define ae_f16x4_loadx _TIE_xt_hifi2_ae_f16x4_loadx
#define ae_f16x4_loadxp _TIE_xt_hifi2_ae_f16x4_loadxp
#define ae_f16x4_move _TIE_xt_hifi2_ae_f16x4_move
#define ae_f16x4_rtom_ae_f16 _TIE_xt_hifi2_ae_f16x4_rtom_ae_f16
#define ae_f16x4_rtom_ae_int16 _TIE_xt_hifi2_ae_f16x4_rtom_ae_int16
#define ae_f16x4_rtor_ae_int16x4 _TIE_xt_hifi2_ae_f16x4_rtor_ae_int16x4
#define ae_f16x4_rtor_int16 _TIE_xt_hifi2_ae_f16x4_rtor_int16
#define ae_f16x4_storei _TIE_xt_hifi2_ae_f16x4_storei
#define ae_f16x4_storeip _TIE_xt_hifi2_ae_f16x4_storeip
#define ae_f16x4_storerip _TIE_xt_hifi2_ae_f16x4_storerip
#define ae_f16x4_storex _TIE_xt_hifi2_ae_f16x4_storex
#define ae_f16x4_storexp _TIE_xt_hifi2_ae_f16x4_storexp
#define ae_f24_loadi _TIE_xt_hifi2_ae_f24_loadi
#define ae_f24_loadip _TIE_xt_hifi2_ae_f24_loadip
#define ae_f24_loadx _TIE_xt_hifi2_ae_f24_loadx
#define ae_f24_loadxp _TIE_xt_hifi2_ae_f24_loadxp
#define ae_f24_move _TIE_xt_hifi2_ae_f24_move
#define ae_f24_rtor_ae_f16 _TIE_xt_hifi2_ae_f24_rtor_ae_f16
#define ae_f24_rtor_ae_f24x2 _TIE_xt_hifi2_ae_f24_rtor_ae_f24x2
#define ae_f24_rtor_ae_f32 _TIE_xt_hifi2_ae_f24_rtor_ae_f32
#define ae_f24_rtor_ae_f32x2 _TIE_xt_hifi2_ae_f24_rtor_ae_f32x2
#define ae_f24_rtor_ae_int24 _TIE_xt_hifi2_ae_f24_rtor_ae_int24
#define ae_f24_rtor_ae_int24x2 _TIE_xt_hifi2_ae_f24_rtor_ae_int24x2
#define ae_f24_rtor_ae_int32 _TIE_xt_hifi2_ae_f24_rtor_ae_int32
#define ae_f24_rtor_ae_int32x2 _TIE_xt_hifi2_ae_f24_rtor_ae_int32x2
#define ae_f24_rtor_int32 _TIE_xt_hifi2_ae_f24_rtor_int32
#define ae_f24_storei _TIE_xt_hifi2_ae_f24_storei
#define ae_f24_storeip _TIE_xt_hifi2_ae_f24_storeip
#define ae_f24_storex _TIE_xt_hifi2_ae_f24_storex
#define ae_f24_storexp _TIE_xt_hifi2_ae_f24_storexp
#define ae_f24x2_loadi _TIE_xt_hifi2_ae_f24x2_loadi
#define ae_f24x2_loadip _TIE_xt_hifi2_ae_f24x2_loadip
#define ae_f24x2_loadri _TIE_xt_hifi2_ae_f24x2_loadri
#define ae_f24x2_loadrip _TIE_xt_hifi2_ae_f24x2_loadrip
#define ae_f24x2_loadx _TIE_xt_hifi2_ae_f24x2_loadx
#define ae_f24x2_loadxp _TIE_xt_hifi2_ae_f24x2_loadxp
#define ae_f24x2_move _TIE_xt_hifi2_ae_f24x2_move
#define ae_f24x2_rtor_ae_f24 _TIE_xt_hifi2_ae_f24x2_rtor_ae_f24
#define ae_f24x2_rtor_ae_f32x2 _TIE_xt_hifi2_ae_f24x2_rtor_ae_f32x2
#define ae_f24x2_rtor_ae_int24 _TIE_xt_hifi2_ae_f24x2_rtor_ae_int24
#define ae_f24x2_rtor_ae_int24x2 _TIE_xt_hifi2_ae_f24x2_rtor_ae_int24x2
#define ae_f24x2_rtor_ae_int32 _TIE_xt_hifi2_ae_f24x2_rtor_ae_int32
#define ae_f24x2_rtor_ae_int32x2 _TIE_xt_hifi2_ae_f24x2_rtor_ae_int32x2
#define ae_f24x2_rtor_ae_p16s _TIE_xt_hifi2_ae_f24x2_rtor_ae_p16s
#define ae_f24x2_rtor_ae_p16x2s _TIE_xt_hifi2_ae_f24x2_rtor_ae_p16x2s
#define ae_f24x2_rtor_ae_p24f _TIE_xt_hifi2_ae_f24x2_rtor_ae_p24f
#define ae_f24x2_rtor_ae_p24s _TIE_xt_hifi2_ae_f24x2_rtor_ae_p24s
#define ae_f24x2_rtor_ae_p24x2f _TIE_xt_hifi2_ae_f24x2_rtor_ae_p24x2f
#define ae_f24x2_rtor_ae_p24x2s _TIE_xt_hifi2_ae_f24x2_rtor_ae_p24x2s
#define ae_f24x2_storei _TIE_xt_hifi2_ae_f24x2_storei
#define ae_f24x2_storeip _TIE_xt_hifi2_ae_f24x2_storeip
#define ae_f24x2_storex _TIE_xt_hifi2_ae_f24x2_storex
#define ae_f24x2_storexp _TIE_xt_hifi2_ae_f24x2_storexp
#define ae_f32_loadi _TIE_xt_hifi2_ae_f32_loadi
#define ae_f32_loadip _TIE_xt_hifi2_ae_f32_loadip
#define ae_f32_loadx _TIE_xt_hifi2_ae_f32_loadx
#define ae_f32_loadxp _TIE_xt_hifi2_ae_f32_loadxp
#define ae_f32_move _TIE_xt_hifi2_ae_f32_move
#define ae_f32_rtor_ae_f16 _TIE_xt_hifi2_ae_f32_rtor_ae_f16
#define ae_f32_rtor_ae_f32x2 _TIE_xt_hifi2_ae_f32_rtor_ae_f32x2
#define ae_f32_rtor_ae_f32x4 _TIE_xt_hifi2_ae_f32_rtor_ae_f32x4
#define ae_f32_rtor_ae_int32 _TIE_xt_hifi2_ae_f32_rtor_ae_int32
#define ae_f32_rtor_ae_int32x2 _TIE_xt_hifi2_ae_f32_rtor_ae_int32x2
#define ae_f32_rtor_int32 _TIE_xt_hifi2_ae_f32_rtor_int32
#define ae_f32_storei _TIE_xt_hifi2_ae_f32_storei
#define ae_f32_storeip _TIE_xt_hifi2_ae_f32_storeip
#define ae_f32_storex _TIE_xt_hifi2_ae_f32_storex
#define ae_f32_storexp _TIE_xt_hifi2_ae_f32_storexp
#define ae_f32x2_loadi _TIE_xt_hifi2_ae_f32x2_loadi
#define ae_f32x2_loadip _TIE_xt_hifi2_ae_f32x2_loadip
#define ae_f32x2_loadri _TIE_xt_hifi2_ae_f32x2_loadri
#define ae_f32x2_loadrip _TIE_xt_hifi2_ae_f32x2_loadrip
#define ae_f32x2_loadx _TIE_xt_hifi2_ae_f32x2_loadx
#define ae_f32x2_loadxp _TIE_xt_hifi2_ae_f32x2_loadxp
#define ae_f32x2_move _TIE_xt_hifi2_ae_f32x2_move
#define ae_f32x2_rtor_ae_f32 _TIE_xt_hifi2_ae_f32x2_rtor_ae_f32
#define ae_f32x2_rtor_ae_int32 _TIE_xt_hifi2_ae_f32x2_rtor_ae_int32
#define ae_f32x2_rtor_ae_int32x2 _TIE_xt_hifi2_ae_f32x2_rtor_ae_int32x2
#define ae_f32x2_storei _TIE_xt_hifi2_ae_f32x2_storei
#define ae_f32x2_storeip _TIE_xt_hifi2_ae_f32x2_storeip
#define ae_f32x2_storeri _TIE_xt_hifi2_ae_f32x2_storeri
#define ae_f32x2_storerip _TIE_xt_hifi2_ae_f32x2_storerip
#define ae_f32x2_storex _TIE_xt_hifi2_ae_f32x2_storex
#define ae_f32x2_storexp _TIE_xt_hifi2_ae_f32x2_storexp
#define ae_f32x4_loadi _TIE_xt_hifi2_ae_f32x4_loadi
#define ae_f32x4_move _TIE_xt_hifi2_ae_f32x4_move
#define ae_f32x4_rtom_int32 _TIE_xt_hifi2_ae_f32x4_rtom_int32
#define ae_f32x4_rtor_int32 _TIE_xt_hifi2_ae_f32x4_rtor_int32
#define ae_f32x4_rtor_uint32 _TIE_xt_hifi2_ae_f32x4_rtor_uint32
#define ae_f32x4_storei _TIE_xt_hifi2_ae_f32x4_storei
#define ae_f64_loadi _TIE_xt_hifi2_ae_f64_loadi
#define ae_f64_loadip _TIE_xt_hifi2_ae_f64_loadip
#define ae_f64_loadx _TIE_xt_hifi2_ae_f64_loadx
#define ae_f64_loadxp _TIE_xt_hifi2_ae_f64_loadxp
#define ae_f64_move _TIE_xt_hifi2_ae_f64_move
#define ae_f64_rtor_ae_int64 _TIE_xt_hifi2_ae_f64_rtor_ae_int64
#define ae_f64_rtor_ae_q56s _TIE_xt_hifi2_ae_f64_rtor_ae_q56s
#define ae_f64_rtor_int64 _TIE_xt_hifi2_ae_f64_rtor_int64
#define ae_f64_storei _TIE_xt_hifi2_ae_f64_storei
#define ae_f64_storeip _TIE_xt_hifi2_ae_f64_storeip
#define ae_f64_storex _TIE_xt_hifi2_ae_f64_storex
#define ae_f64_storexp _TIE_xt_hifi2_ae_f64_storexp
#define ae_int16_loadi _TIE_xt_hifi2_ae_int16_loadi
#define ae_int16_loadip _TIE_xt_hifi2_ae_int16_loadip
#define ae_int16_loadx _TIE_xt_hifi2_ae_int16_loadx
#define ae_int16_loadxp _TIE_xt_hifi2_ae_int16_loadxp
#define ae_int16_move _TIE_xt_hifi2_ae_int16_move
#define ae_int16_rtom_int16 _TIE_xt_hifi2_ae_int16_rtom_int16
#define ae_int16_rtor_ae_f16 _TIE_xt_hifi2_ae_int16_rtor_ae_f16
#define ae_int16_rtor_ae_int16u _TIE_xt_hifi2_ae_int16_rtor_ae_int16u
#define ae_int16_rtor_ae_int16x4 _TIE_xt_hifi2_ae_int16_rtor_ae_int16x4
#define ae_int16_rtor_ae_int24 _TIE_xt_hifi2_ae_int16_rtor_ae_int24
#define ae_int16_rtor_ae_int32 _TIE_xt_hifi2_ae_int16_rtor_ae_int32
#define ae_int16_rtor_ae_int32u _TIE_xt_hifi2_ae_int16_rtor_ae_int32u
#define ae_int16_rtor_ae_int64 _TIE_xt_hifi2_ae_int16_rtor_ae_int64
#define ae_int16_rtor_int16 _TIE_xt_hifi2_ae_int16_rtor_int16
#define ae_int16_rtor_int32 _TIE_xt_hifi2_ae_int16_rtor_int32
#define ae_int16_storei _TIE_xt_hifi2_ae_int16_storei
#define ae_int16_storeip _TIE_xt_hifi2_ae_int16_storeip
#define ae_int16_storex _TIE_xt_hifi2_ae_int16_storex
#define ae_int16_storexp _TIE_xt_hifi2_ae_int16_storexp
#define ae_int16u_loadi _TIE_xt_hifi2_ae_int16u_loadi
#define ae_int16u_move _TIE_xt_hifi2_ae_int16u_move
#define ae_int16u_rtom_uint16 _TIE_xt_hifi2_ae_int16u_rtom_uint16
#define ae_int16u_rtor_ae_int16 _TIE_xt_hifi2_ae_int16u_rtor_ae_int16
#define ae_int16u_rtor_ae_int32 _TIE_xt_hifi2_ae_int16u_rtor_ae_int32
#define ae_int16u_rtor_ae_int32u _TIE_xt_hifi2_ae_int16u_rtor_ae_int32u
#define ae_int16u_rtor_uint16 _TIE_xt_hifi2_ae_int16u_rtor_uint16
#define ae_int16u_storei _TIE_xt_hifi2_ae_int16u_storei
#define ae_int16x4_aligning_load_post_update_negative _TIE_xt_hifi2_ae_int16x4_aligning_load_post_update_negative
#define ae_int16x4_aligning_load_post_update_positive _TIE_xt_hifi2_ae_int16x4_aligning_load_post_update_positive
#define ae_int16x4_aligning_load_prime _TIE_xt_hifi2_ae_int16x4_aligning_load_prime
#define ae_int16x4_aligning_store_flush_negative _TIE_xt_hifi2_ae_int16x4_aligning_store_flush_negative
#define ae_int16x4_aligning_store_flush_positive _TIE_xt_hifi2_ae_int16x4_aligning_store_flush_positive
#define ae_int16x4_aligning_store_post_update_negative _TIE_xt_hifi2_ae_int16x4_aligning_store_post_update_negative
#define ae_int16x4_aligning_store_post_update_positive _TIE_xt_hifi2_ae_int16x4_aligning_store_post_update_positive
#define ae_int16x4_aligning_store_prime _TIE_xt_hifi2_ae_int16x4_aligning_store_prime
#define ae_int16x4_load_post_update_negative _TIE_xt_hifi2_ae_int16x4_load_post_update_negative
#define ae_int16x4_load_post_update_positive _TIE_xt_hifi2_ae_int16x4_load_post_update_positive
#define ae_int16x4_loadi _TIE_xt_hifi2_ae_int16x4_loadi
#define ae_int16x4_loadip _TIE_xt_hifi2_ae_int16x4_loadip
#define ae_int16x4_loadrip _TIE_xt_hifi2_ae_int16x4_loadrip
#define ae_int16x4_loadx _TIE_xt_hifi2_ae_int16x4_loadx
#define ae_int16x4_loadxp _TIE_xt_hifi2_ae_int16x4_loadxp
#define ae_int16x4_move _TIE_xt_hifi2_ae_int16x4_move
#define ae_int16x4_rtom_ae_f16 _TIE_xt_hifi2_ae_int16x4_rtom_ae_f16
#define ae_int16x4_rtom_ae_int16 _TIE_xt_hifi2_ae_int16x4_rtom_ae_int16
#define ae_int16x4_rtor_ae_f16x4 _TIE_xt_hifi2_ae_int16x4_rtor_ae_f16x4
#define ae_int16x4_rtor_ae_int32x4 _TIE_xt_hifi2_ae_int16x4_rtor_ae_int32x4
#define ae_int16x4_rtor_int16 _TIE_xt_hifi2_ae_int16x4_rtor_int16
#define ae_int16x4_store_post_update_negative _TIE_xt_hifi2_ae_int16x4_store_post_update_negative
#define ae_int16x4_store_post_update_positive _TIE_xt_hifi2_ae_int16x4_store_post_update_positive
#define ae_int16x4_storei _TIE_xt_hifi2_ae_int16x4_storei
#define ae_int16x4_storeip _TIE_xt_hifi2_ae_int16x4_storeip
#define ae_int16x4_storerip _TIE_xt_hifi2_ae_int16x4_storerip
#define ae_int16x4_storex _TIE_xt_hifi2_ae_int16x4_storex
#define ae_int16x4_storexp _TIE_xt_hifi2_ae_int16x4_storexp
#define ae_int24_loadi _TIE_xt_hifi2_ae_int24_loadi
#define ae_int24_loadip _TIE_xt_hifi2_ae_int24_loadip
#define ae_int24_loadx _TIE_xt_hifi2_ae_int24_loadx
#define ae_int24_loadxp _TIE_xt_hifi2_ae_int24_loadxp
#define ae_int24_move _TIE_xt_hifi2_ae_int24_move
#define ae_int24_rtor_ae_f24 _TIE_xt_hifi2_ae_int24_rtor_ae_f24
#define ae_int24_rtor_ae_f24x2 _TIE_xt_hifi2_ae_int24_rtor_ae_f24x2
#define ae_int24_rtor_ae_f32 _TIE_xt_hifi2_ae_int24_rtor_ae_f32
#define ae_int24_rtor_ae_f32x2 _TIE_xt_hifi2_ae_int24_rtor_ae_f32x2
#define ae_int24_rtor_ae_int16 _TIE_xt_hifi2_ae_int24_rtor_ae_int16
#define ae_int24_rtor_ae_int24x2 _TIE_xt_hifi2_ae_int24_rtor_ae_int24x2
#define ae_int24_rtor_ae_int32 _TIE_xt_hifi2_ae_int24_rtor_ae_int32
#define ae_int24_rtor_ae_int32x2 _TIE_xt_hifi2_ae_int24_rtor_ae_int32x2
#define ae_int24_rtor_int32 _TIE_xt_hifi2_ae_int24_rtor_int32
#define ae_int24_storei _TIE_xt_hifi2_ae_int24_storei
#define ae_int24_storeip _TIE_xt_hifi2_ae_int24_storeip
#define ae_int24_storex _TIE_xt_hifi2_ae_int24_storex
#define ae_int24_storexp _TIE_xt_hifi2_ae_int24_storexp
#define ae_int24x2_loadi _TIE_xt_hifi2_ae_int24x2_loadi
#define ae_int24x2_loadip _TIE_xt_hifi2_ae_int24x2_loadip
#define ae_int24x2_loadri _TIE_xt_hifi2_ae_int24x2_loadri
#define ae_int24x2_loadrip _TIE_xt_hifi2_ae_int24x2_loadrip
#define ae_int24x2_loadx _TIE_xt_hifi2_ae_int24x2_loadx
#define ae_int24x2_loadxp _TIE_xt_hifi2_ae_int24x2_loadxp
#define ae_int24x2_move _TIE_xt_hifi2_ae_int24x2_move
#define ae_int24x2_rtor_ae_f24 _TIE_xt_hifi2_ae_int24x2_rtor_ae_f24
#define ae_int24x2_rtor_ae_f24x2 _TIE_xt_hifi2_ae_int24x2_rtor_ae_f24x2
#define ae_int24x2_rtor_ae_f32 _TIE_xt_hifi2_ae_int24x2_rtor_ae_f32
#define ae_int24x2_rtor_ae_f32x2 _TIE_xt_hifi2_ae_int24x2_rtor_ae_f32x2
#define ae_int24x2_rtor_ae_int24 _TIE_xt_hifi2_ae_int24x2_rtor_ae_int24
#define ae_int24x2_rtor_ae_int32x2 _TIE_xt_hifi2_ae_int24x2_rtor_ae_int32x2
#define ae_int24x2_rtor_ae_p16s _TIE_xt_hifi2_ae_int24x2_rtor_ae_p16s
#define ae_int24x2_rtor_ae_p16x2s _TIE_xt_hifi2_ae_int24x2_rtor_ae_p16x2s
#define ae_int24x2_rtor_ae_p24f _TIE_xt_hifi2_ae_int24x2_rtor_ae_p24f
#define ae_int24x2_rtor_ae_p24s _TIE_xt_hifi2_ae_int24x2_rtor_ae_p24s
#define ae_int24x2_rtor_ae_p24x2f _TIE_xt_hifi2_ae_int24x2_rtor_ae_p24x2f
#define ae_int24x2_rtor_ae_p24x2s _TIE_xt_hifi2_ae_int24x2_rtor_ae_p24x2s
#define ae_int24x2_storei _TIE_xt_hifi2_ae_int24x2_storei
#define ae_int24x2_storeip _TIE_xt_hifi2_ae_int24x2_storeip
#define ae_int24x2_storeri _TIE_xt_hifi2_ae_int24x2_storeri
#define ae_int24x2_storerip _TIE_xt_hifi2_ae_int24x2_storerip
#define ae_int24x2_storex _TIE_xt_hifi2_ae_int24x2_storex
#define ae_int24x2_storexp _TIE_xt_hifi2_ae_int24x2_storexp
#define ae_int32_loadi _TIE_xt_hifi2_ae_int32_loadi
#define ae_int32_loadip _TIE_xt_hifi2_ae_int32_loadip
#define ae_int32_loadx _TIE_xt_hifi2_ae_int32_loadx
#define ae_int32_loadxp _TIE_xt_hifi2_ae_int32_loadxp
#define ae_int32_move _TIE_xt_hifi2_ae_int32_move
#define ae_int32_rtom_int32 _TIE_xt_hifi2_ae_int32_rtom_int32
#define ae_int32_rtor_ae_f32 _TIE_xt_hifi2_ae_int32_rtor_ae_f32
#define ae_int32_rtor_ae_f32x2 _TIE_xt_hifi2_ae_int32_rtor_ae_f32x2
#define ae_int32_rtor_ae_int16 _TIE_xt_hifi2_ae_int32_rtor_ae_int16
#define ae_int32_rtor_ae_int16u _TIE_xt_hifi2_ae_int32_rtor_ae_int16u
#define ae_int32_rtor_ae_int32u _TIE_xt_hifi2_ae_int32_rtor_ae_int32u
#define ae_int32_rtor_ae_int32x2 _TIE_xt_hifi2_ae_int32_rtor_ae_int32x2
#define ae_int32_rtor_ae_int32x4 _TIE_xt_hifi2_ae_int32_rtor_ae_int32x4
#define ae_int32_rtor_ae_int64 _TIE_xt_hifi2_ae_int32_rtor_ae_int64
#define ae_int32_rtor_int16 _TIE_xt_hifi2_ae_int32_rtor_int16
#define ae_int32_rtor_int32 _TIE_xt_hifi2_ae_int32_rtor_int32
#define ae_int32_rtor_uint32 _TIE_xt_hifi2_ae_int32_rtor_uint32
#define ae_int32_storei _TIE_xt_hifi2_ae_int32_storei
#define ae_int32_storeip _TIE_xt_hifi2_ae_int32_storeip
#define ae_int32_storex _TIE_xt_hifi2_ae_int32_storex
#define ae_int32_storexp _TIE_xt_hifi2_ae_int32_storexp
#define ae_int32u_loadi _TIE_xt_hifi2_ae_int32u_loadi
#define ae_int32u_move _TIE_xt_hifi2_ae_int32u_move
#define ae_int32u_rtom_uint32 _TIE_xt_hifi2_ae_int32u_rtom_uint32
#define ae_int32u_rtor_ae_int16 _TIE_xt_hifi2_ae_int32u_rtor_ae_int16
#define ae_int32u_rtor_ae_int16u _TIE_xt_hifi2_ae_int32u_rtor_ae_int16u
#define ae_int32u_rtor_ae_int32 _TIE_xt_hifi2_ae_int32u_rtor_ae_int32
#define ae_int32u_rtor_ae_int32x2 _TIE_xt_hifi2_ae_int32u_rtor_ae_int32x2
#define ae_int32u_rtor_uint32 _TIE_xt_hifi2_ae_int32u_rtor_uint32
#define ae_int32u_storei _TIE_xt_hifi2_ae_int32u_storei
#define ae_int32x2_aligning_load_post_update_negative _TIE_xt_hifi2_ae_int32x2_aligning_load_post_update_negative
#define ae_int32x2_aligning_load_post_update_positive _TIE_xt_hifi2_ae_int32x2_aligning_load_post_update_positive
#define ae_int32x2_aligning_load_prime _TIE_xt_hifi2_ae_int32x2_aligning_load_prime
#define ae_int32x2_aligning_store_flush_negative _TIE_xt_hifi2_ae_int32x2_aligning_store_flush_negative
#define ae_int32x2_aligning_store_flush_positive _TIE_xt_hifi2_ae_int32x2_aligning_store_flush_positive
#define ae_int32x2_aligning_store_post_update_negative _TIE_xt_hifi2_ae_int32x2_aligning_store_post_update_negative
#define ae_int32x2_aligning_store_post_update_positive _TIE_xt_hifi2_ae_int32x2_aligning_store_post_update_positive
#define ae_int32x2_aligning_store_prime _TIE_xt_hifi2_ae_int32x2_aligning_store_prime
#define ae_int32x2_load_post_update_negative _TIE_xt_hifi2_ae_int32x2_load_post_update_negative
#define ae_int32x2_load_post_update_positive _TIE_xt_hifi2_ae_int32x2_load_post_update_positive
#define ae_int32x2_loadi _TIE_xt_hifi2_ae_int32x2_loadi
#define ae_int32x2_loadip _TIE_xt_hifi2_ae_int32x2_loadip
#define ae_int32x2_loadri _TIE_xt_hifi2_ae_int32x2_loadri
#define ae_int32x2_loadrip _TIE_xt_hifi2_ae_int32x2_loadrip
#define ae_int32x2_loadx _TIE_xt_hifi2_ae_int32x2_loadx
#define ae_int32x2_loadxp _TIE_xt_hifi2_ae_int32x2_loadxp
#define ae_int32x2_move _TIE_xt_hifi2_ae_int32x2_move
#define ae_int32x2_rtom_ae_int32 _TIE_xt_hifi2_ae_int32x2_rtom_ae_int32
#define ae_int32x2_rtom_int32 _TIE_xt_hifi2_ae_int32x2_rtom_int32
#define ae_int32x2_rtor_ae_f32 _TIE_xt_hifi2_ae_int32x2_rtor_ae_f32
#define ae_int32x2_rtor_ae_f32x2 _TIE_xt_hifi2_ae_int32x2_rtor_ae_f32x2
#define ae_int32x2_rtor_ae_int32 _TIE_xt_hifi2_ae_int32x2_rtor_ae_int32
#define ae_int32x2_rtor_ae_int32u _TIE_xt_hifi2_ae_int32x2_rtor_ae_int32u
#define ae_int32x2_rtor_ae_int64x2 _TIE_xt_hifi2_ae_int32x2_rtor_ae_int64x2
#define ae_int32x2_rtor_int16 _TIE_xt_hifi2_ae_int32x2_rtor_int16
#define ae_int32x2_rtor_int32 _TIE_xt_hifi2_ae_int32x2_rtor_int32
#define ae_int32x2_rtor_uint32 _TIE_xt_hifi2_ae_int32x2_rtor_uint32
#define ae_int32x2_store_post_update_negative _TIE_xt_hifi2_ae_int32x2_store_post_update_negative
#define ae_int32x2_store_post_update_positive _TIE_xt_hifi2_ae_int32x2_store_post_update_positive
#define ae_int32x2_storei _TIE_xt_hifi2_ae_int32x2_storei
#define ae_int32x2_storeip _TIE_xt_hifi2_ae_int32x2_storeip
#define ae_int32x2_storeri _TIE_xt_hifi2_ae_int32x2_storeri
#define ae_int32x2_storerip _TIE_xt_hifi2_ae_int32x2_storerip
#define ae_int32x2_storex _TIE_xt_hifi2_ae_int32x2_storex
#define ae_int32x2_storexp _TIE_xt_hifi2_ae_int32x2_storexp
#define ae_int32x2_vextract_0_ae_int32 _TIE_xt_hifi2_ae_int32x2_vextract_0_ae_int32
#define ae_int32x2_vextract_0_p32s _TIE_xt_hifi2_ae_int32x2_vextract_0_p32s
#define ae_int32x2_vextract_1_ae_int32 _TIE_xt_hifi2_ae_int32x2_vextract_1_ae_int32
#define ae_int32x2_vextract_1_p32s _TIE_xt_hifi2_ae_int32x2_vextract_1_p32s
#define ae_int32x2_vpack_ae_int32 _TIE_xt_hifi2_ae_int32x2_vpack_ae_int32
#define ae_int32x2_vpack_p32s _TIE_xt_hifi2_ae_int32x2_vpack_p32s
#define ae_int32x4_aligning_load_post_update_negative _TIE_xt_hifi2_ae_int32x4_aligning_load_post_update_negative
#define ae_int32x4_aligning_load_post_update_positive _TIE_xt_hifi2_ae_int32x4_aligning_load_post_update_positive
#define ae_int32x4_aligning_load_prime _TIE_xt_hifi2_ae_int32x4_aligning_load_prime
#define ae_int32x4_aligning_store_flush_negative _TIE_xt_hifi2_ae_int32x4_aligning_store_flush_negative
#define ae_int32x4_aligning_store_flush_positive _TIE_xt_hifi2_ae_int32x4_aligning_store_flush_positive
#define ae_int32x4_aligning_store_post_update_negative _TIE_xt_hifi2_ae_int32x4_aligning_store_post_update_negative
#define ae_int32x4_aligning_store_post_update_positive _TIE_xt_hifi2_ae_int32x4_aligning_store_post_update_positive
#define ae_int32x4_aligning_store_prime _TIE_xt_hifi2_ae_int32x4_aligning_store_prime
#define ae_int32x4_load_post_update_negative _TIE_xt_hifi2_ae_int32x4_load_post_update_negative
#define ae_int32x4_load_post_update_positive _TIE_xt_hifi2_ae_int32x4_load_post_update_positive
#define ae_int32x4_loadi _TIE_xt_hifi2_ae_int32x4_loadi
#define ae_int32x4_move _TIE_xt_hifi2_ae_int32x4_move
#define ae_int32x4_rtom_int32 _TIE_xt_hifi2_ae_int32x4_rtom_int32
#define ae_int32x4_rtor_ae_int16x4 _TIE_xt_hifi2_ae_int32x4_rtor_ae_int16x4
#define ae_int32x4_rtor_int32 _TIE_xt_hifi2_ae_int32x4_rtor_int32
#define ae_int32x4_rtor_uint32 _TIE_xt_hifi2_ae_int32x4_rtor_uint32
#define ae_int32x4_store_post_update_negative _TIE_xt_hifi2_ae_int32x4_store_post_update_negative
#define ae_int32x4_store_post_update_positive _TIE_xt_hifi2_ae_int32x4_store_post_update_positive
#define ae_int32x4_storei _TIE_xt_hifi2_ae_int32x4_storei
#define ae_int64_loadi _TIE_xt_hifi2_ae_int64_loadi
#define ae_int64_loadip _TIE_xt_hifi2_ae_int64_loadip
#define ae_int64_loadx _TIE_xt_hifi2_ae_int64_loadx
#define ae_int64_loadxp _TIE_xt_hifi2_ae_int64_loadxp
#define ae_int64_move _TIE_xt_hifi2_ae_int64_move
#define ae_int64_rtom_int64 _TIE_xt_hifi2_ae_int64_rtom_int64
#define ae_int64_rtom_uint64 _TIE_xt_hifi2_ae_int64_rtom_uint64
#define ae_int64_rtor_ae_f64 _TIE_xt_hifi2_ae_int64_rtor_ae_f64
#define ae_int64_rtor_ae_q56s _TIE_xt_hifi2_ae_int64_rtor_ae_q56s
#define ae_int64_rtor_int64 _TIE_xt_hifi2_ae_int64_rtor_int64
#define ae_int64_rtor_uint64 _TIE_xt_hifi2_ae_int64_rtor_uint64
#define ae_int64_storei _TIE_xt_hifi2_ae_int64_storei
#define ae_int64_storeip _TIE_xt_hifi2_ae_int64_storeip
#define ae_int64_storex _TIE_xt_hifi2_ae_int64_storex
#define ae_int64_storexp _TIE_xt_hifi2_ae_int64_storexp
#define ae_int64x2_loadi _TIE_xt_hifi2_ae_int64x2_loadi
#define ae_int64x2_move _TIE_xt_hifi2_ae_int64x2_move
#define ae_int64x2_storei _TIE_xt_hifi2_ae_int64x2_storei
#define ae_int64x4_loadi _TIE_xt_hifi2_ae_int64x4_loadi
#define ae_int64x4_move _TIE_xt_hifi2_ae_int64x4_move
#define ae_int64x4_storei _TIE_xt_hifi2_ae_int64x4_storei
#define ae_p16s_loadi _TIE_xt_hifi2_ae_p16s_loadi
#define ae_p16s_loadiu _TIE_xt_hifi2_ae_p16s_loadiu
#define ae_p16s_loadx _TIE_xt_hifi2_ae_p16s_loadx
#define ae_p16s_loadxu _TIE_xt_hifi2_ae_p16s_loadxu
#define ae_p16s_move _TIE_xt_hifi2_ae_p16s_move
#define ae_p16s_mtor_ae_p24f _TIE_xt_hifi2_ae_p16s_mtor_ae_p24f
#define ae_p16s_mtor_ae_p24s _TIE_xt_hifi2_ae_p16s_mtor_ae_p24s
#define ae_p16s_mtor_ae_p24x2f _TIE_xt_hifi2_ae_p16s_mtor_ae_p24x2f
#define ae_p16s_mtor_ae_p24x2s _TIE_xt_hifi2_ae_p16s_mtor_ae_p24x2s
#define ae_p16s_rtor_ae_f24x2 _TIE_xt_hifi2_ae_p16s_rtor_ae_f24x2
#define ae_p16s_rtor_ae_int24x2 _TIE_xt_hifi2_ae_p16s_rtor_ae_int24x2
#define ae_p16s_storei _TIE_xt_hifi2_ae_p16s_storei
#define ae_p16s_storeiu _TIE_xt_hifi2_ae_p16s_storeiu
#define ae_p16s_storex _TIE_xt_hifi2_ae_p16s_storex
#define ae_p16s_storexu _TIE_xt_hifi2_ae_p16s_storexu
#define ae_p16x2s_loadi _TIE_xt_hifi2_ae_p16x2s_loadi
#define ae_p16x2s_loadiu _TIE_xt_hifi2_ae_p16x2s_loadiu
#define ae_p16x2s_loadx _TIE_xt_hifi2_ae_p16x2s_loadx
#define ae_p16x2s_loadxu _TIE_xt_hifi2_ae_p16x2s_loadxu
#define ae_p16x2s_move _TIE_xt_hifi2_ae_p16x2s_move
#define ae_p16x2s_mtor_ae_p24x2f _TIE_xt_hifi2_ae_p16x2s_mtor_ae_p24x2f
#define ae_p16x2s_mtor_ae_p24x2s _TIE_xt_hifi2_ae_p16x2s_mtor_ae_p24x2s
#define ae_p16x2s_rtor_ae_f24x2 _TIE_xt_hifi2_ae_p16x2s_rtor_ae_f24x2
#define ae_p16x2s_rtor_ae_int24x2 _TIE_xt_hifi2_ae_p16x2s_rtor_ae_int24x2
#define ae_p16x2s_storei _TIE_xt_hifi2_ae_p16x2s_storei
#define ae_p16x2s_storeiu _TIE_xt_hifi2_ae_p16x2s_storeiu
#define ae_p16x2s_storex _TIE_xt_hifi2_ae_p16x2s_storex
#define ae_p16x2s_storexu _TIE_xt_hifi2_ae_p16x2s_storexu
#define ae_p24f_loadi _TIE_xt_hifi2_ae_p24f_loadi
#define ae_p24f_loadip _TIE_xt_hifi2_ae_p24f_loadip
#define ae_p24f_loadx _TIE_xt_hifi2_ae_p24f_loadx
#define ae_p24f_loadxp _TIE_xt_hifi2_ae_p24f_loadxp
#define ae_p24f_move _TIE_xt_hifi2_ae_p24f_move
#define ae_p24f_mtor_ae_p24x2f _TIE_xt_hifi2_ae_p24f_mtor_ae_p24x2f
#define ae_p24f_mtor_ae_p24x2s _TIE_xt_hifi2_ae_p24f_mtor_ae_p24x2s
#define ae_p24f_rtom_ae_p16s _TIE_xt_hifi2_ae_p24f_rtom_ae_p16s
#define ae_p24f_rtom_ae_p24s _TIE_xt_hifi2_ae_p24f_rtom_ae_p24s
#define ae_p24f_rtor_ae_f24x2 _TIE_xt_hifi2_ae_p24f_rtor_ae_f24x2
#define ae_p24f_rtor_ae_int24x2 _TIE_xt_hifi2_ae_p24f_rtor_ae_int24x2
#define ae_p24f_rtor_ae_p24x2f _TIE_xt_hifi2_ae_p24f_rtor_ae_p24x2f
#define ae_p24f_rtor_ae_p24x2s _TIE_xt_hifi2_ae_p24f_rtor_ae_p24x2s
#define ae_p24f_storei _TIE_xt_hifi2_ae_p24f_storei
#define ae_p24f_storeip _TIE_xt_hifi2_ae_p24f_storeip
#define ae_p24f_storex _TIE_xt_hifi2_ae_p24f_storex
#define ae_p24f_storexp _TIE_xt_hifi2_ae_p24f_storexp
#define ae_p24s_loadi _TIE_xt_hifi2_ae_p24s_loadi
#define ae_p24s_loadip _TIE_xt_hifi2_ae_p24s_loadip
#define ae_p24s_loadx _TIE_xt_hifi2_ae_p24s_loadx
#define ae_p24s_loadxp _TIE_xt_hifi2_ae_p24s_loadxp
#define ae_p24s_move _TIE_xt_hifi2_ae_p24s_move
#define ae_p24s_mtor_ae_p24f _TIE_xt_hifi2_ae_p24s_mtor_ae_p24f
#define ae_p24s_mtor_ae_p24x2f _TIE_xt_hifi2_ae_p24s_mtor_ae_p24x2f
#define ae_p24s_mtor_ae_p24x2s _TIE_xt_hifi2_ae_p24s_mtor_ae_p24x2s
#define ae_p24s_rtom_ae_p16s _TIE_xt_hifi2_ae_p24s_rtom_ae_p16s
#define ae_p24s_rtom_ae_p24f _TIE_xt_hifi2_ae_p24s_rtom_ae_p24f
#define ae_p24s_rtor_ae_f24x2 _TIE_xt_hifi2_ae_p24s_rtor_ae_f24x2
#define ae_p24s_rtor_ae_int24x2 _TIE_xt_hifi2_ae_p24s_rtor_ae_int24x2
#define ae_p24s_rtor_ae_p24x2f _TIE_xt_hifi2_ae_p24s_rtor_ae_p24x2f
#define ae_p24s_rtor_ae_p24x2s _TIE_xt_hifi2_ae_p24s_rtor_ae_p24x2s
#define ae_p24s_storei _TIE_xt_hifi2_ae_p24s_storei
#define ae_p24s_storeip _TIE_xt_hifi2_ae_p24s_storeip
#define ae_p24s_storex _TIE_xt_hifi2_ae_p24s_storex
#define ae_p24s_storexp _TIE_xt_hifi2_ae_p24s_storexp
#define ae_p24x2f_loadi _TIE_xt_hifi2_ae_p24x2f_loadi
#define ae_p24x2f_loadip _TIE_xt_hifi2_ae_p24x2f_loadip
#define ae_p24x2f_loadri _TIE_xt_hifi2_ae_p24x2f_loadri
#define ae_p24x2f_loadx _TIE_xt_hifi2_ae_p24x2f_loadx
#define ae_p24x2f_loadxp _TIE_xt_hifi2_ae_p24x2f_loadxp
#define ae_p24x2f_move _TIE_xt_hifi2_ae_p24x2f_move
#define ae_p24x2f_mtor_ae_p24x2s _TIE_xt_hifi2_ae_p24x2f_mtor_ae_p24x2s
#define ae_p24x2f_rtom_ae_p16s _TIE_xt_hifi2_ae_p24x2f_rtom_ae_p16s
#define ae_p24x2f_rtom_ae_p16x2s _TIE_xt_hifi2_ae_p24x2f_rtom_ae_p16x2s
#define ae_p24x2f_rtom_ae_p24f _TIE_xt_hifi2_ae_p24x2f_rtom_ae_p24f
#define ae_p24x2f_rtom_ae_p24s _TIE_xt_hifi2_ae_p24x2f_rtom_ae_p24s
#define ae_p24x2f_rtom_ae_p24x2s _TIE_xt_hifi2_ae_p24x2f_rtom_ae_p24x2s
#define ae_p24x2f_rtor_ae_f24x2 _TIE_xt_hifi2_ae_p24x2f_rtor_ae_f24x2
#define ae_p24x2f_rtor_ae_int24x2 _TIE_xt_hifi2_ae_p24x2f_rtor_ae_int24x2
#define ae_p24x2f_rtor_ae_p16s _TIE_xt_hifi2_ae_p24x2f_rtor_ae_p16s
#define ae_p24x2f_rtor_ae_p16x2s _TIE_xt_hifi2_ae_p24x2f_rtor_ae_p16x2s
#define ae_p24x2f_rtor_ae_p24f _TIE_xt_hifi2_ae_p24x2f_rtor_ae_p24f
#define ae_p24x2f_rtor_ae_p24s _TIE_xt_hifi2_ae_p24x2f_rtor_ae_p24s
#define ae_p24x2f_rtor_ae_p24x2s _TIE_xt_hifi2_ae_p24x2f_rtor_ae_p24x2s
#define ae_p24x2f_storei _TIE_xt_hifi2_ae_p24x2f_storei
#define ae_p24x2f_storeip _TIE_xt_hifi2_ae_p24x2f_storeip
#define ae_p24x2f_storex _TIE_xt_hifi2_ae_p24x2f_storex
#define ae_p24x2f_storexp _TIE_xt_hifi2_ae_p24x2f_storexp
#define ae_p24x2s_loadi _TIE_xt_hifi2_ae_p24x2s_loadi
#define ae_p24x2s_loadip _TIE_xt_hifi2_ae_p24x2s_loadip
#define ae_p24x2s_loadri _TIE_xt_hifi2_ae_p24x2s_loadri
#define ae_p24x2s_loadx _TIE_xt_hifi2_ae_p24x2s_loadx
#define ae_p24x2s_loadxp _TIE_xt_hifi2_ae_p24x2s_loadxp
#define ae_p24x2s_move _TIE_xt_hifi2_ae_p24x2s_move
#define ae_p24x2s_rtom_ae_p16s _TIE_xt_hifi2_ae_p24x2s_rtom_ae_p16s
#define ae_p24x2s_rtom_ae_p16x2s _TIE_xt_hifi2_ae_p24x2s_rtom_ae_p16x2s
#define ae_p24x2s_rtom_ae_p24f _TIE_xt_hifi2_ae_p24x2s_rtom_ae_p24f
#define ae_p24x2s_rtom_ae_p24s _TIE_xt_hifi2_ae_p24x2s_rtom_ae_p24s
#define ae_p24x2s_rtom_ae_p24x2f _TIE_xt_hifi2_ae_p24x2s_rtom_ae_p24x2f
#define ae_p24x2s_rtor_ae_f24x2 _TIE_xt_hifi2_ae_p24x2s_rtor_ae_f24x2
#define ae_p24x2s_rtor_ae_int24x2 _TIE_xt_hifi2_ae_p24x2s_rtor_ae_int24x2
#define ae_p24x2s_rtor_ae_p16s _TIE_xt_hifi2_ae_p24x2s_rtor_ae_p16s
#define ae_p24x2s_rtor_ae_p16x2s _TIE_xt_hifi2_ae_p24x2s_rtor_ae_p16x2s
#define ae_p24x2s_rtor_ae_p24f _TIE_xt_hifi2_ae_p24x2s_rtor_ae_p24f
#define ae_p24x2s_rtor_ae_p24s _TIE_xt_hifi2_ae_p24x2s_rtor_ae_p24s
#define ae_p24x2s_rtor_ae_p24x2f _TIE_xt_hifi2_ae_p24x2s_rtor_ae_p24x2f
#define ae_p24x2s_storei _TIE_xt_hifi2_ae_p24x2s_storei
#define ae_p24x2s_storeip _TIE_xt_hifi2_ae_p24x2s_storeip
#define ae_p24x2s_storeri _TIE_xt_hifi2_ae_p24x2s_storeri
#define ae_p24x2s_storex _TIE_xt_hifi2_ae_p24x2s_storex
#define ae_p24x2s_storexp _TIE_xt_hifi2_ae_p24x2s_storexp
#define ae_q32s_loadi _TIE_xt_hifi2_ae_q32s_loadi
#define ae_q32s_loadiu _TIE_xt_hifi2_ae_q32s_loadiu
#define ae_q32s_loadx _TIE_xt_hifi2_ae_q32s_loadx
#define ae_q32s_loadxu _TIE_xt_hifi2_ae_q32s_loadxu
#define ae_q32s_move _TIE_xt_hifi2_ae_q32s_move
#define ae_q32s_mtor_ae_q56s _TIE_xt_hifi2_ae_q32s_mtor_ae_q56s
#define ae_q32s_storei _TIE_xt_hifi2_ae_q32s_storei
#define ae_q32s_storeiu _TIE_xt_hifi2_ae_q32s_storeiu
#define ae_q32s_storex _TIE_xt_hifi2_ae_q32s_storex
#define ae_q32s_storexu _TIE_xt_hifi2_ae_q32s_storexu
#define ae_q56s_loadi _TIE_xt_hifi2_ae_q56s_loadi
#define ae_q56s_loadip _TIE_xt_hifi2_ae_q56s_loadip
#define ae_q56s_loadx _TIE_xt_hifi2_ae_q56s_loadx
#define ae_q56s_loadxp _TIE_xt_hifi2_ae_q56s_loadxp
#define ae_q56s_move _TIE_xt_hifi2_ae_q56s_move
#define ae_q56s_rtom_ae_q32s _TIE_xt_hifi2_ae_q56s_rtom_ae_q32s
#define ae_q56s_rtor_ae_f64 _TIE_xt_hifi2_ae_q56s_rtor_ae_f64
#define ae_q56s_rtor_ae_int64 _TIE_xt_hifi2_ae_q56s_rtor_ae_int64
#define ae_q56s_rtor_ae_q32s _TIE_xt_hifi2_ae_q56s_rtor_ae_q32s
#define ae_q56s_storei _TIE_xt_hifi2_ae_q56s_storei
#define ae_q56s_storeip _TIE_xt_hifi2_ae_q56s_storeip
#define ae_q56s_storex _TIE_xt_hifi2_ae_q56s_storex
#define ae_q56s_storexp _TIE_xt_hifi2_ae_q56s_storexp
#define ae_valign_loadi _TIE_xt_hifi2_ae_valign_loadi
#define ae_valign_move _TIE_xt_hifi2_ae_valign_move
#define ae_valign_storei _TIE_xt_hifi2_ae_valign_storei
#define int16_mtor_ae_int16 _TIE_xt_hifi2_int16_mtor_ae_int16
#define int16_rtor_ae_f16 _TIE_xt_hifi2_int16_rtor_ae_f16
#define int16_rtor_ae_f16x4 _TIE_xt_hifi2_int16_rtor_ae_f16x4
#define int16_rtor_ae_f24 _TIE_xt_hifi2_int16_rtor_ae_f24
#define int16_rtor_ae_f24x2 _TIE_xt_hifi2_int16_rtor_ae_f24x2
#define int16_rtor_ae_f32 _TIE_xt_hifi2_int16_rtor_ae_f32
#define int16_rtor_ae_f32x2 _TIE_xt_hifi2_int16_rtor_ae_f32x2
#define int16_rtor_ae_f64 _TIE_xt_hifi2_int16_rtor_ae_f64
#define int16_rtor_ae_int16 _TIE_xt_hifi2_int16_rtor_ae_int16
#define int16_rtor_ae_int16x4 _TIE_xt_hifi2_int16_rtor_ae_int16x4
#define int16_rtor_ae_int24 _TIE_xt_hifi2_int16_rtor_ae_int24
#define int16_rtor_ae_int24x2 _TIE_xt_hifi2_int16_rtor_ae_int24x2
#define int16_rtor_ae_int32 _TIE_xt_hifi2_int16_rtor_ae_int32
#define int16_rtor_ae_int32x2 _TIE_xt_hifi2_int16_rtor_ae_int32x2
#define int16_rtor_ae_int64 _TIE_xt_hifi2_int16_rtor_ae_int64
#define int32_mtor_ae_f32x4 _TIE_xt_hifi2_int32_mtor_ae_f32x4
#define int32_mtor_ae_int32 _TIE_xt_hifi2_int32_mtor_ae_int32
#define int32_mtor_ae_int32x2 _TIE_xt_hifi2_int32_mtor_ae_int32x2
#define int32_mtor_ae_int32x4 _TIE_xt_hifi2_int32_mtor_ae_int32x4
#define int32_rtor_ae_f16 _TIE_xt_hifi2_int32_rtor_ae_f16
#define int32_rtor_ae_f24 _TIE_xt_hifi2_int32_rtor_ae_f24
#define int32_rtor_ae_f24x2 _TIE_xt_hifi2_int32_rtor_ae_f24x2
#define int32_rtor_ae_f32 _TIE_xt_hifi2_int32_rtor_ae_f32
#define int32_rtor_ae_f32x2 _TIE_xt_hifi2_int32_rtor_ae_f32x2
#define int32_rtor_ae_f32x4 _TIE_xt_hifi2_int32_rtor_ae_f32x4
#define int32_rtor_ae_f64 _TIE_xt_hifi2_int32_rtor_ae_f64
#define int32_rtor_ae_int16 _TIE_xt_hifi2_int32_rtor_ae_int16
#define int32_rtor_ae_int16x4 _TIE_xt_hifi2_int32_rtor_ae_int16x4
#define int32_rtor_ae_int24 _TIE_xt_hifi2_int32_rtor_ae_int24
#define int32_rtor_ae_int24x2 _TIE_xt_hifi2_int32_rtor_ae_int24x2
#define int32_rtor_ae_int32 _TIE_xt_hifi2_int32_rtor_ae_int32
#define int32_rtor_ae_int32x2 _TIE_xt_hifi2_int32_rtor_ae_int32x2
#define int32_rtor_ae_int32x4 _TIE_xt_hifi2_int32_rtor_ae_int32x4
#define int32_rtor_ae_int64 _TIE_xt_hifi2_int32_rtor_ae_int64
#define int32_rtor_xtbool2 _TIE_xt_hifi2_int32_rtor_xtbool2
#define int32_rtor_xtbool4 _TIE_xt_hifi2_int32_rtor_xtbool4
#define int64_mtor_ae_int64 _TIE_xt_hifi2_int64_mtor_ae_int64
#define int64_rtor_ae_f64 _TIE_xt_hifi2_int64_rtor_ae_f64
#define int64_rtor_ae_int64 _TIE_xt_hifi2_int64_rtor_ae_int64
#define int8_rtor_ae_int32 _TIE_xt_hifi2_int8_rtor_ae_int32
#define int8_rtor_ae_int32x2 _TIE_xt_hifi2_int8_rtor_ae_int32x2
#define uint16_mtor_ae_int16u _TIE_xt_hifi2_uint16_mtor_ae_int16u
#define uint16_rtor_ae_int16u _TIE_xt_hifi2_uint16_rtor_ae_int16u
#define uint16_rtor_ae_int32 _TIE_xt_hifi2_uint16_rtor_ae_int32
#define uint16_rtor_ae_int32x2 _TIE_xt_hifi2_uint16_rtor_ae_int32x2
#define uint32_mtor_ae_int32u _TIE_xt_hifi2_uint32_mtor_ae_int32u
#define uint32_rtor_ae_f24x2 _TIE_xt_hifi2_uint32_rtor_ae_f24x2
#define uint32_rtor_ae_f32x2 _TIE_xt_hifi2_uint32_rtor_ae_f32x2
#define uint32_rtor_ae_f32x4 _TIE_xt_hifi2_uint32_rtor_ae_f32x4
#define uint32_rtor_ae_int24x2 _TIE_xt_hifi2_uint32_rtor_ae_int24x2
#define uint32_rtor_ae_int32 _TIE_xt_hifi2_uint32_rtor_ae_int32
#define uint32_rtor_ae_int32u _TIE_xt_hifi2_uint32_rtor_ae_int32u
#define uint32_rtor_ae_int32x2 _TIE_xt_hifi2_uint32_rtor_ae_int32x2
#define uint32_rtor_ae_int32x4 _TIE_xt_hifi2_uint32_rtor_ae_int32x4
#define uint32_rtor_xtbool2 _TIE_xt_hifi2_uint32_rtor_xtbool2
#define uint32_rtor_xtbool4 _TIE_xt_hifi2_uint32_rtor_xtbool4
#define uint64_mtor_ae_int64 _TIE_xt_hifi2_uint64_mtor_ae_int64
#define uint64_rtor_ae_int64 _TIE_xt_hifi2_uint64_rtor_ae_int64
#define uint8_rtor_ae_int32 _TIE_xt_hifi2_uint8_rtor_ae_int32
#define uint8_rtor_ae_int32x2 _TIE_xt_hifi2_uint8_rtor_ae_int32x2
#define xtbool2_extract_0 _TIE_xt_hifi2_xtbool2_extract_0
#define xtbool2_extract_1 _TIE_xt_hifi2_xtbool2_extract_1
#define xtbool2_loadi _TIE_xt_hifi2_xtbool2_loadi
#define xtbool2_move _TIE_xt_hifi2_xtbool2_move
#define xtbool2_rtor_int32 _TIE_xt_hifi2_xtbool2_rtor_int32
#define xtbool2_rtor_uint32 _TIE_xt_hifi2_xtbool2_rtor_uint32
#define xtbool2_storei _TIE_xt_hifi2_xtbool2_storei
#define xtbool4_extract_0 _TIE_xt_hifi2_xtbool4_extract_0
#define xtbool4_extract_1 _TIE_xt_hifi2_xtbool4_extract_1
#define xtbool4_extract_2 _TIE_xt_hifi2_xtbool4_extract_2
#define xtbool4_extract_3 _TIE_xt_hifi2_xtbool4_extract_3
#define xtbool4_loadi _TIE_xt_hifi2_xtbool4_loadi
#define xtbool4_move _TIE_xt_hifi2_xtbool4_move
#define xtbool4_rtor_int32 _TIE_xt_hifi2_xtbool4_rtor_int32
#define xtbool4_rtor_uint32 _TIE_xt_hifi2_xtbool4_rtor_uint32
#define xtbool4_storei _TIE_xt_hifi2_xtbool4_storei
#define xtbool_join_xtbool2 _TIE_xt_hifi2_xtbool_join_xtbool2
#define xtbool_join_xtbool4 _TIE_xt_hifi2_xtbool_join_xtbool4
#define xtbool_loadi _TIE_xt_hifi2_xtbool_loadi
#define xtbool_storei _TIE_xt_hifi2_xtbool_storei

#ifndef RUR
#define RUR(NUM) RUR##NUM()
#endif

#ifndef WUR
#define WUR(VAL, NUM) WUR##NUM(VAL)
#endif

#endif /* __XCC__ */

#endif /* __XTENSA__ */


/* Header includes start */
#undef AE_L32X2F24_RIP
#undef AE_L32X2_RIP
#undef AE_S32X2_RIP
#undef AE_S16X4_RIP
#undef AE_L16X4_RIP
#ifdef CSTUB_
#define AE_L32X2_RIP_1_ARGS(data, pointer)              CSTUB_(_TIE_xt_hifi2_AE_L32X2_RIP)(data, (const CSTUB_(ae_int32x2) **) &(pointer), -8) 
#define AE_L32X2_RIP_2_ARGS(data, pointer, size)        CSTUB_(_TIE_xt_hifi2_AE_L32X2_RIP)(data, (const CSTUB_(ae_int32x2) **) &(pointer), size) 
#define AE_S32X2_RIP_1_ARGS(data, pointer)              CSTUB_(_TIE_xt_hifi2_AE_S32X2_RIP)(data, (CSTUB_(ae_int32x2) **) &(pointer), -8) 
#define AE_S32X2_RIP_2_ARGS(data, pointer, size)        CSTUB_(_TIE_xt_hifi2_AE_S32X2_RIP)(data, (CSTUB_(ae_int32x2) **) &(pointer), size) 
#define AE_S16X4_RIP_1_ARGS(data, pointer)              CSTUB_(_TIE_xt_hifi2_AE_S16X4_RIP)(data, (CSTUB_(ae_int16x4) **) &(pointer), -8) 
#define AE_S16X4_RIP_2_ARGS(data, pointer, size)        CSTUB_(_TIE_xt_hifi2_AE_S16X4_RIP)(data, (CSTUB_(ae_int16x4) **) &(pointer), size) 
#else
#define AE_L32X2_RIP_1_ARGS(data, pointer)              _TIE_xt_hifi2_AE_L32X2_RIP(data, pointer, -8) 
#define AE_L32X2_RIP_2_ARGS(data, pointer, size)        _TIE_xt_hifi2_AE_L32X2_RIP(data, pointer, size) 
#define AE_S32X2_RIP_1_ARGS(data, pointer)              _TIE_xt_hifi2_AE_S32X2_RIP(data, pointer, -8) 
#define AE_S32X2_RIP_2_ARGS(data, pointer, size)        _TIE_xt_hifi2_AE_S32X2_RIP(data, pointer, size) 
#define AE_S16X4_RIP_1_ARGS(data, pointer)              _TIE_xt_hifi2_AE_S16X4_RIP(data, pointer, -8) 
#define AE_S16X4_RIP_2_ARGS(data, pointer, size)        _TIE_xt_hifi2_AE_S16X4_RIP(data, pointer, size) 
#endif
#define AE_GET_FOURTH_ARG(arg1, arg2, arg3, arg4, ...) arg4 
#define AE_GET_FOURTH_ARG_(tuple) AE_GET_FOURTH_ARG tuple 
#define AE_L32X2_RIP_MACRO_CHOOSER(...) AE_GET_FOURTH_ARG_((__VA_ARGS__, AE_L32X2_RIP_2_ARGS, AE_L32X2_RIP_1_ARGS)) 
#define AE_L32X2_RIP(...) AE_L32X2_RIP_MACRO_CHOOSER(__VA_ARGS__)(__VA_ARGS__) 
#define AE_S32X2_RIP_MACRO_CHOOSER(...) AE_GET_FOURTH_ARG_((__VA_ARGS__, AE_S32X2_RIP_2_ARGS, AE_S32X2_RIP_1_ARGS)) 
#define AE_S32X2_RIP(...) AE_S32X2_RIP_MACRO_CHOOSER(__VA_ARGS__)(__VA_ARGS__) 
#define AE_S16X4_RIP_MACRO_CHOOSER(...) AE_GET_FOURTH_ARG_((__VA_ARGS__, AE_S16X4_RIP_2_ARGS, AE_S16X4_RIP_1_ARGS)) 
#define AE_S16X4_RIP(...) AE_S16X4_RIP_MACRO_CHOOSER(__VA_ARGS__)(__VA_ARGS__) 
#ifdef CSTUB_
#define AE_L32X2F24_RIP_1_ARGS(data, pointer)              CSTUB_(_TIE_xt_hifi2_AE_L32X2F24_RIP)(data, (const CSTUB_(ae_f24x2) **) &(pointer), -8) 
#define AE_L32X2F24_RIP_2_ARGS(data, pointer, size)        CSTUB_(_TIE_xt_hifi2_AE_L32X2F24_RIP)(data, (const CSTUB_(ae_f24x2) **) &(pointer), size) 
#else
#define AE_L32X2F24_RIP_1_ARGS(data, pointer)              _TIE_xt_hifi2_AE_L32X2F24_RIP(data, pointer, -8) 
#define AE_L32X2F24_RIP_2_ARGS(data, pointer, size)        _TIE_xt_hifi2_AE_L32X2F24_RIP(data, pointer, size) 
#endif
#define AE_GET_FOURTH_ARG(arg1, arg2, arg3, arg4, ...) arg4 
#define AE_GET_FOURTH_ARG_(tuple) AE_GET_FOURTH_ARG tuple 
#define AE_L32X2F24_RIP_MACRO_CHOOSER(...) AE_GET_FOURTH_ARG_((__VA_ARGS__, AE_L32X2F24_RIP_2_ARGS, AE_L32X2F24_RIP_1_ARGS)) 
#define AE_L32X2F24_RIP(...) AE_L32X2F24_RIP_MACRO_CHOOSER(__VA_ARGS__)(__VA_ARGS__) 
#ifdef CSTUB_
#define AE_L16X4_RIP_1_ARGS(data, pointer)              CSTUB_(_TIE_xt_hifi2_AE_L16X4_RIP)(data, (const CSTUB_(ae_int16x4) **) &(pointer), -8) 
#define AE_L16X4_RIP_2_ARGS(data, pointer, size)        CSTUB_(_TIE_xt_hifi2_AE_L16X4_RIP)(data, (const CSTUB_(ae_int16x4) **) &(pointer), size) 
#else
#define AE_L16X4_RIP_1_ARGS(data, pointer)              _TIE_xt_hifi2_AE_L16X4_RIP(data, pointer, -8) 
#define AE_L16X4_RIP_2_ARGS(data, pointer, size)        _TIE_xt_hifi2_AE_L16X4_RIP(data, pointer, size) 
#endif
#define AE_GET_FOURTH_ARG(arg1, arg2, arg3, arg4, ...) arg4 
#define AE_GET_FOURTH_ARG_(tuple) AE_GET_FOURTH_ARG tuple 
#define AE_L16X4_RIP_MACRO_CHOOSER(...) AE_GET_FOURTH_ARG_((__VA_ARGS__, AE_L16X4_RIP_2_ARGS, AE_L16X4_RIP_1_ARGS)) 
#define AE_L16X4_RIP(...) AE_L16X4_RIP_MACRO_CHOOSER(__VA_ARGS__)(__VA_ARGS__) 

/* Header includes end */
#endif /* !_XTENSA_xt_hifi2_HEADER */

/* parasoft-end-suppress ALL "This file not MISRA checked." */
