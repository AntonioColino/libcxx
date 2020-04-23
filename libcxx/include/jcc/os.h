#ifndef __HAS_JCC_OPERATING_SYSTEMS__
#define __HAS_JCC_OPERATING_SYSTEMS__  1  
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__


// supported operating systems, to add more follow the 
// general process for adding an entry 
// ( if/def macros and prefixing with JCC_OS_ , etc. )
//AIX
//AMIGAOS
//ANDROID
//BEOS
//BSD
//BSD_BSDI
//BSD_DRAGONFLY
//BSD_FREE
//BSD_NET
//BSD_OPEN
//CLOUDABI
//CYGWIN
//FREE_BSD
//HAIKU
//HAIKU
//HPUX
//IOS
//IOS_DEVICE 
//IOS_SIMULATOR 
//IRIX
//LINUX
//MACOS
//MINGW
//MINGW32
//MINGW64
//NET_BSD
//OPEN_BSD
//OS400
//QNX
//SOLARIS
//SVR4
//UNIX
//VMS
//WINDOWS (generallity) includes all kinds of widows operating systems
//WINDOWS_DESKTOP 
//WINDOWS_PHONE
//WINDOWS_SERVER
//WINDOWS_STORE
//WINDOWS_SYSTEM
//WINDOWS_UWP
//POSIX (generallity) includes many operating systems 
// ( mac. linux, unix , etc ), look below for more






#if defined( _AIX ) || defined( __TOS_AIX__ ) || defined( _AIX43 ) || defined( _AIX41 ) || defined( _AIX32 ) || defined(_AIX3) 
//IBM AIX operating system. Version number available as major, minor, and patch.
#define  JCC_OS_AIX
#endif

#if defined( AMIGA ) || defined( __amigaos__ )  
//AmigaOS operating system.
#define  JCC_OS_AMIGAOS 1
#endif

#if defined( __ANDROID__ )  
//Android operating system.
#define  JCC_OS_ANDROID 1
#endif

#if defined( __BEOS__ ) 
//BeOS operating system.
#define  JCC_OS_BEOS 1
#endif

#if defined( BSD ) || defined( _SYSTYPE_BSD ) || defined( BSD4_2 ) || defined( BSD4_3 ) || defined( BSD4_4 ) || defined( BSD )
//BSD has various branch operating systems possible and each detected individually. This detects the following variations and sets a specific version number macro to match:
#define  JCC_OS_BSD 1
#endif

#if defined( __CYGWIN__ )  
//Cygwin environment.
#define  JCC_OS_CYGWIN 1
#endif

#if defined( __HAIKU__ )
//Haiku operating system.
#define  JCC_OS_HAIKU 1
#endif

#if defined( hpux ) || defined( _hpux )
//HP-UX operating system.
#define  JCC_OS_HPUX 1
#endif

#if ( defined( __APPLE__ ) && defined( __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ ))
|| (defined(__MACH__) && defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__))
//iOS operating system.
#define  JCC_OS_IOS 1
#endif

#if defined( sgi ) || defined( __sgi )
//IRIX operating system.
#define  JCC_OS_IRIX 1
#endif

#if defined( linux ) || defined( __linux )
//Linux operating system.
#define  JCC_OS_LINUX 1
#endif

#if ( defined(__APPLE__) && defined( Macintosh ) )
|| (defined(__APPLE__) && defined(macintosh))
|| (defined(__MACH__) && defined(Macintosh))
|| (defined(__MACH__) && defined(macintosh))
//Mac OS operating system.
#define  JCC_OS_MACOS 1
#endif

#if defined( __OS400__ ) 
//IBM OS/400 operating system.
#define  JCC_OS_OS400 1
#endif

#if defined( __QNX__ ) || defined( __QNXNTO__ ) || defined( _NTO_VERSION ) 
//QNX operating system. Version number available as major, and minor if possible. And version 4 is specifically detected.
#define  JCC_OS_QNX 1
#endif

#if defined( sun ) || defined( __sun )  
//Solaris operating system.
#define  JCC_OS_SOLARIS 1
#endif

#if defined( unix ) || defined( __unix ) || defined( _XOPEN_SOURCE ) || defined( _POSIX_SOURCE )  
//Unix Environment operating system.
#define  JCC_OS_UNIX 1
#endif

#if defined( __sysv__ ) || defined( __SVR4 ) || defined( __svr4__ ) || defined( _SYSTYPE_SVR4 )  
//SVR4 Environment operating system.
#define  JCC_OS_SVR4 1
#endif

#if defined( VMS ) || defined( __VMS ) || defined( __VMS_VER )  
//VMS operating system.
#define  JCC_OS_VMS 1
#endif

#if defined( _WIN32 ) || defined( _WIN64 ) || defined( __WIN32__ ) || defined( __TOS_WIN__ ) || defined( __WINDOWS__ ) 
//Microsoft Windows operating system.
#define  JCC_OS_WINDOWS 1
#define  JCC_WINDOWS 1

