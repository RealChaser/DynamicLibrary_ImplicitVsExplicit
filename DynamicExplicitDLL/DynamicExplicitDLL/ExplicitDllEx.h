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
//������� ������ �⺻ ȣ�� �Ծ� __cdecl �� �ȴ�.