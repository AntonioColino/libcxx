#ifndef __HAS_JCC_STANDARD_DEFINITIONS__
#define __HAS_JCC_STANDARD_DEFINITIONS__  1  
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__

// c defs
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#ifndef __SSP_STRONG__
#	define __SSP_STRONG__ 3
#endif // __SSP_STRONG__

#ifndef __DBL_MIN_EXP__
#	define __DBL_MIN_EXP__ (-1021)
#endif // __DBL_MIN_EXP__

#ifndef __FLT32X_MAX_EXP__
#	define __FLT32X_MAX_EXP__ 1024
#endif // __FLT32X_MAX_EXP__

#ifndef __UINT_LEAST16_MAX__
#	define __UINT_LEAST16_MAX__ 0xffff
#endif // __UINT_LEAST16_MAX__

#ifndef __ATOMIC_ACQUIRE
#	define __ATOMIC_ACQUIRE 2
#endif // __ATOMIC_ACQUIRE

#ifndef __FLT128_MAX_10_EXP__
#	define __FLT128_MAX_10_EXP__ 4932
#endif // __FLT128_MAX_10_EXP__

#ifndef __FLT_MIN__
#	define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#endif // __FLT_MIN__

#ifndef __GCC_IEC_559_COMPLEX
#	define __GCC_IEC_559_COMPLEX 2
#endif // __GCC_IEC_559_COMPLEX

#ifndef __UINT_LEAST8_TYPE__
#	define __UINT_LEAST8_TYPE__ unsigned char
#endif // __UINT_LEAST8_TYPE__

#ifndef __SIZEOF_FLOAT80__
#	define __SIZEOF_FLOAT80__ 16
#endif // __SIZEOF_FLOAT80__

#ifndef __INTMAX_C
#	define __INTMAX_C(c) c ## L
#endif // __INTMAX_C

#ifndef __CHAR_BIT__
#	define __CHAR_BIT__ 8
#endif // __CHAR_BIT__

#ifndef __UINT8_MAX__
#	define __UINT8_MAX__ 0xff
#endif // __UINT8_MAX__

#ifndef __WINT_MAX__
#	define __WINT_MAX__ 0xffffffffU
#endif // __WINT_MAX__

#ifndef __FLT32_MIN_EXP__
#	define __FLT32_MIN_EXP__ (-125)
#endif // __FLT32_MIN_EXP__

#ifndef __ORDER_LITTLE_ENDIAN__
#	define __ORDER_LITTLE_ENDIAN__ 1234
#endif // __ORDER_LITTLE_ENDIAN__

#ifndef __SIZE_MAX__
#	define __SIZE_MAX__ 0xffffffffffffffffUL
#endif // __SIZE_MAX__

#ifndef __WCHAR_MAX__
#	define __WCHAR_MAX__ 0x7fffffff
#endif // __WCHAR_MAX__

#ifndef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1
#	define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#endif // __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1

#ifndef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2
#	define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#endif // __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2

#ifndef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4
#	define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#endif // __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4

#ifndef __DBL_DENORM_MIN__
#	define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#endif // __DBL_DENORM_MIN__

#ifndef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8
#	define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#endif // __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8

#ifndef __GCC_ATOMIC_CHAR_LOCK_FREE
#	define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#endif // __GCC_ATOMIC_CHAR_LOCK_FREE

#ifndef __GCC_IEC_559
#	define __GCC_IEC_559 2
#endif // __GCC_IEC_559

#ifndef __FLT32X_DECIMAL_DIG__
#	define __FLT32X_DECIMAL_DIG__ 17
#endif // __FLT32X_DECIMAL_DIG__

#ifndef __FLT_EVAL_METHOD__
#	define __FLT_EVAL_METHOD__ 0
#endif // __FLT_EVAL_METHOD__

#ifndef __FLT64_DECIMAL_DIG__
#	define __FLT64_DECIMAL_DIG__ 17
#endif // __FLT64_DECIMAL_DIG__

#ifndef __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#	define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#endif // __GCC_ATOMIC_CHAR32_T_LOCK_FREE

#ifndef __UINT_FAST64_MAX__
#	define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#endif // __UINT_FAST64_MAX__

#ifndef __SIG_ATOMIC_TYPE__
#	define __SIG_ATOMIC_TYPE__ int
#endif // __SIG_ATOMIC_TYPE__

#ifndef __DBL_MIN_10_EXP__
#	define __DBL_MIN_10_EXP__ (-307)
#endif // __DBL_MIN_10_EXP__

#ifndef __FINITE_MATH_ONLY__
#	define __FINITE_MATH_ONLY__ 0
#endif // __FINITE_MATH_ONLY__

#ifndef __FLT32_HAS_DENORM__
#	define __FLT32_HAS_DENORM__ 1
#endif // __FLT32_HAS_DENORM__

#ifndef __UINT_FAST8_MAX__
#	define __UINT_FAST8_MAX__ 0xff
#endif // __UINT_FAST8_MAX__

#ifndef __has_include
#	define __has_include() 0
#endif // __has_include

#ifndef __DEC64_MAX_EXP__
#	define __DEC64_MAX_EXP__ 385
#endif // __DEC64_MAX_EXP__

#ifndef __INT8_C
#	define __INT8_C(c) c
#endif // __INT8_C

#ifndef __INT_LEAST8_WIDTH__
#	define __INT_LEAST8_WIDTH__ 8
#endif // __INT_LEAST8_WIDTH__

#ifndef __UINT_LEAST64_MAX__
#	define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#endif // __UINT_LEAST64_MAX__

#ifndef __SHRT_MAX__
#	define __SHRT_MAX__ 0x7fff
#endif // __SHRT_MAX__

#ifndef __LDBL_MAX__
#	define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#endif // __LDBL_MAX__

#ifndef __FLT64X_MAX_10_EXP__
#	define __FLT64X_MAX_10_EXP__ 4932
#endif // __FLT64X_MAX_10_EXP__

#ifndef __UINT_LEAST8_MAX__
#	define __UINT_LEAST8_MAX__ 0xff
#endif // __UINT_LEAST8_MAX__

#ifndef __GCC_ATOMIC_BOOL_LOCK_FREE
#	define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#endif // __GCC_ATOMIC_BOOL_LOCK_FREE

