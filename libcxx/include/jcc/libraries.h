#ifndef __HAS_JCC_LIBRARIES__
#define __HAS_JCC_LIBRARIES__  1
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__

#include <jcc/os.h>

#if defined( __cloudlibc__ ) || defined( __cloudlibc_major__ ) || defined( __cloudlibc_minor__ )
//cloudlibc - CloudABI's standard C library. Version number available as major, and minor.
#define  JCC_LIB_C_CLOUDABI 1
#endif

#if defined( __GLIBC__ ) || defined( __GNU_LIBRARY__ ) || defined( __GLIBC_MINOR__ ) || defined( __GNU_LIBRARY_MINOR__ )
//GNU glibc Standard C library. Version number available as major, and minor.
#define  JCC_LIB_C_GNU 1
#endif

#if defined( __UCLIBC__ ) || defined( __UCLIBC_MAJOR__ ) || defined( __UCLIBC_MINOR__ ) || defined( __UCLIBC_SUBLEVEL__ )
//uClibc Standard C library.
#define  JCC_LIB_C_UC 1
#endif

#if defined( __CRTL_VER ) || defined( __CRTL_VER )
//VMS libc Standard C library. Version number available as major, minor, and patch.
#define  JCC_LIB_C_VMS 1
#endif

#if defined( __LIBREL__ ) || defined( __TARGET_LIB__ )
//z/OS libc Standard C library. Version number available as major, minor, and patch.
#define  JCC_LIB_C_ZOS 1
#endif

#if defined( _LIBCPP_VERSION )
//libc++ C++ Standard Library
#define  JCC_LIB_STD_CXX 1
#endif

#if defined( _YVALS ) || defined( __IBMCPP__ ) || defined( _CPPLIB_VER )
//Dinkumware Standard C++ Library. If available version number as major, minor, and patch.
#	define  JCC_LIB_STD_DINKUMWARE 1
#	define  JCC_LIB_MSVCRT 1
#	ifdef __MSVCRT_VERSION__
#		undef __MSVCRT_VERSION__
#	endif
#	define  __MSVCRT_VERSION__ _CPPLIB_VER * (0x0100)
#endif

#if defined( __LIBCOMO__ ) || defined( __LIBCOMO_VERSION__ )
//Comeau Computing Standard C++ Library. Version number available as major.
#define  JCC_LIB_COMO 1
#endif

#if defined( MSIPL_COMPILE_H ) || defined( __MSIPL_COMPILE_H )
//Modena Software Lib++ Standard C++ Library.
#define  JCC_LIB_STD_MSIPL 1
#endif

#if defined( __MSL_CPP__ ) || defined( __MSL__ )
//Metrowerks Standard C++ Library. Version number available as major, minor, and patch.
#define  JCC_LIB_STD_MSL 1
#endif

#if defined( __STD_RWCOMPILER_H__ ) || defined( _RWSTD_VER )
//Roguewave Standard C++ library. If available version number as major, minor, and patch.
#define  JCC_LIB_STD_RW 1
#endif

#if defined( __STL_CONFIG_H ) || defined( __SGI_STL )
//SGI Standard C++ library. If available version number as major, minor, and patch.
#define  JCC_LIB_STD_SGI 1
#endif

#if defined( __GLIBCXX__ ) || defined( __GLIBCPP__ )
//GNU libstdc++ Standard C++ library. Version number available as year (from 1970), month, and day.
#define  JCC_LIB_STD_GNU 1
#endif

#if defined( __SGI_STL_PORT ) || defined( _STLPORT_VERSION ) || defined( _STLPORT_MAJOR ) || defined( _STLPORT_MINOR ) || defined( _STLPORT_PATCHLEVEL )
//STLport Standard C++ library. Version number available as major, minor, and patch.
#define  JCC_LIB_STD_STLPORT 1
#endif

#if defined( __IBMCPP__ )
//IBM VACPP Standard C++ library.
#define  JCC_LIB_STD_IBM 1
#endif

#ifndef __JCC_TARGET_LIB
#define __JCC_TARGET_LIB( NAME ) JCC_OS_##NAME
#endif // !__JCC_TARGET_OS

//#if __jattribute__((has_target_lib(NAME)))
//#if __jattribute__((__has_target_lib__(NAME)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_has_target_lib
/*		Here we try to determine the availibility of target library. */
#	define __JCC_ATTRIBUTE_DISPATCH_has_target_lib( NAME )		__JCC_TARGET_LIB( NAME )
/*		Here we try to determine the availibility of target library. */
#	define __JCC_ATTRIBUTE_DISPATCH___has_target_lib__( NAME )	__JCC_TARGET_LIB( NAME )
#endif // __JCC_ATTRIBUTE_DISPATCH_has_target_lib

#if defined(__JCC_TARGET_OS_LIB_LOADERS) && defined(__cplusplus)

#include <string>
// OS-specific includes.
#if __JCC_TARGET_OS( WINDOWS )
#include <windows.h>
#undef max
#else
#include <dlfcn.h>    // dlopen, dlsym, dlclose, dlerror.
#endif

inline static void* jccLoadLibrary(const std::string& libraryName)
{
#if __JCC_TARGET_OS( WINDOWS )
	const HMODULE hModule = ::LoadLibraryA(libraryName.c_str());
	return static_cast<void*>(hModule);
#else
	void* pLibrary = dlopen(libraryName.c_str(), RTLD_NOW | RTLD_GLOBAL);
	return pLibrary;
#endif
}

inline static void* jccLoadLibrary(const char* libraryName)
{
#if __JCC_TARGET_OS( WINDOWS )
	const HMODULE hModule = ::LoadLibraryA(libraryName);
	return static_cast<void*>(hModule);
#else
	void* pLibrary = dlopen(libraryName, RTLD_NOW | RTLD_GLOBAL);
	return pLibrary;
#endif
}

inline static void jccUnloadLibrary(void*& pLibrary)

{
#if __JCC_TARGET_OS( WINDOWS )
	const auto hModule = static_cast<HMODULE>(pLibrary);
	::FreeLibrary(hModule);
#else
	dlclose(pLibrary);
#endif
	pLibrary = nullptr;
}

inline static void* jccGetFunctionPointer(void* pLibrary, const std::string& functionName)
{
	if (pLibrary)
	{
#if __JCC_TARGET_OS( WINDOWS )
		const auto hModule = static_cast<HMODULE>(pLibrary);
		return ::GetProcAddress(hModule, functionName.c_str());
#else
		return dlsym(pLibrary, functionName.c_str());
#endif
	}
	else {
#if __JCC_TARGET_OS( WINDOWS )
		return nullptr;
#else
		return dlsym(RTLD_NEXT, functionName.c_str());
#endif
	}
}

inline static void* jccGetFunctionPointer(void* pLibrary, const char* functionName)
{
	if (pLibrary)
	{
#if __JCC_TARGET_OS( WINDOWS )
		const auto hModule = static_cast<HMODULE>(pLibrary);
		return ::GetProcAddress(hModule, functionName);
#else
		return dlsym(pLibrary, functionName);
#endif
	}
	else {
#if __JCC_TARGET_OS( WINDOWS )
		return nullptr;
#else
		return dlsym(RTLD_NEXT, functionName);
#endif
	}
}

#endif // defined(__JCC_TARGET_OS_LIB_LOADERS)

#endif // __HAS_JCC_LIBRARIES__
