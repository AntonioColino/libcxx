#ifndef __HAS_JCC_PUSH_POP_MACRO__
#define __HAS_JCC_PUSH_POP_MACRO__  1
#ifndef __pragma_once__
#   if defined(_MSC_VER)
#       define     __pragma_once__ __pragma(once)
#   else // _MSC_VER
#       define     __pragma_once__ _Pragma("once")
#   endif //_MSC_VER
#endif // __pragma_once__
__pragma_once__

#include <jcc/stringize.h>

//__jattribute__((push_macro(MACRO)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_push_macro
#   if defined(_MSC_VER)
/*		#pragma push_macro("MACRO") and #undef MACRO . */
#       define     __JCC_ATTRIBUTE_DISPATCH_push_macro( MACRO ) __pragma(push_macro(__JCC_STRINGIZE(MACRO))) /*__pragma(undef(MACRO))*/
#   else // _MSC_VER
/*		#pragma push_macro("MACRO") and #undef MACRO . */
#       define     __JCC_ATTRIBUTE_DISPATCH_push_macro( MACRO ) _Pragma( __JCC_STRINGIZE( push_macro(__JCC_STRINGIZE(MACRO)) ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_push_macro

//__jattribute__((pop_macro(MACRO)))
#ifndef __JCC_ATTRIBUTE_DISPATCH_pop_macro
#   if defined(_MSC_VER)
/*		#pragma pop_macro("MACRO"). */
#       define     __JCC_ATTRIBUTE_DISPATCH_pop_macro( MACRO ) __pragma(pop_macro(__JCC_STRINGIZE(MACRO)))
#   else // _MSC_VER
/*		#pragma pop_macro("MACRO"). */
#       define     __JCC_ATTRIBUTE_DISPATCH_pop_macro( MACRO ) _Pragma( __JCC_STRINGIZE( pop_macro(__JCC_STRINGIZE(MACRO)) ))
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_pop_macro

//__jattribute__((push_pack))
#ifndef __JCC_ATTRIBUTE_DISPATCH_push_pack
#   if defined(_MSC_VER)
/*		#pragma pack(push, PACKING). */
#       define     __JCC_ATTRIBUTE_DISPATCH_push_pack( PACKING ) __pragma(pack(push, PACKING))
#   else // _MSC_VER
/*		#pragma pack(push, PACKING). */
#       define     __JCC_ATTRIBUTE_DISPATCH_push_pack( PACKING ) _Pragma( __JCC_STRINGIZE( pack(push, PACKING) ) )
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_push_pack

//__jattribute__((pop_pack))
#ifndef __JCC_ATTRIBUTE_DISPATCH_pop_pack
#   if defined(_MSC_VER)
/*		#pragma pack(pop). */
#       define __JCC_ATTRIBUTE_DISPATCH_pop_pack __pragma(pack(pop))
#   else // _MSC_VER
/*		#pragma pack(pop). */
#       define __JCC_ATTRIBUTE_DISPATCH_pop_pack _Pragma( __JCC_STRINGIZE( pack(pop) ) )
#   endif //_MSC_VER
#endif // __JCC_ATTRIBUTE_DISPATCH_pop_pack

#endif // __HAS_JCC_PUSH_POP_MACRO__
