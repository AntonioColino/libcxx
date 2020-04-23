#ifndef __JCC_HAS_DEBUG__
#define __JCC_HAS_DEBUG__  1  
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__


#ifndef __JCC_IS_DEBUGGING__
/*	debugging macro check	*/
#	if defined(_DEBUG) || defined(DEBUG) || defined(_NDEBUG) || defined(NDEBUG)		\
	|| defined(_IS_DEBUG) || defined(IS_DEBUG) || defined(_IS_DEBUGGING)			\
	|| defined(IS_DEBUGGING)
#		define __JCC_IS_DEBUGGING__							1
#		define __JCC_ATTRIBUTE_DISPATCH_is_debugging		1
#		define __JCC_ATTRIBUTE_DISPATCH_debug				1
#	else
#		define __JCC_IS_DEBUGGING__							0
#		define __JCC_ATTRIBUTE_DISPATCH_is_debugging		0
#		define __JCC_ATTRIBUTE_DISPATCH_debug				0
#	endif // __JCC_IS_DEBUGGING__
#endif // __JCC_IS_DEBUGGING__




#endif // __JCC_HAS_DEBUG__