#ifndef __FLT128_DENORM_MIN__
#	define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F
#endif // __FLT128_DENORM_MIN__

#ifndef __UINTMAX_TYPE__
#	define __UINTMAX_TYPE__ long unsigned int
#endif // __UINTMAX_TYPE__

#ifndef __DEC32_EPSILON__
#	define __DEC32_EPSILON__ 1E-6DF
#endif // __DEC32_EPSILON__

#ifndef __FLT_EVAL_METHOD_TS_18661_3__
#	define __FLT_EVAL_METHOD_TS_18661_3__ 0
#endif // __FLT_EVAL_METHOD_TS_18661_3__

#ifndef __UINT32_MAX__
#	define __UINT32_MAX__ 0xffffffffU
#endif // __UINT32_MAX__

#ifndef __LDBL_MAX_EXP__
#	define __LDBL_MAX_EXP__ 16384
#endif // __LDBL_MAX_EXP__

#ifndef __FLT128_MIN_EXP__
#	define __FLT128_MIN_EXP__ (-16381)
#endif // __FLT128_MIN_EXP__

#ifndef __WINT_MIN__
#	define __WINT_MIN__ 0U
#endif // __WINT_MIN__

#ifndef __FLT128_MIN_10_EXP__
#	define __FLT128_MIN_10_EXP__ (-4931)
#endif // __FLT128_MIN_10_EXP__

#ifndef __INT_LEAST16_WIDTH__
#	define __INT_LEAST16_WIDTH__ 16
#endif // __INT_LEAST16_WIDTH__

#ifndef __SCHAR_MAX__
#	define __SCHAR_MAX__ 0x7f
#endif // __SCHAR_MAX__

#ifndef __FLT128_MANT_DIG__
#	define __FLT128_MANT_DIG__ 113
#endif // __FLT128_MANT_DIG__

#ifndef __WCHAR_MIN__
#	define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#endif // __WCHAR_MIN__

#ifndef __INT64_C
#	define __INT64_C(c) c ## L
#endif // __INT64_C

#ifndef __DBL_DIG__
#	define __DBL_DIG__ 15
#endif // __DBL_DIG__

#ifndef __GCC_ATOMIC_POINTER_LOCK_FREE
#	define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#endif // __GCC_ATOMIC_POINTER_LOCK_FREE

#ifndef __FLT64X_MANT_DIG__
#	define __FLT64X_MANT_DIG__ 64
#endif // __FLT64X_MANT_DIG__

#ifndef __SIZEOF_INT__
#	define __SIZEOF_INT__ 4
#endif // __SIZEOF_INT__

#ifndef __SIZEOF_POINTER__
#	define __SIZEOF_POINTER__ 8
#endif // __SIZEOF_POINTER__

#ifndef __USER_LABEL_PREFIX__
#	define __USER_LABEL_PREFIX__ 
#endif // __USER_LABEL_PREFIX__

#ifndef __FLT64X_EPSILON__
#	define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#endif // __FLT64X_EPSILON__

#ifndef __STDC_HOSTED__
#	define __STDC_HOSTED__ 1
#endif // __STDC_HOSTED__

#ifndef __FLT32_DIG__
#	define __FLT32_DIG__ 6
#endif // __FLT32_DIG__

#ifndef __FLT_EPSILON__
#	define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#endif // __FLT_EPSILON__

#ifndef __SHRT_WIDTH__
#	define __SHRT_WIDTH__ 16
#endif // __SHRT_WIDTH__

#ifndef __LDBL_MIN__
#	define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#endif // __LDBL_MIN__

#ifndef __STDC_UTF_16__
#	define __STDC_UTF_16__ 1
#endif // __STDC_UTF_16__

#ifndef __DEC32_MAX__
#	define __DEC32_MAX__ 9.999999E96DF
#endif // __DEC32_MAX__

#ifndef __FLT64X_DENORM_MIN__
#	define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#endif // __FLT64X_DENORM_MIN__

#ifndef __FLT32X_HAS_INFINITY__
#	define __FLT32X_HAS_INFINITY__ 1
#endif // __FLT32X_HAS_INFINITY__

#ifndef __INT32_MAX__
#	define __INT32_MAX__ 0x7fffffff
#endif // __INT32_MAX__

#ifndef __INT_WIDTH__
#	define __INT_WIDTH__ 32
#endif // __INT_WIDTH__

#ifndef __SIZEOF_LONG__
#	define __SIZEOF_LONG__ 8
#endif // __SIZEOF_LONG__

#ifndef __STDC_IEC_559__
#	define __STDC_IEC_559__ 1
#endif // __STDC_IEC_559__

#ifndef __STDC_ISO_10646__
#	define __STDC_ISO_10646__ 201706L
#endif // __STDC_ISO_10646__

#ifndef __UINT16_C
#	define __UINT16_C(c) c
#endif // __UINT16_C

#ifndef __PTRDIFF_WIDTH__
#	define __PTRDIFF_WIDTH__ 64
#endif // __PTRDIFF_WIDTH__

#ifndef __DECIMAL_DIG__
#	define __DECIMAL_DIG__ 21
#endif // __DECIMAL_DIG__

#ifndef __FLT64_EPSILON__
#	define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#endif // __FLT64_EPSILON__

#ifndef __INTMAX_WIDTH__
#	define __INTMAX_WIDTH__ 64
#endif // __INTMAX_WIDTH__

#ifndef __has_include_next
#	define __has_include_next() 0
#endif // __has_include_next

#ifndef __FLT64X_MIN_10_EXP__
#	define __FLT64X_MIN_10_EXP__ (-4931)
#endif // __FLT64X_MIN_10_EXP__

#ifndef __LDBL_HAS_QUIET_NAN__
#	define __LDBL_HAS_QUIET_NAN__ 1
#endif // __LDBL_HAS_QUIET_NAN__

#ifndef __FLT64_MANT_DIG__
#	define __FLT64_MANT_DIG__ 53
#endif // __FLT64_MANT_DIG__

#ifndef __FLT_HAS_DENORM__
#	define __FLT_HAS_DENORM__ 1
#endif // __FLT_HAS_DENORM__

#ifndef __SIZEOF_LONG_DOUBLE__
#	define __SIZEOF_LONG_DOUBLE__ 16
#endif // __SIZEOF_LONG_DOUBLE__

