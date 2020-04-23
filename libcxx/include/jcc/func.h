#ifndef __HAS_JCC_FUNC__
#define __HAS_JCC_FUNC__  1  
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
#include <jcc/optimize.h>




#ifndef __JCC_FUNCTION__
// Unused helper function for defining __JCC_FUNCTION__ to use compiler or lang. built-ins.
__JCC_ATTRIBUTE_DISPATCH_inline void jfunction()
{
	// do some direct checks first here's hoping, and what can it hurt?
#	if defined(__FUNCDNAME__)
#		define __JCC_FUNCTION__ __FUNCDNAME__
#	elif defined(__FUNCTION__)
#		define __JCC_FUNCTION__ __FUNCTION__
#	elif defined(__func__)
#		define __JCC_FUNCTION__ __func__
#	elif defined(__FUNC__)
#		define __JCC_FUNCTION__ __FUNC__
#	elif defined(__FUNCSIG__)
#		define __JCC_FUNCTION__ __FUNCSIG__
#	elif defined(__PRETTY_FUNCTION__)
#		define __JCC_FUNCTION__ __PRETTY_FUNCTION__
	// fall back to compiler built-ins
#	elif defined(_MSC_VER) && (_MSC_VER >= 600)
#		define __JCC_FUNCTION__ __FUNCDNAME__
#	elif defined(__INTEL_COMPILER) && (__INTEL_COMPILER >= 600)
#		define __JCC_FUNCTION__ __FUNCDNAME__
	// fall back to language standards
#	elif defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#		define __JCC_FUNCTION__ __func__
#	elif defined( _MSC_VER ) && defined( _MSVC_LANG ) && defined( __cplusplus ) && _MSVC_LANG >= 201103L
#		define __JCC_FUNCTION__ __func__
#	elif defined( __cplusplus ) && __cplusplus >= 201103L
#		define __JCC_FUNCTION__ __func__
	// fall back to compiler built-ins
#	elif defined(__GNUC__) || defined(__GNUG__) || defined(__clang__) || defined(__llvm__) || defined(__ghs__)
#		define __JCC_FUNCTION__ __PRETTY_FUNCTION__
#	elif defined(__IBMCPP__) && (__IBMCPP__ >= 500)
#		define __JCC_FUNCTION__ __FUNCTION__
#	elif defined(__ICC) && (__ICC >= 600)
#		define __JCC_FUNCTION__ __PRETTY_FUNCTION__
#	elif defined(__MWERKS__) && (__MWERKS__ >= 0x3000)
#		define __JCC_FUNCTION__ __PRETTY_FUNCTION__
#	elif defined(__BORLANDC__) && (__BORLANDC__ >= 0x550)
#		define __JCC_FUNCTION__ __FUNC__
#	elif defined(__DMC__) && (__DMC__ >= 0x810)
#		define __JCC_FUNCTION__ __PRETTY_FUNCTION__
#	else
#		define __JCC_FUNCTION__ "unknown"
#		error "We are using no function name scheme..."
#	endif
	 //return __JCC_FUNCTION__;
}
#endif // __JCC_FUNCTION__


//std::cout << "This calling function's name is " << __jattribute__((__function_name__)) << std::endl; // output: This calling function's name is main
//std::cout << "This calling function's name is " << __jattribute__((function_name)) << std::endl; // output: This calling function's name is main
//std::cout << "This calling function's name is " << __jattribute__((__func__)) << std::endl; // output: This calling function's name is main
//std::cout << "This calling function's name is " << __jattribute__((func)) << std::endl; // output: This calling function's name is main
#if !defined( __JCC_ATTRIBUTE_DISPATCH_function_name ) 
#	define __JCC_ATTRIBUTE_DISPATCH_function_name		__JCC_FUNCTION__  // alias
#	define __JCC_ATTRIBUTE_DISPATCH___function_name__	__JCC_FUNCTION__  // alias
#	define __JCC_ATTRIBUTE_DISPATCH_func				__JCC_FUNCTION__  // alias
#	define __JCC_ATTRIBUTE_DISPATCH___func__			__JCC_FUNCTION__  // alias
#endif // __JCC_ATTRIBUTE_DISPATCH_function_name


