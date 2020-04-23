#ifndef __HAS_JCC_DISABLED_WARNINGS__
#define __HAS_JCC_DISABLED_WARNINGS__  1  
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__

#include <jcc/stringize.h>


#ifndef _JCC_EXTRA_MSVC_DISABLED_WARNINGS
/*		Overwrite to add further warnings for msvc. */
#	define _JCC_EXTRA_MSVC_DISABLED_WARNINGS 
#endif // _JCC_EXTRA_MSVC_DISABLED_WARNINGS

#ifndef _JCC_MSVC_DISABLED_WARNINGS
// clang-format off
#define _JCC_MSVC_DISABLED_WARNINGS						\
	4412 4455 4472 4494 4514 4571 4574 4582 4583 4587	\
	4588 4619 4623 4625 4626 4643 4702 4793 4820 4988	\
	5026 5027 5045 4002 4068 4003 4067					\
	4577												\
	4984												\
	_JCC_EXTRA_MSVC_DISABLED_WARNINGS
// clang-format on
#endif // _JCC_MSVC_DISABLED_WARNINGS


/*		Overwrite to add further warnings for clang. */
#ifndef _JCC_DISABLE_CLANG_WARNINGS
#	if defined( __clang__ ) && !defined( __GNUC__ )
	// clang-format off
#	define _JCC_DISABLE_CLANG_WARNINGS											\
		_Pragma("clang diagnostic push")										\
		_Pragma("clang diagnostic ignored \"-Wc++-compat\"")					\
		_Pragma("clang diagnostic ignored \"-Wc++17-compat\"")					\
		_Pragma("clang diagnostic ignored \"-Wc++17-extensions\"")				\
		_Pragma("clang diagnostic ignored \"-Wuser-defined-literals\"")		\
		_Pragma("clang diagnostic ignored \"-Wextra-tokens\"")					\
		_Pragma("clang diagnostic ignored \"-Wbuiltin-macro-redefined\"")		\
		_Pragma("clang diagnostic ignored \"-Wmacro-redefined\"")				\
		_Pragma("clang diagnostic ignored \"-Wunknown-pragmas\"")				\
		_Pragma("clang diagnostic ignored \"-Wpragma-once-outside-header\"")	\
		_Pragma("clang diagnostic ignored \"-Wignored-pragma-intrinsic\"")		\
		_Pragma("clang diagnostic ignored \"-Wreserved-id-macro\"")
	// clang-format on
#	elif defined( __GNUC__ ) 
	// clang-format off
#define _JCC_DISABLE_CLANG_WARNINGS											\
		_Pragma("GCC diagnostic push")											\
		_Pragma("GCC diagnostic ignored \"-Wc++-compat\"")						\
		_Pragma("GCC diagnostic ignored \"-Wc++17-compat\"")					\
		_Pragma("GCC diagnostic ignored \"-Wc++17-extensions\"")				\
		_Pragma("GCC diagnostic ignored \"-Wuser-defined-literals\"")			\
		_Pragma("GCC diagnostic ignored \"-Wextra-tokens\"")					\
		_Pragma("GCC diagnostic ignored \"-Wbuiltin-macro-redefined\"")			\
		_Pragma("GCC diagnostic ignored \"-Wmacro-redefined\"")					\
		_Pragma("GCC diagnostic ignored \"-Wunknown-pragmas\"")					\
		_Pragma("GCC diagnostic ignored \"-Wpragma-once-outside-header\"")		\
		_Pragma("GCC diagnostic ignored \"-Wignored-pragma-intrinsic\"")		\
		_Pragma("GCC diagnostic ignored \"-Wreserved-id-macro\"")
	// clang-format on
#	else // __clang__
#define _JCC_DISABLE_CLANG_WARNINGS
#	endif // __clang__
#endif // _JCC_DISABLE_CLANG_WARNINGS

