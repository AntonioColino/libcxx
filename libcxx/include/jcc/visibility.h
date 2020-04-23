#ifndef __HAS_JCC_VISIBILITY__
#define __HAS_JCC_VISIBILITY__  1  
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

/* syntax list	:
__jattribute__((visibility(status)))
__jattribute__((__visibility__(status)))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_visibility )
#	if defined( __has_attribute ) && __has_attribute(__visibility__)
#		define __JCC_ATTRIBUTE_DISPATCH_visibility(status) __attribute__((__visibility__(#status)))
#	elif defined( __has_attribute ) && __has_attribute(visibility)
#		define __JCC_ATTRIBUTE_DISPATCH_visibility(status) __attribute__((visibility(#status)))
#	elif defined( __has_attribute ) && __has_attribute(__visibility)
#		define __JCC_ATTRIBUTE_DISPATCH_visibility(status) __attribute__((__visibility(#status)))
#	elif defined( _MSC_VER ) && __JCC_HAS_CPP_ATTRIBUTE(__visibility__)
#		define __JCC_ATTRIBUTE_DISPATCH_visibility(status) __declspec(__visibility__(#status))
#	elif defined( _MSC_VER ) && __JCC_HAS_CPP_ATTRIBUTE(visibility)
#		define __JCC_ATTRIBUTE_DISPATCH_visibility(status) __declspec(visibility(#status))
#	elif defined(__clang__) || defined( __GNUC__ )
#		define __JCC_ATTRIBUTE_DISPATCH_visibility(status) __attribute__((__visibility__(#status)))
#	elif __JCC_HAS_CPP_ATTRIBUTE(__visibility__)
#		define __JCC_ATTRIBUTE_DISPATCH_visibility(status) [[__visibility__(#status)]]
#	elif __JCC_HAS_CPP_ATTRIBUTE(visibility)
#		define __JCC_ATTRIBUTE_DISPATCH_visibility(status) [[visibility(#status)]]
#	else
// If this is not supplied by the OS-specific or CPU-specific
// headers included below, it will be defined to an empty default.
#		define __JCC_ATTRIBUTE_DISPATCH_visibility(status) 
#	endif
#		define __JCC_ATTRIBUTE_DISPATCH___visibility__(status) __JCC_ATTRIBUTE_DISPATCH_visibility(status) // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_visibility



/* syntax list	:
__jattribute__((dllimport))
__jattribute__((dllexport))
__jattribute__((dlllocal))
__jattribute__((core_dll))
*/
#ifndef __JCC_ATTRIBUTE_DISPATCH_core_dll
// Generic helper definitions for shared library support
#	if !defined( __clang__ ) && __WINDOWS_CODE_BASE__ && __NO_GNUC_ATTRIBUTE__
#		define __JCC_ATTRIBUTE_DISPATCH_dllimport __declspec(dllimport)
#		define __JCC_ATTRIBUTE_DISPATCH_dllexport __declspec(dllexport)
#		define __JCC_ATTRIBUTE_DISPATCH_dlllocal
#	else // ! __WINDOWS_CODE_BASE__
#		if __JCC_GNUC_PREREQ(4,0)
#			define __JCC_ATTRIBUTE_DISPATCH_dllimport __attribute__ ((visibility ("default")))
#			define __JCC_ATTRIBUTE_DISPATCH_dllexport __attribute__ ((visibility ("default")))
#			define __JCC_ATTRIBUTE_DISPATCH_dlllocal  __attribute__ ((visibility ("hidden")))
#			define __cdecl __attribute__((cdecl))
#			define __stdcall __attribute__((stdcall))
#			define __thiscall __attribute__((thiscall))
#			define __fastcall __attribute__((fastcall))
#			define __vectorcall __attribute__((vectorcall))
#			undef __JCC_ATTRIBUTE_DISPATCH_dllimport
#			undef __JCC_ATTRIBUTE_DISPATCH_dllexport
#			define __JCC_ATTRIBUTE_DISPATCH_dllimport __attribute__ ((dllimport))
#			define __JCC_ATTRIBUTE_DISPATCH_dllexport __attribute__ ((dllexport))
#		elif defined( __clang__ ) && defined( _MSC_VER )  && !defined( __GNUC__ )
#			define __JCC_ATTRIBUTE_DISPATCH_dllimport __declspec(dllimport)
#			define __JCC_ATTRIBUTE_DISPATCH_dllexport __declspec(dllexport)
#			undef __JCC_ATTRIBUTE_DISPATCH_dllimport
#			undef __JCC_ATTRIBUTE_DISPATCH_dllexport
#			define __JCC_ATTRIBUTE_DISPATCH_dllimport __attribute__ ((dllimport))
#			define __JCC_ATTRIBUTE_DISPATCH_dllexport __attribute__ ((dllexport))
#			define __JCC_ATTRIBUTE_DISPATCH_dlllocal  __attribute__ ((visibility ("hidden")))
#		elif defined( __clang__ ) && defined( __GNUC__ )
#			define __JCC_ATTRIBUTE_DISPATCH_dllimport __attribute__ ((visibility ("default")))
#			define __JCC_ATTRIBUTE_DISPATCH_dllexport __attribute__ ((visibility ("default")))
#			define __JCC_ATTRIBUTE_DISPATCH_dlllocal  __attribute__ ((visibility ("hidden")))
#			undef __JCC_ATTRIBUTE_DISPATCH_dllimport
#			undef __JCC_ATTRIBUTE_DISPATCH_dllexport
#			define __JCC_ATTRIBUTE_DISPATCH_dllimport __attribute__ ((dllimport))
#			define __JCC_ATTRIBUTE_DISPATCH_dllexport __attribute__ ((dllexport))
#		else // __JCC_GNUC_PREREQ(4,0)
#			define __JCC_ATTRIBUTE_DISPATCH_dllimport
#			define __JCC_ATTRIBUTE_DISPATCH_dllexport
#			define __JCC_ATTRIBUTE_DISPATCH_dlllocal
#		endif // __JCC_GNUC_PREREQ(4,0)
#	endif // __NO_GNUC_ATTRIBUTE__
#	if defined(_DLL) && !defined( _JCC_EXPORTS ) 
#		define __JCC_ATTRIBUTE_DISPATCH_core_dll __JCC_ATTRIBUTE_DISPATCH_dllimport
#	else // _JCC_EXPORTS
#		define __JCC_ATTRIBUTE_DISPATCH_core_dll __JCC_ATTRIBUTE_DISPATCH_dllexport
#	endif // _JCC_EXPORTS
#endif // __JCC_ATTRIBUTE_DISPATCH_core_dll


