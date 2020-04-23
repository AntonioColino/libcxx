#ifndef __JCC_HAS_LANGUAGE_LEVEL__
#define __JCC_HAS_LANGUAGE_LEVEL__  1
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__

#ifndef __JCC_COMPONENT_VERSION__
/*	c/c++ version macro	*/
#	if defined( _MSC_VER ) && defined( _MSVC_LANG )
#		define __JCC_COMPONENT_VERSION__ _MSVC_LANG
#	elif defined( __cplusplus )
#		define __JCC_COMPONENT_VERSION__ __cplusplus
#	elif defined( __STDC_VERSION__ )
#		define __JCC_COMPONENT_VERSION__ __STDC_VERSION__
#	else
#		define __JCC_COMPONENT_VERSION__	0
#		if defined( __WARN_NO_JCC_COMPONENT_VERSION__)
#			pragma warning( "No component version can be obtained, this header will have undefined behavior." )
#			pragma message( "No component version can be obtained, this header will have undefined behavior." )
#		elif defined(__ERROR_NO_JCC_COMPONENT_VERSION__)
#			pragma error( "No component version can be obtained, this header will have undefined behavior." )
#		endif // __WARN_NO_JCC_COMPONENT_VERSION__
#	endif // __JCC_COMPONENT_VERSION__
#endif // !_MSC_VER

//#if __jattribute__((cpp_version(2011)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_cpp_version
#	if defined( _MSC_VER ) && defined( _MSVC_LANG ) && defined( __cplusplus )
#		define __JCC_CPP_VERSION__ _MSVC_LANG
#	elif defined( __cplusplus )
#		define __JCC_CPP_VERSION__ __cplusplus
#	else
#		define __JCC_CPP_VERSION__ 0
#	endif // __JCC_CPP_VERSION__
#	if __JCC_CPP_VERSION__ == 0
#		define __JCC_CPP_VERSION 0 // version undefined
#	elif __JCC_CPP_VERSION__ > 201703L
#		define __JCC_CPP_VERSION 2020 // version 20 (CPP 20) [the latest draft]
#	elif __JCC_CPP_VERSION__ >= 201703L
#		define __JCC_CPP_VERSION 2017 // version 17 (CPP 17)
#	elif __JCC_CPP_VERSION__ >= 201402L
#		define __JCC_CPP_VERSION 2014 // version 14 (CPP 14)
#	elif __JCC_CPP_VERSION__ >= 201112L
#		define __JCC_CPP_VERSION 2011 // version 11 (CPP 11)
#	elif __JCC_CPP_VERSION__ >= 199711L
#		define __JCC_CPP_VERSION 1999 // version 99 (CPP 99)
#	elif __JCC_CPP_VERSION__ >= 198922L
#		define __JCC_CPP_VERSION 1989 // version 89 (CPP 89)
#	else
#		define __JCC_CPP_VERSION 0 // version undefined
#	endif // __JCC_CPP_VERSION
/*		Here we try to determine the availibility of a lang version #, which we try to corespond with a year / version. [2020, 2017, 2014, 2011, 1999, 1989]*/
#	define __JCC_ATTRIBUTE_DISPATCH_cpp_version( VERSION ) ( __JCC_CPP_VERSION >= VERSION && __JCC_CPP_VERSION > 0 )
#endif // __JCC_ATTRIBUTE_DISPATCH_cpp_version

