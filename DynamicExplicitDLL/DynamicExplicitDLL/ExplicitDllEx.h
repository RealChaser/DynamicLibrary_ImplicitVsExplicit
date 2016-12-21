#pragma once

#ifdef	__cplusplus
#define		EXTERN_FORM		extern "C"
#else
#define		EXTERN_FORM
#endif

#ifdef EX_EXPORTS
#define DLL_API _declspec(dllexport)
#else
#define DLL_API _declspec(dllimport)
#endif

EXTERN_FORM DLL_API int __cdecl ExAdd( int a, int b );
//명시하지 않으면 기본 호출 규약 __cdecl 이 된다.