/*
__jattribute__((load_lib("msvcrt.lib")))
__jattribute__((__load_lib("msvcrt.lib")))
__jattribute__((__load_lib__("msvcrt.lib")))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_load_lib ) 
#	if !defined(__GNUC__) && defined( _MSC_VER )
#		ifdef __JCC_USE_LOAD_LIB_PASTING__
#			define __jcc_add_pragma_comment_lib_ending__( x ) x ## .lib //#pragma comment(lib, "strsafe.lib")
#			define __JCC_ATTRIBUTE_DISPATCH_load_lib( ... )  __pragma(comment(lib, __JCC_STRINGIZE( __jcc_add_pragma_comment_lib_ending__( __VA_ARGS__ )))) 
#		else // !__JCC_USE_LOAD_LIB_PASTING__
#			define __JCC_ATTRIBUTE_DISPATCH_load_lib( ... )  __pragma(comment(lib,  __VA_ARGS__ )) 
#		endif // @__JCC_USE_LOAD_LIB_PASTING__
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_load_lib( ... )  _Pragma(__JCC_STRINGIZE( comment(lib,  __VA_ARGS__ )) ) 
#	endif // !defined(__GNUC__)
#	define __JCC_ATTRIBUTE_DISPATCH___load_lib		__JCC_ATTRIBUTE_DISPATCH_load_lib // alias
#	define __JCC_ATTRIBUTE_DISPATCH___load_lib__	__JCC_ATTRIBUTE_DISPATCH_load_lib // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_load_lib





#endif // __HAS_JCC_VISIBILITY__
