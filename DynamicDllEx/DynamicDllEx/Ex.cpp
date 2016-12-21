#include <iostream>
#include <windows.h> //����� ȣ���� ���ؼ� ����

#include "ImplicitDllEx.h"	//������ ȣ���� ���� ��� ����
#pragma comment(lib, "DynamicImplicitDLL.lib")	//������ ȣ���� ���� lib ����

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