#ifndef __BIGGEST_ALIGNMENT__
#	define __BIGGEST_ALIGNMENT__ 16
#endif // __BIGGEST_ALIGNMENT__

#ifndef __FLT64_MAX_10_EXP__
#	define __FLT64_MAX_10_EXP__ 308
#endif // __FLT64_MAX_10_EXP__

#ifndef __DBL_MAX__
#	define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#endif // __DBL_MAX__

#ifndef __INT_FAST32_MAX__
#	define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#endif // __INT_FAST32_MAX__

#ifndef __DBL_HAS_INFINITY__
#	define __DBL_HAS_INFINITY__ 1
#endif // __DBL_HAS_INFINITY__

#ifndef __DEC32_MIN_EXP__
#	define __DEC32_MIN_EXP__ (-94)
#endif // __DEC32_MIN_EXP__

#ifndef __INTPTR_WIDTH__
#	define __INTPTR_WIDTH__ 64
#endif // __INTPTR_WIDTH__

#ifndef __FLT32X_HAS_DENORM__
#	define __FLT32X_HAS_DENORM__ 1
#endif // __FLT32X_HAS_DENORM__

#ifndef __INT_FAST16_TYPE__
#	define __INT_FAST16_TYPE__ long int
#endif // __INT_FAST16_TYPE__

#ifndef __LDBL_HAS_DENORM__
#	define __LDBL_HAS_DENORM__ 1
#endif // __LDBL_HAS_DENORM__

#ifndef __FLT128_HAS_INFINITY__
#	define __FLT128_HAS_INFINITY__ 1
#endif // __FLT128_HAS_INFINITY__

#ifndef __DEC128_MAX__
#	define __DEC128_MAX__ 9.999999999999999999999999999999999E6144DL
#endif // __DEC128_MAX__

#ifndef __INT_LEAST32_MAX__
#	define __INT_LEAST32_MAX__ 0x7fffffff
#endif // __INT_LEAST32_MAX__

#ifndef __DEC32_MIN__
#	define __DEC32_MIN__ 1E-95DF
#endif // __DEC32_MIN__

#ifndef __DBL_MAX_EXP__
#	define __DBL_MAX_EXP__ 1024
#endif // __DBL_MAX_EXP__

#ifndef __WCHAR_WIDTH__
#	define __WCHAR_WIDTH__ 32
#endif // __WCHAR_WIDTH__

#ifndef __FLT32_MAX__
#	define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#endif // __FLT32_MAX__

#ifndef __DEC128_EPSILON__
#	define __DEC128_EPSILON__ 1E-33DL
#endif // __DEC128_EPSILON__

#ifndef __ATOMIC_HLE_RELEASE
#	define __ATOMIC_HLE_RELEASE 131072
#endif // __ATOMIC_HLE_RELEASE

#ifndef __PTRDIFF_MAX__
#	define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#endif // __PTRDIFF_MAX__

#ifndef __ATOMIC_HLE_ACQUIRE
#	define __ATOMIC_HLE_ACQUIRE 65536
#endif // __ATOMIC_HLE_ACQUIRE

#ifndef __FLT32_HAS_QUIET_NAN__
#	define __FLT32_HAS_QUIET_NAN__ 1
#endif // __FLT32_HAS_QUIET_NAN__

#ifndef __LONG_LONG_MAX__
#	define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#endif // __LONG_LONG_MAX__

#ifndef __SIZEOF_SIZE_T__
#	define __SIZEOF_SIZE_T__ 8
#endif // __SIZEOF_SIZE_T__

#ifndef __FLT64X_MIN_EXP__
#	define __FLT64X_MIN_EXP__ (-16381)
#endif // __FLT64X_MIN_EXP__

#ifndef __SIZEOF_WINT_T__
#	define __SIZEOF_WINT_T__ 4
#endif // __SIZEOF_WINT_T__

#ifndef __LONG_LONG_WIDTH__
#	define __LONG_LONG_WIDTH__ 64
#endif // __LONG_LONG_WIDTH__

#ifndef __FLT32_MAX_EXP__
#	define __FLT32_MAX_EXP__ 128
#endif // __FLT32_MAX_EXP__

#ifndef __GCC_HAVE_DWARF2_CFI_ASM
#	define __GCC_HAVE_DWARF2_CFI_ASM 1
#endif // __GCC_HAVE_DWARF2_CFI_ASM

#ifndef __GXX_ABI_VERSION
#	define __GXX_ABI_VERSION 1011
#endif // __GXX_ABI_VERSION

#ifndef __FLT_MIN_EXP__
#	define __FLT_MIN_EXP__ (-125)
#endif // __FLT_MIN_EXP__

#ifndef __FLT64X_HAS_QUIET_NAN__
#	define __FLT64X_HAS_QUIET_NAN__ 1
#endif // __FLT64X_HAS_QUIET_NAN__

#ifndef __INT_FAST64_TYPE__
#	define __INT_FAST64_TYPE__ long int
#endif // __INT_FAST64_TYPE__

#ifndef __FLT64_DENORM_MIN__
#	define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#endif // __FLT64_DENORM_MIN__

#ifndef __DBL_MIN__
#	define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#endif // __DBL_MIN__

#ifndef __FLT32X_EPSILON__
#	define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#endif // __FLT32X_EPSILON__

#ifndef __DECIMAL_BID_FORMAT__
#	define __DECIMAL_BID_FORMAT__ 1
#endif // __DECIMAL_BID_FORMAT__

#ifndef __FLT64_MIN_EXP__
#	define __FLT64_MIN_EXP__ (-1021)
#endif // __FLT64_MIN_EXP__

#ifndef __FLT64_MIN_10_EXP__
#	define __FLT64_MIN_10_EXP__ (-307)
#endif // __FLT64_MIN_10_EXP__

#ifndef __FLT64X_DECIMAL_DIG__
#	define __FLT64X_DECIMAL_DIG__ 21
#endif // __FLT64X_DECIMAL_DIG__

#ifndef __DEC128_MIN__
#	define __DEC128_MIN__ 1E-6143DL
#endif // __DEC128_MIN__

#ifndef __REGISTER_PREFIX__
#	define __REGISTER_PREFIX__   
#endif // !__REGISTER_PREFIX__

#ifndef __UINT16_MAX__
#	define __UINT16_MAX__ 0xffff  
#endif // !__UINT16_MAX__