//#if __jattribute__((c_version(2011)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_c_version
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
#	if defined( __STDC_VERSION__ )
#		define __JCC_C_VERSION__ __STDC_VERSION__
#	elif defined( __cplusplus )
#		define __JCC_C_VERSION__ 0
#	else
#		define __JCC_C_VERSION__ 0
#	endif // __JCC_C_VERSION__
#	if __JCC_C_VERSION__ == 0
#		define __JCC_C_VERSION 0 // version undefined
#	elif __JCC_C_VERSION__ >= 201710L
#		define __JCC_C_VERSION 2018 // version 18 (C18) [the latest draft]
#	elif __JCC_C_VERSION__ >= 201112L
#		define __JCC_C_VERSION 2011 // version 11 (C11)
#	elif __JCC_C_VERSION__ >= 199901L
#		define __JCC_C_VERSION 1999 // version 99 (C99)
#	elif __JCC_C_VERSION__ >= 199711L
#		define __JCC_C_VERSION 1998 // version 98 (C98)
#	elif __JCC_C_VERSION__ >= 198922L
#		define __JCC_C_VERSION 1989 // version 89 (C89)
#	else
#		define __JCC_C_VERSION 0 // version undefined
#	endif // __JCC_C_VERSION
#ifdef __cplusplus
}
#endif // __cplusplus
/*		Here we try to determine the availibility of a lang version #, which we try to corespond with a year / version. [2020, 2017, 2014, 2011, 1999, 1989]*/
#	define __JCC_ATTRIBUTE_DISPATCH_c_version( VERSION ) ( __JCC_C_VERSION >= VERSION && __JCC_C_VERSION > 0 )
#endif // __JCC_ATTRIBUTE_DISPATCH_c_version

//#if __jattribute__((component_version(VERSION)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_component_version
#	if  defined( __JCC_COMPONENT_VERSION__ ) && __JCC_COMPONENT_VERSION__ > 0
/*		the raw component version number for various use		*/
#		define __JCC_ATTRIBUTE_DISPATCH_component_version( VERSION ) ( __JCC_COMPONENT_VERSION__ >= VERSION )
#	else // __JCC_COMPONENT_VERSION__
/*		the raw component version number for various use		*/
#		define __JCC_ATTRIBUTE_DISPATCH_component_version( VERSION ) (0L)
#	endif // __JCC_COMPONENT_VERSION__
#endif // __JCC_ATTRIBUTE_DISPATCH_component_version


//__jattribute__((EXTERNC))
#if !defined( __JCC_ATTRIBUTE_DISPATCH_EXTERNC ) 
#	if defined(__cplusplus)
#		define __JCC_ATTRIBUTE_DISPATCH_EXTERNC extern "C" 
#	elif defined ( __midl )
#		define __JCC_ATTRIBUTE_DISPATCH_EXTERNC cpp_quote("extern \"C\"")
#	else // __cplusplus
#		define __JCC_ATTRIBUTE_DISPATCH_EXTERNC extern 
#	endif // __cplusplus
#endif // __JCC_ATTRIBUTE_DISPATCH_EXTERNC


//__jattribute__((EXTERNCPP))
#if !defined( __JCC_ATTRIBUTE_DISPATCH_EXTERNCPP ) 
#	if defined(__cplusplus)
#		define __JCC_ATTRIBUTE_DISPATCH_EXTERNCPP extern 
#	elif defined ( __midl )
#		define __JCC_ATTRIBUTE_DISPATCH_EXTERNCPP cpp_quote("extern \"C++\"")
#	else // __cplusplus
#		define __JCC_ATTRIBUTE_DISPATCH_EXTERNCPP extern "C++" 
#	endif // __cplusplus
#endif // __JCC_ATTRIBUTE_DISPATCH_EXTERNCPP