#ifndef _JCC_RESTORE_CLANG_WARNINGS
#	if defined( __clang__ ) && !defined( __GNUC__ )
#		define _JCC_RESTORE_CLANG_WARNINGS __pragma("clang diagnostic pop")
#	elif defined( __clang__ ) && defined( __GNUC__ )
#		define _JCC_RESTORE_CLANG_WARNINGS _Pragma("GCC diagnostic pop")
#	else // __clang__
#		define _JCC_RESTORE_CLANG_WARNINGS
#	endif // __clang__
#endif // _JCC_RESTORE_CLANG_WARNINGS

//__jattribute__((disable_warnings))
#ifndef __JCC_ATTRIBUTE_DISPATCH_disable_warnings
#   if defined(_MSC_VER) && !defined(__clang__)
/*		#pragma warning(disable : _JCC_MSVC_DISABLED_WARNINGS) */
#       define     __JCC_ATTRIBUTE_DISPATCH_disable_warnings __pragma(warning( disable : _JCC_MSVC_DISABLED_WARNINGS ))
#   else // _MSC_VER
/*		_JCC_DISABLE_CLANG_WARNINGS					 */
#       define     __JCC_ATTRIBUTE_DISPATCH_disable_warnings _JCC_DISABLE_CLANG_WARNINGS
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_disable_warnings
__JCC_ATTRIBUTE_DISPATCH_disable_warnings

//__jattribute__((restore_warnings))
#ifndef __JCC_ATTRIBUTE_DISPATCH_restore_warnings
/*		_JCC_RESTORE_CLANG_WARNINGS					 */
#       define     __JCC_ATTRIBUTE_DISPATCH_restore_warnings _JCC_RESTORE_CLANG_WARNINGS
#endif // __JCC_ATTRIBUTE_DISPATCH_restore_warnings

//__jattribute__((warning_push))
#ifndef __JCC_ATTRIBUTE_DISPATCH_warning_push
#   if defined(_MSC_VER)
/*		#pragma warning(push, WARNING_LEVEL)				 */
#       define     __JCC_ATTRIBUTE_DISPATCH_warning_push( WARNING_LEVEL )  __pragma(warning( push , WARNING_LEVEL ))
#   else // _MSC_VER
/*		#pragma warning(push, WARNING_LEVEL)				 */
#       define     __JCC_ATTRIBUTE_DISPATCH_warning_push( WARNING_LEVEL ) _Pragma( __JCC_STRINGIZE( warning( push , WARNING_LEVEL ) ) ) 
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_warning_push

//__jattribute__((warning_pop))
#ifndef __JCC_ATTRIBUTE_DISPATCH_warning_pop
#   if defined(_MSC_VER)
/*		#pragma warning(pop)				 */
#       define     __JCC_ATTRIBUTE_DISPATCH_warning_pop __pragma(warning(pop))
#   else // _MSC_VER
/*		#pragma warning(pop)				 */
#       define     __JCC_ATTRIBUTE_DISPATCH_warning_pop _Pragma( __JCC_STRINGIZE( warning(pop) ) ) _JCC_RESTORE_CLANG_WARNINGS
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_warning_pop


//__jattribute__((message("output this message...")))
#ifndef __JCC_ATTRIBUTE_DISPATCH_message
#   if defined(_MSC_VER)
/*		#pragma message(MESSAGE)				 */
#       define     __JCC_ATTRIBUTE_DISPATCH_message( MESSAGE ) __pragma(message(MESSAGE))
#   else // _MSC_VER
/*		#pragma message(MESSAGE)				 */
#       define     __JCC_ATTRIBUTE_DISPATCH_message( MESSAGE ) _Pragma( __JCC_STRINGIZE( message(MESSAGE) ) ) _JCC_RESTORE_CLANG_WARNINGS
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_message


//__jattribute__((warning("output this warning...")))
#ifndef __JCC_ATTRIBUTE_DISPATCH_warning
#   if defined(_MSC_VER)
/*		#pragma warning(MESSAGE)				 */
#       define     __JCC_ATTRIBUTE_DISPATCH_warning( MESSAGE ) __pragma(message(MESSAGE))
#   else // _MSC_VER
/*		#pragma message(MESSAGE)				 */
#       define     __JCC_ATTRIBUTE_DISPATCH_warning( MESSAGE ) _Pragma( __JCC_STRINGIZE( message(MESSAGE) ) ) _JCC_RESTORE_CLANG_WARNINGS
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_message

