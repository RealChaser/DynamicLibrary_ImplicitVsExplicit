#include <iostream>
#include <windows.h> //명시적 호출을 위해서 포함

#include "ImplicitDllEx.h"	//묵시적 호출을 위해 헤더 포함
#pragma comment(lib, "DynamicImplicitDLL.lib")	//묵시적 호출을 위해 lib 셋팅

using namespace std;

void ImplicitCall()
{
	CImplicit obj;

	cout << "Implicit : "<< obj.ExAdd(3, 8) << endl;
	cout << "Implicit : "<< CImplicit::ExMinus(7, 3) << endl;
}

void ExplicitCall()
{
	HMODULE hDll = LoadLibrary( TEXT( "DynamicExplicitDLL.dll" ) );	
	typedef int ( *AddFunc )( int a, int b );
	AddFunc add = ( AddFunc )GetProcAddress( hDll, "ExAdd" );
	cout<< "Explicit : "<< add( 4, 5 ) <<endl;	
	FreeLibrary(hDll);
}

void main()
{
	ExplicitCall();
	ImplicitCall();
}