#ifndef __HAS_JCC_OFFSET__
#define __HAS_JCC_OFFSET__  1  
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__

#include <jcc/stringize.h>
#include <jcc/language.h>
#include <jcc/compiler_prereq.h>
#include <jcc/builtins.h>

/* syntax list	:
__jattribute__((packed))
__jattribute__((__packed__))
__jattribute__((unaligned))
__jattribute__((__unaligned))
__jattribute__((__unaligned__))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_unaligned )
#	if defined(__has_feature) && __has_feature( cxx_unaligned )
#		define __JCC_ATTRIBUTE_DISPATCH_unaligned __unaligned
#	elif __JCC_MSVC_PREREQ(12,0) && !defined(__GNUC__)
#		define __JCC_ATTRIBUTE_DISPATCH_unaligned __unaligned
#	elif __JCC_MSVC_PREREQ(1,0) && !defined(__GNUC__)
#		define __JCC_ATTRIBUTE_DISPATCH_unaligned __declspec(align(1))
#	elif defined( __has_attribute ) && __has_attribute(__packed__)
#		define __JCC_ATTRIBUTE_DISPATCH_nothrow  __attribute__((__packed__))
#	elif defined( __has_attribute ) && __has_attribute(packed)
#		define __JCC_ATTRIBUTE_DISPATCH_nothrow  __attribute__((packed))
#	elif defined( __has_attribute ) && __has_attribute(aligned)
#		define __JCC_ATTRIBUTE_DISPATCH_unaligned  __attribute__((aligned(1)))
#	elif defined( __has_attribute ) && __has_attribute(align)
#		define __JCC_ATTRIBUTE_DISPATCH_unaligned  __attribute__((align(1)))
#	elif __JCC_GNUC_PREREQ(3,1) || __JCC_CLANG_PREREQ(4,0)
#		define __JCC_ATTRIBUTE_DISPATCH_unaligned __attribute__((aligned(1)))
#	elif __JCC_HAS_CPP_ATTRIBUTE(unaligned)
#		define __JCC_ATTRIBUTE_DISPATCH_unaligned [[unaligned]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_unaligned 
#	endif // __JCC_HAS_CPP_ATTRIBUTE 
#		define __JCC_ATTRIBUTE_DISPATCH_packed				__JCC_ATTRIBUTE_DISPATCH_unaligned // alias
#		define __JCC_ATTRIBUTE_DISPATCH___packed__			__JCC_ATTRIBUTE_DISPATCH_unaligned // alias
#		define __JCC_ATTRIBUTE_DISPATCH___unaligned			__JCC_ATTRIBUTE_DISPATCH_unaligned // alias
#		define __JCC_ATTRIBUTE_DISPATCH___unaligned__		__JCC_ATTRIBUTE_DISPATCH_unaligned // alias
#		if !defined( __unaligned ) && !__has_builtin(__unaligned) && !__has_feature( cxx_unaligned ) && !__JCC_MSVC_PREREQ(12,0)
#			define __unaligned								__JCC_ATTRIBUTE_DISPATCH_unaligned // alias
#		endif // __unaligned
#endif // _MSVC_STYLE_RESTRICT_DEFINED

/* syntax list	:
 int a = __jattribute__((countof(ARRAY)))
 int a = __jattribute__((__countof(ARRAY)))
 int a = __jattribute__((__countof__(ARRAY)))
 int a = __jattribute__((count(ARRAY)))
 int a = __jattribute__((__count(ARRAY)))
 int a = __jattribute__((__count__(ARRAY)))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_countof )
#	ifdef __cplusplus
extern "C++" {
	template <typename CountType, size_t SizeOfArray>
	char(*__jcc_countof_helper(__unaligned CountType(&Array)[SizeOfArray]))[SizeOfArray]{}
#		define __JCC_ATTRIBUTE_DISPATCH_countof(ARRAY) (sizeof(*__jcc_countof_helper(ARRAY)) + 0)
}
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_countof(ARRAY) (sizeof(ARRAY) / sizeof(ARRAY[0]))
#	endif
#		define __JCC_ATTRIBUTE_DISPATCH___countof(ARRAY)		__JCC_ATTRIBUTE_DISPATCH_countof(ARRAY) // alias
#		define __JCC_ATTRIBUTE_DISPATCH___countof__(ARRAY)		__JCC_ATTRIBUTE_DISPATCH_countof(ARRAY) // alias
#		define __JCC_ATTRIBUTE_DISPATCH_count(ARRAY)			__JCC_ATTRIBUTE_DISPATCH_countof(ARRAY) // alias
#		define __JCC_ATTRIBUTE_DISPATCH___count__(ARRAY)		__JCC_ATTRIBUTE_DISPATCH_countof(ARRAY) // alias
#		define __JCC_ATTRIBUTE_DISPATCH___count(ARRAY)			__JCC_ATTRIBUTE_DISPATCH_countof(ARRAY) // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_countof



//#if __jattribute__((has_type(TYPE))) 
// must use a defined macro when defining the given type which uses the types name in the macro ie.( #define MYTYPE_DEFINED 1 )
#if !defined( __JCC_ATTRIBUTE_DISPATCH_has_type ) 
#	define __JCC_ATTRIBUTE_DISPATCH_has_type(TYPE) ( ( defined( TYPE ) ? 1 : 0 ) || TYPE ## _defined ||				\
	TYPE ## defined || TYPE ## _is_defined || TYPE ## _IS_DEFINED || TYPE ## _DEFINED || TYPE ## DEFINED			\
	|| __ ## TYPE ## _defined || __ ## TYPE ## defined || __ ## TYPE ## _is_defined  || __ ## TYPE ## _IS_DEFINED	\
	|| __ ## TYPE ## _DEFINED || __ ## TYPE ## DEFINED || _ ## TYPE ## _defined || _ ## TYPE ## defined				\
	|| _ ## TYPE ## _is_defined || _ ## TYPE ## _IS_DEFINED || _ ## TYPE ## _DEFINED || _ ## TYPE ## DEFINED) 
#endif // __JCC_ATTRIBUTE_DISPATCH_has_type


#if __JCC_COMPONENT_VERSION__ <= 201402L && __JCC_COMPONENT_VERSION__ > 0 && defined(__cplusplus) // 2017 on up has depreciates the header
#	if defined(__has_include) 
#		if __has_include( <cstdalign> )
#			include <cstdalign>
#		elif __has_include( "cstdalign" )
#			include "cstdalign"
#		else
#			define __JCC_USE_COMPILER_ALIGNMENT_ATTRIBUTES__ 1
#		endif // <cstdalign>
#	else // __has_include
#		define __JCC_USE_COMPILER_ALIGNMENT_ATTRIBUTES__ 1
#	endif // __has_include
#	ifndef __JCC_USE_COMPILER_ALIGNMENT_ATTRIBUTES__
#		if !defined(__alignas_is_defined) || !defined(__alignof_is_defined) 
#			define __JCC_USE_COMPILER_ALIGNMENT_ATTRIBUTES__ 1
#		endif // !defined(__alignas_is_defined) && !defined(__alignof_is_defined)
#	endif // __JCC_USE_COMPILER_ALIGNMENT_ATTRIBUTES__
#elif !defined( __cplusplus ) || !defined( __JCC_COMPONENT_VERSION__ ) || __JCC_COMPONENT_VERSION__ <= 0
#	define __JCC_USE_COMPILER_ALIGNMENT_ATTRIBUTES__ 1
#endif // __JCC_COMPONENT_VERSION__ <= 201402L
/*
typedef struct __jattribute__((alignas(16))) _Bar
{
	int i;											// 4 bytes
	int n;											// 4 bytes
	__jattribute__((alignas(4))) char arr[3];		// 4 bytes
	short s;										// 2 bytes
} Bar;												// 16 bytes

syntax list	:
__jattribute__((alignas(ALIGNMENT))) struct Bar{ };
__jattribute__((aligned(ALIGNMENT))) struct Bar{ };
__jattribute__((align(ALIGNMENT))) struct Bar{ };
int a = __jattribute__((alignof(Bar)));
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_align ) && !defined( __JCC_ATTRIBUTE_DISPATCH_aligned ) && !defined( __JCC_ATTRIBUTE_DISPATCH_alignas )
#   if ( __JCC_MSVC_PREREQ(19,0) || __JCC_GNUC_PREREQ(4,8) || __JCC_CLANG_PREREQ(3,0) || __JCC_INTEL_PREREQ(15,0) ) && !defined(__JCC_USE_COMPILER_ALIGNMENT_ATTRIBUTES__)
#       define __JCC_ATTRIBUTE_DISPATCH_align(ALIGNMENT) alignas(ALIGNMENT)
#   elif defined(_MSC_VER) 
#       define __JCC_ATTRIBUTE_DISPATCH_align(ALIGNMENT) __declspec(align(ALIGNMENT))
#   elif defined(__clang__) || defined(__GNUC__) || defined(__GNUG__)
#       define __JCC_ATTRIBUTE_DISPATCH_align(ALIGNMENT) __attribute__((aligned(ALIGNMENT)))
#   elif __JCC_MSVC_PREREQ(19,0) || __JCC_GNUC_PREREQ(4,8) || __JCC_CLANG_PREREQ(3,0) || __JCC_INTEL_PREREQ(15,0)
#       define __JCC_ATTRIBUTE_DISPATCH_align(ALIGNMENT) alignas(ALIGNMENT)
#   else // _MSC_VER
#       define __JCC_ATTRIBUTE_DISPATCH_align(ALIGNMENT) 
#   endif //_MSC_VER
#		define __JCC_ATTRIBUTE_DISPATCH_aligned(ALIGNMENT) __JCC_ATTRIBUTE_DISPATCH_align(ALIGNMENT) // alias
#		define __JCC_ATTRIBUTE_DISPATCH_alignas(ALIGNMENT) __JCC_ATTRIBUTE_DISPATCH_align(ALIGNMENT) // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_align


/* syntax list	:
int a = __jattribute__((alignof(Bar)));
int a = __jattribute__((__alignof(Bar)));
int a = __jattribute__((__alignof__(Bar)));
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_alignof )
#   if ( __JCC_MSVC_PREREQ(19,0) || __JCC_GNUC_PREREQ(4,5) || __JCC_CLANG_PREREQ(2,9) || __JCC_INTEL_PREREQ(15,0) ) && !defined(__JCC_USE_COMPILER_ALIGNMENT_ATTRIBUTES__)
#       define __JCC_ATTRIBUTE_DISPATCH_alignof(TYPE) alignof(TYPE)
#   elif defined(_MSC_VER) 
#       define __JCC_ATTRIBUTE_DISPATCH_alignof(TYPE) __alignof(TYPE)
#   elif defined(__clang__) || defined(__GNUC__) || defined(__GNUG__)
#       define __JCC_ATTRIBUTE_DISPATCH_alignof(TYPE) __alignof__(TYPE)
#   elif __JCC_MSVC_PREREQ(19,0) || __JCC_GNUC_PREREQ(4,8) || __JCC_CLANG_PREREQ(3,0) || __JCC_INTEL_PREREQ(15,0)
#       define __JCC_ATTRIBUTE_DISPATCH_alignof(ALIGNMENT) alignof(TYPE)
#   else // _MSC_VER
#       define __JCC_ATTRIBUTE_DISPATCH_alignof(ALIGNMENT) 
#   endif //_MSC_VER
#   define __JCC_ATTRIBUTE_DISPATCH___alignof(ALIGNMENT)	__JCC_ATTRIBUTE_DISPATCH_alignof(ALIGNMENT)  // alias
#   define __JCC_ATTRIBUTE_DISPATCH___alignof__(ALIGNMENT)	__JCC_ATTRIBUTE_DISPATCH_alignof(ALIGNMENT)  // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_align


/* syntax list	:
 int a = __jattribute__((offsetof(type,member)))
 int a = __jattribute__((__offsetof(type,member)))
 int a = __jattribute__((__offsetof__(type,member)))
 int a = __jattribute__((offset(type,member)))
 int a = __jattribute__((__offset(type,member)))
 int a = __jattribute__((__offset__(type,member)))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_offsetof )
#	if defined(_MSC_VER) && !defined(__clang__)
#		ifdef __cplusplus
/*			determins the offset of a given member of a given type			*/
#			define __JCC_ATTRIBUTE_DISPATCH_offsetof(type,member) ((::size_t)&reinterpret_cast<char const volatile&>((((type*)0)->member)))
#		else
/*			determins the offset of a given member of a given type			*/
#			define __JCC_ATTRIBUTE_DISPATCH_offsetof(type, member) ((size_t)&(((type*)0)->member))
#		endif
#	elif defined(__clang__) || defined(__GNUC__)
/*			determins the offset of a given member of a given type			*/
#		define __JCC_ATTRIBUTE_DISPATCH_offsetof(type, member) __builtin_offsetof(type,member)
#	else
/*			determins the offset of a given member of a given type			*/
#		define __JCC_ATTRIBUTE_DISPATCH_offsetof(type, member) ((size_t)&(((type*)0)->member))
#	endif // __JCC_HAS_CPP_ATTRIBUTE 
#		define __JCC_ATTRIBUTE_DISPATCH___offsetof__(type,member)			__JCC_ATTRIBUTE_DISPATCH_offsetof(type,member) // alias
#		define __JCC_ATTRIBUTE_DISPATCH___offsetof(type,member)				__JCC_ATTRIBUTE_DISPATCH_offsetof(type,member) // alias
#		define __JCC_ATTRIBUTE_DISPATCH___offset__(type,member)				__JCC_ATTRIBUTE_DISPATCH_offsetof(type,member) // alias
#		define __JCC_ATTRIBUTE_DISPATCH___offset(type,member)				__JCC_ATTRIBUTE_DISPATCH_offsetof(type,member) // alias
#		define __JCC_ATTRIBUTE_DISPATCH_offset(type,member)					__JCC_ATTRIBUTE_DISPATCH_offsetof(type,member) // alias
#endif // _MSVC_STYLE_RESTRICT_DEFINED