#ifndef __DBL_HAS_DENORM__
#	define __DBL_HAS_DENORM__ 1  
#endif // !__DBL_HAS_DENORM__


#ifndef __FLT32_MIN__
#	define __FLT32_MIN__  1.17549435082228750796873653722224568e-38F32
#endif // !__FLT32_MIN__


#ifndef __UINT8_TYPE__
#	define __UINT8_TYPE__ unsigned char
#endif // !__UINT8_TYPE__

#ifndef __FLT_MANT_DIG__
#	define __FLT_MANT_DIG__ 24 
#endif // !__FLT_MANT_DIG__

#ifndef __DBL_HAS_DENORM__
#	define __DBL_HAS_DENORM__ 1  
#endif // !__DBL_HAS_DENORM__

#ifndef __LDBL_DECIMAL_DIG__
#	define __LDBL_DECIMAL_DIG__ 21  
#endif // !__LDBL_DECIMAL_DIG__

#ifndef __UINT64_C
#	define __UINT64_C(c) c ## UL
#endif // !__UINT64_C

#ifndef _STDC_PREDEF_H
#	define _STDC_PREDEF_H 1  
#endif // !_STDC_PREDEF_H

#ifndef __GCC_ATOMIC_INT_LOCK_FREE
#	define __GCC_ATOMIC_INT_LOCK_FREE 2  
#endif // !__GCC_ATOMIC_INT_LOCK_FREE

#ifndef __FLT128_MAX_EXP__
#	define __FLT128_MAX_EXP__ 16384  
#endif // !__FLT128_MAX_EXP__

#ifndef __FLT32_MANT_DIG__
#	define __FLT32_MANT_DIG__ 24  
#endif // !__FLT32_MANT_DIG__

#ifndef __FLOAT_WORD_ORDER__
#	define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__  
#endif // !__FLOAT_WORD_ORDER__

#ifndef __STDC_IEC_559_COMPLEX__
#	define __STDC_IEC_559_COMPLEX__ 1  
#endif // !__STDC_IEC_559_COMPLEX__

#ifndef __FLT128_HAS_DENORM__
#	define __FLT128_HAS_DENORM__ 1  
#endif // !__FLT128_HAS_DENORM__

#ifndef __FLT128_DIG__
#	define __FLT128_DIG__ 33  
#endif // !__FLT128_DIG__

#ifndef __SCHAR_WIDTH__
#	define __SCHAR_WIDTH__ 8  
#endif // !__SCHAR_WIDTH__

#ifndef __INT32_C
#	define __INT32_C(c) c  
#endif // !__INT32_C

#ifndef __DEC64_EPSILON__
#	define __DEC64_EPSILON__ 1E-15DD  
#endif // !__DEC64_EPSILON__

#ifndef __ORDER_PDP_ENDIAN__
#	define __ORDER_PDP_ENDIAN__ 3412  
#endif // !__ORDER_PDP_ENDIAN__

#ifndef __DEC128_MIN_EXP__
#	define __DEC128_MIN_EXP__ (-6142)
#endif // !__DEC128_MIN_EXP__

#ifndef __FLT32_MAX_10_EXP__
#	define __FLT32_MAX_10_EXP__ 38  
#endif // !__FLT32_MAX_10_EXP__

#ifndef __INT_FAST32_TYPE__
#	define __INT_FAST32_TYPE__ long int  
#endif // !__INT_FAST32_TYPE__

#ifndef __UINT_LEAST16_TYPE__
#	define __UINT_LEAST16_TYPE__ short unsigned int  
#endif // !__UINT_LEAST16_TYPE__

#ifndef __FLT64X_HAS_INFINITY__
#	define __FLT64X_HAS_INFINITY__ 1  
#endif // !__FLT64X_HAS_INFINITY__

#ifndef __INT16_MAX__
#	define __INT16_MAX__ 0x7fff  
#endif // !__INT16_MAX__

#ifndef __SIZE_TYPE__
#	define __SIZE_TYPE__ long unsigned int  
#endif // !__SIZE_TYPE__

#ifndef __FLT64X_DIG__
#	define __FLT64X_DIG__ 18
#endif // !__FLT64X_DIG__

#ifndef __INT8_TYPE__
#	define __INT8_TYPE__ signed char
#endif // !__INT8_TYPE__

#ifndef __GCC_ASM_FLAG_OUTPUTS__
#	define __GCC_ASM_FLAG_OUTPUTS__ 1
#endif // !__GCC_ASM_FLAG_OUTPUTS__

#ifndef __FLT_RADIX__
#	define __FLT_RADIX__ 2
#endif // !__FLT_RADIX__

#ifndef __INT_LEAST16_TYPE__
#	define __INT_LEAST16_TYPE__ short int
#endif // !__INT_LEAST16_TYPE__

#ifndef __LDBL_EPSILON__
#	define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#endif // !__LDBL_EPSILON__

#ifndef __UINTMAX_C
#	define __UINTMAX_C (c) c ## UL
#endif // !__UINTMAX_C

#ifndef __SIG_ATOMIC_MAX__
#	define __SIG_ATOMIC_MAX__ 0x7fffffff
#endif // !__SIG_ATOMIC_MAX__

#ifndef __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#	define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#endif // !__GCC_ATOMIC_WCHAR_T_LOCK_FREE

#ifndef __SIZEOF_PTRDIFF_T__
#	define __SIZEOF_PTRDIFF_T__ 8
#endif // !__SIZEOF_PTRDIFF_T__

#ifndef __FLT32X_MANT_DIG__
#	define __FLT32X_MANT_DIG__ 53
#endif // !__FLT32X_MANT_DIG__

#ifndef __UINT_FAST32_MAX__
#	define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#endif // !__UINT_FAST32_MAX__

#ifndef __FLT32X_MIN_EXP__
#	define __FLT32X_MIN_EXP__ (-1021)
#endif // !__FLT32X_MIN_EXP__

#ifndef __DEC32_SUBNORMAL_MIN__
#	define __DEC32_SUBNORMAL_MIN__ 0.000001E-95DF
#endif // !__DEC32_SUBNORMAL_MIN__

#ifndef __INT_FAST16_MAX__
#	define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#endif // !__INT_FAST16_MAX__

#ifndef __FLT64_DIG__
#	define __FLT64_DIG__ 15
#endif // !__FLT64_DIG__

