/* MIPS Loongson ASX intrinsics include file.

   Copyright (C) 2018 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _GCC_LOONGSON_ASXINTRIN_H
#define _GCC_LOONGSON_ASXINTRIN_H 1

#if defined(__mips_loongson_asx)

typedef signed char v32i8 __attribute__ ((vector_size(32), aligned(32)));
typedef signed char v32i8_b __attribute__ ((vector_size(32), aligned(1)));
typedef unsigned char v32u8 __attribute__ ((vector_size(32), aligned(32)));
typedef unsigned char v32u8_b __attribute__ ((vector_size(32), aligned(1)));
typedef short v16i16 __attribute__ ((vector_size(32), aligned(32)));
typedef short v16i16_h __attribute__ ((vector_size(32), aligned(2)));
typedef unsigned short v16u16 __attribute__ ((vector_size(32), aligned(32)));
typedef unsigned short v16u16_h __attribute__ ((vector_size(32), aligned(2)));
typedef int v8i32 __attribute__ ((vector_size(32), aligned(32)));
typedef int v8i32_w __attribute__ ((vector_size(32), aligned(4)));
typedef unsigned int v8u32 __attribute__ ((vector_size(32), aligned(32)));
typedef unsigned int v8u32_w __attribute__ ((vector_size(32), aligned(4)));
typedef long long v4i64 __attribute__ ((vector_size(32), aligned(32)));
typedef long long v4i64_d __attribute__ ((vector_size(32), aligned(8)));
typedef unsigned long long v4u64 __attribute__ ((vector_size(32), aligned(32)));
typedef unsigned long long v4u64_d __attribute__ ((vector_size(32), aligned(8)));
typedef float v8f32 __attribute__ ((vector_size(32), aligned(32)));
typedef float v8f32_w __attribute__ ((vector_size(32), aligned(4)));
typedef double v4f64 __attribute__ ((vector_size(32), aligned(32)));
typedef double v4f64_d __attribute__ ((vector_size(32), aligned(8)));

typedef double v4f64 __attribute__ ((vector_size(32), aligned(32)));
typedef double v4f64_d __attribute__ ((vector_size(32), aligned(8)));

typedef float __m256 __attribute__ ((__vector_size__ (32),
                                    __may_alias__));
typedef long long __m256i __attribute__ ((__vector_size__ (32),
                                         __may_alias__));
typedef double __m256d __attribute__ ((__vector_size__ (32),
                                      __may_alias__));

/* Unaligned version of the same types.  */
typedef float __m256_u __attribute__ ((__vector_size__ (32),
                                      __may_alias__,
                                      __aligned__ (1)));
typedef long long __m256i_u __attribute__ ((__vector_size__ (32),
                                           __may_alias__,
                                           __aligned__ (1)));
typedef double __m256d_u __attribute__ ((__vector_size__ (32),
                                        __may_alias__,
                                        __aligned__ (1)));


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsll_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsll_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsll_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsll_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsll_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsll_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsll_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsll_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxslli_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxslli_b((v32i8)(_1), (_2)))
#define __lasx_mxslli_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxslli_h((v16i16)(_1), (_2)))
#define __lasx_mxslli_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxslli_w((v8i32)(_1), (_2)))
#define __lasx_mxslli_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxslli_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsra_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsra_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsra_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsra_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsra_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsra_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsra_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsra_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxsrai_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrai_b((v32i8)(_1), (_2)))
#define __lasx_mxsrai_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrai_h((v16i16)(_1), (_2)))
#define __lasx_mxsrai_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrai_w((v8i32)(_1), (_2)))
#define __lasx_mxsrai_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrai_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrar_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrar_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrar_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrar_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrar_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrar_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrar_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrar_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxsrari_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrari_b((v32i8)(_1), (_2)))
#define __lasx_mxsrari_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrari_h((v16i16)(_1), (_2)))
#define __lasx_mxsrari_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrari_w((v8i32)(_1), (_2)))
#define __lasx_mxsrari_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrari_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrl_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrl_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrl_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrl_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrl_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrl_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrl_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrl_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxsrli_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrli_b((v32i8)(_1), (_2)))
#define __lasx_mxsrli_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrli_h((v16i16)(_1), (_2)))
#define __lasx_mxsrli_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrli_w((v8i32)(_1), (_2)))
#define __lasx_mxsrli_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrli_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrlr_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrlr_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrlr_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrlr_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrlr_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrlr_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsrlr_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsrlr_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxsrlri_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrlri_b((v32i8)(_1), (_2)))
#define __lasx_mxsrlri_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrlri_h((v16i16)(_1), (_2)))
#define __lasx_mxsrlri_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrlri_w((v8i32)(_1), (_2)))
#define __lasx_mxsrlri_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsrlri_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbclr_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbclr_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbclr_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbclr_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbclr_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbclr_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbclr_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbclr_d((v4u64)_1, (v4u64)_2);
}

#define __lasx_mxbclri_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbclri_b((v32u8)(_1), (_2)))
#define __lasx_mxbclri_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbclri_h((v16u16)(_1), (_2)))
#define __lasx_mxbclri_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbclri_w((v8u32)(_1), (_2)))
#define __lasx_mxbclri_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbclri_d((v4u64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbset_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbset_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbset_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbset_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbset_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbset_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbset_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbset_d((v4u64)_1, (v4u64)_2);
}

#define __lasx_mxbseti_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbseti_b((v32u8)(_1), (_2)))
#define __lasx_mxbseti_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbseti_h((v16u16)(_1), (_2)))
#define __lasx_mxbseti_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbseti_w((v8u32)(_1), (_2)))
#define __lasx_mxbseti_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbseti_d((v4u64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbneg_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbneg_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbneg_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbneg_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbneg_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbneg_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbneg_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxbneg_d((v4u64)_1, (v4u64)_2);
}

#define __lasx_mxbnegi_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbnegi_b((v32u8)(_1), (_2)))
#define __lasx_mxbnegi_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbnegi_h((v16u16)(_1), (_2)))
#define __lasx_mxbnegi_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbnegi_w((v8u32)(_1), (_2)))
#define __lasx_mxbnegi_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxbnegi_d((v4u64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbinsl_b(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxbinsl_b((v32u8)_1, (v32u8)_2, (v32u8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbinsl_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxbinsl_h((v16u16)_1, (v16u16)_2, (v16u16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbinsl_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxbinsl_w((v8u32)_1, (v8u32)_2, (v8u32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbinsl_d(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxbinsl_d((v4u64)_1, (v4u64)_2, (v4u64)_3);
}

#define __lasx_mxbinsli_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxbinsli_b((v32u8)(_1), (v32u8)(_2), (_3)))
#define __lasx_mxbinsli_h(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxbinsli_h((v16u16)(_1), (v16u16)(_2), (_3)))
#define __lasx_mxbinsli_w(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxbinsli_w((v8u32)(_1), (v8u32)(_2), (_3)))
#define __lasx_mxbinsli_d(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxbinsli_d((v4u64)(_1), (v4u64)(_2), (_3)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbinsr_b(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxbinsr_b((v32u8)_1, (v32u8)_2, (v32u8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbinsr_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxbinsr_h((v16u16)_1, (v16u16)_2, (v16u16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbinsr_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxbinsr_w((v8u32)_1, (v8u32)_2, (v8u32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbinsr_d(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxbinsr_d((v4u64)_1, (v4u64)_2, (v4u64)_3);
}

#define __lasx_mxbinsri_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxbinsri_b((v32u8)(_1), (v32u8)(_2), (_3)))
#define __lasx_mxbinsri_h(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxbinsri_h((v16u16)(_1), (v16u16)(_2), (_3)))
#define __lasx_mxbinsri_w(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxbinsri_w((v8u32)(_1), (v8u32)(_2), (_3)))
#define __lasx_mxbinsri_d(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxbinsri_d((v4u64)(_1), (v4u64)(_2), (_3)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaddv_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaddv_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaddv_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaddv_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaddv_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaddv_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaddv_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaddv_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxaddvi_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxaddvi_b((v32i8)(_1), (_2)))
#define __lasx_mxaddvi_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxaddvi_h((v16i16)(_1), (_2)))
#define __lasx_mxaddvi_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxaddvi_w((v8i32)(_1), (_2)))
#define __lasx_mxaddvi_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxaddvi_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubv_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubv_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubv_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubv_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubv_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubv_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubv_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubv_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxsubvi_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsubvi_b((v32i8)(_1), (_2)))
#define __lasx_mxsubvi_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsubvi_h((v16i16)(_1), (_2)))
#define __lasx_mxsubvi_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsubvi_w((v8i32)(_1), (_2)))
#define __lasx_mxsubvi_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsubvi_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_s_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxmaxi_s_b(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxmaxi_s_b((v32i8)(_1), (_2)))
#define __lasx_mxmaxi_s_h(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxmaxi_s_h((v16i16)(_1), (_2)))
#define __lasx_mxmaxi_s_w(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxmaxi_s_w((v8i32)(_1), (_2)))
#define __lasx_mxmaxi_s_d(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxmaxi_s_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_u_d((v4u64)_1, (v4u64)_2);
}

#define __lasx_mxmaxi_u_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxmaxi_u_b((v32u8)(_1), (_2)))
#define __lasx_mxmaxi_u_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxmaxi_u_h((v16u16)(_1), (_2)))
#define __lasx_mxmaxi_u_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxmaxi_u_w((v8u32)(_1), (_2)))
#define __lasx_mxmaxi_u_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxmaxi_u_d((v4u64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_s_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxmini_s_b(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxmini_s_b((v32i8)(_1), (_2)))
#define __lasx_mxmini_s_h(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxmini_s_h((v16i16)(_1), (_2)))
#define __lasx_mxmini_s_w(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxmini_s_w((v8i32)(_1), (_2)))
#define __lasx_mxmini_s_d(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxmini_s_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_u_d((v4u64)_1, (v4u64)_2);
}

#define __lasx_mxmini_u_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxmini_u_b((v32u8)(_1), (_2)))
#define __lasx_mxmini_u_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxmini_u_h((v16u16)(_1), (_2)))
#define __lasx_mxmini_u_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxmini_u_w((v8u32)(_1), (_2)))
#define __lasx_mxmini_u_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxmini_u_d((v4u64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_a_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_a_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_a_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_a_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_a_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_a_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmax_a_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmax_a_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_a_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_a_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_a_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_a_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_a_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_a_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmin_a_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmin_a_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxceq_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxceq_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxceq_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxceq_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxceq_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxceq_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxceq_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxceq_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxceqi_b(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxceqi_b((v32i8)(_1), (_2)))
#define __lasx_mxceqi_h(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxceqi_h((v16i16)(_1), (_2)))
#define __lasx_mxceqi_w(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxceqi_w((v8i32)(_1), (_2)))
#define __lasx_mxceqi_d(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxceqi_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxclt_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxclt_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxclt_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxclt_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxclt_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxclt_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxclt_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxclt_s_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxclti_s_b(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxclti_s_b((v32i8)(_1), (_2)))
#define __lasx_mxclti_s_h(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxclti_s_h((v16i16)(_1), (_2)))
#define __lasx_mxclti_s_w(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxclti_s_w((v8i32)(_1), (_2)))
#define __lasx_mxclti_s_d(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxclti_s_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxclt_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxclt_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxclt_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxclt_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxclt_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxclt_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxclt_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxclt_u_d((v4u64)_1, (v4u64)_2);
}

