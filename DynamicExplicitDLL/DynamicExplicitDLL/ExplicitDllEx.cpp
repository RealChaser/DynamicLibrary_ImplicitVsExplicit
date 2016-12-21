#define EX_EXPORTS
#include "ExplicitDllEx.h"

EXTERN_FORM DLL_API int __cdecl ExAdd( int a, int b )
{
	return a + b;
}

