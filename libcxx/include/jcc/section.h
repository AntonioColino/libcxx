#ifndef __HAS_JCC_SECTIONS__
#define __HAS_JCC_SECTIONS__  1  
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__


#include <jcc/stringize.h>
#include <jcc/language.h>
#include <jcc/compiler_prereq.h>




// declare a defined segment for later use with possible attributes 
// [msvc ignores segment descriptor and uses the rest of the attribute list] 
// [clang and gcc use segment descriptor, and ignore the rest of the attribute list]
//__jattribute__((declsection(".CRT$XLF", text, shared, execute)))
#if !defined( __JCC_ATTRIBUTE_DISPATCH_declsection ) 
#	if defined(_MSC_VER) && !defined(__clang__) 
#		define __JCC_ATTRIBUTE_DISPATCH_declsection(SECTION_NAME, SEGMENT, ...) __pragma(section( __JCC_STRINGIZE( SECTION_NAME ), __VA_ARGS__))
#	elif defined(__clang__) 
#		define __JCC_ATTRIBUTE_DISPATCH_declsection(SECTION_NAME, SEGMENT, ...) _Pragma( __JCC_STRINGIZE( clang section SEGMENT=SECTION_NAME ) )
#	else // _MSC_VER
#		define __JCC_ATTRIBUTE_DISPATCH_declsection(SECTION_NAME, SEGMENT, ...) _Pragma( __JCC_STRINGIZE( GCC section SEGMENT=SECTION_NAME ) )
#	endif // _MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_declsection

// use a previously declared segment with possible attributes 
// [clang and msvc ignore the attribute list that gcc uses]
// __jattribute__((section(".CRT$XLF", shared))) 
#if !defined( __JCC_ATTRIBUTE_DISPATCH_section ) 
#	if defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_section(SECTION_NAME, ...) __attribute__((section(__JCC_STRINGIZE( SECTION_NAME ))))
#	elif defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_section(SECTION_NAME, ...) __declspec(allocate(__JCC_STRINGIZE( SECTION_NAME )))
#	elif defined(__GNUC__) 
#		define __JCC_ATTRIBUTE_DISPATCH_section(SECTION_NAME, ...) __attribute__((section(__JCC_STRINGIZE( SECTION_NAME )), __VA_ARGS__))
#	elif defined( __has_attribute ) && __has_attribute( section )
#		define __JCC_ATTRIBUTE_DISPATCH_section(SECTION_NAME, ...) __attribute__((section(__JCC_STRINGIZE( SECTION_NAME )), __VA_ARGS__))
#	elif defined( __has_attribute ) && __has_attribute( __section__ )
#		define __JCC_ATTRIBUTE_DISPATCH_section(SECTION_NAME, ...) __attribute__((__section__(__JCC_STRINGIZE( SECTION_NAME )), __VA_ARGS__))
#	elif __JCC_HAS_CPP_ATTRIBUTE(section)
#		define __JCC_ATTRIBUTE_DISPATCH_section(SECTION_NAME, ...) [[section(__JCC_STRINGIZE( SECTION_NAME ))]]
#	elif __JCC_HAS_CPP_ATTRIBUTE(allocate)
#		define __JCC_ATTRIBUTE_DISPATCH_section(SECTION_NAME, ...) [[allocate(__JCC_STRINGIZE( SECTION_NAME ))]]
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_section(SECTION_NAME, ...)
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#endif // __JCC_ATTRIBUTE_DISPATCH_section

// single use code segment declare and use, no attributes [ code single segment ]
// __jattribute__((code_sseg(".CRT$XLF"))) int some_return()
#if !defined( __JCC_ATTRIBUTE_DISPATCH_code_sseg ) 
#	if defined( _MSC_VER )
#		define __JCC_ATTRIBUTE_DISPATCH_code_sseg( SECTION_NAME ) __declspec(code_seg(__JCC_STRINGIZE( SECTION_NAME )))
#	elif defined(__clang__)
#		define __JCC_ATTRIBUTE_DISPATCH_code_sseg( SECTION_NAME ) __attribute__((section(__JCC_STRINGIZE( SECTION_NAME ))))
#	elif defined(__GNUC__) 
#		define __JCC_ATTRIBUTE_DISPATCH_code_sseg( SECTION_NAME ) __attribute__((section(__JCC_STRINGIZE( SECTION_NAME ))))
#	elif defined( __has_attribute ) && __has_attribute( section )
#		define __JCC_ATTRIBUTE_DISPATCH_code_sseg( SECTION_NAME )  __attribute__((section(__JCC_STRINGIZE( SECTION_NAME ))))
#	elif defined( __has_attribute ) && __has_attribute( __section__ )
#		define __JCC_ATTRIBUTE_DISPATCH_code_sseg( SECTION_NAME ) __attribute__((__section__(__JCC_STRINGIZE( SECTION_NAME ))))
#	else
#		define __JCC_ATTRIBUTE_DISPATCH_code_sseg( SECTION_NAME )
#	endif // __JCC_HAS_CPP_ATTRIBUTE
#endif // __JCC_ATTRIBUTE_DISPATCH_code_sseg