#define __lasx_mxclti_u_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxclti_u_b((v32u8)(_1), (_2)))
#define __lasx_mxclti_u_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxclti_u_h((v16u16)(_1), (_2)))
#define __lasx_mxclti_u_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxclti_u_w((v8u32)(_1), (_2)))
#define __lasx_mxclti_u_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxclti_u_d((v4u64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxcle_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxcle_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxcle_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxcle_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxcle_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxcle_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxcle_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxcle_s_d((v4i64)_1, (v4i64)_2);
}

#define __lasx_mxclei_s_b(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxclei_s_b((v32i8)(_1), (_2)))
#define __lasx_mxclei_s_h(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxclei_s_h((v16i16)(_1), (_2)))
#define __lasx_mxclei_s_w(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxclei_s_w((v8i32)(_1), (_2)))
#define __lasx_mxclei_s_d(/*__m256i*/ _1, /*signed char*/ _2)	((__m256i)__builtin_lasx_mxclei_s_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxcle_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxcle_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxcle_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxcle_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxcle_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxcle_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxcle_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxcle_u_d((v4u64)_1, (v4u64)_2);
}

#define __lasx_mxclei_u_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxclei_u_b((v32u8)(_1), (_2)))
#define __lasx_mxclei_u_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxclei_u_h((v16u16)(_1), (_2)))
#define __lasx_mxclei_u_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxclei_u_w((v8u32)(_1), (_2)))
#define __lasx_mxclei_u_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxclei_u_d((v4u64)(_1), (_2)))
#define __lasx_mxsat_s_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsat_s_b((v32i8)(_1), (_2)))
#define __lasx_mxsat_s_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsat_s_h((v16i16)(_1), (_2)))
#define __lasx_mxsat_s_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsat_s_w((v8i32)(_1), (_2)))
#define __lasx_mxsat_s_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsat_s_d((v4i64)(_1), (_2)))
#define __lasx_mxsat_u_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsat_u_b((v32u8)(_1), (_2)))
#define __lasx_mxsat_u_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsat_u_h((v16u16)(_1), (_2)))
#define __lasx_mxsat_u_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsat_u_w((v8u32)(_1), (_2)))
#define __lasx_mxsat_u_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsat_u_d((v4u64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadd_a_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadd_a_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadd_a_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadd_a_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadd_a_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadd_a_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadd_a_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadd_a_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_a_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_a_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_a_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_a_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_a_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_a_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_a_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_a_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxadds_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxadds_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxave_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxave_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxave_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxave_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxave_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxave_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxave_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxave_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxave_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxave_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxave_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxave_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxave_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxave_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxave_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxave_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaver_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaver_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaver_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaver_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaver_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaver_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaver_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaver_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaver_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaver_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaver_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaver_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaver_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaver_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxaver_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxaver_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubs_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubs_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubs_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubs_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubs_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubs_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubs_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubs_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubs_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubs_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubs_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubs_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubs_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubs_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubs_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubs_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubsuu_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubsuu_s_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubsuu_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubsuu_s_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubsuu_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubsuu_s_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubsuu_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubsuu_s_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubsus_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubsus_u_b((v32u8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubsus_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubsus_u_h((v16u16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubsus_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubsus_u_w((v8u32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsubsus_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxsubsus_u_d((v4u64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxasub_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxasub_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxasub_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxasub_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxasub_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxasub_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxasub_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxasub_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxasub_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxasub_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxasub_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxasub_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxasub_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxasub_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxasub_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxasub_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmulv_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmulv_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmulv_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmulv_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmulv_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmulv_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmulv_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmulv_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmaddv_b(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmaddv_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmaddv_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmaddv_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmaddv_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmaddv_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmaddv_d(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmaddv_d((v4i64)_1, (v4i64)_2, (v4i64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmsubv_b(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmsubv_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmsubv_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmsubv_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmsubv_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmsubv_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmsubv_d(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmsubv_d((v4i64)_1, (v4i64)_2, (v4i64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdiv_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdiv_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdiv_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdiv_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdiv_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdiv_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdiv_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdiv_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdiv_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdiv_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdiv_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdiv_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdiv_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdiv_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdiv_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdiv_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhadd_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhadd_s_h((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhadd_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhadd_s_w((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhadd_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhadd_s_d((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhadd_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhadd_u_h((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhadd_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhadd_u_w((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhadd_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhadd_u_d((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhsub_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhsub_s_h((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhsub_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhsub_s_w((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhsub_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhsub_s_d((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhsub_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhsub_u_h((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhsub_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhsub_u_w((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxhsub_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxhsub_u_d((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmod_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmod_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmod_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmod_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmod_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmod_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmod_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmod_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmod_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmod_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmod_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmod_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmod_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmod_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmod_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmod_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdotp_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdotp_s_h((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdotp_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdotp_s_w((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdotp_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdotp_s_d((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdotp_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdotp_u_h((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdotp_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdotp_u_w((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdotp_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxdotp_u_d((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpadd_s_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpadd_s_h((v16i16)_1, (v32i8)_2, (v32i8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpadd_s_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpadd_s_w((v8i32)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpadd_s_d(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpadd_s_d((v4i64)_1, (v8i32)_2, (v8i32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpadd_u_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpadd_u_h((v16u16)_1, (v32u8)_2, (v32u8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpadd_u_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpadd_u_w((v8u32)_1, (v16u16)_2, (v16u16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpadd_u_d(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpadd_u_d((v4u64)_1, (v8u32)_2, (v8u32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpsub_s_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpsub_s_h((v16i16)_1, (v32i8)_2, (v32i8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpsub_s_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpsub_s_w((v8i32)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpsub_s_d(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpsub_s_d((v4i64)_1, (v8i32)_2, (v8i32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpsub_u_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpsub_u_h((v16i16)_1, (v32u8)_2, (v32u8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpsub_u_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpsub_u_w((v8i32)_1, (v16u16)_2, (v16u16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxdpsub_u_d(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxdpsub_u_d((v4i64)_1, (v8u32)_2, (v8u32)_3);
}

#define __lasx_mxsldi_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxsldi_b((v32i8)(_1), (v32i8)(_2), (_3)))
#define __lasx_mxsldi_h(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxsldi_h((v16i16)(_1), (v16i16)(_2), (_3)))
#define __lasx_mxsldi_w(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxsldi_w((v8i32)(_1), (v8i32)(_2), (_3)))
#define __lasx_mxsldi_d(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxsldi_d((v4i64)(_1), (v4i64)(_2), (_3)))
#define __lasx_mxsplati_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsplati_b((v32i8)(_1), (_2)))
#define __lasx_mxsplati_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsplati_h((v16i16)(_1), (_2)))
#define __lasx_mxsplati_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsplati_w((v8i32)(_1), (_2)))
#define __lasx_mxsplati_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxsplati_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpckev_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxpckev_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpckev_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxpckev_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpckev_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxpckev_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpckev_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxpckev_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpckod_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxpckod_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpckod_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxpckod_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpckod_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxpckod_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpckod_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxpckod_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvl_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvl_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvl_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvl_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvl_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvl_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvl_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvl_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvr_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvr_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvr_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvr_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvr_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvr_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvr_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvr_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvev_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvev_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvev_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvev_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvev_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvev_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvev_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvev_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvod_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvod_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvod_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvod_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvod_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvod_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxilvod_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxilvod_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvshf_b(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvshf_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvshf_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvshf_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvshf_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvshf_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvshf_d(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvshf_d((v4i64)_1, (v4i64)_2, (v4i64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxand_v(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxand_v((v32u8)_1, (v32u8)_2);
}

#define __lasx_mxandi_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxandi_b((v32u8)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxor_v(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxor_v((v32u8)_1, (v32u8)_2);
}

#define __lasx_mxori_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxori_b((v32u8)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxnor_v(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxnor_v((v32u8)_1, (v32u8)_2);
}

#define __lasx_mxnori_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxnori_b((v32u8)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxxor_v(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxxor_v((v32u8)_1, (v32u8)_2);
}

#define __lasx_mxxori_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxxori_b((v32u8)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbmnz_v(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxbmnz_v((v32u8)_1, (v32u8)_2, (v32u8)_3);
}

#define __lasx_mxbmnzi_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxbmnzi_b((v32u8)(_1), (v32u8)(_2), (_3)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbmz_v(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxbmz_v((v32u8)_1, (v32u8)_2, (v32u8)_3);
}

#define __lasx_mxbmzi_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxbmzi_b((v32u8)(_1), (v32u8)(_2), (_3)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxbsel_v(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxbsel_v((v32u8)_1, (v32u8)_2, (v32u8)_3);
}