/* syntax list	:
__jattribute__((BEGIN_C_CODE))
__jattribute__((C_CODE_BEGIN))
__jattribute__((CC_BEGIN))
__jattribute__((cc_begin))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_BEGIN_C_CODE ) 
#	if defined(__cplusplus)
#		define __JCC_ATTRIBUTE_DISPATCH_BEGIN_C_CODE extern "C" {
#	elif defined ( __midl )
#		define __JCC_ATTRIBUTE_DISPATCH_BEGIN_C_CODE cpp_quote("extern \"C\" {")
#	else // __cplusplus
#		define __JCC_ATTRIBUTE_DISPATCH_BEGIN_C_CODE  
#	endif // __cplusplus
#	define __JCC_ATTRIBUTE_DISPATCH_C_CODE_BEGIN	__JCC_ATTRIBUTE_DISPATCH_BEGIN_C_CODE // alias
#	define __JCC_ATTRIBUTE_DISPATCH_CC_BEGIN		__JCC_ATTRIBUTE_DISPATCH_BEGIN_C_CODE // alias
#	define __JCC_ATTRIBUTE_DISPATCH_cc_begin		__JCC_ATTRIBUTE_DISPATCH_BEGIN_C_CODE // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_BEGIN_C_CODE


/* syntax list	:
__jattribute__((END_C_CODE))
__jattribute__((C_CODE_END))
__jattribute__((CC_END))
__jattribute__((cc_end))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_END_C_CODE ) 
#	if defined(__cplusplus)
#		define __JCC_ATTRIBUTE_DISPATCH_END_C_CODE }
#	elif defined ( __midl )
#		define __JCC_ATTRIBUTE_DISPATCH_END_C_CODE cpp_quote("}")
#	else // __cplusplus
#		define __JCC_ATTRIBUTE_DISPATCH_END_C_CODE  
#	endif // __cplusplus
#	define __JCC_ATTRIBUTE_DISPATCH_C_CODE_END		__JCC_ATTRIBUTE_DISPATCH_END_C_CODE // alias
#	define __JCC_ATTRIBUTE_DISPATCH_CC_END			__JCC_ATTRIBUTE_DISPATCH_END_C_CODE // alias
#	define __JCC_ATTRIBUTE_DISPATCH_cc_end			__JCC_ATTRIBUTE_DISPATCH_END_C_CODE // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_END_C_CODE


/* syntax list	:
__jattribute__((BEGIN_CPP_CODE))
__jattribute__((CPP_CODE_BEGIN))
__jattribute__((CPP_BEGIN))
__jattribute__((cpp_begin))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_BEGIN_CPP_CODE ) 
#	if defined(__cplusplus)
#		define __JCC_ATTRIBUTE_DISPATCH_BEGIN_CPP_CODE  
#	elif defined ( __midl )
#		define __JCC_ATTRIBUTE_DISPATCH_BEGIN_CPP_CODE cpp_quote("extern \"C++\" {")
#	else // __cplusplus
#		define __JCC_ATTRIBUTE_DISPATCH_BEGIN_CPP_CODE extern "C++" {
#	endif // __cplusplus
#	define __JCC_ATTRIBUTE_DISPATCH_CPP_CODE_BEGIN	__JCC_ATTRIBUTE_DISPATCH_BEGIN_CPP_CODE // alias
#	define __JCC_ATTRIBUTE_DISPATCH_CPP_BEGIN		__JCC_ATTRIBUTE_DISPATCH_BEGIN_CPP_CODE // alias
#	define __JCC_ATTRIBUTE_DISPATCH_cpp_begin		__JCC_ATTRIBUTE_DISPATCH_BEGIN_CPP_CODE // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_BEGIN_CPP_CODE


/* syntax list	:
__jattribute__((END_CPP_CODE))
__jattribute__((CPP_CODE_END))
__jattribute__((CPP_END))
__jattribute__((cpp_end))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_END_CPP_CODE ) 
#	if defined(__cplusplus)
#		define __JCC_ATTRIBUTE_DISPATCH_END_CPP_CODE  
#	elif defined ( __midl )
#		define __JCC_ATTRIBUTE_DISPATCH_END_CPP_CODE cpp_quote("}")
#	else // __cplusplus
#		define __JCC_ATTRIBUTE_DISPATCH_END_CPP_CODE }
#	endif // __cplusplus
#	define __JCC_ATTRIBUTE_DISPATCH_CPP_CODE_END	__JCC_ATTRIBUTE_DISPATCH_END_CPP_CODE // alias
#	define __JCC_ATTRIBUTE_DISPATCH_CPP_END			__JCC_ATTRIBUTE_DISPATCH_END_CPP_CODE // alias
#	define __JCC_ATTRIBUTE_DISPATCH_cpp_end			__JCC_ATTRIBUTE_DISPATCH_END_CPP_CODE // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_END_CPP_CODE



#endif // __JCC_HAS_LANGUAGE_LEVEL__