#if defined(  JCC_OS_WINDOWS )
#include "ntverp.h"
#if WINAPI_FAMILY == WINAPI_FAMILY_DESKTOP_APP
// supports windows desktop
#define  JCC_OS_WINDOWS_DESKTOP 1
#endif
#if WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
// supports windows phone
#define  JCC_OS_WINDOWS_PHONE 1
#endif
#if WINAPI_FAMILY == WINAPI_FAMILY_SERVER
// supports windows server
#define  JCC_OS_WINDOWS_SERVER 1
#endif
#if WINAPI_FAMILY == WINAPI_FAMILY_PC_APP
// supports windows store apps
#define  JCC_OS_WINDOWS_STORE 1
#endif
#if WINAPI_FAMILY == WINAPI_FAMILY_SYSTEM
#define  JCC_OS_WINDOWS_SYSTEM 1
#endif
#if VER_PRODUCTBUILD >= 9200
// supports windows universal apps
#define  JCC_OS_WINDOWS_UWP 1
#endif

#endif
#endif

#if defined( __bsdi__ )  
//BSDi BSD/OS operating system.
#define  JCC_OS_BSD_BSDI 1
#endif

#if defined( __DragonFly__ )
//DragonFly BSD operating system.
#define  JCC_OS_BSD_DRAGONFLY 1
#endif

#if defined( __FreeBSD__ ) || defined( __FreeBSD_version )
//FreeBSD operating system.
#define  JCC_OS_BSD_FREE 1
#define  JCC_OS_FREE_BSD 1
#endif

#if defined( __NETBSD__ ) || defined( __NETBSD_version ) || defined( NetBSD0_8 ) || defined( NetBSD0_9 ) || defined( NetBSD1_0 ) || defined( __NetBSD_Version ) 
//NetBSD operating system.
#define  JCC_OS_BSD_NET 1
#define  JCC_OS_NET_BSD 1
#endif

#if defined( __OpenBSD__ ) 
//OpenBSD operating system.
#define  JCC_OS_BSD_OPEN 1
#define  JCC_OS_OPEN_BSD 1
#endif


#if defined( __CloudABI__ )
//CloudABI OSform.
#define  JCC_OS_CLOUDABI 1
#endif


#if defined( TARGET_IPHONE_SIMULATOR )
//iphone or iphone device simulator
#define  JCC_OS_IOS_DEVICE 1
#define  JCC_OS_IOS_SIMULATOR 1
#endif


#if defined( __MINGW32__ ) || defined( __MINGW64__ ) || defined( __MINGW64_VERSION_MAJOR ) || defined( __MINGW64_VERSION_MINOR ) || defined( __MINGW32_VERSION_MAJOR ) || defined( __MINGW32_VERSION_MINOR )  
//MinGW OSform, either variety. Version number available as major, minor, and patch.
#define  JCC_OS_MINGW 1
#endif


#if defined( __MINGW32__ ) || defined( __MINGW32_VERSION_MAJOR ) || defined( __MINGW32_VERSION_MINOR )
//MinGW OSform. Version number available as major, minor, and patch.
#define  JCC_OS_MINGW32 1
#endif


#if defined( __MINGW64__ ) || defined( __MINGW64_VERSION_MAJOR ) || defined( __MINGW64_VERSION_MINOR )
//MinGW-w64 OSform. Version number available as major, minor, and patch.
#define  JCC_OS_MINGW64 1
#endif

#if defined( JCC_OS_AIX) || defined( JCC_OS_HPUX)|| defined( JCC_OS_IRIX)|| defined( JCC_OS_SOLARIS) || defined( JCC_OS_ANDROID)|| defined( JCC_OS_BEOS)|| defined( JCC_OS_BSD)|| defined( JCC_OS_LINUX)|| defined( JCC_OS_IOS)|| defined( JCC_OS_MACOS)|| defined( JCC_OS_UNIX)|| defined( JCC_OS_BSD_FREE)|| defined( JCC_OS_BSD_OPEN)|| defined( JCC_OS_MINGW32)|| defined( JCC_OS_MINGW64)|| defined( JCC_OS_CYGWIN)
// posix compliant
#define  JCC_OS_POSIX 1
#define  JCC_POSIX 1
#endif

#ifndef __JCC_TARGET_OS
#define __JCC_TARGET_OS( NAME ) JCC_OS_##NAME
#endif // !__JCC_TARGET_OS



//#if __jattribute__((has_target_os(NAME)))
//#if __jattribute__((__has_target_os__(NAME)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_has_target_os
/*		Here we try to determine the availibility of target operating system. */
#	define __JCC_ATTRIBUTE_DISPATCH_has_target_os( NAME )		__JCC_TARGET_OS( NAME )
/*		Here we try to determine the availibility of target operating system. */
#	define __JCC_ATTRIBUTE_DISPATCH___has_target_os__( NAME )	__JCC_TARGET_OS( NAME )
#endif // __JCC_ATTRIBUTE_DISPATCH_has_target_os





#endif // __HAS_JCC_OPERATING_SYSTEMS__