#ifndef __UINT_LEAST64_TYPE__
#	define __UINT_LEAST64_TYPE__ long unsigned int
#endif // !__UINT_LEAST64_TYPE__

#ifndef __FLT_HAS_QUIET_NAN__
#	define __FLT_HAS_QUIET_NAN__ 1
#endif // !__FLT_HAS_QUIET_NAN__

#ifndef __FLT_MAX_10_EXP__
#	define __FLT_MAX_10_EXP__ 38
#endif // !__FLT_MAX_10_EXP__

#ifndef __LONG_MAX__
#	define __LONG_MAX__ 0x7fffffffffffffffL
#endif // !__LONG_MAX__

#ifndef __FLT64X_HAS_DENORM__
#	define __FLT64X_HAS_DENORM__ 1
#endif // !__FLT64X_HAS_DENORM__

#ifndef __DEC128_SUBNORMAL_MIN__
#	define __DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000000000001E-6143DL
#endif // !__DEC128_SUBNORMAL_MIN__

#ifndef __FLT_HAS_INFINITY__
#	define __FLT_HAS_INFINITY__ 1
#endif // !__FLT_HAS_INFINITY__

#ifndef __UINT_FAST16_TYPE__
#	define __UINT_FAST16_TYPE__ long unsigned int
#endif // !__UINT_FAST16_TYPE__

#ifndef __DEC64_MAX__
#	define __DEC64_MAX__ 9.999999999999999E384DD
#endif // !__DEC64_MAX__

#ifndef __INT_FAST32_WIDTH__
#	define __INT_FAST32_WIDTH__ 64
#endif // !__INT_FAST32_WIDTH__

#ifndef __CHAR8_TYPE__
#	define __CHAR8_TYPE__ char
#endif // !__CHAR8_TYPE__

#ifndef __CHAR16_TYPE__
#	define __CHAR16_TYPE__ short unsigned int
#endif // !__CHAR16_TYPE__

#ifndef __PRAGMA_REDEFINE_EXTNAME
#	define __PRAGMA_REDEFINE_EXTNAME 1
#endif // !__PRAGMA_REDEFINE_EXTNAME

#ifndef __SIZE_WIDTH__
#	define __SIZE_WIDTH__ 64
#endif // !__SIZE_WIDTH__

#ifndef __INT_LEAST16_MAX__
#	define __INT_LEAST16_MAX__ 0x7fff
#endif // !__INT_LEAST16_MAX__

#ifndef __DEC64_MANT_DIG__
#	define __DEC64_MANT_DIG__ 16
#endif // !__DEC64_MANT_DIG__

#ifndef __INT64_MAX__
#	define __INT64_MAX__ 0x7fffffffffffffffL
#endif // !__INT64_MAX__

#ifndef __UINT_LEAST32_MAX__
#	define __UINT_LEAST32_MAX__ 0xffffffffU
#endif // !__UINT_LEAST32_MAX__

#ifndef __FLT32_DENORM_MIN__
#	define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#endif // !__FLT32_DENORM_MIN__

#ifndef __GCC_ATOMIC_LONG_LOCK_FREE
#	define __GCC_ATOMIC_LONG_LOCK_FREE 2
#endif // !__GCC_ATOMIC_LONG_LOCK_FREE

#ifndef __SIG_ATOMIC_WIDTH__
#	define __SIG_ATOMIC_WIDTH__ 32
#endif // !__SIG_ATOMIC_WIDTH__

#ifndef __INT_LEAST64_TYPE__
#	define __INT_LEAST64_TYPE__ long int
#endif // !__INT_LEAST64_TYPE__

#ifndef __INT16_TYPE__
#	define __INT16_TYPE__ short int
#endif // !__INT16_TYPE__

#ifndef __INT_LEAST8_TYPE__
#	define __INT_LEAST8_TYPE__ signed char
#endif // !__INT_LEAST8_TYPE__

#ifndef __DEC32_MAX_EXP__
#	define __DEC32_MAX_EXP__ 97
#endif // !__DEC32_MAX_EXP__

#ifndef __INT_FAST8_MAX__
#	define __INT_FAST8_MAX__ 0x7f
#endif // !__INT_FAST8_MAX__

#ifndef __FLT128_MAX__
#	define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#endif // !__FLT128_MAX__

#ifndef __INTPTR_MAX__
#	define __INTPTR_MAX__ 0x7fffffffffffffffL
#endif // !__INTPTR_MAX__

#ifndef __FLT64_HAS_QUIET_NAN__
#	define __FLT64_HAS_QUIET_NAN__ 1
#endif // !__FLT64_HAS_QUIET_NAN__

#ifndef __FLT32_MIN_10_EXP__
#	define __FLT32_MIN_10_EXP__ (-37)
#endif // !__FLT32_MIN_10_EXP__

#ifndef __FLT32X_DIG__
#	define __FLT32X_DIG__ 15
#endif // !__FLT32X_DIG__

#ifndef __LDBL_MANT_DIG__
#	define __LDBL_MANT_DIG__ 64
#endif // !__LDBL_MANT_DIG__

#ifndef __DBL_HAS_QUIET_NAN__
#	define __DBL_HAS_QUIET_NAN__ 1
#endif // !__DBL_HAS_QUIET_NAN__

#ifndef __FLT64_HAS_INFINITY__
#	define __FLT64_HAS_INFINITY__ 1
#endif // !__FLT64_HAS_INFINITY__

#ifndef __FLT64X_MAX__
#	define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#endif // !__FLT64X_MAX__

#ifndef __SIG_ATOMIC_MIN__
#	define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#endif // !__SIG_ATOMIC_MIN__

#ifndef __INTPTR_TYPE__
#	define __INTPTR_TYPE__ long long
#endif // !__INTPTR_TYPE__

#ifndef __UINT16_TYPE__
#	define __UINT16_TYPE__ short unsigned int
#endif // !__UINT16_TYPE__

#ifndef __WCHAR_TYPE__
#	define __WCHAR_TYPE__ int
#endif // !__WCHAR_TYPE__

#ifndef __SIZEOF_FLOAT__
#	define __SIZEOF_FLOAT__ 4
#endif // !__SIZEOF_FLOAT__

#ifndef __UINTPTR_MAX__
#	define __UINTPTR_MAX__ 0xffffffffffffffffUL
#endif // !__UINTPTR_MAX__