/* syntax list	:
__jattribute__((deprecated(MESSAGE)))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH_deprecated ) 
#	if defined( __has_attribute ) && __has_attribute( deprecated )
#		define __JCC_ATTRIBUTE_DISPATCH_deprecated(MESSAGE) __attribute__((deprecated(MESSAGE)))
#	elif defined( __has_attribute ) && __has_attribute( __deprecated__ )
#		define __JCC_ATTRIBUTE_DISPATCH_deprecated(MESSAGE) __attribute__((__deprecated__(MESSAGE)))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_deprecated(MESSAGE) __declspec(deprecated(MESSAGE))
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_deprecated(MESSAGE) __attribute__((deprecated(MESSAGE)))
#	elif __JCC_HAS_CPP_ATTRIBUTE(deprecated)
#		define __JCC_ATTRIBUTE_DISPATCH_deprecated(MESSAGE) [[deprecated(MESSAGE)]]
#	elif __STDC_VERSION__ >= 201112L
#		define __JCC_ATTRIBUTE_DISPATCH_deprecated(MESSAGE) [[deprecated(MESSAGE)]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_deprecated(MESSAGE)
#	endif // __JCC_HAS_CPP_ATTRIBUTE

/* syntax list	:
__jattribute__((insecure(REPLACEMENT_FUNCTION)))
__jattribute__((__insecure__(REPLACEMENT_FUNCTION)))
*/
#define __JCC_ATTRIBUTE_DISPATCH_insecure(_REPLACEMENT_FUNCTION) __JCC_ATTRIBUTE_DISPATCH_deprecated(		\
			"This function or variable may be unsafe. Consider using "										\
			#_REPLACEMENT_FUNCTION																			\
			" instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. "								\
			"See online help for details."																	)
#define __JCC_ATTRIBUTE_DISPATCH___insecure__(_REPLACEMENT)		__JCC_ATTRIBUTE_DISPATCH_insecure(_REPLACEMENT)


/* syntax list	:
__jattribute__((nonstdc(REPLACEMENT_FUNCTION)))
__jattribute__((__nonstdc__(REPLACEMENT_FUNCTION)))
*/
#define __JCC_ATTRIBUTE_DISPATCH_nonstdc(_REPLACEMENT_FUNCTION) __JCC_ATTRIBUTE_DISPATCH_deprecated(        \
			"The POSIX name for this item is deprecated. Instead, use the ISO C "							\
			"and C++ conformant name: " #_REPLACEMENT_FUNCTION ". See online help for details.")
#define __JCC_ATTRIBUTE_DISPATCH___nonstdc__(_REPLACEMENT)		__JCC_ATTRIBUTE_DISPATCH_nonstdc(_REPLACEMENT)
#endif // _NORETURN


/* syntax list	:
__jattribute__((__deprecated__))
*/
#if !defined( __JCC_ATTRIBUTE_DISPATCH___deprecated__ ) 
#	if defined( __has_attribute ) && __has_attribute( deprecated )
#		define __JCC_ATTRIBUTE_DISPATCH___deprecated__ __attribute__((deprecated))
#	elif defined( __has_attribute ) && __has_attribute( __deprecated__ )
#		define __JCC_ATTRIBUTE_DISPATCH___deprecated__ __attribute__((__deprecated__))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH___deprecated__ __declspec(deprecated)
#	elif defined(__GNUC__) || defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH___deprecated__ __attribute__((deprecated))
#	elif __JCC_HAS_CPP_ATTRIBUTE(deprecated)
#		define __JCC_ATTRIBUTE_DISPATCH___deprecated__ [[deprecated]]
#	elif __STDC_VERSION__ >= 201112L
#		define __JCC_ATTRIBUTE_DISPATCH___deprecated__ [[deprecated]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH___deprecated__
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#endif // __JCC_ATTRIBUTE_DISPATCH___deprecated__





#endif // __HAS_JCC_DISABLED_WARNINGS__
