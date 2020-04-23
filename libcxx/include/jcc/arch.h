#ifndef __HAS_JCC_ARCHITECTURE__
#define __HAS_JCC_ARCHITECTURE__  1  
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__


/////////////////////////////////////////////////////  Arch  /////////////////////////////////////////////////////////////////////////////////////////////

#if defined( __arm__ )  || defined( __arm ) || defined( __TARGET_ARCH_ARM ) || defined( _M_ARM ) || defined( __ARM_ARCH ) 
//ARM architecture tables.
#	define  __JCC_ATTRIBUTE_ARCH_ARM				1		/*ARM*/	
#	define  __JCC_ATTRIBUTE_ARCH___ARM__			1		/*__ARM__*/	
#	define  __JCC_ATTRIBUTE_ARCH_arm				1		/*arm*/	
#	define  __JCC_ATTRIBUTE_ARCH___arm__			1		/*arm*/	
#endif
#if defined( __arm64 ) || defined( __arm64__ ) || defined( __thumb__ ) || defined( __TARGET_ARCH_THUMB ) || defined( _M_ARM64 )  || defined( __aarch64__ ) 
//ARM64 architecture tables.
#	define  __JCC_ATTRIBUTE_ARCH_ARM64				1		/*ARM64*/	
#	define  __JCC_ATTRIBUTE_ARCH___ARM64__			1		/*__ARM64__*/	
#	define  __JCC_ATTRIBUTE_ARCH_arm64				1		/*arm64*/	
#	define  __JCC_ATTRIBUTE_ARCH___arm64__			1		/*__arm64__*/	
#endif
#if defined( __ia64__ ) || defined( _IA64 ) || defined( __IA64__ ) || defined( __ia64 ) || defined( _M_IA64 ) || defined( __itanium__ ) 
//Intel Itanium 64 architecture tables.
#	define  __JCC_ATTRIBUTE_ARCH_ITANIUM			1		/*ITANIUM*/	
#	define  __JCC_ATTRIBUTE_ARCH___ITANIUM__		1		/*__ITANIUM__*/	
#	define  __JCC_ATTRIBUTE_ARCH_itanium			1		/*itanium*/	
#	define  __JCC_ATTRIBUTE_ARCH___itanium__		1		/*__itanium__*/	
#	define  __JCC_ATTRIBUTE_ARCH_IA64				1		/*IA64*/	
#	define  __JCC_ATTRIBUTE_ARCH___IA64__			1		/*__IA64__*/	
#	define  __JCC_ATTRIBUTE_ARCH_ia64				1		/*ia64*/	
#	define  __JCC_ATTRIBUTE_ARCH___ia64__			1		/*__ia64__*/	
#endif
#if defined( __powerpc  ) || defined(  __powerpc__ ) || defined( __POWERPC__  ) || defined(  __ppc__ ) || defined(  _M_PPC ) || defined( _ARCH_PPC  ) || defined( __PPCGECKO__  ) || defined(  __PPCBROADWAY__ ) || defined(  _XENON ) || defined( __ppc601__  ) || defined(  _ARCH_601 ) || defined(  __ppc603__ ) || defined( _ARCH_603  ) || defined( __ppc604__  ) || defined( __ppc604__ ) 
//PowerPC architecture tables.
#	define  __JCC_ATTRIBUTE_ARCH_PPC				1		/*PPC*/	
#	define  __JCC_ATTRIBUTE_ARCH___PPC__			1		/*__PPC__*/	
#	define  __JCC_ATTRIBUTE_ARCH_ppc				1		/*ppc*/	
#	define  __JCC_ATTRIBUTE_ARCH___ppc__			1		/*__ppc__*/	
#	define  __JCC_ATTRIBUTE_ARCH_POWER_PC			1		/*POWER_PC*/	
#	define  __JCC_ATTRIBUTE_ARCH___POWER_PC__		1		/*__POWER_PC__*/	
#	define  __JCC_ATTRIBUTE_ARCH_powerpc			1		/*powerpc*/	
#	define  __JCC_ATTRIBUTE_ARCH___powerpc__		1		/*__powerpc__*/	
#endif
#if defined(  __CUDA_ARCH__ ) || defined( __CUDA__  ) || defined( __CUDA ) || defined( _CUDA_  ) || defined( _CUDA )
//PTX/CUDA architecture tables.
#	define  __JCC_ATTRIBUTE_ARCH_PTX				1		/*PTX*/	
#	define  __JCC_ATTRIBUTE_ARCH___PTX__			1		/*__PTX__*/	
#	define  __JCC_ATTRIBUTE_ARCH_ptx				1		/*ptx*/	
#	define  __JCC_ATTRIBUTE_ARCH___ptx__			1		/*__ptx__*/	
#	define  __JCC_ATTRIBUTE_ARCH_PTXAS				1		/*PTXAS*/	
#	define  __JCC_ATTRIBUTE_ARCH___PTXAS__			1		/*__PTXAS__*/	
#	define  __JCC_ATTRIBUTE_ARCH_ptxas				1		/*ptxas*/	
#	define  __JCC_ATTRIBUTE_ARCH___ptxas__			1		/*__ptxas__*/	
#	define  __JCC_ATTRIBUTE_ARCH_CUDA				1		/*CUDA*/	
#	define  __JCC_ATTRIBUTE_ARCH___CUDA__			1		/*__CUDA__*/	
#	define  __JCC_ATTRIBUTE_ARCH_cuda				1		/*cuda*/	
#	define  __JCC_ATTRIBUTE_ARCH___cuda__			1		/*__cuda__*/	
#endif
#if defined( i386 ) || defined( __i386__ ) || defined( __i486__ ) || defined( __i586__ ) || defined( __i686__ ) || defined( __i386 ) || defined( _M_IX86 ) || defined( _X86_ ) || defined( __THW_INTEL__ ) || defined( __I86__ ) || defined( __INTEL__ ) || defined( __I86__ ) || defined( _M_IX86 ) || defined( __i686__ ) || defined( __i586__ ) || defined( __i486__ ) || defined( __i386__ ) || (( defined(_WIN32) && !defined(_WIN64) ))
//Intel x86 architecture: If available versions [3-6] are specifically detected.
#	define  __JCC_ATTRIBUTE_ARCH___X86_32__			1		/*__X86_32__*/	
#	define  __JCC_ATTRIBUTE_ARCH___x86_32__			1		/*__x86_32__*/	
#	define  __JCC_ATTRIBUTE_ARCH_X86_32				1		/*X86_32*/	
#	define  __JCC_ATTRIBUTE_ARCH___X86__			1		/*__X86__*/	
#	define  __JCC_ATTRIBUTE_ARCH___IX86__			1		/*__IX86__*/	
#	define  __JCC_ATTRIBUTE_ARCH_X86				1		/*X86*/	
#	define  __JCC_ATTRIBUTE_ARCH___x86__			1		/*__x86__*/	
#	define  __JCC_ATTRIBUTE_ARCH___ix86__			1		/*__ix86__*/	
#	define  __JCC_ATTRIBUTE_ARCH_x86				1		/*x86*/	
#endif
#if defined( __x86_64 ) || defined( __x86_64__ ) || defined( __amd64__ ) || defined( __amd64 ) || defined( _M_X64 ) || defined( _WIN64 )
//AMD x64 architecture.
#	define  __JCC_ATTRIBUTE_ARCH___X86_64__			1		/*__X86_64__*/	
#	define  __JCC_ATTRIBUTE_ARCH_X86_64				1		/*X86_64*/	
#	define  __JCC_ATTRIBUTE_ARCH___x86_64__			1		/*__x86_64__*/	
#	define  __JCC_ATTRIBUTE_ARCH_x86_64				1		/*x86_64*/	
#	define  __JCC_ATTRIBUTE_ARCH___X64__			1		/*__X64__*/	
#	define  __JCC_ATTRIBUTE_ARCH_X64				1		/*X64*/	
#	define  __JCC_ATTRIBUTE_ARCH___x64__			1		/*__x64__*/	
#	define  __JCC_ATTRIBUTE_ARCH_x64				1		/*x64*/	
#	define  __JCC_ATTRIBUTE_ARCH_amd64				1		/*amd64*/	
#	define  __JCC_ATTRIBUTE_ARCH___amd64__			1		/*__amd64__*/	
#endif