#ifndef __INT_FAST64_WIDTH__
#	define __INT_FAST64_WIDTH__ 64
#endif // !__INT_FAST64_WIDTH__

#ifndef __DEC64_MIN_EXP__
#	define __DEC64_MIN_EXP__ (-382)
#endif // !__DEC64_MIN_EXP__

#ifndef __FLT32_DECIMAL_DIG__
#	define __FLT32_DECIMAL_DIG__ 9
#endif // !__FLT32_DECIMAL_DIG__

#ifndef __INT_FAST64_MAX__
#	define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#endif // !__INT_FAST64_MAX__

#ifndef __GCC_ATOMIC_TEST_AND_SET_TRUEVAL
#	define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#endif // !__GCC_ATOMIC_TEST_AND_SET_TRUEVAL

#ifndef __FLT_DIG__
#	define __FLT_DIG__ 6
#endif // !__FLT_DIG__

#ifndef __FLT32_HAS_INFINITY__
#	define __FLT32_HAS_INFINITY__ 1
#endif // !__FLT32_HAS_INFINITY__

#ifndef __FLT64X_MAX_EXP__
#	define __FLT64X_MAX_EXP__ 16384
#endif // !__FLT64X_MAX_EXP__

#ifndef __UINT_FAST64_TYPE__
#	define __UINT_FAST64_TYPE__ long unsigned int
#endif // !__UINT_FAST64_TYPE__

#ifndef __INT_MAX__
#	define __INT_MAX__ 0x7fffffff
#endif // !__INT_MAX__

#ifndef __INT64_TYPE__
#	define __INT64_TYPE__ long long int
#endif // !__INT64_TYPE__
#define __INT64_TYPE__ long long int

#ifndef __FLT_MAX_EXP__
#	define __FLT_MAX_EXP__ 128
#endif // !__FLT_MAX_EXP__

#ifndef __ORDER_BIG_ENDIAN__
#	define __ORDER_BIG_ENDIAN__ 4321
#endif // !__ORDER_BIG_ENDIAN__

#ifndef __DBL_MANT_DIG__
#	define __DBL_MANT_DIG__ 53
#endif // !__DBL_MANT_DIG__

#ifndef __SIZEOF_FLOAT128__
#	define __SIZEOF_FLOAT128__ 16
#endif // !__SIZEOF_FLOAT128__

#ifndef __INT_LEAST64_MAX__
#	define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#endif // !__INT_LEAST64_MAX__

#ifndef __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#	define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#endif // !__GCC_ATOMIC_CHAR16_T_LOCK_FREE

#ifndef __DEC64_MIN__
#	define __DEC64_MIN__ 1E-383DD
#endif // !__DEC64_MIN__

#ifndef __WINT_TYPE__
#	define __WINT_TYPE__ unsigned int
#endif // !__WINT_TYPE__

#ifndef __UINT_LEAST32_TYPE__
#	define __UINT_LEAST32_TYPE__ unsigned int
#endif // !__UINT_LEAST32_TYPE__

#ifndef __SIZEOF_SHORT__
#	define __SIZEOF_SHORT__ 2
#endif // !__SIZEOF_SHORT__

#ifndef __LDBL_MIN_EXP__
#	define __LDBL_MIN_EXP__ (-16381)
#endif // !__LDBL_MIN_EXP__

#ifndef __FLT64_MAX__
#	define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#endif // !__FLT64_MAX__

#ifndef __WINT_WIDTH__
#	define __WINT_WIDTH__ 32
#endif // !__WINT_WIDTH__

#ifndef __INT_LEAST8_MAX__
#	define __INT_LEAST8_MAX__ 0x7f
#endif // !__INT_LEAST8_MAX__

#ifndef __FLT32X_MAX_10_EXP__
#	define __FLT32X_MAX_10_EXP__ 308
#endif // !__FLT32X_MAX_10_EXP__

#ifndef __SIZEOF_INT128__
#	define __SIZEOF_INT128__ 16
#endif // !__SIZEOF_INT128__

#ifndef __LDBL_MAX_10_EXP__
#	define __LDBL_MAX_10_EXP__ 4932
#endif // !__LDBL_MAX_10_EXP__

#ifndef __ATOMIC_RELAXED
#	define __ATOMIC_RELAXED 0
#endif // !__ATOMIC_RELAXED

#ifndef __DBL_EPSILON__
#	define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#endif // !__DBL_EPSILON__

#ifndef __FLT128_MIN__
#	define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#endif // !__FLT128_MIN__

#ifndef __UINT8_C
#	define __UINT8_C(c) c
#endif // !__UINT8_C

#ifndef __FLT64_MAX_EXP__
#	define __FLT64_MAX_EXP__ 1024
#endif // !__FLT64_MAX_EXP__

#ifndef __INT_LEAST32_TYPE__
#	define __INT_LEAST32_TYPE__ int
#endif // !__INT_LEAST32_TYPE__

#ifndef __SIZEOF_WCHAR_T__
#	define __SIZEOF_WCHAR_T__ 4
#endif // !__SIZEOF_WCHAR_T__

#ifndef __UINT64_TYPE__
#	define __UINT64_TYPE__ long long unsigned int
#endif // !__UINT64_TYPE__

#ifndef __FLT128_HAS_QUIET_NAN__
#	define __FLT128_HAS_QUIET_NAN__ 1
#endif // !__FLT128_HAS_QUIET_NAN__

#ifndef __INT_FAST8_TYPE__
#	define __INT_FAST8_TYPE__ signed char
#endif // !__INT_FAST8_TYPE__

#ifndef __FLT64X_MIN__
#	define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#endif // !__FLT64X_MIN__

#ifndef __GNUC_STDC_INLINE__
#	define __GNUC_STDC_INLINE__ 1
#endif // !__GNUC_STDC_INLINE__

#ifndef __FLT64_HAS_DENORM__
#	define __FLT64_HAS_DENORM__ 1
#endif // !__FLT64_HAS_DENORM__

#ifndef __FLT32_EPSILON__
#	define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#endif // !__FLT32_EPSILON__

#ifndef __DBL_DECIMAL_DIG__
#	define __DBL_DECIMAL_DIG__ 17
#endif // !__DBL_DECIMAL_DIG__

