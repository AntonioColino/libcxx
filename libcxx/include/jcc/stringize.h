#ifndef __JCC_HAS_STRINGIZE__
#define __JCC_HAS_STRINGIZE__  1  
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__


#ifndef __JCC_STRINGIZE 
/*	basic stringize macro	*/
#	define __JCC_STRINGIZE_UNUSED__(_String) # _String
#	define __JCC_STRINGIZE(x) __JCC_STRINGIZE_UNUSED__(x)
#	define __JCC_ATTRIBUTE_DISPATCH_stringize( reference_string ) __JCC_STRINGIZE( reference_string )
#	define __JCC_ATTRIBUTE_DISPATCH___stringize__( reference_string ) __JCC_STRINGIZE( reference_string )
#	define __JCC_ATTRIBUTE_DISPATCH_STRINGIZE( reference_string ) __JCC_STRINGIZE( reference_string )
#	define __JCC_ATTRIBUTE_DISPATCH___STRINGIZE__( reference_string ) __JCC_STRINGIZE( reference_string )
#endif // __JCC_STRINGIZE

#ifndef __JCC_WIDE
/*	basic wide stringize macro	*/
#	define __JCC_STRINGIZEW_UNUSED__(_String) L ## # _String
#	define __JCC_WIDE( x ) __JCC_STRINGIZEW_UNUSED__( x )
#	define __JCC_ATTRIBUTE_DISPATCH_stringize_wide( reference_string ) __JCC_STRINGIZE( reference_string )
#	define __JCC_ATTRIBUTE_DISPATCH___stringizew__( reference_string ) __JCC_STRINGIZE( reference_string )
#	define __JCC_ATTRIBUTE_DISPATCH_STRINGIZE_WIDE( reference_string ) __JCC_STRINGIZE( reference_string )
#	define __JCC_ATTRIBUTE_DISPATCH___STRINGIZEW__( reference_string ) __JCC_STRINGIZE( reference_string )
#endif /* __JCC_STRINGIZEW */


#endif // __JCC_HAS_STRINGIZE__
