#define EX_EXPORTS
#include "ImplicitDllEx.h"

DLL_API int CImplicit::ExAdd( int a, int b )
{
	return a + b;
}

DLL_API int CImplicit::ExMinus( int a, int b )
{
	return a - b;
}
