#ifndef __HAS_JCC_CRT_PACKING__
#define __HAS_JCC_CRT_PACKING__  1  
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__

#include <jcc/stringize.h>
#include <jcc/optimize.h>
#include <jcc/builtins.h>
#include <jcc/pragma.h>
#include <jcc/visibility.h>
//
//#ifndef JCC_ASSERT_H_DECLS_IGNORE_NDEBUG
//#	define JCC_ASSERT_H_DECLS_IGNORE_NDEBUG		1
//#endif // __JCC_CRT_PACKING

#ifndef __JCC_CRT_PACKING
#	define __JCC_CRT_PACKING					8
#	define __JCC_PACKING						8
#endif // __JCC_CRT_PACKING

#ifndef __JCC_CRT_WARNING_LEVEL
#	define __JCC_CRT_WARNING_LEVEL				3
#	define __JCC_WARNING_LEVEL					3
#endif // __JCC_CRT_WARNING_LEVEL

/* syntax list	:
__jattribute__((CRT_BEGIN_C_HEADER(__JCC_CRT_PACKING)))
__jattribute__((CRT_END_C_HEADER))
*/
#if defined __cplusplus
#	define __JCC_ATTRIBUTE_DISPATCH_CRT_BEGIN_C_HEADER				\
		__JCC_PRAGMA(pack(push, __JCC_CRT_PACKING))					\
		extern "C" {

#	define __JCC_ATTRIBUTE_DISPATCH_CRT_END_C_HEADER				\
		}															\
		__JCC_PRAGMA(pack(pop))

#elif defined( __midl ) && defined( _MSC_VER )

#	define __JCC_ATTRIBUTE_DISPATCH_CRT_BEGIN_C_HEADER				\
		cpp_quote("__pragma(pack(push, __JCC_CRT_PACKING))")		\
		cpp_quote("extern \"C\" {")

#	define __JCC_ATTRIBUTE_DISPATCH_CRT_END_C_HEADER				\
		cpp_quote("}")												\
		cpp_quote("__pragma(pack(pop))")

#elif defined( __midl ) && !defined( _MSC_VER )

#	define __JCC_ATTRIBUTE_DISPATCH_CRT_BEGIN_C_HEADER				\
		cpp_quote("_Pragma(\"pack(push, __JCC_CRT_PACKING)\")")		\
		cpp_quote("extern \"C\" {")

#	define __JCC_ATTRIBUTE_DISPATCH_CRT_END_C_HEADER				\
		cpp_quote("}")												\
		cpp_quote("_Pragma(\"pack(pop)\")")
#else
#	define __JCC_ATTRIBUTE_DISPATCH_CRT_BEGIN_C_HEADER __JCC_PRAGMA(pack(push, __JCC_CRT_PACKING))
#	define __JCC_ATTRIBUTE_DISPATCH_CRT_END_C_HEADER __JCC_PRAGMA(pack(pop))
#endif


/* syntax list	:
__jattribute__((CRT_BEGIN_CPP_HEADER(__JCC_CRT_PACKING)))
__jattribute__((CRT_END_CPP_HEADER))
*/
#if defined __cplusplus
#	define __JCC_ATTRIBUTE_DISPATCH_CRT_BEGIN_CPP_HEADER			\
		__JCC_PRAGMA(pack(push, __JCC_CRT_PACKING))					\
		extern "C++" {

#	define __JCC_ATTRIBUTE_DISPATCH_CRT_END_CPP_HEADER				\
		}															\
		__JCC_PRAGMA(pack(pop))

#elif defined( __midl ) && defined( _MSC_VER )

#	define __JCC_ATTRIBUTE_DISPATCH_CRT_BEGIN_CPP_HEADER			\
		cpp_quote("__pragma(pack(push, __JCC_CRT_PACKING))")		\
		cpp_quote("extern \"C++\" {")

#	define __JCC_ATTRIBUTE_DISPATCH_CRT_END_CPP_HEADER				\
		cpp_quote("}")												\
		cpp_quote("__pragma(pack(pop))")

#elif defined( __midl ) && !defined( _MSC_VER )

#	define __JCC_ATTRIBUTE_DISPATCH_CRT_BEGIN_CPP_HEADER			\
		cpp_quote("_Pragma(\"pack(push, __JCC_CRT_PACKING)\")")		\
		cpp_quote("extern \"C++\" {")

#	define __JCC_ATTRIBUTE_DISPATCH_CRT_END_CPP_HEADER				\
		cpp_quote("}")												\
		cpp_quote("_Pragma(\"pack(pop)\")")
#else
#	define __JCC_ATTRIBUTE_DISPATCH_CRT_BEGIN_CPP_HEADER __JCC_PRAGMA(pack(push, __JCC_CRT_PACKING))
#	define __JCC_ATTRIBUTE_DISPATCH_CRT_END_CPP_HEADER __JCC_PRAGMA(pack(pop))
#endif

//__jattribute__((crt_header_begin( __JCC_CRT_PACKING , __JCC_CRT_WARNING_LEVEL ))) 
#ifndef __JCC_ATTRIBUTE_DISPATCH_crt_header_begin
#	define     __JCC_ATTRIBUTE_DISPATCH_crt_header_begin __pragma_once__	__JCC_ATTRIBUTE_DISPATCH_CRT_BEGIN_C_HEADER						\
			 __JCC_ATTRIBUTE_DISPATCH_push_pack( __JCC_CRT_PACKING )  __JCC_ATTRIBUTE_DISPATCH_warning_push( __JCC_CRT_WARNING_LEVEL )	\
			 __JCC_ATTRIBUTE_DISPATCH_disable_warnings  __JCC_ATTRIBUTE_DISPATCH_push_macro( new )											\
			__JCC_ATTRIBUTE_DISPATCH_system_header __JCC_ATTRIBUTE_DISPATCH_file_optimize( O3, on )											\
			__JCC_ATTRIBUTE_DISPATCH_file_optimize( Ofast, on )			