#define __lasx_mxbseli_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxbseli_b((v32u8)(_1), (v32u8)(_2), (_3)))
#define __lasx_mxshf_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxshf_b((v32i8)(_1), (_2)))
#define __lasx_mxshf_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxshf_h((v16i16)(_1), (_2)))
#define __lasx_mxshf_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxshf_w((v8i32)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxfill_b(int _1)
{
	return (__m256i)__builtin_lasx_mxfill_b (_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxfill_h(int _1)
{
	return (__m256i)__builtin_lasx_mxfill_h (_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxfill_w(int _1)
{
	return (__m256i)__builtin_lasx_mxfill_w (_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxfill_d(long int _1)
{
	return (__m256i)__builtin_lasx_mxfill_d (_1);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpcnt_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxpcnt_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpcnt_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxpcnt_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpcnt_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxpcnt_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxpcnt_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxpcnt_d((v4i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxnloc_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxnloc_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxnloc_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxnloc_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxnloc_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxnloc_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxnloc_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxnloc_d((v4i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxnlzc_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxnlzc_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxnlzc_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxnlzc_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxnlzc_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxnlzc_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxnlzc_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxnlzc_d((v4i64)_1);
}

#define __lasx_mxinsve_b(/*__m256i*/ _1, /*unsigned char*/ _2, /*__m256i*/ _3)	((__m256i)__builtin_lasx_mxinsve_b((v32i8)(_1), (_2), (v32i8)(_3)))
#define __lasx_mxinsve_h(/*__m256i*/ _1, /*unsigned char*/ _2, /*__m256i*/ _3)	((__m256i)__builtin_lasx_mxinsve_h((v16i16)(_1), (_2), (v16i16)(_3)))
#define __lasx_mxinsve_w(/*__m256i*/ _1, /*unsigned char*/ _2, /*__m256i*/ _3)	((__m256i)__builtin_lasx_mxinsve_w((v8i32)(_1), (_2), (v8i32)(_3)))
#define __lasx_mxinsve_d(/*__m256i*/ _1, /*unsigned char*/ _2, /*__m256i*/ _3)	((__m256i)__builtin_lasx_mxinsve_d((v4i64)(_1), (_2), (v4i64)(_3)))
#define __lasx_mxldi_b(/*short int*/ _1)	((__m256i)__builtin_lasx_mxldi_b((_1)))
#define __lasx_mxldi_h(/*short int*/ _1)	((__m256i)__builtin_lasx_mxldi_h((_1)))
#define __lasx_mxldi_w(/*short int*/ _1)	((__m256i)__builtin_lasx_mxldi_w((_1)))
#define __lasx_mxldi_d(/*short int*/ _1)	((__m256i)__builtin_lasx_mxldi_d((_1)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcaf_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfcaf_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcaf_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfcaf_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcor_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfcor_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcor_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfcor_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcun_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfcun_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcun_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfcun_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcune_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfcune_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcune_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfcune_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcueq_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfcueq_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcueq_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfcueq_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfceq_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfceq_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfceq_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfceq_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcne_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfcne_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcne_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfcne_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfclt_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfclt_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfclt_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfclt_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcult_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfcult_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcult_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfcult_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcle_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfcle_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcle_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfcle_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcule_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfcule_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfcule_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfcule_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsaf_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfsaf_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsaf_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfsaf_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsor_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfsor_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsor_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfsor_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsun_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfsun_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsun_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfsun_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsune_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfsune_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsune_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfsune_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsueq_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfsueq_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsueq_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfsueq_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfseq_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfseq_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfseq_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfseq_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsne_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfsne_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsne_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfsne_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfslt_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfslt_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfslt_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfslt_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsult_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfsult_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsult_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfsult_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsle_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfsle_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsle_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfsle_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsule_w(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfsule_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfsule_d(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xfsule_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfadd_w(__m256 _1, __m256 _2)
{
	return (__m256)__builtin_lasx_xfadd_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfadd_d(__m256d _1, __m256d _2)
{
	return (__m256d)__builtin_lasx_xfadd_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfsub_w(__m256 _1, __m256 _2)
{
	return (__m256)__builtin_lasx_xfsub_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfsub_d(__m256d _1, __m256d _2)
{
	return (__m256d)__builtin_lasx_xfsub_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfmul_w(__m256 _1, __m256 _2)
{
	return (__m256)__builtin_lasx_xfmul_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfmul_d(__m256d _1, __m256d _2)
{
	return (__m256d)__builtin_lasx_xfmul_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfdiv_w(__m256 _1, __m256 _2)
{
	return (__m256)__builtin_lasx_xfdiv_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfdiv_d(__m256d _1, __m256d _2)
{
	return (__m256d)__builtin_lasx_xfdiv_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfmadd_w(__m256 _1, __m256 _2, __m256 _3)
{
	return (__m256)__builtin_lasx_xfmadd_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfmadd_d(__m256d _1, __m256d _2, __m256d _3)
{
	return (__m256d)__builtin_lasx_xfmadd_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfmsub_w(__m256 _1, __m256 _2, __m256 _3)
{
	return (__m256)__builtin_lasx_xfmsub_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfmsub_d(__m256d _1, __m256d _2, __m256d _3)
{
	return (__m256d)__builtin_lasx_xfmsub_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfexp2_w(__m256 _1, __m256i _2)
{
	return (__m256)__builtin_lasx_xfexp2_w((v8f32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfexp2_d(__m256d _1, __m256i _2)
{
	return (__m256d)__builtin_lasx_xfexp2_d((v4f64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfexdo_h(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xfexdo_h((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfexdo_w(__m256d _1, __m256d _2)
{
	return (__m256)__builtin_lasx_xfexdo_w((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xftq_h(__m256 _1, __m256 _2)
{
	return (__m256i)__builtin_lasx_xftq_h((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xftq_w(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xftq_w((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfmin_w(__m256 _1, __m256 _2)
{
	return (__m256)__builtin_lasx_xfmin_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfmin_d(__m256d _1, __m256d _2)
{
	return (__m256d)__builtin_lasx_xfmin_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfmin_a_w(__m256 _1, __m256 _2)
{
	return (__m256)__builtin_lasx_xfmin_a_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfmin_a_d(__m256d _1, __m256d _2)
{
	return (__m256d)__builtin_lasx_xfmin_a_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfmax_w(__m256 _1, __m256 _2)
{
	return (__m256)__builtin_lasx_xfmax_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfmax_d(__m256d _1, __m256d _2)
{
	return (__m256d)__builtin_lasx_xfmax_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfmax_a_w(__m256 _1, __m256 _2)
{
	return (__m256)__builtin_lasx_xfmax_a_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfmax_a_d(__m256d _1, __m256d _2)
{
	return (__m256d)__builtin_lasx_xfmax_a_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmul_q_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmul_q_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmul_q_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmul_q_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmulr_q_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmulr_q_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmulr_q_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxmulr_q_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmadd_q_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmadd_q_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmadd_q_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmadd_q_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmaddr_q_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmaddr_q_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmaddr_q_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmaddr_q_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmsub_q_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmsub_q_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmsub_q_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmsub_q_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmsubr_q_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmsubr_q_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmsubr_q_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxmsubr_q_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfclass_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xfclass_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xfclass_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xfclass_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfsqrt_w(__m256 _1)
{
	return (__m256)__builtin_lasx_xfsqrt_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfsqrt_d(__m256d _1)
{
	return (__m256d)__builtin_lasx_xfsqrt_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfrcp_w(__m256 _1)
{
	return (__m256)__builtin_lasx_xfrcp_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfrcp_d(__m256d _1)
{
	return (__m256d)__builtin_lasx_xfrcp_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfrint_w(__m256 _1)
{
	return (__m256)__builtin_lasx_xfrint_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfrint_d(__m256d _1)
{
	return (__m256d)__builtin_lasx_xfrint_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfrsqrt_w(__m256 _1)
{
	return (__m256)__builtin_lasx_xfrsqrt_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfrsqrt_d(__m256d _1)
{
	return (__m256d)__builtin_lasx_xfrsqrt_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xflog2_w(__m256 _1)
{
	return (__m256)__builtin_lasx_xflog2_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xflog2_d(__m256d _1)
{
	return (__m256d)__builtin_lasx_xflog2_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfexupl_w(__m256i _1)
{
	return (__m256)__builtin_lasx_xfexupl_w((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfexupl_d(__m256 _1)
{
	return (__m256d)__builtin_lasx_xfexupl_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xfexupr_w(__m256i _1)
{
	return (__m256)__builtin_lasx_xfexupr_w((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xfexupr_d(__m256 _1)
{
	return (__m256d)__builtin_lasx_xfexupr_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xffql_w(__m256i _1)
{
	return (__m256)__builtin_lasx_xffql_w((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xffql_d(__m256i _1)
{
	return (__m256d)__builtin_lasx_xffql_d((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xffqr_w(__m256i _1)
{
	return (__m256)__builtin_lasx_xffqr_w((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xffqr_d(__m256i _1)
{
	return (__m256d)__builtin_lasx_xffqr_d((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xftint_s_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xftint_s_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xftint_s_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xftint_s_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xftint_u_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xftint_u_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xftint_u_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xftint_u_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xftrunc_s_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xftrunc_s_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xftrunc_s_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xftrunc_s_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xftrunc_u_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xftrunc_u_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xftrunc_u_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xftrunc_u_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xffint_s_w(__m256i _1)
{
	return (__m256)__builtin_lasx_xffint_s_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xffint_s_d(__m256i _1)
{
	return (__m256d)__builtin_lasx_xffint_s_d((v4i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xffint_u_w(__m256i _1)
{
	return (__m256)__builtin_lasx_xffint_u_w((v8u32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xffint_u_d(__m256i _1)
{
	return (__m256d)__builtin_lasx_xffint_u_d((v4u64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmove_v(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxmove_v((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvandn_v(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvandn_v((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvabs_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvabs_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvabs_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvabs_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvabs_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvabs_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvabs_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvabs_d((v4i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvneg_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvneg_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvneg_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvneg_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvneg_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvneg_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvneg_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvneg_d((v4i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddx_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddx_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddx_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddx_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddx_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddx_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddx_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddx_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddx_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddx_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddx_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddx_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubx_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubx_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubx_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubx_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubx_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubx_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubx_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubx_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubx_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubx_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubx_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubx_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddxs_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddxs_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddxs_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddxs_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddxs_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddxs_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddxs_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddxs_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddxs_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddxs_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvaddxs_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvaddxs_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubxs_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubxs_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubxs_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubxs_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubxs_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubxs_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubxs_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubxs_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubxs_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubxs_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubxs_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubxs_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubh_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubh_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubh_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubh_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubh_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubh_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubh_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubh_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubh_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubh_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubh_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubh_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubh_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubh_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsubh_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsubh_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvacc4b_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvacc4b_u_h((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvacc8b_u_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvacc8b_u_d((v32u8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulhi_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulhi_s_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulhi_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulhi_s_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulhi_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulhi_s_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulhi_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulhi_s_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulhi_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulhi_u_d((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulhi_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulhi_u_w((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulhi_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulhi_u_h((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulhi_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulhi_u_b((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulx_s_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulx_s_d((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulx_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulx_s_w((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulx_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulx_s_h((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulx_u_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulx_u_d((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulx_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulx_u_w((v16u16)_1, (v16u16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulx_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulx_u_h((v32u8)_1, (v32u8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvextb_s_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvextb_s_d((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvextb_s_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvextb_s_w((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvextb_s_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvextb_s_h((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvexth_s_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvexth_s_d((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvexth_s_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvexth_s_w((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvextw_s_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvextw_s_d((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvextb_u_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvextb_u_d((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvextb_u_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvextb_u_w((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvextb_u_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvextb_u_h((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvexth_u_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvexth_u_d((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvexth_u_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvexth_u_w((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvextw_u_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvextw_u_d((v8i32)_1);
}

#define __lasx_mxvsllix_s_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsllix_s_d((v8i32)(_1), (_2)))
#define __lasx_mxvsllix_s_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsllix_s_w((v16i16)(_1), (_2)))
#define __lasx_mxvsllix_s_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsllix_s_h((v32i8)(_1), (_2)))
#define __lasx_mxvsllix_u_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsllix_u_d((v8u32)(_1), (_2)))
#define __lasx_mxvsllix_u_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsllix_u_w((v16u16)(_1), (_2)))
#define __lasx_mxvsllix_u_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsllix_u_h((v32u8)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsran_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsran_w((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsran_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsran_h((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsran_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsran_b((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrans_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrans_s_w((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrans_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrans_s_h((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrans_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrans_s_b((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrans_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrans_u_w((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrans_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrans_u_h((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrans_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrans_u_b((v16u16)_1, (v16u16)_2);
}

#define __lasx_mxvsrain_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrain_w((v4i64)(_1), (_2)))
#define __lasx_mxvsrain_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrain_h((v8i32)(_1), (_2)))
#define __lasx_mxvsrain_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrain_b((v16i16)(_1), (_2)))
#define __lasx_mxvsrains_s_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrains_s_w((v4i64)(_1), (_2)))
#define __lasx_mxvsrains_s_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrains_s_h((v8i32)(_1), (_2)))
#define __lasx_mxvsrains_s_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrains_s_b((v16i16)(_1), (_2)))
#define __lasx_mxvsrains_u_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrains_u_w((v4u64)(_1), (_2)))
#define __lasx_mxvsrains_u_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrains_u_h((v8u32)(_1), (_2)))
#define __lasx_mxvsrains_u_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrains_u_b((v16u16)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrarn_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrarn_w((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrarn_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrarn_h((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrarn_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrarn_b((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrarns_s_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrarns_s_w((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrarns_s_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrarns_s_h((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrarns_s_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrarns_s_b((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrarns_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrarns_u_w((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrarns_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrarns_u_h((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrarns_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrarns_u_b((v16u16)_1, (v16u16)_2);
}

#define __lasx_mxvsrarin_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrarin_w((v4i64)(_1), (_2)))
#define __lasx_mxvsrarin_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrarin_h((v8i32)(_1), (_2)))
#define __lasx_mxvsrarin_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrarin_b((v16i16)(_1), (_2)))
#define __lasx_mxvsrarins_s_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrarins_s_w((v4i64)(_1), (_2)))
#define __lasx_mxvsrarins_s_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrarins_s_h((v8i32)(_1), (_2)))
#define __lasx_mxvsrarins_s_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrarins_s_b((v16i16)(_1), (_2)))
#define __lasx_mxvsrarins_u_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrarins_u_w((v4u64)(_1), (_2)))
#define __lasx_mxvsrarins_u_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrarins_u_h((v8u32)(_1), (_2)))
#define __lasx_mxvsrarins_u_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrarins_u_b((v16u16)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrln_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrln_w((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrln_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrln_h((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrln_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrln_b((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrlns_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrlns_u_w((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrlns_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrlns_u_h((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrlns_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrlns_u_b((v16u16)_1, (v16u16)_2);
}

#define __lasx_mxvsrlin_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlin_w((v4i64)(_1), (_2)))
#define __lasx_mxvsrlin_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlin_h((v8i32)(_1), (_2)))
#define __lasx_mxvsrlin_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlin_b((v16i16)(_1), (_2)))
#define __lasx_mxvsrlins_u_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlins_u_w((v4u64)(_1), (_2)))
#define __lasx_mxvsrlins_u_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlins_u_h((v8u32)(_1), (_2)))
#define __lasx_mxvsrlins_u_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlins_u_b((v16u16)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrlrn_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrlrn_w((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrlrn_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrlrn_h((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrlrn_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrlrn_b((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrlrns_u_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrlrns_u_w((v4u64)_1, (v4u64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrlrns_u_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrlrns_u_h((v8u32)_1, (v8u32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsrlrns_u_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsrlrns_u_b((v16u16)_1, (v16u16)_2);
}

#define __lasx_mxvsrlrin_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlrin_w((v4i64)(_1), (_2)))
#define __lasx_mxvsrlrin_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlrin_h((v8i32)(_1), (_2)))
#define __lasx_mxvsrlrin_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlrin_b((v16i16)(_1), (_2)))
#define __lasx_mxvsrlrins_u_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlrins_u_w((v4u64)(_1), (_2)))
#define __lasx_mxvsrlrins_u_h(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlrins_u_h((v8u32)(_1), (_2)))
#define __lasx_mxvsrlrins_u_b(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvsrlrins_u_b((v16u16)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvhminposh_u_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvhminposh_u_d((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvhminposh_u_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvhminposh_u_w((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvhminposh_u_q(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvhminposh_u_q((v16i16)_1);
}

#define __lasx_mxvrorsigni_h(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxvrorsigni_h((v16i16)(_1), (v16i16)(_2), (_3)))
#define __lasx_mxvrorsigni_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxvrorsigni_b((v32i8)(_1), (v32i8)(_2), (_3)))
#define __lasx_mxvrandsigni_h(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxvrandsigni_h((v16i16)(_1), (v16i16)(_2), (_3)))
#define __lasx_mxvrandsigni_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxvrandsigni_b((v32i8)(_1), (v32i8)(_2), (_3)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvrorsignv_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvrorsignv_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvrorsignv_b(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvrorsignv_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvrandsignv_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvrandsignv_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvrandsignv_b(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvrandsignv_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
}

#define __lasx_mxvfrstii_h(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxvfrstii_h((v16i16)(_1), (v16i16)(_2), (_3)))
#define __lasx_mxvfrstii_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxvfrstii_b((v32i8)(_1), (v32i8)(_2), (_3)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvfrstiv_h(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvfrstiv_h((v16i16)_1, (v16i16)_2, (v16i16)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvfrstiv_b(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvfrstiv_b((v32i8)_1, (v32i8)_2, (v32i8)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvfrstm_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvfrstm_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvfrstm_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvfrstm_b((v32i8)_1);
}

#define __lasx_mxvclrstri_v(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvclrstri_v((v32i8)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvclrstrv_v(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvclrstrv_v((v32i8)_1, (v32i8)_2);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvclrstrr_v(__m256i _1, long int _2)
{
	return (__m256i)__builtin_lasx_mxvclrstrr_v((v32i8)_1, _2);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvclrtail_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvclrtail_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvclrtail_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvclrtail_b((v32i8)_1);
}

#define __lasx_mxshf_d(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_mxshf_d((v4i64)(_1), (v4i64)(_2), (_3)))
#define __lasx_mxvshufirr_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_mxvshufirr_b((v32i8)(_1), (v32i8)(_2), (_3)))
#define __lasx_mxvshufirl_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_mxvshufirl_b((v32i8)(_1), (v32i8)(_2), (_3)))
#define __lasx_mxvshufilr_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_mxvshufilr_b((v32i8)(_1), (v32i8)(_2), (_3)))
#define __lasx_mxvshufill_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_mxvshufill_b((v32i8)(_1), (v32i8)(_2), (_3)))
#define __lasx_mxvshufir_h(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_mxvshufir_h((v16i16)(_1), (v16i16)(_2), (_3)))
#define __lasx_mxvshufil_h(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_mxvshufil_h((v16i16)(_1), (v16i16)(_2), (_3)))
#define __lasx_mxvmepatmsk_v(/*unsigned char*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvmepatmsk_v((_1), (_2)))
#define __lasx_mxvbsrl_v(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvbsrl_v((v32i8)(_1), (_2)))
#define __lasx_mxvbsll_v(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_mxvbsll_v((v32i8)(_1), (_2)))
#define __lasx_mxvextrins_d(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3, /*unsigned char*/ _4)	((__m256i)__builtin_lasx_mxvextrins_d((v4i64)(_1), (v4i64)(_2), (_3), (_4)))
#define __lasx_mxvextrins_w(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3, /*unsigned char*/ _4)	((__m256i)__builtin_lasx_mxvextrins_w((v8i32)(_1), (v8i32)(_2), (_3), (_4)))
#define __lasx_mxvextrins_h(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3, /*unsigned char*/ _4)	((__m256i)__builtin_lasx_mxvextrins_h((v16i16)(_1), (v16i16)(_2), (_3), (_4)))
#define __lasx_mxvextrins_b(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3, /*unsigned char*/ _4)	((__m256i)__builtin_lasx_mxvextrins_b((v32i8)(_1), (v32i8)(_2), (_3), (_4)))
#define __lasx_mxvextr_v(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_mxvextr_v((v32i8)(_1), (v32i8)(_2), (_3)))
#define __lasx_mxvsel_d(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_mxvsel_d((v4i64)(_1), (v4i64)(_2), (_3)))
#define __lasx_mxvsel_w(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_mxvsel_w((v8i32)(_1), (v8i32)(_2), (_3)))
#define __lasx_mxvsel_h(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_mxvsel_h((v16i16)(_1), (v16i16)(_2), (_3)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvgetsign_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvgetsign_d((v4i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvgetsign_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvgetsign_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvgetsign_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvgetsign_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvgetsign_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvgetsign_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsignfill_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvsignfill_d((v4i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsignfill_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvsignfill_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsignfill_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvsignfill_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsignfill_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_mxvsignfill_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsigncov_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsigncov_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsigncov_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsigncov_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsigncov_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsigncov_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsigncov_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvsigncov_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xvfabs_w(__m256 _1)
{
	return (__m256)__builtin_lasx_xvfabs_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvfabs_d(__m256d _1)
{
	return (__m256d)__builtin_lasx_xvfabs_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xvfneg_w(__m256 _1)
{
	return (__m256)__builtin_lasx_xvfneg_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvfneg_d(__m256d _1)
{
	return (__m256d)__builtin_lasx_xvfneg_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvfaddsub_d(__m256d _1, __m256d _2)
{
	return (__m256d)__builtin_lasx_xvfaddsub_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xvfaddsub_w(__m256 _1, __m256 _2)
{
	return (__m256)__builtin_lasx_xvfaddsub_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvfmadd_d(__m256d _1, __m256d _2, __m256d _3)
{
	return (__m256d)__builtin_lasx_xvfmadd_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xvfmadd_w(__m256 _1, __m256 _2, __m256 _3)
{
	return (__m256)__builtin_lasx_xvfmadd_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvfmsub_d(__m256d _1, __m256d _2, __m256d _3)
{
	return (__m256d)__builtin_lasx_xvfmsub_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xvfmsub_w(__m256 _1, __m256 _2, __m256 _3)
{
	return (__m256)__builtin_lasx_xvfmsub_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvfnmadd_d(__m256d _1, __m256d _2, __m256d _3)
{
	return (__m256d)__builtin_lasx_xvfnmadd_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xvfnmadd_w(__m256 _1, __m256 _2, __m256 _3)
{
	return (__m256)__builtin_lasx_xvfnmadd_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvfnmsub_d(__m256d _1, __m256d _2, __m256d _3)
{
	return (__m256d)__builtin_lasx_xvfnmsub_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xvfnmsub_w(__m256 _1, __m256 _2, __m256 _3)
{
	return (__m256)__builtin_lasx_xvfnmsub_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvfsubadd_d(__m256d _1, __m256d _2)
{
	return (__m256d)__builtin_lasx_xvfsubadd_d((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xvfsubadd_w(__m256 _1, __m256 _2)
{
	return (__m256)__builtin_lasx_xvfsubadd_w((v8f32)_1, (v8f32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvfmaddsub_d(__m256d _1, __m256d _2, __m256d _3)
{
	return (__m256d)__builtin_lasx_xvfmaddsub_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xvfmaddsub_w(__m256 _1, __m256 _2, __m256 _3)
{
	return (__m256)__builtin_lasx_xvfmaddsub_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvfmsubadd_d(__m256d _1, __m256d _2, __m256d _3)
{
	return (__m256d)__builtin_lasx_xvfmsubadd_d((v4f64)_1, (v4f64)_2, (v4f64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xvfmsubadd_w(__m256 _1, __m256 _2, __m256 _3)
{
	return (__m256)__builtin_lasx_xvfmsubadd_w((v8f32)_1, (v8f32)_2, (v8f32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfround_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvfround_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfround_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xvfround_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfceil_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvfceil_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfceil_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xvfceil_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvffloor_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvffloor_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvffloor_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xvffloor_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvftintdo_w(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xvftintdo_w((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256 __lasx_xvffintdo_w(__m256i _1, __m256i _2)
{
	return (__m256)__builtin_lasx_xvffintdo_w((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvftruncdo_w(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xvftruncdo_w((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfceildo_w(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xvfceildo_w((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvffloordo_w(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xvffloordo_w((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfrounddo_w(__m256d _1, __m256d _2)
{
	return (__m256i)__builtin_lasx_xvfrounddo_w((v4f64)_1, (v4f64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvftintupl_d(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvftintupl_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvftintupr_d(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvftintupr_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvffintupl_d(__m256i _1)
{
	return (__m256d)__builtin_lasx_xvffintupl_d((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256d __lasx_xvffintupr_d(__m256i _1)
{
	return (__m256d)__builtin_lasx_xvffintupr_d((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvftruncupl_d(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvftruncupl_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvftruncupr_d(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvftruncupr_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfceilupl_d(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvfceilupl_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfceilupr_d(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvfceilupr_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvffloorupl_d(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvffloorupl_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvffloorupr_d(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvffloorupr_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfroundupl_d(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvfroundupl_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfroundupr_d(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvfroundupr_d((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfrint_rm00_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvfrint_rm00_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfrint_rm00_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xvfrint_rm00_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfrint_rm01_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvfrint_rm01_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfrint_rm01_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xvfrint_rm01_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfrint_rm10_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvfrint_rm10_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfrint_rm10_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xvfrint_rm10_d((v4f64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfrint_rm11_w(__m256 _1)
{
	return (__m256i)__builtin_lasx_xvfrint_rm11_w((v8f32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvfrint_rm11_d(__m256d _1)
{
	return (__m256i)__builtin_lasx_xvfrint_rm11_d((v4f64)_1);
}

#define __lasx_mxvseti_d(/*unsigned char*/ _1, /*unsigned int*/ _2)	((__m256i)__builtin_lasx_mxvseti_d((_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulhi_us_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulhi_us_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulhi_us_h(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulhi_us_h((v16i16)_1, (v16i16)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulhi_us_b(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvmulhi_us_b((v32i8)_1, (v32i8)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvselr_d(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvselr_d((v4i64)_1, (v4i64)_2, (v4i64)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvselr_w(__m256i _1, __m256i _2, __m256i _3)
{
	return (__m256i)__builtin_lasx_mxvselr_w((v8i32)_1, (v8i32)_2, (v8i32)_3);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvperml_d(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvperml_d((v4i64)_1, (v4i64)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvperml_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_mxvperml_w((v8i32)_1, (v8i32)_2);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xxor_v(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_xxor_v((v32i8)_1, (v32i8)_2);
}

#define __lasx_xcopy_s_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((int)__builtin_lasx_xcopy_s_w((v8i32)(_1), (_2)))
#define __lasx_xcopy_u_w(/*__m256i*/ _1, /*unsigned char*/ _2)	((int)__builtin_lasx_xcopy_u_w((v8i32)(_1), (_2)))
#define __lasx_xcopy_s_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((long int)__builtin_lasx_xcopy_s_d((v4i64)(_1), (_2)))
#define __lasx_xinsert_w(/*__m256i*/ _1, /*unsigned char*/ _2, /*int*/ _3)	((__m256i)__builtin_lasx_xinsert_w((v8i32)(_1), (_2), (_3)))
#define __lasx_xinsert_d(/*__m256i*/ _1, /*unsigned char*/ _2, /*long int*/ _3)	((__m256i)__builtin_lasx_xinsert_d((v4i64)(_1), (_2), (_3)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvbroadcast_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_xvbroadcast_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvbroadcast_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_xvbroadcast_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvbroadcast_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_xvbroadcast_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvbroadcast_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_xvbroadcast_d((v4i64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xvbroadcast_q(__m256i _1)
{
	return (__m256i)__builtin_lasx_xvbroadcast_q((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw2x_u_lo_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw2x_u_lo_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw2x_u_lo_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw2x_u_lo_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw2x_u_lo_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw2x_u_lo_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw4x_u_lo_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw4x_u_lo_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw4x_u_lo_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw4x_u_lo_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw8x_u_lo_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw8x_u_lo_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw2x_s_lo_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw2x_s_lo_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw2x_s_lo_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw2x_s_lo_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw2x_s_lo_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw2x_s_lo_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw4x_s_lo_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw4x_s_lo_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw4x_s_lo_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw4x_s_lo_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xw8x_s_lo_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_xw8x_s_lo_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xgetsign_b(__m256i _1)
{
	return (__m256i)__builtin_lasx_xgetsign_b((v32i8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xgetsign_h(__m256i _1)
{
	return (__m256i)__builtin_lasx_xgetsign_h((v16i16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xgetsign_w(__m256i _1)
{
	return (__m256i)__builtin_lasx_xgetsign_w((v8i32)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xgetsign_d(__m256i _1)
{
	return (__m256i)__builtin_lasx_xgetsign_d((v4i64)_1);
}

#define __lasx_xvshufi_q(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_xvshufi_q((v32i8)(_1), (v32i8)(_2), (_3)))
#define __lasx_xshufi_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_xshufi_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_xshuf_w(__m256i _1, __m256i _2)
{
	return (__m256i)__builtin_lasx_xshuf_w((v8i32)_1, (v8i32)_2);
}

#define __lasx_xvextract_q(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_xvextract_q((v32i8)(_1), (_2)))
#define __lasx_xvinsert_q(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned char*/ _3)	((__m256i)__builtin_lasx_xvinsert_q((v32i8)(_1), (v32i8)(_2), (_3)))
#define __lasx_xvseli_w(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_xvseli_w((v8i32)(_1), (v8i32)(_2), (_3)))
#define __lasx_xvseli_d(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_xvseli_d((v4i64)(_1), (v4i64)(_2), (_3)))
#define __lasx_xvsel128i_w(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_xvsel128i_w((v8i32)(_1), (v8i32)(_2), (_3)))
#define __lasx_xvsel128i_d(/*__m256i*/ _1, /*__m256i*/ _2, /*unsigned int*/ _3)	((__m256i)__builtin_lasx_xvsel128i_d((v4i64)(_1), (v4i64)(_2), (_3)))
#define __lasx_xvpermi_d(/*__m256i*/ _1, /*unsigned char*/ _2)	((__m256i)__builtin_lasx_xvpermi_d((v4i64)(_1), (_2)))

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
int __lasx_xbz_v(__m256i _1)
{
	return __builtin_lasx_xbz_v((v32u8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
int __lasx_xbz_b(__m256i _1)
{
	return __builtin_lasx_xbz_b((v32u8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
int __lasx_xbz_h(__m256i _1)
{
	return __builtin_lasx_xbz_h((v16u16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
int __lasx_xbz_w(__m256i _1)
{
	return __builtin_lasx_xbz_w((v8u32)_1);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
int __lasx_xbz_d(__m256i _1)
{
	return __builtin_lasx_xbz_d((v4u64)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
int __lasx_xbnz_v(__m256i _1)
{
	return __builtin_lasx_xbnz_v((v32u8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
int __lasx_xbnz_b(__m256i _1)
{
	return __builtin_lasx_xbnz_b((v32u8)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
int __lasx_xbnz_h(__m256i _1)
{
	return __builtin_lasx_xbnz_h((v16u16)_1);
}


extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
int __lasx_xbnz_w(__m256i _1)
{
	return __builtin_lasx_xbnz_w((v8u32)_1);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
int __lasx_xbnz_d(__m256i _1)
{
	return __builtin_lasx_xbnz_d((v4u64)_1);
}

#define __lasx_xvld_b(/*int*/ _1, /*const volatile void **/ _2)	((__m256i)__builtin_lasx_xvld_b((_1), (_2)))
#define __lasx_xvblb(/*int*/ _1, /*const volatile void **/ _2)	((__m256i)__builtin_lasx_xvblb((_1), (_2)))
#define __lasx_xvblh(/*int*/ _1, /*const volatile void **/ _2)	((__m256i)__builtin_lasx_xvblh((_1), (_2)))
#define __lasx_xvblw(/*int*/ _1, /*const volatile void **/ _2)	((__m256i)__builtin_lasx_xvblw((_1), (_2)))
#define __lasx_xvbld(/*int*/ _1, /*const volatile void **/ _2)	((__m256i)__builtin_lasx_xvbld((_1), (_2)))
#define __lasx_xvsb(/*__m256i*/ _1, /*unsigned char*/ _2, /*int*/ _3, /*const volatile void **/ _4)	((void)__builtin_lasx_xvsb((v32i8)(_1), (_2), (_3), (_4)))
#define __lasx_xvsh(/*__m256i*/ _1, /*unsigned char*/ _2, /*int*/ _3, /*const volatile void **/ _4)	((void)__builtin_lasx_xvsh((v16i16)(_1), (_2), (_3), (_4)))
#define __lasx_xvsw(/*__m256i*/ _1, /*unsigned char*/ _2, /*int*/ _3, /*const volatile void **/ _4)	((void)__builtin_lasx_xvsw((v8i32)(_1), (_2), (_3), (_4)))
#define __lasx_xvsd(/*__m256i*/ _1, /*unsigned char*/ _2, /*int*/ _3, /*const volatile void **/ _4)	((void)__builtin_lasx_xvsd((v4i64)(_1), (_2), (_3), (_4)))
#define __lasx_xvst_b(/*__m256i*/ _1, /*int*/ _2, /*const volatile void **/ _3)	((void)__builtin_lasx_xvst_b((v32i8)(_1), (_2), (_3)))

// lasx extend MSA2.0
extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxbsel (__m256i a, __m256i b, __m256i c)
{
  return (__m256i) __builtin_lasx_mxbsel ((v32i8) a, (v32i8) b, (v32i8) c);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdotp_s_q (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdotp_s_q ((v4i64) a, (v4i64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdotp_u_q (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdotp_u_q ((v4u64) a, (v4u64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdotp_us_h (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdotp_us_h ((v32u8) a, (v32i8) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdotp_us_w (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdotp_us_w ((v16u16) a, (v16i16) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdotp_us_d (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdotp_us_d ((v8u32) a, (v8i32) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdotp_us_q (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdotp_us_q ((v4u64) a, (v4i64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdpadd_s_q (__m256i ret, __m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdpadd_s_q ((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdpadd_u_q (__m256i ret, __m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdpadd_u_q ((v4u64) ret, (v4u64) a, (v4u64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdpadd_us_h (__m256i ret, __m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdpadd_us_h ((v16u16) ret, (v32u8) a, (v32i8) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdpadd_us_w (__m256i ret, __m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdpadd_us_w ((v8u32) ret, (v16u16) a, (v16i16) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdpadd_us_d (__m256i ret, __m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdpadd_us_d ((v4u64) ret, (v8u32) a, (v8i32) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdpadd_us_q (__m256i ret, __m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdpadd_us_q ((v4u64) ret, (v4u64) a, (v4i64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdpsub_s_q (__m256i ret, __m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdpsub_s_q ((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxdpsub_u_q (__m256i ret, __m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxdpsub_u_q ((v4u64) ret, (v4u64) a, (v4u64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxhadd_s_q (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxhadd_s_q ((v4i64) a, (v4i64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxhadd_u_q (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxhadd_u_q ((v4u64) a, (v4u64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxhsub_s_q (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxhsub_s_q ((v4i64) a, (v4i64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxhsub_u_q (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxhsub_u_q ((v4u64) a, (v4u64) b);
}

#define __lasx_mxn2x_sx_sc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_sc_b ((v32i8) a, m);

#define __lasx_mxn2x_sx_sc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_sc_h ((v16i16) a, m);

#define __lasx_mxn2x_sx_sc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_sc_w ((v8i32) a, m);

#define __lasx_mxn2x_sx_sc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_sc_d ((v4i64) a, m);

#define __lasx_mxn2x_sx_uc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_uc_b ((v32i8) a, m);

#define __lasx_mxn2x_sx_uc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_uc_h ((v16i16) a, m);

#define __lasx_mxn2x_sx_uc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_uc_w ((v8i32) a, m);

#define __lasx_mxn2x_sx_uc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_uc_d ((v4i64) a, m);

#define __lasx_mxn2x_sx_nc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_nc_b ((v32i8) a, m);

#define __lasx_mxn2x_sx_nc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_nc_h ((v16i16) a, m);

#define __lasx_mxn2x_sx_nc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_nc_w ((v8i32) a, m);

#define __lasx_mxn2x_sx_nc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_sx_nc_d ((v4i64) a, m);

#define __lasx_mxn2x_ux_sc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_sc_b ((v32i8) a, m);

#define __lasx_mxn2x_ux_sc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_sc_h ((v16i16) a, m);

#define __lasx_mxn2x_ux_sc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_sc_w ((v8i32) a, m);

#define __lasx_mxn2x_ux_sc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_sc_d ((v4i64) a, m);

#define __lasx_mxn2x_ux_uc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_uc_b ((v32i8) a, m);

#define __lasx_mxn2x_ux_uc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_uc_h ((v16i16) a, m);

#define __lasx_mxn2x_ux_uc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_uc_w ((v8i32) a, m);

#define __lasx_mxn2x_ux_uc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_uc_d ((v4i64) a, m);

#define __lasx_mxn2x_ux_nc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_nc_b ((v32i8) a, m);

#define __lasx_mxn2x_ux_nc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_nc_h ((v16i16) a, m);

#define __lasx_mxn2x_ux_nc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_nc_w ((v8i32) a, m);

#define __lasx_mxn2x_ux_nc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_ux_nc_d ((v4i64) a, m);

#define __lasx_mxn2x_rnd_sx_sc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_b ((v32i8) a, m);

#define __lasx_mxn2x_rnd_sx_sc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_h ((v16i16) a, m);

#define __lasx_mxn2x_rnd_sx_sc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_w ((v8i32) a, m);

#define __lasx_mxn2x_rnd_sx_sc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_sc_d ((v4i64) a, m);

#define __lasx_mxn2x_rnd_sx_uc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_b ((v32i8) a, m);

#define __lasx_mxn2x_rnd_sx_uc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_h ((v16i16) a, m);

#define __lasx_mxn2x_rnd_sx_uc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_w ((v8i32) a, m);

#define __lasx_mxn2x_rnd_sx_uc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_uc_d ((v4i64) a, m);

#define __lasx_mxn2x_rnd_sx_nc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_b ((v32i8) a, m);

#define __lasx_mxn2x_rnd_sx_nc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_h ((v16i16) a, m);

#define __lasx_mxn2x_rnd_sx_nc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_w ((v8i32) a, m);

#define __lasx_mxn2x_rnd_sx_nc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_sx_nc_d ((v4i64) a, m);

#define __lasx_mxn2x_rnd_ux_sc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_b ((v32i8) a, m);

#define __lasx_mxn2x_rnd_ux_sc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_h ((v16i16) a, m);

#define __lasx_mxn2x_rnd_ux_sc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_w ((v8i32) a, m);

#define __lasx_mxn2x_rnd_ux_sc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_sc_d ((v4i64) a, m);

#define __lasx_mxn2x_rnd_ux_uc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_b ((v32i8) a, m);

#define __lasx_mxn2x_rnd_ux_uc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_h ((v16i16) a, m);

#define __lasx_mxn2x_rnd_ux_uc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_w ((v8i32) a, m);

#define __lasx_mxn2x_rnd_ux_uc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_uc_d ((v4i64) a, m);

#define __lasx_mxn2x_rnd_ux_nc_b(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_b ((v32i8) a, m);

#define __lasx_mxn2x_rnd_ux_nc_h(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_h ((v16i16) a, m);

#define __lasx_mxn2x_rnd_ux_nc_w(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_w ((v8i32) a, m);

#define __lasx_mxn2x_rnd_ux_nc_d(a, m)				\
  (__m256i) __builtin_lasx_mxn2x_rnd_ux_nc_d ((v4i64) a, m);

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxnxbits_any_b (__m256i a)
{
  return (__m256i) __builtin_lasx_mxnxbits_any_b ((v32i8) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxnxbits_ge0_b (__m256i a)
{
  return (__m256i) __builtin_lasx_mxnxbits_ge0_b ((v32i8) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxnxbits_lt0_b (__m256i a)
{
  return (__m256i) __builtin_lasx_mxnxbits_lt0_b ((v32i8) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxror_b (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxror_b ((v32i8) a, (v32i8) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxror_h (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxror_h ((v16i16) a, (v16i16) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxror_w (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxror_w ((v8i32) a, (v8i32) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxror_d (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxror_d ((v4i64) a, (v4i64) b);
}

#define __lasx_mxrori_b(a, m)			\
  (__m256i) __builtin_lasx_mxrori_b ((v32i8) a, m);

#define __lasx_mxrori_h(a, m)			\
  (__m256i) __builtin_lasx_mxrori_h ((v16i16) a, m);

#define __lasx_mxrori_w(a, m)			\
  (__m256i) __builtin_lasx_mxrori_w ((v8i32) a, m);

#define __lasx_mxrori_d(a, m)			\
  (__m256i) __builtin_lasx_mxrori_d ((v4i64) a, m);

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxsubssu_u_b (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxsubssu_u_b ((v32i8) a, (v32u8) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxsubssu_u_h (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxsubssu_u_h ((v16i16) a, (v16u16) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxsubssu_u_w (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxsubssu_u_w ((v8i32) a, (v8u32) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxsubssu_u_d (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxsubssu_u_d ((v4i64) a, (v4u64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxvadd_el0_q (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxvadd_el0_q ((v4i64) a, (v4i64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxvperm_b (__m256i a, __m256i b, __m256i c)
{
  return (__m256i) __builtin_lasx_mxvperm_b ((v32i8) a, (v32i8) b, (v32i8) c);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxvsub_el0_q (__m256i a, __m256i b)
{
  return (__m256i) __builtin_lasx_mxvsub_el0_q ((v4i64) a, (v4i64) b);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxw2x_lo_s_b (__m256i a)
{
  return (__m256i) __builtin_lasx_mxw2x_lo_s_b ((v32i8) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxw2x_lo_s_h (__m256i a)
{
  return (__m256i) __builtin_lasx_mxw2x_lo_s_h ((v16i16) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxw2x_lo_s_w (__m256i a)
{
  return (__m256i) __builtin_lasx_mxw2x_lo_s_w ((v8i32) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxw2x_lo_s_d (__m256i a)
{
  return (__m256i) __builtin_lasx_mxw2x_lo_s_d ((v4i64) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxw2x_hi_s_b (__m256i a)
{
  return (__m256i) __builtin_lasx_mxw2x_hi_s_b ((v32i8) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxw2x_hi_s_h (__m256i a)
{
  return (__m256i) __builtin_lasx_mxw2x_hi_s_h ((v16i16) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxw2x_hi_s_w (__m256i a)
{
  return (__m256i) __builtin_lasx_mxw2x_hi_s_w ((v8i32) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxw2x_hi_s_d (__m256i a)
{
  return (__m256i) __builtin_lasx_mxw2x_hi_s_d ((v4i64) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxwxbits_01_b (__m256i a)
{
  return (__m256i) __builtin_lasx_mxwxbits_01_b ((v32i8) a);
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__lasx_mxwxbits_mask_b (__m256i a)
{
  return (__m256i) __builtin_lasx_mxwxbits_mask_b ((v32i8) a);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxmuhv_s_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxmuhv.s.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmuhv_s_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxmuhv_s_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxmuhv_u_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxmuhv.u.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmuhv_u_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxmuhv_u_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxmuhv_us_d(v4u64 a, v4i64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxmuhv.us.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxmuhv_us_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxmuhv_us_d((v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxsad_adj2_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxsad.adj2.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxsad_adj2_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxsad_adj2_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxsad.adj2.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxsad_adj2_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxsad_adj2_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxsad.adj2.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxsad_adj2_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxsad_adj2_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxsad.adj2.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxsad_adj2_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxsad_adj2_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxsad.adj2.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxsad_adj2_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxsad_adj2_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxsad.adj2.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxsad_adj2_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxsad_adj2_s_acc_w2x_b(v16i16 ret, v32i8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxsad.adj2.s.acc.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_s_acc_w2x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxsad_adj2_s_acc_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxsad_adj2_s_acc_w2x_h(v8i32 ret, v16i16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxsad.adj2.s.acc.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_s_acc_w2x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxsad_adj2_s_acc_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxsad_adj2_s_acc_w2x_w(v4i64 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxsad.adj2.s.acc.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_s_acc_w2x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxsad_adj2_s_acc_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxsad_adj2_u_acc_w2x_b(v16u16 ret, v32u8 a, v32u8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxsad.adj2.u.acc.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_u_acc_w2x_b(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxsad_adj2_u_acc_w2x_b((v16u16) ret, (v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxsad_adj2_u_acc_w2x_h(v8u32 ret, v16u16 a, v16u16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxsad.adj2.u.acc.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_u_acc_w2x_h(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxsad_adj2_u_acc_w2x_h((v8u32) ret, (v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxsad_adj2_u_acc_w2x_w(v4u64 ret, v8u32 a, v8u32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxsad.adj2.u.acc.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxsad_adj2_u_acc_w2x_w(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxsad_adj2_u_acc_w2x_w((v4u64) ret, (v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvadd_el0_s_wx_h(v16i16 a, v16i16 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.el0.s.wx.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_el0_s_wx_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_el0_s_wx_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvadd_el0_s_wx_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.el0.s.wx.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_el0_s_wx_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_el0_s_wx_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvadd_el0_s_wx_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.el0.s.wx.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_el0_s_wx_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_el0_s_wx_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_el0_u_wx_h(v16u16 a, v16u16 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.el0.u.wx.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_el0_u_wx_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_el0_u_wx_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_el0_u_wx_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.el0.u.wx.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_el0_u_wx_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_el0_u_wx_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_el0_u_wx_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.el0.u.wx.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_el0_u_wx_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_el0_u_wx_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_el0_us_wx_h(v16u16 a, v16i16 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.el0.us.wx.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_el0_us_wx_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_el0_us_wx_h((v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_el0_us_wx_w(v8u32 a, v8i32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.el0.us.wx.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_el0_us_wx_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_el0_us_wx_w((v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_el0_us_wx_d(v4u64 a, v4i64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.el0.us.wx.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_el0_us_wx_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_el0_us_wx_d((v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvadd_even_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.even.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvadd_even_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.even.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvadd_even_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.even.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvadd_even_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.even.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_even_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvadd_even_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.even.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvadd_even_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.even.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_even_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.even.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_even_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.even.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_even_u_w2x_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvadd_even_us_w2x_b(v32u8 a, v32i8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.even.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_us_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_b((v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvadd_even_us_w2x_h(v16u16 a, v16i16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.even.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_us_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_h((v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_even_us_w2x_w(v8u32 a, v8i32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.even.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_us_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_w((v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_even_us_w2x_d(v4u64 a, v4i64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.even.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_even_us_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_even_us_w2x_d((v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvadd_odd_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.odd.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvadd_odd_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.odd.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvadd_odd_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.odd.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvadd_odd_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.odd.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_odd_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvadd_odd_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.odd.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvadd_odd_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.odd.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_odd_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.odd.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_odd_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.odd.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_odd_u_w2x_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvadd_odd_us_w2x_b(v32u8 a, v32i8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.odd.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_us_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_b((v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvadd_odd_us_w2x_h(v16u16 a, v16i16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.odd.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_us_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_h((v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_odd_us_w2x_w(v8u32 a, v8i32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.odd.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_us_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_w((v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_odd_us_w2x_d(v4u64 a, v4i64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.odd.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_odd_us_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_odd_us_w2x_d((v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvadd_lo_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.lo.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvadd_lo_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.lo.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvadd_lo_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.lo.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvadd_lo_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.lo.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_lo_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvadd_lo_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.lo.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvadd_lo_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.lo.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_lo_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.lo.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_lo_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.lo.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_lo_u_w2x_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvadd_lo_us_w2x_b(v32u8 a, v32i8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.lo.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_us_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_b((v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvadd_lo_us_w2x_h(v16u16 a, v16i16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.lo.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_us_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_h((v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_lo_us_w2x_w(v8u32 a, v8i32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.lo.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_us_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_w((v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_lo_us_w2x_d(v4u64 a, v4i64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.lo.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_lo_us_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_lo_us_w2x_d((v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvadd_hi_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.hi.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvadd_hi_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.hi.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvadd_hi_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.hi.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvadd_hi_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.hi.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_hi_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvadd_hi_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.hi.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvadd_hi_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.hi.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_hi_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.hi.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_hi_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvadd.hi.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvadd_hi_u_w2x_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvadd_hi_us_w2x_b(v32u8 a, v32i8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.hi.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_us_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_b((v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvadd_hi_us_w2x_h(v16u16 a, v16i16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.hi.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_us_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_h((v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_hi_us_w2x_w(v8u32 a, v8i32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.hi.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_us_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_w((v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvadd_hi_us_w2x_d(v4u64 a, v4i64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvadd.hi.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvadd_hi_us_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvadd_hi_us_w2x_d((v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmuhp_w(v8i32 a, v8i32 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmuhp.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmuhp_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmuhp_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmuhp_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmuhp.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmuhp_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmuhp_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmulp_w(v8i32 a, v8i32 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmulp.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulp_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmulp_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmulp_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmulp.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulp_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmulp_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmuhp_xacc_w(v8i32 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmuhp.xacc.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmuhp_xacc_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmuhp_xacc_w((v8i32) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmuhp_xacc_d(v4i64 ret, v4i64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmuhp.xacc.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmuhp_xacc_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmuhp_xacc_d((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmulp_xacc_w(v8i32 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmulp.xacc.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulp_xacc_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmulp_xacc_w((v8i32) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmulp_xacc_d(v4i64 ret, v4i64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmulp.xacc.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmulp_xacc_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmulp_xacc_d((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_el0_s_wx_h(v16i16 a, v16i16 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.s.wx.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_s_wx_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_s_wx_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_el0_s_wx_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.s.wx.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_s_wx_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_s_wx_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_el0_s_wx_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.s.wx.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_s_wx_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_s_wx_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_u_wx_h(v16u16 a, v16u16 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.el0.u.wx.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_u_wx_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_el0_u_wx_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_u_wx_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.el0.u.wx.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_u_wx_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_el0_u_wx_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_u_wx_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.el0.u.wx.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_u_wx_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_el0_u_wx_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_us_wx_h(v16u16 a, v16i16 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.us.wx.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_us_wx_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_us_wx_h((v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_us_wx_w(v8u32 a, v8i32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.us.wx.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_us_wx_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_us_wx_w((v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_us_wx_d(v4u64 a, v4i64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.us.wx.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_us_wx_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_us_wx_d((v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_el0_acc_s_wx_h(v4i64 ret, v16i16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.acc.s.wx.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_acc_s_wx_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_acc_s_wx_h((v4i64) ret, (v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_el0_acc_s_wx_w(v4i64 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.acc.s.wx.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_acc_s_wx_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_acc_s_wx_w((v4i64) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_el0_acc_s_wx_d(v4i64 ret, v4i64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.acc.s.wx.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_acc_s_wx_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_acc_s_wx_d((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_acc_u_wx_h(v4u64 ret, v16u16 a, v16u16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.el0.acc.u.wx.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_acc_u_wx_h(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_el0_acc_u_wx_h((v4u64) ret, (v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_acc_u_wx_w(v4u64 ret, v8u32 a, v8u32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.el0.acc.u.wx.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_acc_u_wx_w(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_el0_acc_u_wx_w((v4u64) ret, (v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_acc_u_wx_d(v4u64 ret, v4u64 a, v4u64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.el0.acc.u.wx.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_acc_u_wx_d(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_el0_acc_u_wx_d((v4u64) ret, (v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_acc_us_wx_h(v4u64 ret, v16u16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.acc.us.wx.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_acc_us_wx_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_acc_us_wx_h((v4u64) ret, (v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_acc_us_wx_w(v4u64 ret, v8u32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.acc.us.wx.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_acc_us_wx_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_acc_us_wx_w((v4u64) ret, (v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_el0_acc_us_wx_d(v4u64 ret, v4u64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.el0.acc.us.wx.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_el0_acc_us_wx_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_el0_acc_us_wx_d((v4u64) ret, (v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmult_hadd_adj4_s_w4x_b(v32i8 a, v32i8 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.s.w4x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_s_w4x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_s_w4x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_hadd_adj4_s_w4x_h(v16i16 a, v16i16 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.s.w4x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_s_w4x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_s_w4x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_hadd_adj4_s_w4x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.s.w4x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_s_w4x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_s_w4x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_hadd_adj4_u_w4x_b(v32u8 a, v32u8 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hadd.adj4.u.w4x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_u_w4x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_u_w4x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hadd_adj4_u_w4x_h(v16u16 a, v16u16 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hadd.adj4.u.w4x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_u_w4x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_u_w4x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hadd_adj4_u_w4x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hadd.adj4.u.w4x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_u_w4x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_u_w4x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_hadd_adj4_us_w4x_b(v32u8 a, v32i8 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.us.w4x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_us_w4x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_us_w4x_b((v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hadd_adj4_us_w4x_h(v16u16 a, v16i16 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.us.w4x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_us_w4x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_us_w4x_h((v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hadd_adj4_us_w4x_w(v8u32 a, v8i32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.us.w4x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_us_w4x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_us_w4x_w((v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_b(v8i32 ret, v32i8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.acc.s.w4x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_b((v8i32) ret, (v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_h(v4i64 ret, v16i16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.acc.s.w4x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_h((v4i64) ret, (v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_w(v4i64 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.acc.s.w4x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_acc_s_w4x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_s_w4x_w((v4i64) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_b(v8u32 ret, v32u8 a, v32u8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hadd.adj4.acc.u.w4x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_b(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_b((v8u32) ret, (v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_h(v4u64 ret, v16u16 a, v16u16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hadd.adj4.acc.u.w4x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_h(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_h((v4u64) ret, (v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_w(v4u64 ret, v8u32 a, v8u32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hadd.adj4.acc.u.w4x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_acc_u_w4x_w(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_u_w4x_w((v4u64) ret, (v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_b(v8u32 ret, v32u8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.acc.us.w4x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_b((v8u32) ret, (v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_h(v4u64 ret, v16u16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.acc.us.w4x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_h((v4u64) ret, (v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_w(v4u64 ret, v8u32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hadd.adj4.acc.us.w4x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hadd_adj4_acc_us_w4x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hadd_adj4_acc_us_w4x_w((v4u64) ret, (v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmult_even_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmult_even_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_even_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_even_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_even_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.even.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_even_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.even.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_even_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.even.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_even_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.even.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_even_u_w2x_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_even_us_w2x_b(v32u8 a, v32i8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_us_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_b((v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_even_us_w2x_h(v16u16 a, v16i16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_us_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_h((v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_even_us_w2x_w(v8u32 a, v8i32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_us_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_w((v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_even_us_w2x_d(v4u64 a, v4i64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_us_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_us_w2x_d((v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmult_odd_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmult_odd_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_odd_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_odd_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_odd_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.odd.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_odd_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.odd.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_odd_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.odd.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_odd_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.odd.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_odd_u_w2x_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_odd_us_w2x_b(v32u8 a, v32i8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_us_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_b((v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_odd_us_w2x_h(v16u16 a, v16i16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_us_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_h((v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_odd_us_w2x_w(v8u32 a, v8i32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_us_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_w((v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_odd_us_w2x_d(v4u64 a, v4i64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_us_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_us_w2x_d((v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmult_even_acc_s_w2x_b(v16i16 ret, v32i8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.acc.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_s_w2x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmult_even_acc_s_w2x_h(v8i32 ret, v16i16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.acc.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_s_w2x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_even_acc_s_w2x_w(v4i64 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.acc.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_s_w2x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_even_acc_s_w2x_d(v4i64 ret, v4i64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.acc.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_s_w2x_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_acc_s_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_even_acc_u_w2x_b(v16u16 ret, v32u8 a, v32u8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.even.acc.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_u_w2x_b(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_b((v16u16) ret, (v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_even_acc_u_w2x_h(v8u32 ret, v16u16 a, v16u16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.even.acc.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_u_w2x_h(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_h((v8u32) ret, (v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_even_acc_u_w2x_w(v4u64 ret, v8u32 a, v8u32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.even.acc.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_u_w2x_w(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_w((v4u64) ret, (v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_even_acc_u_w2x_d(v4u64 ret, v4u64 a, v4u64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.even.acc.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_u_w2x_d(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_even_acc_u_w2x_d((v4u64) ret, (v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_even_acc_us_w2x_b(v16u16 ret, v32u8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.acc.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_us_w2x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_b((v16u16) ret, (v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_even_acc_us_w2x_h(v8u32 ret, v16u16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.acc.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_us_w2x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_h((v8u32) ret, (v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_even_acc_us_w2x_w(v4u64 ret, v8u32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.acc.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_us_w2x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_w((v4u64) ret, (v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_even_acc_us_w2x_d(v4u64 ret, v4u64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.even.acc.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_even_acc_us_w2x_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_even_acc_us_w2x_d((v4u64) ret, (v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmult_odd_acc_s_w2x_b(v16i16 ret, v32i8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.acc.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_s_w2x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmult_odd_acc_s_w2x_h(v8i32 ret, v16i16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.acc.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_s_w2x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_odd_acc_s_w2x_w(v4i64 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.acc.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_s_w2x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_odd_acc_s_w2x_d(v4i64 ret, v4i64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.acc.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_s_w2x_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_acc_s_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_odd_acc_u_w2x_b(v16u16 ret, v32u8 a, v32u8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.odd.acc.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_u_w2x_b(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_b((v16u16) ret, (v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_odd_acc_u_w2x_h(v8u32 ret, v16u16 a, v16u16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.odd.acc.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_u_w2x_h(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_h((v8u32) ret, (v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_odd_acc_u_w2x_w(v4u64 ret, v8u32 a, v8u32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.odd.acc.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_u_w2x_w(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_w((v4u64) ret, (v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_odd_acc_u_w2x_d(v4u64 ret, v4u64 a, v4u64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.odd.acc.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_u_w2x_d(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_odd_acc_u_w2x_d((v4u64) ret, (v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_odd_acc_us_w2x_b(v16u16 ret, v32u8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.acc.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_us_w2x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_b((v16u16) ret, (v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_odd_acc_us_w2x_h(v8u32 ret, v16u16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.acc.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_us_w2x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_h((v8u32) ret, (v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_odd_acc_us_w2x_w(v4u64 ret, v8u32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.acc.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_us_w2x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_w((v4u64) ret, (v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_odd_acc_us_w2x_d(v4u64 ret, v4u64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.odd.acc.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_odd_acc_us_w2x_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_odd_acc_us_w2x_d((v4u64) ret, (v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmult_lo_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmult_lo_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_lo_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_lo_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_lo_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.lo.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_lo_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.lo.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_lo_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.lo.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_lo_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.lo.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_lo_u_w2x_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_lo_us_w2x_b(v32u8 a, v32i8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_us_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_b((v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_lo_us_w2x_h(v16u16 a, v16i16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_us_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_h((v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_lo_us_w2x_w(v8u32 a, v8i32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_us_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_w((v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_lo_us_w2x_d(v4u64 a, v4i64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_us_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_us_w2x_d((v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmult_hi_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmult_hi_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_hi_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_hi_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_hi_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hi.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_hi_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hi.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hi_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hi.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hi_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hi.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hi_u_w2x_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_hi_us_w2x_b(v32u8 a, v32i8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_us_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_b((v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_hi_us_w2x_h(v16u16 a, v16i16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_us_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_h((v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hi_us_w2x_w(v8u32 a, v8i32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_us_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_w((v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hi_us_w2x_d(v4u64 a, v4i64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_us_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_us_w2x_d((v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmult_lo_acc_s_w2x_b(v16i16 ret, v32i8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.acc.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_s_w2x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmult_lo_acc_s_w2x_h(v8i32 ret, v16i16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.acc.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_s_w2x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_lo_acc_s_w2x_w(v4i64 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.acc.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_s_w2x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_lo_acc_s_w2x_d(v4i64 ret, v4i64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.acc.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_s_w2x_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_acc_s_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_lo_acc_u_w2x_b(v16u16 ret, v32u8 a, v32u8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.lo.acc.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_u_w2x_b(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_b((v16u16) ret, (v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_lo_acc_u_w2x_h(v8u32 ret, v16u16 a, v16u16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.lo.acc.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_u_w2x_h(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_h((v8u32) ret, (v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_lo_acc_u_w2x_w(v4u64 ret, v8u32 a, v8u32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.lo.acc.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_u_w2x_w(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_w((v4u64) ret, (v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_lo_acc_u_w2x_d(v4u64 ret, v4u64 a, v4u64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.lo.acc.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_u_w2x_d(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_lo_acc_u_w2x_d((v4u64) ret, (v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_lo_acc_us_w2x_b(v16u16 ret, v32u8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.acc.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_us_w2x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_b((v16u16) ret, (v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_lo_acc_us_w2x_h(v8u32 ret, v16u16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.acc.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_us_w2x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_h((v8u32) ret, (v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_lo_acc_us_w2x_w(v4u64 ret, v8u32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.acc.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_us_w2x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_w((v4u64) ret, (v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_lo_acc_us_w2x_d(v4u64 ret, v4u64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.lo.acc.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_lo_acc_us_w2x_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_lo_acc_us_w2x_d((v4u64) ret, (v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmult_hi_acc_s_w2x_b(v16i16 ret, v32i8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.acc.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_s_w2x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmult_hi_acc_s_w2x_h(v8i32 ret, v16i16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.acc.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_s_w2x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_hi_acc_s_w2x_w(v4i64 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.acc.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_s_w2x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmult_hi_acc_s_w2x_d(v4i64 ret, v4i64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.acc.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_s_w2x_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_acc_s_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_hi_acc_u_w2x_b(v16u16 ret, v32u8 a, v32u8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hi.acc.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_u_w2x_b(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_b((v16u16) ret, (v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_hi_acc_u_w2x_h(v8u32 ret, v16u16 a, v16u16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hi.acc.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_u_w2x_h(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_h((v8u32) ret, (v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hi_acc_u_w2x_w(v4u64 ret, v8u32 a, v8u32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hi.acc.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_u_w2x_w(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_w((v4u64) ret, (v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hi_acc_u_w2x_d(v4u64 ret, v4u64 a, v4u64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvmult.hi.acc.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_u_w2x_d(__m256i ret, __m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvmult_hi_acc_u_w2x_d((v4u64) ret, (v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvmult_hi_acc_us_w2x_b(v16u16 ret, v32u8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.acc.us.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_us_w2x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_b((v16u16) ret, (v32u8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvmult_hi_acc_us_w2x_h(v8u32 ret, v16u16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.acc.us.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_us_w2x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_h((v8u32) ret, (v16u16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hi_acc_us_w2x_w(v4u64 ret, v8u32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.acc.us.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_us_w2x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_w((v4u64) ret, (v8u32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvmult_hi_acc_us_w2x_d(v4u64 ret, v4u64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmult.hi.acc.us.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmult_hi_acc_us_w2x_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmult_hi_acc_us_w2x_d((v4u64) ret, (v4u64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultc_im_haddc_adjc2_s_w4x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultc.im.haddc.adjc2.s.w4x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultc_im_haddc_adjc2_s_w4x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc2_s_w4x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultc_im_haddc_adjc2_acc_s_w4x_w(v4i64 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultc.im.haddc.adjc2.acc.s.w4x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultc_im_haddc_adjc2_acc_s_w4x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc2_acc_s_w4x_w((v4i64) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultc_im_haddc_adjc4_s_w4x_h(v16i16 a, v16i16 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultc.im.haddc.adjc4.s.w4x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultc_im_haddc_adjc4_s_w4x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc4_s_w4x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultc_im_haddc_adjc4_acc_s_w4x_h(v4i64 ret, v16i16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultc.im.haddc.adjc4.acc.s.w4x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultc_im_haddc_adjc4_acc_s_w4x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultc_im_haddc_adjc4_acc_s_w4x_h((v4i64) ret, (v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultc_re_haddc_adjc2_s_w4x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultc.re.haddc.adjc2.s.w4x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultc_re_haddc_adjc2_s_w4x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc2_s_w4x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultc_re_haddc_adjc2_acc_s_w4x_w(v4i64 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultc.re.haddc.adjc2.acc.s.w4x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultc_re_haddc_adjc2_acc_s_w4x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc2_acc_s_w4x_w((v4i64) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultc_re_haddc_adjc4_s_w4x_h(v16i16 a, v16i16 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultc.re.haddc.adjc4.s.w4x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultc_re_haddc_adjc4_s_w4x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc4_s_w4x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultc_re_haddc_adjc4_acc_s_w4x_h(v4i64 ret, v16i16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultc.re.haddc.adjc4.acc.s.w4x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultc_re_haddc_adjc4_acc_s_w4x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultc_re_haddc_adjc4_acc_s_w4x_h((v4i64) ret, (v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultp_hxor_adj2_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.hxor.adj2.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_hxor_adj2_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_hxor_adj2_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultp_hxor_adj2_xacc_w2x_d(v4i64 ret, v4i64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.hxor.adj2.xacc.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_hxor_adj2_xacc_w2x_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_hxor_adj2_xacc_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmultp_lo_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.lo.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_lo_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmultp_lo_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.lo.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_lo_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultp_lo_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.lo.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_lo_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultp_lo_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.lo.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_lo_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_lo_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmultp_hi_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.hi.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_hi_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmultp_hi_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.hi.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_hi_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultp_hi_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.hi.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_hi_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultp_hi_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.hi.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_hi_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_hi_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmultp_lo_xacc_w2x_b(v16i16 ret, v32i8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.lo.xacc.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_lo_xacc_w2x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmultp_lo_xacc_w2x_h(v8i32 ret, v16i16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.lo.xacc.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_lo_xacc_w2x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultp_lo_xacc_w2x_w(v4i64 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.lo.xacc.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_lo_xacc_w2x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultp_lo_xacc_w2x_d(v4i64 ret, v4i64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.lo.xacc.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_lo_xacc_w2x_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_lo_xacc_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvmultp_hi_xacc_w2x_b(v16i16 ret, v32i8 a, v32i8 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.hi.xacc.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_hi_xacc_w2x_b(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_b((v16i16) ret, (v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvmultp_hi_xacc_w2x_h(v8i32 ret, v16i16 a, v16i16 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.hi.xacc.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_hi_xacc_w2x_h(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_h((v8i32) ret, (v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultp_hi_xacc_w2x_w(v4i64 ret, v8i32 a, v8i32 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.hi.xacc.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_hi_xacc_w2x_w(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_w((v4i64) ret, (v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvmultp_hi_xacc_w2x_d(v4i64 ret, v4i64 a, v4i64 b)
{ 
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvmultp.hi.xacc.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) ,"0"(ret)
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvmultp_hi_xacc_w2x_d(__m256i ret, __m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvmultp_hi_xacc_w2x_d((v4i64) ret, (v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvsub_el0_s_wx_h(v16i16 a, v16i16 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.el0.s.wx.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_el0_s_wx_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_el0_s_wx_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvsub_el0_s_wx_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.el0.s.wx.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_el0_s_wx_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_el0_s_wx_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvsub_el0_s_wx_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.el0.s.wx.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_el0_s_wx_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_el0_s_wx_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvsub_el0_u_wx_h(v16u16 a, v16u16 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.el0.u.wx.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_el0_u_wx_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_el0_u_wx_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvsub_el0_u_wx_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.el0.u.wx.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_el0_u_wx_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_el0_u_wx_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvsub_el0_u_wx_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.el0.u.wx.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_el0_u_wx_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_el0_u_wx_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvsub_even_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.even.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_even_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvsub_even_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.even.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_even_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvsub_even_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.even.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_even_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvsub_even_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.even.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_even_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_even_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvsub_even_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.even.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_even_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvsub_even_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.even.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_even_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvsub_even_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.even.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_even_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvsub_even_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.even.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_even_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_even_u_w2x_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvsub_odd_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.odd.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_odd_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvsub_odd_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.odd.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_odd_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvsub_odd_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.odd.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_odd_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvsub_odd_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.odd.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_odd_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_odd_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvsub_odd_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.odd.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_odd_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvsub_odd_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.odd.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_odd_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvsub_odd_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.odd.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_odd_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvsub_odd_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.odd.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_odd_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_odd_u_w2x_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvsub_lo_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.lo.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_lo_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvsub_lo_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.lo.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_lo_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvsub_lo_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.lo.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_lo_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvsub_lo_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.lo.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_lo_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_lo_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvsub_lo_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.lo.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_lo_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvsub_lo_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.lo.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_lo_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvsub_lo_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.lo.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_lo_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvsub_lo_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.lo.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_lo_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_lo_u_w2x_d((v4u64) a, (v4u64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16i16 __builtin_lasx_mxvsub_hi_s_w2x_b(v32i8 a, v32i8 b)
{ 
    v16i16 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.hi.s.w2x.b\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_hi_s_w2x_b(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_b((v32i8) a, (v32i8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8i32 __builtin_lasx_mxvsub_hi_s_w2x_h(v16i16 a, v16i16 b)
{ 
    v8i32 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.hi.s.w2x.h\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_hi_s_w2x_h(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_h((v16i16) a, (v16i16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvsub_hi_s_w2x_w(v8i32 a, v8i32 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.hi.s.w2x.w\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_hi_s_w2x_w(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_w((v8i32) a, (v8i32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4i64 __builtin_lasx_mxvsub_hi_s_w2x_d(v4i64 a, v4i64 b)
{ 
    v4i64 ret;
    __asm__ volatile (
        "mxmove.v\t$x0,%u1\n\t"
        "mxmove.v\t$x1,%u2\n\t"
        "mxvsub.hi.s.w2x.d\t%u0,$x0,$x1\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_hi_s_w2x_d(__m256i a, __m256i b)
{
   return (__m256i)__builtin_lasx_mxvsub_hi_s_w2x_d((v4i64) a, (v4i64) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v16u16 __builtin_lasx_mxvsub_hi_u_w2x_b(v32u8 a, v32u8 b)
{ 
    v16u16 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.hi.u.w2x.b\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_hi_u_w2x_b(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_b((v32u8) a, (v32u8) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v8u32 __builtin_lasx_mxvsub_hi_u_w2x_h(v16u16 a, v16u16 b)
{ 
    v8u32 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.hi.u.w2x.h\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_hi_u_w2x_h(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_h((v16u16) a, (v16u16) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvsub_hi_u_w2x_w(v8u32 a, v8u32 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.hi.u.w2x.w\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_hi_u_w2x_w(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_w((v8u32) a, (v8u32) b);
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
v4u64 __builtin_lasx_mxvsub_hi_u_w2x_d(v4u64 a, v4u64 b)
{ 
    v4u64 ret;
    __asm__ volatile (
        "mxmove.v\t$x1,%u1\n\t"
        "mxmove.v\t$x0,%u2\n\t"
        "mxvsub.hi.u.w2x.d\t%u0,$x1,$x0\n\t"
        :"=f"(ret)
        :"f"(a), "f"(b) 
        :"$f0", "$f1"
    );
    return ret;
}

extern __inline __attribute__((__gnu_inline__, __always_inline__, __artificial__))
__m256i __lasx_mxvsub_hi_u_w2x_d(__m256i a, __m256i b)
{
    return (__m256i)__builtin_lasx_mxvsub_hi_u_w2x_d((v4u64) a, (v4u64) b);
}

#endif /* defined(__mips_loongson_asx) */
#endif /* _GCC_LOONGSON_ASXINTRIN_H */

