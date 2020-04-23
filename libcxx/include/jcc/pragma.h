#ifndef __HAS_JCC_PRAGMA_ONCE__
#define __HAS_JCC_PRAGMA_ONCE__  1  
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__

#include <jcc/stringize.h>

//__jattribute__((once))
#ifndef __JCC_ATTRIBUTE_DISPATCH_once
#	define     __JCC_ATTRIBUTE_DISPATCH_once  __pragma_once__
#endif // __JCC_ATTRIBUTE_DISPATCH_once

//__jattribute__((pragma(Args...))) 
#if !defined( __JCC_ATTRIBUTE_DISPATCH_pragma )
#   if defined(_MSC_VER) 
/*		do pragma		*/
#       define __JCC_ATTRIBUTE_DISPATCH_pragma(...) __pragma(__VA_ARGS__)
/*		do pragma		*/
#       define __JCC_PRAGMA(...) __pragma(__VA_ARGS__)
#   else // _MSC_VER
/*		do pragma		*/
#       define __JCC_ATTRIBUTE_DISPATCH_pragma(...) _Pragma(__JCC_STRINGIZE( __VA_ARGS__ ) )
/*		do pragma		*/
#       define __JCC_PRAGMA(...) _Pragma(__JCC_STRINGIZE( __VA_ARGS__ ) )
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_pragma



#endif // __HAS_JCC_PRAGMA_ONCE__