#ifndef __STDC_UTF_32__
#	define __STDC_UTF_32__ 1
#endif // !__STDC_UTF_32__

#ifndef __INT_FAST8_WIDTH__
#	define __INT_FAST8_WIDTH__ 8
#endif // !__INT_FAST8_WIDTH__

#ifndef __DEC_EVAL_METHOD__
#	define __DEC_EVAL_METHOD__ 2
#endif // !__DEC_EVAL_METHOD__

#ifndef __FLT32X_MAX__
#	define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#endif // !__FLT32X_MAX__

#ifndef __UINT32_C
#	define __UINT32_C(c) c ## U
#endif // !__UINT32_C

#ifndef __INTMAX_MAX__
#	define __INTMAX_MAX__ 0x7fffffffffffffffL
#endif // !__INTMAX_MAX__

#ifndef __BYTE_ORDER__
#	define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#endif // !__BYTE_ORDER__

#ifndef __FLT_DENORM_MIN__
#	define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#endif // !__FLT_DENORM_MIN__

#ifndef __INT8_MAX__
#	define __INT8_MAX__ 0x7f
#endif // !__INT8_MAX__

#ifndef __LONG_WIDTH__
#	define __LONG_WIDTH__ 64
#endif // !__LONG_WIDTH__

#ifndef __UINT_FAST32_TYPE__
#	define __UINT_FAST32_TYPE__ long unsigned int
#endif // !__UINT_FAST32_TYPE__

#ifndef __CHAR32_TYPE__
#	define __CHAR32_TYPE__ unsigned int
#endif // !__CHAR32_TYPE__

#ifndef __FLT_MAX__
#	define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#endif // !__FLT_MAX__

#ifndef __INT32_TYPE__
#	define __INT32_TYPE__ int
#endif // !__INT32_TYPE__

#ifndef __SIZEOF_DOUBLE__
#	define __SIZEOF_DOUBLE__ 8
#endif // !__SIZEOF_DOUBLE__

#ifndef __FLT_MIN_10_EXP__
#	define __FLT_MIN_10_EXP__ (-37)
#endif // !__FLT_MIN_10_EXP__

#ifndef __FLT64_MIN__
#	define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#endif // !__FLT64_MIN__

#ifndef __INT_LEAST32_WIDTH__
#	define __INT_LEAST32_WIDTH__ 32
#endif // !__INT_LEAST32_WIDTH__

#ifndef __INTMAX_TYPE__
#	define __INTMAX_TYPE__ long int
#endif // !__INTMAX_TYPE__

#ifndef __DEC128_MAX_EXP__
#	define __DEC128_MAX_EXP__ 6145
#endif // !__DEC128_MAX_EXP__

#ifndef __FLT32X_HAS_QUIET_NAN__
#	define __FLT32X_HAS_QUIET_NAN__ 1
#endif // !__FLT32X_HAS_QUIET_NAN__

#ifndef __ATOMIC_CONSUME
#	define __ATOMIC_CONSUME 1
#endif // !__ATOMIC_CONSUME

#ifndef __INT_FAST16_WIDTH__
#	define __INT_FAST16_WIDTH__ 64
#endif // !__INT_FAST16_WIDTH__

#ifndef __UINTMAX_MAX__
#	define __UINTMAX_MAX__ 0xffffffffffffffffUL
#endif // !__UINTMAX_MAX__

#ifndef __DEC32_MANT_DIG__
#	define __DEC32_MANT_DIG__ 7
#endif // !__DEC32_MANT_DIG__

#ifndef __FLT32X_DENORM_MIN__
#	define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#endif // !__FLT32X_DENORM_MIN__

#ifndef __DBL_MAX_10_EXP__
#	define __DBL_MAX_10_EXP__ 308
#endif // !__DBL_MAX_10_EXP__

#ifndef __LDBL_DENORM_MIN__
#	define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#endif // !__LDBL_DENORM_MIN__

#ifndef __INT16_C
#	define __INT16_C(c) c
#endif // !__INT16_C

#ifndef __PTRDIFF_TYPE__
#	define __PTRDIFF_TYPE__ long int
#endif // !__PTRDIFF_TYPE__

#ifndef __ATOMIC_SEQ_CST
#	define __ATOMIC_SEQ_CST 5
#endif // !__ATOMIC_SEQ_CST

#ifndef __UINT32_TYPE__
#	define __UINT32_TYPE__ unsigned int
#endif // !__UINT32_TYPE__

#ifndef __FLT32X_MIN_10_EXP__
#	define __FLT32X_MIN_10_EXP__ (-307)
#endif // !__FLT32X_MIN_10_EXP__

#ifndef __UINTPTR_TYPE__
#	define __UINTPTR_TYPE__ long unsigned int
#endif // !__UINTPTR_TYPE__

#ifndef __DEC64_SUBNORMAL_MIN__
#	define __DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD
#endif // !__DEC64_SUBNORMAL_MIN__

#ifndef __DEC128_MANT_DIG__
#	define __DEC128_MANT_DIG__ 34
#endif // !__DEC128_MANT_DIG__

#ifndef __LDBL_MIN_10_EXP__
#	define __LDBL_MIN_10_EXP__ (-4931)
#endif // !__LDBL_MIN_10_EXP__

#ifndef __FLT128_EPSILON__
#	define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#endif // !__FLT128_EPSILON__

#ifndef __SIZEOF_LONG_LONG__
#	define __SIZEOF_LONG_LONG__ 8
#endif // !__SIZEOF_LONG_LONG__

#ifndef __FLT128_DECIMAL_DIG__
#	define __FLT128_DECIMAL_DIG__ 36
#endif // !__FLT128_DECIMAL_DIG__

#ifndef __GCC_ATOMIC_LLONG_LOCK_FREE
#	define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#endif // !__GCC_ATOMIC_LLONG_LOCK_FREE

#ifndef __FLT32X_MIN__
#	define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#endif // !__FLT32X_MIN__

#ifndef __LDBL_DIG__
#	define __LDBL_DIG__ 18
#endif // !__LDBL_DIG__

#ifndef __FLT_DECIMAL_DIG__
#	define __FLT_DECIMAL_DIG__ 9
#endif // !__FLT_DECIMAL_DIG__

#ifndef __UINT_FAST16_MAX__
#	define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#endif // !__UINT_FAST16_MAX__

