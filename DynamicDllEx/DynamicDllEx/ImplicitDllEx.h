#pragma once

#ifdef EX_EXPORTS
#define DLL_API _declspec(dllexport)
#else
#define DLL_API _declspec(dllimport)
#endif

class CImplicit
{
public:
	DLL_API int ExAdd( int a, int b); 
	static DLL_API int ExMinus( int a, int b); 
};