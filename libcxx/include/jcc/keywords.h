#ifndef __HAS_JCC_SINGLE_ATTRIBUTE_KEYWORDS__
#define __HAS_JCC_SINGLE_ATTRIBUTE_KEYWORDS__  1
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
#include <jcc/compiler_prereq.h>

/*	__jattribute__((restrict))
	__jattribute__((__restrict))
	__jattribute__((__restrict__))		*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_restrict )
#	if __JCC_MSVC_PREREQ(12,0) /*&& !defined(__GNUC__)*/
#		define __JCC_ATTRIBUTE_DISPATCH_restrict __restrict
#	elif __JCC_MSVC_PREREQ(1,0) /*&& !defined(__GNUC__)*/
#		define __JCC_ATTRIBUTE_DISPATCH_restrict __declspec(restrict)
#	elif __JCC_GNUC_PREREQ(3,1) || __JCC_CLANG_PREREQ(4,0)
#		define __JCC_ATTRIBUTE_DISPATCH_restrict __restrict
#	elif defined( __has_attribute ) && __has_attribute(restrict)
#		define __JCC_ATTRIBUTE_DISPATCH_restrict __attribute__((restrict))
#	elif defined( __has_attribute ) && __has_attribute(__restrict__)
#		define __JCC_ATTRIBUTE_DISPATCH_restrict __attribute__((__restrict__))
#	elif __STDC_VERSION__ >= 199901L
#		define __JCC_ATTRIBUTE_DISPATCH_restrict restrict
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_restrict
#	endif // __STDC_VERSION__ >= 199901L
#	define __JCC_ATTRIBUTE_DISPATCH___restrict		__JCC_ATTRIBUTE_DISPATCH_restrict // alias
#	define __JCC_ATTRIBUTE_DISPATCH___restrict__	__JCC_ATTRIBUTE_DISPATCH_restrict // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_restrict

	/* syntax list	:
		__jattribute__((noreturn))
		__jattribute__((__noreturn__))
	*/
#if defined(__has_include)
#if __has_include( <crt/stdnoreturn.h> )
#include <crt/stdnoreturn.h>
#elif __has_include( "crt/stdnoreturn.h" )
#include "crt/stdnoreturn.h"
#endif // <pthread_compat.h>
#	define __JCC_ATTRIBUTE_DISPATCH_noreturn		noreturn // alias
#	define __JCC_ATTRIBUTE_DISPATCH___noreturn__	noreturn // alias
#endif  // __has_include ^
#	if !defined( __JCC_ATTRIBUTE_DISPATCH_noreturn ) || defined( JCC_IGNORE_STDNORETURN )
#		undef __JCC_ATTRIBUTE_DISPATCH_noreturn
	__JCC_ATTRIBUTE_DISPATCH_push_macro(noreturn)
	__JCC_ATTRIBUTE_DISPATCH_push_macro(__noreturn__)
#	undef noreturn
#	undef __noreturn__
#		if defined( __has_attribute ) && __has_attribute(__noreturn__)
#			define __JCC_ATTRIBUTE_DISPATCH_noreturn __attribute__ ((__noreturn__))
#		elif defined( __has_attribute ) && __has_attribute(noreturn)
#			define __JCC_ATTRIBUTE_DISPATCH_noreturn  __attribute__((noreturn))
#		elif defined(__GNUC__) || defined(__clang__)
#			define __JCC_ATTRIBUTE_DISPATCH_noreturn  __attribute__((__noreturn__))
#		elif defined( _MSC_VER )
#			define __JCC_ATTRIBUTE_DISPATCH_noreturn  __declspec(noreturn)
#		elif __JCC_HAS_CPP_ATTRIBUTE(noreturn)
#			define __JCC_ATTRIBUTE_DISPATCH_noreturn  [[noreturn]]
#		elif __STDC_VERSION__ >= 201112L
#			define __JCC_ATTRIBUTE_DISPATCH_noreturn  [[noreturn]]
#		else
#			define noreturn _Noreturn
#			if __jattribute__((has_type(_Noreturn))) || defined( _Noreturn )
#				/*define _Noreturn _Noreturn*/ // we do nothing or define it as itself for coloring
#			else
#				define _Noreturn  // this we leave empty with pourpose
#			endif // has_type(_Noreturn)
#		endif // __JCC_HAS_CPP_ATTRIBUTE
#	define __JCC_ATTRIBUTE_DISPATCH___noreturn__ __JCC_ATTRIBUTE_DISPATCH_noreturn // alias
	__JCC_ATTRIBUTE_DISPATCH_pop_macro(noreturn)
	__JCC_ATTRIBUTE_DISPATCH_pop_macro(__noreturn__)
