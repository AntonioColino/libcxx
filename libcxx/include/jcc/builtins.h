#ifndef __JCC_HAS_BUILTIN_ATTRIBUTES__
#define __JCC_HAS_BUILTIN_ATTRIBUTES__  1
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__

#ifndef __HAS_GNUC_ATTRIBUTE__
#	if (!defined( __GNUC__ ) || ( __GNUC__ < 2 )) && !defined( __clang__ )
	/* Here we try to determine the lack of __attribute__ features. */
#		define __NO_GNUC_ATTRIBUTE__	1
		/* Here we try to determine the availibility of __attribute__ features. */
#		define __HAS_GNUC_ATTRIBUTE__	0
#	else // !defined __GNUC__ || __GNUC__ < 2
	/* Here we try to determine the lack of __attribute__ features. */
#		define __NO_GNUC_ATTRIBUTE__	0
		/* Here we try to determine the availibility of __attribute__ features. */
#		define __HAS_GNUC_ATTRIBUTE__	1
#	endif // !defined __GNUC__ || __GNUC__ < 2
#endif //__HAS_GNUC_ATTRIBUTE__

#ifndef _GCC_STYLE_ATTRIBUTE_DEFINED
	/* GCC has various useful declarations that can be made with the
	   `__attribute__' syntax.  All of the ways we use this do fine if
	   they are omitted for compilers that don't understand it. */
#	if __NO_GNUC_ATTRIBUTE__
#		define __attribute__(xyz)	/* Ignore */
#		define _Pragma( ... )		/* Ignore */
#		define _GCC_STYLE_ATTRIBUTE_DEFINED 1
#	elif defined(__INTELLISENSE__)
#		define __attribute__(xyz)	__attribute__(xyz)
#		define _GCC_STYLE_ATTRIBUTE_DEFINED 1
#		if defined(__GNUC__)
#			define _Pragma( ... ) /*__pragma( __VA_ARGS__ )*/
#		else // ! __GNUC__
#			define _Pragma( ... ) __pragma( __VA_ARGS__ ) // Just for intellisense,( reverts upon compilation ).
#		endif // __GNUC__
#	endif // __NO_GNUC_ATTRIBUTE__
#endif // _GCC_STYLE_ATTRIBUTE_DEFINED

#ifndef __WINDOWS_CODE_BASE__
	   /*	Here we try to determine the availibility of windows features. */
#	if defined( _WIN32 ) || defined( _WIN64 ) || defined( __CYGWIN__ ) || defined( __CYGWIN64__ ) || defined( __MINGW32__ ) || defined( __MINGW64__ )
/*		Here we try to determine the availibility of windows features. */
#		define __WINDOWS_CODE_BASE__ 1
#	else
/*		Here we try to determine the lack of windows features.			*/
#		define __WINDOWS_CODE_BASE__ 0
#	endif //  defined( _WIN32 ) || defined( __CYGWIN__ ) || defined( __MINGW32__ )
#endif // __WINDOWS_CODE_BASE__

#ifndef __JCC_HAS_CPP_ATTRIBUTE
#	if defined( __has_cpp_attribute ) && defined(__JCC_COMPONENT_VERSION__)
/*		Here we try to determine the availibility of cpp_attributes which give a lang version #, which we compare against our component version macro. */
#		define __JCC_HAS_CPP_ATTRIBUTE( ATTRIBUTE ) ( ( __has_cpp_attribute( ATTRIBUTE ) > 0 )	\
			&& ( __has_cpp_attribute( ATTRIBUTE ) <= __JCC_COMPONENT_VERSION__ )				\
			&& ( __JCC_COMPONENT_VERSION__ > 0 ) )
#	else
#		define __JCC_HAS_CPP_ATTRIBUTE( ATTRIBUTE ) 0
#	endif // __JCC_COMPONENT_VERSION__
#endif // !_MSC_VER

//#if __jattribute__((has_cpp_attribute(CPP_ATTRIBUTE)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_has_cpp_attribute
/*		Here we try to determine the availibility of cpp_attributes which give a lang version #, which we compare against our component version macro. */
#	define __JCC_ATTRIBUTE_DISPATCH_has_cpp_attribute( CPP_ATTRIBUTE ) ( __JCC_HAS_CPP_ATTRIBUTE( CPP_ATTRIBUTE ) )
#endif // __JCC_ATTRIBUTE_DISPATCH_has_cpp_attribute

//#if __jattribute__((has_jcc_attribute(ATTRIBUTE)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_has_jcc_attribute
/*		Here we try to determine the availibility of jcc_attributes. */
#	define __JCC_ATTRIBUTE_DISPATCH_has_jcc_attribute( CPP_ATTRIBUTE ) ( defined( __JCC_ATTRIBUTE_DISPATCH_ ## CPP_ATTRIBUTE ))
#endif // __JCC_ATTRIBUTE_DISPATCH_has_jcc_attribute



#endif // __JCC_HAS_BUILTIN_ATTRIBUTES__
