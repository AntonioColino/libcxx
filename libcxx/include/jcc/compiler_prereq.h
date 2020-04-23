#ifndef __HAS_JCC_COMPILER_PREREQUISITES__
#define __HAS_JCC_COMPILER_PREREQUISITES__  1  
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__


/* Convenience macro to test the version of gcc.
   Use like this:
   #if __JCC_GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note: only works for GCC 2.0 and later, because __GNUC_MINOR__ was
   added in 2.0.  */
#if defined (__GNUC__) && defined (__GNUC_MINOR__)
   /*	#if __JCC_GNUC_PREREQ(4, 0)		*/
#	define __JCC_GNUC_PREREQ(major, minor) (__GNUC__ > (major) || (__GNUC__ == (major) && __GNUC_MINOR__ >= (minor)))
#else
   /*	#if __JCC_GNUC_PREREQ(4, 0)		*/
#	define __JCC_GNUC_PREREQ(major, minor) 0
#endif // __JCC_GNUC_PREREQ

//#if __jattribute__((gnuc_prereq(2,8))) 
#ifndef __JCC_ATTRIBUTE_DISPATCH_gnuc_prereq
#	define __JCC_ATTRIBUTE_DISPATCH_gnuc_prereq( major, minor ) __JCC_GNUC_PREREQ(major, minor)
#endif // !__JCC_ATTRIBUTE_DISPATCH_gnuc_prereq

/* Similarly for clang.  Features added to GCC after version 4.2 may
   or may not also be available in clang, and clang's definitions of
   __GNUC(_MINOR)__ are fixed at 4 and 2 respectively.  Not all such
   features can be queried via __has_extension/__has_feature.  */
#if defined __clang_major__ && defined __clang_minor__
   /*	#if __JCC_CLANG_PREREQ(4, 0)		*/
#	define __JCC_CLANG_PREREQ(maj, min) ((__clang_major__ << 16) + __clang_minor__ >= ((maj) << 16) + (min))
#else
   /*	#if __JCC_CLANG_PREREQ(4, 0)		*/
#	define __JCC_CLANG_PREREQ(maj, min) 0
#endif // __JCC_CLANG_PREREQ

   //#if __jattribute__((clang_prereq(2,8))) 
#ifndef __JCC_ATTRIBUTE_DISPATCH_clang_prereq
#	define __JCC_ATTRIBUTE_DISPATCH_clang_prereq( major, minor ) __JCC_CLANG_PREREQ(major, minor)
#endif // !__JCC_ATTRIBUTE_DISPATCH_clang_prereq

#if defined (_MSC_VER)
   /*	#if __JCC_MSVC_PREREQ(14, 0)		*/
#	define __JCC_MSVC_PREREQ(major, minor) (( _MSC_VER ) >= (( major * 100 ) + ( minor * 10 )))
#else
   /*	#if __JCC_MSVC_PREREQ(14, 0)		*/
#	define __JCC_MSVC_PREREQ(major, minor) 0
#endif // __JCC_MSVC_PREREQ

//#if __jattribute__((msvc_prereq(12,8))) 
#ifndef __JCC_ATTRIBUTE_DISPATCH_msvc_prereq
#	define __JCC_ATTRIBUTE_DISPATCH_msvc_prereq( major, minor ) __JCC_MSVC_PREREQ(major, minor)
#endif // !__JCC_ATTRIBUTE_DISPATCH_msvc_prereq

#if defined (__INTEL_COMPILER)
   /*	#if __JCC_INTEL_PREREQ(19, 0)		*/
#	define __JCC_INTEL_PREREQ(major, minor) (( __INTEL_COMPILER ) >= (( major * 100 ) + ( minor * 10 )))
#else
/*	#if __JCC_INTEL_PREREQ(19, 0)		*/
#	define __JCC_INTEL_PREREQ(major, minor) 0
#endif // __JCC_INTEL_PREREQ

//#if __jattribute__((intel_prereq(12,8))) 
#ifndef __JCC_ATTRIBUTE_DISPATCH_intel_prereq
#	define __JCC_ATTRIBUTE_DISPATCH_intel_prereq( major, minor ) __JCC_INTEL_PREREQ(major, minor)
#endif // !__JCC_ATTRIBUTE_DISPATCH_intel_prereq





#endif // __HAS_JCC_COMPILER_PREREQUISITES__