/*
the wonders of macro magic...

extern "C" int some_return()
{
	__jattribute__((msvc_alias(some_other_return)))		// this allows msvc compiler to alias "some_other_return"
	std::cout << "we are inside " << __jattribute__((__func__)) << " function." << std::endl; // this allows the compiler to report the function name
	return 25;
}

extern "C" int __jattribute__((gcc_alias(some_return))) some_other_return(); // this allows gcc/clang compiler to alias "some_return"

*/
#if defined( __clang__ ) || defined(__llvm__)  || defined(__GNUG__)  || defined(__GNUC__) 
//
// usage undecorated:  extern "C" void __f() {   __msvc_alias__(f);   puts("This function is aliased");   } 
//            extern "C" void f() __gcc_alias__(__f); 
// __________________________________________________________________________________________
// usage decorated:  void __f() { __msvc_alias__(?f@@YAXXZ); puts("This function is aliased"); }
//            void f() __gcc_alias__(?__f@@YAXXZ); // make sure there are no spaces in the chain of charachters
// __________________________________________________________________________________________
#        define __JCC_ATTRIBUTE_DISPATCH_gcc_alias( weak_reference_source ) __attribute__((weak, alias(__JCC_STRINGIZE(weak_reference_source))))
//
// usage undecorated:  extern "C" void __f() {   __msvc_alias__(f);   puts("This function is aliased");   } 
//            extern "C" void f() __gcc_alias__(__f); 
// __________________________________________________________________________________________
// usage decorated:  void __f() { __msvc_alias__(?f@@YAXXZ); puts("This function is aliased"); }
//            void f() __gcc_alias__(?__f@@YAXXZ); // make sure there are no spaces in the chain of charachters
// __________________________________________________________________________________________
#        define __JCC_ATTRIBUTE_DISPATCH_msvc_alias( weak_reference_alias_name )
#elif defined( _MSC_VER ) && defined( __INTELLISENSE__ )
//
// usage undecorated:  extern "C" void __f() {   __msvc_alias__(f);   puts("This function is aliased");   } 
//            extern "C" void f() __gcc_alias__(__f); 
// __________________________________________________________________________________________
// usage decorated:  void __f() { __msvc_alias__(?f@@YAXXZ); puts("This function is aliased"); }
//            void f() __gcc_alias__(?__f@@YAXXZ); // make sure there are no spaces in the chain of charachters
// __________________________________________________________________________________________
#        define __JCC_ATTRIBUTE_DISPATCH_msvc_alias( weak_reference_alias_name ) /*__pragma(comment(linker, __JFUNC_MSVC_LOC__(weak_reference_alias_name)));*/ 
//___________________________________________________________________________________________
// usage undecorated:  extern "C" void __f() {   __msvc_alias__(f);   puts("This function is aliased");   } 
//            extern "C" void f() __gcc_alias__(__f); 
// __________________________________________________________________________________________
// usage decorated:  void __f() { __msvc_alias__(?f@@YAXXZ); puts("This function is aliased"); }
//            void f() __gcc_alias__(?__f@@YAXXZ); // make sure there are no spaces in the chain of charachters
// __________________________________________________________________________________________
#        define __JCC_ATTRIBUTE_DISPATCH_gcc_alias( weak_reference_source )
#elif defined( _MSC_VER ) && !defined( __INTELLISENSE__ )
#	define __JFUNC_MSVC_LOC__(value) "/alternatename:" __JCC_STRINGIZE(value) "=" __JCC_FUNCTION__
// An explicit check for open source before msvc/intel checks, as these now can compile gcc as well.
//
// usage undecorated:  extern "C" void __f() {   __msvc_alias__(f);   puts("This function is aliased");   } 
//            extern "C" void f() __gcc_alias__(__f); 
// __________________________________________________________________________________________
// usage decorated:  void __f() { __msvc_alias__(?f@@YAXXZ); puts("This function is aliased"); }
//            void f() __gcc_alias__(?__f@@YAXXZ); // make sure there are no spaces in the chain of charachters
// __________________________________________________________________________________________
#        define __JCC_ATTRIBUTE_DISPATCH_msvc_alias( weak_reference_alias_name ) __pragma(comment(linker, __JFUNC_MSVC_LOC__(weak_reference_alias_name))); 
// usage undecorated:  extern "C" void __f() {   __msvc_alias__(f);   puts("This function is aliased");   } 
//            extern "C" void f() __gcc_alias__(__f); 
// __________________________________________________________________________________________
// usage decorated:  void __f() { __msvc_alias__(?f@@YAXXZ); puts("This function is aliased"); }
//            void f() __gcc_alias__(?__f@@YAXXZ); // make sure there are no spaces in the chain of charachters
// __________________________________________________________________________________________
#        define __JCC_ATTRIBUTE_DISPATCH_gcc_alias( weak_reference_source )
#else
#        error "Unknown compiler, unknown linker attribute!""
#endif



#endif // __HAS_JCC_FUNC__
