#ifndef __HAS_JCC_OPTIMIZERS__
#define __HAS_JCC_OPTIMIZERS__  1
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__

#include <jcc/stringize.h>
#include <jcc/builtins.h>
#include <jcc/language.h>
#include <jcc/compiler_prereq.h>

//__jattribute__((file_optimize(O0, on)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_on_O0
#   if defined(_MSC_VER)  && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O0 __pragma( optimize( "" , on))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O0 _Pragma( __JCC_STRINGIZE( clang optimize on ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O0 _Pragma( __JCC_STRINGIZE( GCC push_options )) _Pragma( __JCC_STRINGIZE( GCC optimize("Og") ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_on_O0

//__jattribute__((file_optimize(O0, off)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_off_O0
#   if defined(_MSC_VER) && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O0 __pragma( optimize( "" , off))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O0 _Pragma( __JCC_STRINGIZE( clang optimize off ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O0 _Pragma( __JCC_STRINGIZE( GCC pop_options )) _Pragma( __JCC_STRINGIZE( GCC reset_options ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_off_O0

//__jattribute__((file_optimize(Os, on)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_on_Os
#   if defined(_MSC_VER)  && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_Os __pragma( optimize( "s" , on))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_Os _Pragma( __JCC_STRINGIZE( clang optimize on ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_Os _Pragma( __JCC_STRINGIZE( GCC push_options )) _Pragma( __JCC_STRINGIZE( GCC optimize("Os") ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_on_Os

//__jattribute__((file_optimize(Os, off)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_off_Os
#   if defined(_MSC_VER)  && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_Os __pragma( optimize( "s" , off))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_Os _Pragma( __JCC_STRINGIZE( clang optimize off ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_Os _Pragma( __JCC_STRINGIZE( GCC pop_options )) _Pragma( __JCC_STRINGIZE( GCC reset_options ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_off_Os

//__jattribute__((file_optimize(O1, on)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_on_O1
#   if defined(_MSC_VER)  && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O1 __pragma( optimize( "s" , on))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O1 _Pragma( __JCC_STRINGIZE( clang optimize on ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O1 _Pragma( __JCC_STRINGIZE( GCC push_options )) _Pragma( __JCC_STRINGIZE( GCC optimize("O1") ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_on_O1

//__jattribute__((file_optimize(O1, off)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_off_O1
#   if defined(_MSC_VER)  && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O1 __pragma( optimize( "s" , off))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O1 _Pragma( __JCC_STRINGIZE( clang optimize off ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O1 _Pragma( __JCC_STRINGIZE( GCC pop_options )) _Pragma( __JCC_STRINGIZE( GCC reset_options ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_off_O1

//__jattribute__((file_optimize(O2, on)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_on_O2
#   if defined(_MSC_VER)  && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O2 __pragma( optimize( "" , on)) __pragma( optimize( "s" , on))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O2 _Pragma( __JCC_STRINGIZE( clang optimize on ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O2 _Pragma( __JCC_STRINGIZE( GCC push_options )) _Pragma( __JCC_STRINGIZE( GCC optimize("O2") ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_on_O2

//__jattribute__((file_optimize(O2, off)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_off_O2
#   if defined(_MSC_VER)  && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O2 __pragma( optimize( "" , off)) __pragma( optimize( "s" , off))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O2 _Pragma( __JCC_STRINGIZE( clang optimize off ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O2 _Pragma( __JCC_STRINGIZE( GCC pop_options )) _Pragma( __JCC_STRINGIZE( GCC reset_options ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_off_O2

//__jattribute__((file_optimize(O3, on)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_on_O3
#   if defined(_MSC_VER) && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O3 __pragma( optimize( "" , on)) __pragma( optimize( "t" , on))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O3 _Pragma( __JCC_STRINGIZE( clang optimize on ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_O3 _Pragma( __JCC_STRINGIZE( GCC push_options )) _Pragma( __JCC_STRINGIZE( GCC optimize("O3") ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_on_O3

//__jattribute__((file_optimize(O3, off)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_off_O3
#   if defined(_MSC_VER) && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O3 __pragma( optimize( "" , off)) __pragma( optimize( "t" , off))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O3 _Pragma( __JCC_STRINGIZE( clang optimize off ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_O3 _Pragma( __JCC_STRINGIZE( GCC pop_options )) _Pragma( __JCC_STRINGIZE( GCC reset_options ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_off_O3

//__jattribute__((file_optimize(Ofast, on)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_on_Ofast
#   if defined(_MSC_VER) && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_Ofast __pragma( optimize( "" , on)) __pragma( optimize( "t" , on)) __pragma( optimize( "g" , on))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_Ofast _Pragma( __JCC_STRINGIZE( clang optimize on ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_on_Ofast _Pragma( __JCC_STRINGIZE( GCC push_options )) _Pragma( __JCC_STRINGIZE( GCC optimize("Ofast") ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_on_Ofast