/* syntax list	:
 int a = 5;  __jattribute__((__typeof__(a))) b = 6;
 int a = 5;  __jattribute__((typeof(a))) b = 6;
 int a = 5;  __jattribute__((__decltype__(a))) b = 6;
 int a = 5;  __jattribute__((decltype(a))) b = 6;
*/
#if ( __JCC_ATTRIBUTE_DISPATCH_cpp_version( 2011 ) || __JCC_ATTRIBUTE_DISPATCH_c_version( 1989 )  )
#		define __JCC_ATTRIBUTE_DISPATCH_typeof(object)              decltype(object)    // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH___typeof__(object)          decltype(object)    // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH_decltype(object)            decltype(object)    // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH___decltype__(object)        decltype(object)    // returns the type of any object
#elif ( __JCC_GNUC_PREREQ (4,9) || __JCC_CLANG_PREREQ(3,4) )
#		define __JCC_ATTRIBUTE_DISPATCH_typeof(object)              decltype(object)    // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH___typeof__(object)          decltype(object)    // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH_decltype(object)            decltype(object)    // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH___decltype__(object)        decltype(object)    // returns the type of any object
#elif  ( __JCC_MSVC_PREREQ (12,0) )
#		define __JCC_ATTRIBUTE_DISPATCH_typeof(object)              decltype(object)    // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH___typeof__(object)          decltype(object)    // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH_decltype(object)            decltype(object)    // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH___decltype__(object)        decltype(object)    // returns the type of any object
#elif ( __JCC_GNUC_PREREQ (2,95) || __JCC_CLANG_PREREQ(3,0) )
#		define __JCC_ATTRIBUTE_DISPATCH_typeof(object)              __typeof__(object)  // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH___typeof__(object)          __typeof__(object)  // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH_decltype(object)            __typeof__(object)  // returns the type of any object
#		define __JCC_ATTRIBUTE_DISPATCH___decltype__(object)        __typeof__(object)  // returns the type of any object
#else
#		define __JCC_ATTRIBUTE_DISPATCH_typeof(object)                  \
#error "must use a compatible compiler"
#		define __JCC_ATTRIBUTE_DISPATCH___typeof__(object)              \
#error "must use a compatible compiler"
#		define __JCC_ATTRIBUTE_DISPATCH_decltype(object)                \
#error "must use a compatible compiler"
#		define __JCC_ATTRIBUTE_DISPATCH___decltype__(object)            \
#error "must use a compatible compiler"
#endif

#endif // __HAS_JCC_OFFSET__