#ifndef __GCC_ATOMIC_SHORT_LOCK_FREE
#	define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#endif // !__GCC_ATOMIC_SHORT_LOCK_FREE

#ifndef __INT_LEAST64_WIDTH__
#	define __INT_LEAST64_WIDTH__ 64
#endif // !__INT_LEAST64_WIDTH__

#ifndef __UINT_FAST8_TYPE__
#	define __UINT_FAST8_TYPE__ unsigned char
#endif // !__UINT_FAST8_TYPE__

#ifndef __ATOMIC_ACQ_REL
#	define __ATOMIC_ACQ_REL 4
#endif // !__ATOMIC_ACQ_REL

#ifndef __ATOMIC_RELEASE
#	define __ATOMIC_RELEASE 3
#endif // !__ATOMIC_RELEASE

#ifndef __WORDSIZE
#	if ( defined( __x86_64__ ) || defined( _WIN64 ) ) && !defined __ILP32__
#		define __WORDSIZE	64
#	else
#		define __WORDSIZE	32
#		define __WORDSIZE32_SIZE_ULONG		0
#		define __WORDSIZE32_PTRDIFF_LONG	0
#	endif
#	if ( defined( __x86_64__ ) || defined( _WIN64 ) )
#		define __WORDSIZE_TIME64_COMPAT32	1
	/*		Both x86-64 and x32 use the 64-bit system call interface.  */
#		define __SYSCALL_WORDSIZE		64
#	else
#		define __WORDSIZE_TIME64_COMPAT32	0
#	endif
#endif // __WORDSIZE

#ifdef __cplusplus
}
#endif // __cplusplus


// c++ defs
//#ifndef __cplusplus
//extern "C++" {
//#endif // __cplusplus

#	ifndef __cpp_attributes
#		define __cpp_attributes 200809L
#	endif // !__cpp_attributes
#	ifndef __cpp_aggregate_nsdmi
#		define __cpp_aggregate_nsdmi 201304L
#	endif // !__cpp_aggregate_nsdmi
#	ifndef __cpp_static_assert
#		define __cpp_static_assert 200410L
#	endif // !__cpp_static_assert
#	ifndef __cpp_binary_literals
#		define __cpp_binary_literals 201304L
#	endif // !__cpp_binary_literals
#	ifndef __cpp_variadic_templates
#		define __cpp_variadic_templates 200704L
#	endif // !__cpp_variadic_templates
#	ifndef __cpp_variable_templates
#		define __cpp_variable_templates 201304L
#	endif // !__cpp_variable_templates
#	ifndef __cpp_threadsafe_static_init
#		define __cpp_threadsafe_static_init 200806L
#	endif // !__cpp_threadsafe_static_init
#	ifndef __cpp_delegating_constructors
#		define __cpp_delegating_constructors 200604L
#	endif // !__cpp_delegating_constructors
#	ifndef __cpp_raw_strings
#		define __cpp_raw_strings 200710L
#	endif // !__cpp_raw_strings
#	ifndef __cpp_ref_qualifiers
#		define __cpp_ref_qualifiers 200710L
#	endif // !__cpp_ref_qualifiers
#	ifndef __cpp_rvalue_references
#		define __cpp_rvalue_references 200610L
#	endif // !__cpp_rvalue_references
#	ifndef __cpp_rvalue_reference
#		define __cpp_rvalue_reference 200610L
#	endif // !__cpp_rvalue_reference
#	ifndef __cpp_nsdmi
#		define __cpp_nsdmi 200809L
#	endif // !__cpp_nsdmi
#	ifndef __cpp_initializer_lists
#		define __cpp_initializer_lists 200806L
#	endif // !__cpp_initializer_lists
#	ifndef __cpp_hex_float
#		define __cpp_hex_float 201603L
#	endif // !__cpp_hex_float
#	ifndef __cpp_lambdas
#		define __cpp_lambdas 200907L
#	endif // !__cpp_lambdas
#	ifndef __cpp_unicode_characters
#		define __cpp_unicode_characters 200704L
#	endif // !__cpp_unicode_characters
#	ifndef __cpp_decltype_auto
#		define __cpp_decltype_auto 201304L
#	endif // !__cpp_decltype_auto
#	ifndef __cpp_rtti
#		define __cpp_rtti 199711L
#	endif // !__cpp_rtti
#	ifndef __cpp_digit_separators
#		define __cpp_digit_separators 201309L
#	endif // !__cpp_digit_separators
#	ifndef __cpp_sized_deallocation
#		define __cpp_sized_deallocation 201309L
#	endif // !__cpp_sized_deallocation
#	ifndef __cpp_unicode_literals
#		define __cpp_unicode_literals 200710L
#	endif // !__cpp_unicode_literals
#	ifndef __cpp_range_based_for
#		define __cpp_range_based_for 200907L
#	endif // !__cpp_range_based_for
#	ifndef __cpp_return_type_deduction
#		define __cpp_return_type_deduction 201304L
#	endif // !__cpp_return_type_deduction
#	ifndef __cpp_decltype
#		define __cpp_decltype 200707L
#	endif // !__cpp_decltype
#	ifndef __cpp_inheriting_constructors
#		define __cpp_inheriting_constructors 201511L
#	endif // !__cpp_inheriting_constructors
#	ifndef __cpp_runtime_arrays
#		define __cpp_runtime_arrays 198712L
#	endif // !__cpp_runtime_arrays
#	ifndef __cpp_alias_templates
#		define __cpp_alias_templates 200704L
#	endif // !__cpp_alias_templates
#	ifndef __cpp_constexpr
#		define __cpp_constexpr 201304L
#	endif // !__cpp_constexpr
#	ifndef __cpp_exceptions
#		define __cpp_exceptions 199711L
#	endif // !__cpp_exceptions
#	ifndef __cpp_generic_lambdas
#		define __cpp_generic_lambdas 201304L
#	endif // !__cpp_generic_lambdas
#	ifndef __cpp_user_defined_literals
#		define __cpp_user_defined_literals 200809L
#	endif // !__cpp_user_defined_literals
#	ifndef __cpp_init_captures
#		define __cpp_init_captures 201304L
#	endif // !__cpp_init_captures
	// c++ defs

//#ifndef __cplusplus
//}
//#endif // __cplusplus


#endif // __HAS_JCC_STANDARD_DEFINITIONS__