//__jattribute__((file_optimize(Ofast, off)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_optimize_off_Ofast
#   if defined(_MSC_VER) && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_Ofast __pragma( optimize( "" , off)) __pragma( optimize( "t" , off)) __pragma( optimize( "g" , off))
#   elif defined(__clang__) && !defined(__GNUC__)
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_Ofast _Pragma( __JCC_STRINGIZE( clang optimize off ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_optimize_off_Ofast _Pragma( __JCC_STRINGIZE( GCC pop_options )) _Pragma( __JCC_STRINGIZE( GCC reset_options ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_optimize_off_Ofast

//__jattribute__((file_optimize(LEVEL, ON_OFF)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_file_optimize
#	define     __JCC_ATTRIBUTE_DISPATCH_file_optimize( LEVEL, ON_OFF )  __JCC_ATTRIBUTE_DISPATCH_optimize_ ## ON_OFF ## _ ## LEVEL
#endif // __JCC_ATTRIBUTE_DISPATCH_file_optimize

//__jattribute__((system_header))
#ifndef __JCC_ATTRIBUTE_DISPATCH_system_header
#   if defined(_MSC_VER) && !defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_system_header
#   elif defined(_MSC_VER) && defined(__clang__)
#       define     __JCC_ATTRIBUTE_DISPATCH_system_header __pragma( __JCC_STRINGIZE( GCC system_header ))
#   else // _MSC_VER
#       define     __JCC_ATTRIBUTE_DISPATCH_system_header _Pragma( __JCC_STRINGIZE( GCC system_header ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_system_header

//__jattribute__((inline))
//__jattribute__((__inline__))
#if !defined( __JCC_ATTRIBUTE_DISPATCH_inline )
#	if defined( __STRICT_ANSI__ )
#		define __JCC_ATTRIBUTE_DISPATCH_inline __inline__
#		define __JCC_ATTRIBUTE_DISPATCH___inline__ __inline__
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_inline __inline
#		define __JCC_ATTRIBUTE_DISPATCH___inline__ __inline
#	elif defined(__GNUC__) || defined(__GNUG__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_inline __inline__
#		define __JCC_ATTRIBUTE_DISPATCH___inline__ __inline__
#	elif defined(__cplusplus)
#		define __JCC_ATTRIBUTE_DISPATCH_inline __inline
#		define __JCC_ATTRIBUTE_DISPATCH___inline__ __inline
#	elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#		define __JCC_ATTRIBUTE_DISPATCH_inline __inline
#		define __JCC_ATTRIBUTE_DISPATCH___inline__ __inline
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_inline inline
#		define __JCC_ATTRIBUTE_DISPATCH___inline__ inline
#	endif // !defined(__GNUC__) && defined( _MSC_VER )
#endif // __JCC_ATTRIBUTE_DISPATCH_inline

/* syntax list	:
__jattribute__((volatile))
__jattribute__((__volatile__))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_volatile )
#	if defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_volatile __volatile__
#		define __JCC_ATTRIBUTE_DISPATCH___volatile__ __volatile__
#	elif defined( __STRICT_ANSI__ )
#		define __JCC_ATTRIBUTE_DISPATCH_volatile __volatile__
#		define __JCC_ATTRIBUTE_DISPATCH___volatile__ __volatile__
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_volatile volatile
#		define __JCC_ATTRIBUTE_DISPATCH___volatile__ volatile
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_volatile
#		define __JCC_ATTRIBUTE_DISPATCH___volatile__
#	endif // volatile
#endif // __JCC_ATTRIBUTE_DISPATCH_volatile

//#define __DEVICE__ static __device__ __inline__ __attribute__((always_inline))

/* syntax list	:
__jattribute__((device))
__jattribute__((__device__))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_device )
#	if defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_device static __device__ __inline__ __attribute__((always_inline))
#		define __JCC_ATTRIBUTE_DISPATCH___device__ static __device__ __inline__ __attribute__((always_inline))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_device static __device__ __inline __forceinline
#		define __JCC_ATTRIBUTE_DISPATCH___device__ volatile
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_device
#		define __JCC_ATTRIBUTE_DISPATCH___device__
#	endif // volatile
#endif // __JCC_ATTRIBUTE_DISPATCH_volatile

//__jattribute__((forceinline))
//__jattribute__((__forceinline))
//__jattribute__((__forceinline__))
#if !defined( __JCC_ATTRIBUTE_DISPATCH_forceinline )
#	if defined( __INTEL_COMPILER ) && defined( _MSC_VER ) && defined( _MSVC_LANG )
#		define __JCC_ATTRIBUTE_DISPATCH_forceinline  __pragma(forceinline recursive) extern __forceinline
#	elif defined( __INTEL_COMPILER) && ( defined( __GNUC__ ) || defined(__clang__) )
#		define __JCC_ATTRIBUTE_DISPATCH_forceinline _Pragma("forceinline recursive") extern __attribute__ ((__gnu_inline__, __always_inline__, flatten, hot, optimize("O3"))) __inline__
#	elif defined( __clang__ ) && defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_forceinline  extern __attribute__((__gnu_inline__, __always_inline__, flatten, hot )) __forceinline
#	elif defined( _MSC_VER) && defined( _MSVC_LANG )
#		define __JCC_ATTRIBUTE_DISPATCH_forceinline __pragma(optimize("", on)) __pragma(auto_inline(on)) __pragma(inline_recursion(on)) __pragma(optimize("t", on)) extern __forceinline
#	elif defined( __clang__) || defined( __GNUC__ )
#		define __JCC_ATTRIBUTE_DISPATCH_forceinline  extern __attribute__((__gnu_inline__, __always_inline__, flatten, hot, optimize("Ofast"))) __inline__
#	elif ( __STDC_VERSION__ >= 201112L )
#		define __JCC_ATTRIBUTE_DISPATCH_forceinline extern __inline
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_forceinline inline
#	endif //  ( __STDC_VERSION__ >= 201112L || defined(__GNUC__) || defined(__clang__) ) && !defined(_MSC_VER)
#	define __JCC_ATTRIBUTE_DISPATCH___forceinline__ __JCC_ATTRIBUTE_DISPATCH_forceinline // alias
#	define __JCC_ATTRIBUTE_DISPATCH___forceinline	__JCC_ATTRIBUTE_DISPATCH_forceinline // alias
#endif // _FORCE_INLINE

/* syntax list	:
__jattribute__((noinline))
__jattribute__((__noinline__))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_noinline )
#	if defined( __has_attribute ) && __has_attribute(noinline)
#		define __JCC_ATTRIBUTE_DISPATCH_noinline __attribute__((noinline))
#	elif defined( __has_attribute ) && __has_attribute(__noinline__)
#		define __JCC_ATTRIBUTE_DISPATCH_noinline __attribute__((__noinline__))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_noinline __declspec(noinline)
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_noinline __attribute__((noinline))
#	elif __JCC_HAS_CPP_ATTRIBUTE(noinline)
#		define __JCC_ATTRIBUTE_DISPATCH_noinline [[noinline]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_noinline
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#	define __JCC_ATTRIBUTE_DISPATCH___noinline__  __JCC_ATTRIBUTE_DISPATCH_noinline // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_noinline

/* syntax list	:
__jattribute__((novtable))
__jattribute__((__novtable__))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_novtable )
#	if defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_novtable __declspec(novtable)
#	elif defined( __has_attribute ) && __has_attribute(novtable)
#		define __JCC_ATTRIBUTE_DISPATCH_novtable __attribute__((novtable))
#	elif __JCC_HAS_CPP_ATTRIBUTE(novtable)
#		define __JCC_ATTRIBUTE_DISPATCH_novtable [[novtable]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_novtable
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#	define __JCC_ATTRIBUTE_DISPATCH___novtable__ __JCC_ATTRIBUTE_DISPATCH_novtable // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_novtable

/* syntax list	:
__jattribute__((empty_bases))
__jattribute__((__empty_bases__))
__jattribute__((no_unique_address))
__jattribute__((__no_unique_address__))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_empty_bases )
#	if defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_empty_bases __declspec(empty_bases)
#	elif defined( __has_attribute ) && __has_attribute(empty_bases)
#		define __JCC_ATTRIBUTE_DISPATCH_empty_bases __attribute__((empty_bases))
#	elif defined( __has_attribute ) && __has_attribute(no_unique_address)
#		define __JCC_ATTRIBUTE_DISPATCH_empty_bases __attribute__((no_unique_address))
#	elif __JCC_HAS_CPP_ATTRIBUTE(no_unique_address)
#		define __JCC_ATTRIBUTE_DISPATCH_empty_bases [[no_unique_address]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_empty_bases
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#		define __JCC_ATTRIBUTE_DISPATCH___empty_bases__			__JCC_ATTRIBUTE_DISPATCH_empty_bases // alias
#		define __JCC_ATTRIBUTE_DISPATCH_no_unique_address		__JCC_ATTRIBUTE_DISPATCH_empty_bases // alias
#		define __JCC_ATTRIBUTE_DISPATCH___no_unique_address__	__JCC_ATTRIBUTE_DISPATCH_empty_bases // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_empty_bases

/* syntax list	:
__jattribute__((unused))
__jattribute__((__unused__))
__jattribute__((maybe_unused))
__jattribute__((__maybe_unused__))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_unused )
#	if defined( __has_attribute ) && __has_attribute(unused)
#		define __JCC_ATTRIBUTE_DISPATCH_unused  __attribute__((unused))
#	elif defined( __has_attribute ) && __has_attribute(__unused__)
#		define __JCC_ATTRIBUTE_DISPATCH_unused  __attribute__((__unused__))
#	elif __JCC_HAS_CPP_ATTRIBUTE(maybe_unused)
#		define __JCC_ATTRIBUTE_DISPATCH_unused [[maybe_unused]]
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_unused __attribute__((unused))
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_unused (void)
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#		define __JCC_ATTRIBUTE_DISPATCH_maybe_unused		__JCC_ATTRIBUTE_DISPATCH_unused // alias
#		define __JCC_ATTRIBUTE_DISPATCH___maybe_unused__	__JCC_ATTRIBUTE_DISPATCH_unused // alias
#		define __JCC_ATTRIBUTE_DISPATCH___unused__			__JCC_ATTRIBUTE_DISPATCH_unused // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_unused

#endif // __HAS_JCC_OPTIMIZERS__