#endif // __JCC_ATTRIBUTE_DISPATCH_crt_header_begin

//__jattribute__((crt_header_end)) 
#ifndef __JCC_ATTRIBUTE_DISPATCH_crt_header_end
#	define     __JCC_ATTRIBUTE_DISPATCH_crt_header_end __JCC_ATTRIBUTE_DISPATCH_CRT_END_C_HEADER							\
			__JCC_ATTRIBUTE_DISPATCH_pop_macro( new )																		\
			__JCC_ATTRIBUTE_DISPATCH_restore_warnings __JCC_ATTRIBUTE_DISPATCH_warning_pop									\
			__JCC_ATTRIBUTE_DISPATCH_pop_pack 																				\
			__JCC_ATTRIBUTE_DISPATCH_file_optimize( O3, off ) __JCC_ATTRIBUTE_DISPATCH_file_optimize( Ofast, off )
#endif // __JCC_ATTRIBUTE_DISPATCH_crt_header_end

//__jattribute__((crt_cpp_header_begin( __JCC_CRT_PACKING , __JCC_CRT_WARNING_LEVEL ))) 
#ifndef __JCC_ATTRIBUTE_DISPATCH_crt_cpp_header_begin
#	define     __JCC_ATTRIBUTE_DISPATCH_crt_cpp_header_begin  __pragma_once__															\
				__JCC_ATTRIBUTE_DISPATCH_disable_warnings __JCC_ATTRIBUTE_DISPATCH_system_header 										\
			__JCC_ATTRIBUTE_DISPATCH_push_macro( new )  __JCC_ATTRIBUTE_DISPATCH_file_optimize( O3, on )								\
			__JCC_ATTRIBUTE_DISPATCH_file_optimize( Ofast, on ) __JCC_ATTRIBUTE_DISPATCH_warning_push( __JCC_CRT_WARNING_LEVEL )		\
			__JCC_ATTRIBUTE_DISPATCH_CRT_BEGIN_CPP_HEADER
#endif // __JCC_ATTRIBUTE_DISPATCH_crt_cpp_header_begin

//__jattribute__((crt_cpp_header_end)) 
#ifndef __JCC_ATTRIBUTE_DISPATCH_crt_cpp_header_end
#	define     __JCC_ATTRIBUTE_DISPATCH_crt_cpp_header_end __JCC_ATTRIBUTE_DISPATCH_CRT_END_CPP_HEADER						\
				__JCC_ATTRIBUTE_DISPATCH_pop_macro( new ) __JCC_ATTRIBUTE_DISPATCH_restore_warnings							\
				__JCC_ATTRIBUTE_DISPATCH_warning_pop __JCC_ATTRIBUTE_DISPATCH_file_optimize( O3, off )						\
				__JCC_ATTRIBUTE_DISPATCH_file_optimize( Ofast, off )
#endif // __JCC_ATTRIBUTE_DISPATCH_crt_cpp_header_end



#ifdef __cplusplus
#define __JCC_STD_BEGIN namespace std __JCC_ATTRIBUTE_DISPATCH_visibility(default) {
#define __JCC_STD_END }
#define __JCC_STD ::std::
#else
#define __JCC_STD_BEGIN extern "C++"{ namespace std  __JCC_ATTRIBUTE_DISPATCH_visibility(default) {
#define __JCC_STD_END } }
#define __JCC_STD ::std::
#endif // __cplusplus

//__jattribute__((stl_header_begin)) 
#ifndef __JCC_ATTRIBUTE_DISPATCH_stl_header_begin		
#	define __JCC_ATTRIBUTE_DISPATCH_stl_header_begin	__JCC_ATTRIBUTE_DISPATCH_crt_header_begin __JCC_STD_BEGIN
#endif // __JCC_ATTRIBUTE_DISPATCH_stl_header_begin

//__jattribute__((stl_header_end)) 
#ifndef __JCC_ATTRIBUTE_DISPATCH_stl_header_end		
#	define __JCC_ATTRIBUTE_DISPATCH_stl_header_end		__JCC_STD_END __JCC_ATTRIBUTE_DISPATCH_crt_header_end
#endif // __JCC_ATTRIBUTE_DISPATCH_stl_header_end

/* syntax list	:
__jattribute__((asm))
__jattribute__((__asm__))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_asm ) 
#	if defined( __has_attribute ) && __has_attribute( asm )
#		define __JCC_ATTRIBUTE_DISPATCH_asm __attribute__ ((asm))
#	elif defined( __has_attribute ) && __has_attribute( __asm )
#		define __JCC_ATTRIBUTE_DISPATCH_asm __attribute__((__asm))
#	elif defined( __has_attribute ) && __has_attribute( __asm__ )
#		define __JCC_ATTRIBUTE_DISPATCH_asm __attribute__((__asm__))
#	elif defined( _MSC_VER ) && defined( _M_IX86 )
#		define __JCC_ATTRIBUTE_DISPATCH_asm __asm
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_asm __asm__  // NOLINT 
#	elif __JCC_HAS_CPP_ATTRIBUTE(asm)
#		define __JCC_ATTRIBUTE_DISPATCH_asm [[asm]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_asm __asm__
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#		define __JCC_ATTRIBUTE_DISPATCH___asm__  __JCC_ATTRIBUTE_DISPATCH_asm // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_naked

#endif // __HAS_JCC_CRT_PACKING__