#	endif // __JCC_ATTRIBUTE_DISPATCH_noreturn

	/* syntax list	:
	__jattribute__((nothrow))
	__jattribute__((__nothrow__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_nothrow )
#pragma warning(push)
#pragma warning( disable : 4067 )
#	if defined(__has_feature) && __has_feature( cxx_noexcept )
#		define __JCC_ATTRIBUTE_DISPATCH_nothrow noexcept/*( __VA_ARGS__ )*/
#	elif defined( __has_attribute ) && __has_attribute(__nothrow__)
#		define __JCC_ATTRIBUTE_DISPATCH_nothrow  __attribute__((__nothrow__))
#	elif defined( __has_attribute ) && __has_attribute(nothrow)
#		define __JCC_ATTRIBUTE_DISPATCH_nothrow  __attribute__((nothrow))
#	elif defined( _MSC_VER ) && defined( _MSVC_LANG ) && defined( __cplusplus ) && _MSVC_LANG >= 201103L
#		define __JCC_ATTRIBUTE_DISPATCH_nothrow noexcept/*( __VA_ARGS__ )*/
#	elif defined(__cplusplus) && __cplusplus >= 201103L
#		define __JCC_ATTRIBUTE_DISPATCH_nothrow noexcept/*( __VA_ARGS__ )*/
#	elif __JCC_GNUC_PREREQ (3, 3) || __JCC_CLANG_PREREQ(4, 0)
#		define __JCC_ATTRIBUTE_DISPATCH_nothrow __attribute__((__nothrow__))
#	elif __JCC_MSVC_PREREQ(12, 0)
#		define __JCC_ATTRIBUTE_DISPATCH_nothrow __declspec(nothrow)
#	elif __cplusplus
#		define __JCC_ATTRIBUTE_DISPATCH_nothrow throw()
#	else /* Not C++ */
#		define __JCC_ATTRIBUTE_DISPATCH_nothrow
#endif
#pragma warning(pop)
#	define __JCC_ATTRIBUTE_DISPATCH___nothrow__		 __JCC_ATTRIBUTE_DISPATCH_nothrow // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_nothrow

	/* syntax list	:
	__jattribute__((intrinsic( FUNC )))
	__jattribute__((__intrinsic__( FUNC )))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_intrinsic )
#	if defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_intrinsic( FUNC ) __attribute__((__gnu_inline__, __always_inline__, __artificial__))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_intrinsic( FUNC ) __pragma(intrinsic(FUNC))
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_intrinsic( FUNC )
#	endif // intrinsic
#		define __JCC_ATTRIBUTE_DISPATCH___intrinsic__( FUNC ) __JCC_ATTRIBUTE_DISPATCH_intrinsic( FUNC ) // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_intrinsic

	/* syntax list	:
	__jattribute__((extension))
	__jattribute__((__extension__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_extension )
#	if defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_extension __extension__
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_extension
#	endif // __extension__
#	define __JCC_ATTRIBUTE_DISPATCH___extension__ __JCC_ATTRIBUTE_DISPATCH_extension // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_extension

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

	/* syntax list	:
	__jattribute__((guard_overflow))
	__jattribute__((__guard_overflow__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_guard_overflow )
#	if defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_guard_overflow __declspec(guard(overflow))
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_guard_overflow
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#		define __JCC_ATTRIBUTE_DISPATCH___guard_overflow__  __JCC_ATTRIBUTE_DISPATCH_guard_overflow
#endif // __JCC_ATTRIBUTE_DISPATCH_guard_overflow

	/* syntax list	:
	__jattribute__((hybrid_patchable))
	__jattribute__((__hybrid_patchable__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_hybrid_patchable )
#	if defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_hybrid_patchable __declspec(hybrid_patchable)
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_hybrid_patchable
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#		define __JCC_ATTRIBUTE_DISPATCH___hybrid_patchable__ __JCC_ATTRIBUTE_DISPATCH_hybrid_patchable
#endif // __JCC_ATTRIBUTE_DISPATCH_hybrid_patchable

	/* syntax list	:
	__jattribute__((typefix(ctype)))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_typefix )
#	if defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_typefix(ctype) __declspec("SAL_typefix(" __JCC_STRINGIZE(ctype) ")")
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_typefix(ctype)
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#endif // __JCC_ATTRIBUTE_DISPATCH_typefix

	/* syntax list	:
	__jattribute__((naked))
	__jattribute__((__naked__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_naked )
#	if defined( __has_attribute ) && __has_attribute( naked )
#		define __JCC_ATTRIBUTE_DISPATCH_naked __attribute__ ((naked))
#	elif defined( __has_attribute ) && __has_attribute( __naked__ )
#		define __JCC_ATTRIBUTE_DISPATCH_naked __attribute__((__naked__))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_naked __declspec(naked)
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_naked __attribute__((naked))  // NOLINT
#	elif __JCC_HAS_CPP_ATTRIBUTE(naked)
#		define __JCC_ATTRIBUTE_DISPATCH_naked [[naked]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_naked
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#		define __JCC_ATTRIBUTE_DISPATCH___naked__  __JCC_ATTRIBUTE_DISPATCH_naked // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_naked

	/* syntax list	:
	__jattribute__((nodiscard))
	__jattribute__((__nodiscard__))
	__jattribute__((warn_unused_result))
	__jattribute__((__warn_unused_result__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_nodiscard )
#	if ( defined(__cplusplus) && ( __JCC_CLANG_PREREQ(3,9) || __JCC_MSVC_PREREQ(17,0) || __JCC_INTEL_PREREQ(18,0)  || __JCC_GNUC_PREREQ(7,0)) ) || __JCC_HAS_CPP_ATTRIBUTE(nodiscard)
#		define __JCC_ATTRIBUTE_DISPATCH_nodiscard [[nodiscard]]
#	elif defined( __has_attribute ) && __has_attribute( __nodiscard__ )
#		define __JCC_ATTRIBUTE_DISPATCH_nodiscard __attribute__ ((__nodiscard__))
#	elif defined( __has_attribute ) && __has_attribute(nodiscard)
#		define __JCC_ATTRIBUTE_DISPATCH_nodiscard __attribute__ ((nodiscard))
#	elif defined( __has_attribute ) && __has_attribute(__warn_unused_result__)
#		define __JCC_ATTRIBUTE_DISPATCH_nodiscard __attribute__ ((__warn_unused_result__))
#	elif defined( __has_attribute ) && __has_attribute(warn_unused_result)
#		define __JCC_ATTRIBUTE_DISPATCH_nodiscard __attribute__ ((warn_unused_result))
#	elif defined( _MSC_VER ) && !defined( __clang__ ) && defined( __has_cpp_attribute )
#		if __has_cpp_attribute(nodiscard)
#			define __JCC_ATTRIBUTE_DISPATCH_nodiscard __declspec(nodiscard)
#		else //__has_cpp_attribute
#			define __JCC_ATTRIBUTE_DISPATCH_nodiscard
#		endif //__has_cpp_attribute
#	elif defined( _MSC_VER ) && !defined( __clang__ )
#		define __JCC_ATTRIBUTE_DISPATCH_nodiscard
#	elif ( defined( __GUNC__ ) || defined( __clang__ ) || defined( __GUNG__ ) ) && !defined(__cplusplus)
#		define __JCC_ATTRIBUTE_DISPATCH_nodiscard   __attribute__((warn_unused_result))
#	elif defined( __cplusplus ) && __cplusplus >= 201103L
#		define __JCC_ATTRIBUTE_DISPATCH_nodiscard [[nodiscard]]
#	elif defined( __STDC_VERSION__ ) && __STDC_VERSION__ >= 201112L
#		define __JCC_ATTRIBUTE_DISPATCH_nodiscard [[nodiscard]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_nodiscard
#	endif
#	define __JCC_ATTRIBUTE_DISPATCH___nodiscard__				__JCC_ATTRIBUTE_DISPATCH_nodiscard // alias
#	define __JCC_ATTRIBUTE_DISPATCH_warn_unused_result			__JCC_ATTRIBUTE_DISPATCH_nodiscard // alias
#	define __JCC_ATTRIBUTE_DISPATCH___warn_unused_result__		__JCC_ATTRIBUTE_DISPATCH_nodiscard // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_nodiscard

	/* syntax list	:
	__jattribute__((discard_return))
	__jattribute__((__discard_return__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_discard_return )
#	if __JCC_HAS_CPP_ATTRIBUTE(discard)
#		define __JCC_ATTRIBUTE_DISPATCH_discard_return  [[discard]]
#	elif defined( __has_attribute ) && __has_attribute(discard)
#		define __JCC_ATTRIBUTE_DISPATCH_discard_return __attribute__((discard))
#	elif __JCC_HAS_CPP_ATTRIBUTE(discard_return)
#		define __JCC_ATTRIBUTE_DISPATCH_discard_return  [[discard_return]]
#	elif defined( __has_attribute ) && __has_attribute(discard_return)
#		define __JCC_ATTRIBUTE_DISPATCH_discard_return __attribute__((discard_return))
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_discard_return   (void)
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#	define __JCC_ATTRIBUTE_DISPATCH___discard_return__   __JCC_ATTRIBUTE_DISPATCH_discard_return // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_discard_return

	/* syntax list	:
	__jattribute__((noalias))
	__jattribute__((__noalias__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_noalias )
#	if defined( __has_attribute ) && __has_attribute( noalias )
#		define __JCC_ATTRIBUTE_DISPATCH_noalias __attribute__ ((noalias))
#	elif defined( __has_attribute ) && __has_attribute( __noalias__ )
#		define __JCC_ATTRIBUTE_DISPATCH_noalias __attribute__((__noalias__))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_noalias __declspec(noalias)
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_noalias __attribute__((noalias))
#	elif __JCC_HAS_CPP_ATTRIBUTE(noalias)
#		define __JCC_ATTRIBUTE_DISPATCH_noalias [[noalias]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_noalias
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#	define __JCC_ATTRIBUTE_DISPATCH___noalias__  __JCC_ATTRIBUTE_DISPATCH_noalias // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_noalias

	/* syntax list	:
	__jattribute__((const))
	__jattribute__((__const__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_const )
#	if defined( __has_attribute ) && __has_attribute( __const__ )
#		define __JCC_ATTRIBUTE_DISPATCH_const		__attribute__ ((__const__))
#		define __JCC_ATTRIBUTE_DISPATCH___const__	__attribute__ ((__const__))
#	elif defined( __has_attribute ) && __has_attribute( const )
#		define __JCC_ATTRIBUTE_DISPATCH_const		__attribute__((const))
#		define __JCC_ATTRIBUTE_DISPATCH___const__	__attribute__((const))
#	elif defined( __has_attribute ) && __has_attribute( __const__ )
#		define __JCC_ATTRIBUTE_DISPATCH_const		__attribute__((__const__))
#		define __JCC_ATTRIBUTE_DISPATCH___const__	__attribute__((__const__))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_const /*__declspec(const)*/
#		define __JCC_ATTRIBUTE_DISPATCH___const__ /*__declspec(const)*/
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_const		__attribute__((__const__))
#		define __JCC_ATTRIBUTE_DISPATCH___const__	__attribute__((__const__))
#	elif __JCC_HAS_CPP_ATTRIBUTE(const)
#		define __JCC_ATTRIBUTE_DISPATCH_const		[[const]]
#		define __JCC_ATTRIBUTE_DISPATCH___const__	[[const]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_const
#		define __JCC_ATTRIBUTE_DISPATCH___const__
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#endif // __JCC_ATTRIBUTE_DISPATCH_const

	/* syntax list	:
	__jattribute__((allocator))
	__jattribute__((__allocator__))
	__jattribute__((malloc))
	__jattribute__((__malloc__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_allocator )
#	if defined( __has_attribute ) && __has_attribute( allocator )
#		define __JCC_ATTRIBUTE_DISPATCH_allocator __attribute__ ((allocator))
#	elif defined( __has_attribute ) && __has_attribute( __allocator__ )
#		define __JCC_ATTRIBUTE_DISPATCH_allocator __attribute__((__allocator__))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_allocator __declspec(allocator)
#	elif defined( __has_attribute ) && __has_attribute( __malloc__ )
#		define __JCC_ATTRIBUTE_DISPATCH_allocator __attribute__((__malloc__))
#	elif defined( __has_attribute ) && __has_attribute( malloc )
#		define __JCC_ATTRIBUTE_DISPATCH_allocator __attribute__ ((malloc))
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_allocator __attribute__((malloc))
#	elif __JCC_HAS_CPP_ATTRIBUTE(allocator)
#		define __JCC_ATTRIBUTE_DISPATCH_allocator [[allocator]]
#	elif __JCC_HAS_CPP_ATTRIBUTE(malloc)
#		define __JCC_ATTRIBUTE_DISPATCH_allocator [[malloc]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_allocator
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#	define __JCC_ATTRIBUTE_DISPATCH_malloc			__JCC_ATTRIBUTE_DISPATCH_allocator // alias
#	define __JCC_ATTRIBUTE_DISPATCH___malloc__		__JCC_ATTRIBUTE_DISPATCH_allocator // alias
#	define __JCC_ATTRIBUTE_DISPATCH___allocator__	__JCC_ATTRIBUTE_DISPATCH_allocator // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_allocator

	/* syntax list	:
	__jattribute__((jitintrinsic))
	__jattribute__((__jitintrinsic__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_jitintrinsic )
#	if defined( __has_attribute ) && __has_attribute( jitintrinsic )
#		define __JCC_ATTRIBUTE_DISPATCH_jitintrinsic __attribute__ ((jitintrinsic))
#	elif defined( __has_attribute ) && __has_attribute( __jitintrinsic__ )
#		define __JCC_ATTRIBUTE_DISPATCH_jitintrinsic __attribute__((__jitintrinsic__))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_jitintrinsic __declspec(jitintrinsic)
#	elif __JCC_HAS_CPP_ATTRIBUTE(jitintrinsic)
#		define __JCC_ATTRIBUTE_DISPATCH_jitintrinsic [[jitintrinsic]]
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_jitintrinsic /*__attribute__((jitintrinsic))*/
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_jitintrinsic
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#		define __JCC_ATTRIBUTE_DISPATCH___jitintrinsic__  __JCC_ATTRIBUTE_DISPATCH_jitintrinsic // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_jitintrinsic

	/* syntax list	:
	__jattribute__((process))
	__jattribute__((__process__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_process )
#	if defined( __has_attribute ) && __has_attribute( process )
#		define __JCC_ATTRIBUTE_DISPATCH_process __attribute__ ((process))
#	elif defined( __has_attribute ) && __has_attribute( __process__ )
#		define __JCC_ATTRIBUTE_DISPATCH_process __attribute__((__process__))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_process __declspec(process)
#	elif __JCC_HAS_CPP_ATTRIBUTE(process)
#		define __JCC_ATTRIBUTE_DISPATCH_process [[process]]
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_process /*__attribute__((process))*/
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_process
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#		define __JCC_ATTRIBUTE_DISPATCH___process__  __JCC_ATTRIBUTE_DISPATCH_process // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_process

	/* syntax list	:
	__jattribute__((appdomain))
	__jattribute__((__appdomain__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_appdomain )
#	if defined( __has_attribute ) && __has_attribute( appdomain )
#		define __JCC_ATTRIBUTE_DISPATCH_appdomain __attribute__ ((appdomain))
#	elif defined( __has_attribute ) && __has_attribute( __appdomain__ )
#		define __JCC_ATTRIBUTE_DISPATCH_appdomain __attribute__((__appdomain__))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_appdomain __declspec(appdomain)
#	elif __JCC_HAS_CPP_ATTRIBUTE(appdomain)
#		define __JCC_ATTRIBUTE_DISPATCH_appdomain [[appdomain]]
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_appdomain /*__attribute__((appdomain))*/
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_appdomain
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#		define __JCC_ATTRIBUTE_DISPATCH___appdomain__  __JCC_ATTRIBUTE_DISPATCH_appdomain // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_appdomain

	/* syntax list	:
	__jattribute__((selectany))
	__jattribute__((__selectany__))
	*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_selectany )
#	if defined( __has_attribute ) && __has_attribute( selectany )
#		define __JCC_ATTRIBUTE_DISPATCH_selectany __attribute__ ((selectany))
#	elif defined( __has_attribute ) && __has_attribute( __selectany__ )
#		define __JCC_ATTRIBUTE_DISPATCH_selectany __attribute__((__selectany__))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_selectany __declspec(selectany)
#	elif __JCC_HAS_CPP_ATTRIBUTE(selectany)
#		define __JCC_ATTRIBUTE_DISPATCH_selectany [[selectany]]
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_selectany __attribute__((selectany))
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_selectany
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#		define __JCC_ATTRIBUTE_DISPATCH___selectany__ __JCC_ATTRIBUTE_DISPATCH_selectany // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_selectany

#endif // __HAS_JCC_SINGLE_ATTRIBUTE_KEYWORDS__