// declare a data segment for later use with no[or/default] attributes 
//__jattribute__((code_seg(".CRT$D")))
#if !defined( __JCC_ATTRIBUTE_DISPATCH_data_seg ) 
#	if defined(_MSC_VER) && !defined(__clang__) 
#		define __JCC_ATTRIBUTE_DISPATCH_data_seg(SECTION_NAME) __pragma(data_seg( __JCC_STRINGIZE( SECTION_NAME ) ))
#	elif defined(__clang__) 
#		define __JCC_ATTRIBUTE_DISPATCH_data_seg(SECTION_NAME) _Pragma( __JCC_STRINGIZE( clang section data=SECTION_NAME ) )
#	else // _MSC_VER
#		define __JCC_ATTRIBUTE_DISPATCH_data_seg(SECTION_NAME) _Pragma( __JCC_STRINGIZE( GCC section data=SECTION_NAME ) )
#	endif // _MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_data_seg

// declare a const/rodata segment for later use with no[or/default] attributes 
//__jattribute__((code_seg(".CRT$RD")))
#if !defined( __JCC_ATTRIBUTE_DISPATCH_const_seg ) 
#	if defined(_MSC_VER) && !defined(__clang__) 
#		define __JCC_ATTRIBUTE_DISPATCH_const_seg(SECTION_NAME) __pragma(const_seg( __JCC_STRINGIZE( SECTION_NAME ) ))
#	elif defined(__clang__) 
#		define __JCC_ATTRIBUTE_DISPATCH_const_seg(SECTION_NAME) _Pragma( __JCC_STRINGIZE( clang section rodata=SECTION_NAME ) )
#	else // _MSC_VER
#		define __JCC_ATTRIBUTE_DISPATCH_const_seg(SECTION_NAME) _Pragma( __JCC_STRINGIZE( GCC section rodata=SECTION_NAME ) )
#	endif // _MSC_VER
#		define __JCC_ATTRIBUTE_DISPATCH_rodata_seg(SECTION_NAME) __JCC_ATTRIBUTE_DISPATCH_const_seg(SECTION_NAME)
#endif // __JCC_ATTRIBUTE_DISPATCH_const_seg

// declare a text/code segment for later use with no[or/default] attributes 
//__jattribute__((code_seg(".CRT$C")))
#if !defined( __JCC_ATTRIBUTE_DISPATCH_code_seg ) 
#	if defined(_MSC_VER) && !defined(__clang__) 
#		define __JCC_ATTRIBUTE_DISPATCH_code_seg(SECTION_NAME) __pragma(code_seg( __JCC_STRINGIZE( SECTION_NAME ) ))
#	elif defined(__clang__) 
#		define __JCC_ATTRIBUTE_DISPATCH_code_seg(SECTION_NAME) _Pragma( __JCC_STRINGIZE( clang section text=SECTION_NAME ) )
#	else // _MSC_VER
#		define __JCC_ATTRIBUTE_DISPATCH_code_seg(SECTION_NAME) _Pragma( __JCC_STRINGIZE( GCC section text=SECTION_NAME ) )
#	endif // _MSC_VER
#		define __JCC_ATTRIBUTE_DISPATCH_text_seg(SECTION_NAME) __JCC_ATTRIBUTE_DISPATCH_code_seg(SECTION_NAME)
#endif // __JCC_ATTRIBUTE_DISPATCH_code_seg

// declare a bss segment for later use with no[or/default] attributes 
//__jattribute__((code_seg(".CRT$B")))
#if !defined( __JCC_ATTRIBUTE_DISPATCH_bss_seg ) 
#	if defined(_MSC_VER) && !defined(__clang__) 
#		define __JCC_ATTRIBUTE_DISPATCH_bss_seg(SECTION_NAME) __pragma(bss_seg( __JCC_STRINGIZE( SECTION_NAME ) ))
#	elif defined(__clang__) 
#		define __JCC_ATTRIBUTE_DISPATCH_bss_seg(SECTION_NAME) _Pragma( __JCC_STRINGIZE( clang section bss=SECTION_NAME ) )
#	else // _MSC_VER
#		define __JCC_ATTRIBUTE_DISPATCH_bss_seg(SECTION_NAME) _Pragma( __JCC_STRINGIZE( GCC section bss=SECTION_NAME ) )
#	endif // _MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_bss_seg







#endif // __HAS_JCC_SECTIONS__