#if defined(  __JCC_ATTRIBUTE_ARCH_X86_32 ) || defined(  __JCC_ATTRIBUTE_ARCH_X86_64 ) 
//x86 SIMD architecture. This is a category to indicate that either  __JCC_ATTRIBUTE_ARCH_X86_32 or  __JCC_ATTRIBUTE_ARCH_X86_64 is detected.
#	define  __JCC_ATTRIBUTE_ARCH_SIMD_AVAILABLE		1		/*SIMD_AVAILABLE*/	
#	define  __JCC_ATTRIBUTE_ARCH___SIMD_AVAILABLE__	1		/*__SIMD_AVAILABLE__*/	
#	define  __JCC_ATTRIBUTE_ARCH_SIMD				1		/*SIMD*/	
#	define  __JCC_ATTRIBUTE_ARCH___SIMD__			1		/*__SIMD__*/	
#	define  __JCC_ATTRIBUTE_ARCH_simd				1		/*simd*/	
#	define  __JCC_ATTRIBUTE_ARCH___simd__			1		/*__simd__*/	
#endif

//#if __JCC_ARCH_PREREQ(X86)
#ifndef __JCC_ARCH_PREREQ
#	define __JCC_ARCH_PREREQ( ARCH ) (((defined( __JCC_ATTRIBUTE_ARCH_ ## ARCH )) || __JCC_ATTRIBUTE_ARCH_ ## ARCH ))
#endif // !__JCC_LANG_PREREQ

//#if __jattribute__((arch_prereq(X86))) 
#ifndef __JCC_ATTRIBUTE_DISPATCH_arch_prereq
#	define __JCC_ATTRIBUTE_DISPATCH_arch_prereq( ARCH ) __JCC_ARCH_PREREQ( ARCH )
#endif // !__JCC_ATTRIBUTE_DISPATCH_arch_prereq

#endif // __HAS_JCC_ARCHITECTURE__
