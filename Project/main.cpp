#include<iostream>
#include<tchar.h>
#include<Windows.h>
using namespace std;

#include"../Mypoject/lib.h"

typedef int(*fptr)();

int main()
{
	HINSTANCE hInstLib = LoadLibrary(TEXT("Mypoject.dll"));
	if (hInstLib == NULL)
	{
		cout << "Can`t load library Mypoject.dll" << endl;
		return 0;
	}
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "\nb = ";
	cin >> b;

	cout << sum(a, b) << endl;
	cout << Min(a, b) << endl;
	cout << mult(a, b) << endl;
	cout << dIv(a, b) << endl;

	fptr fooInDll = (fptr)GetProcAddress(hInstLib, "min");
	if (fooInDll == NULL)
	{
		cout << "Can`t load function min" << endl;
	}
	else
	{
		cout << "min: " << Min(a,b) << endl;
	}

	const double* psum = (const double*)GetProcAddress(hInstLib, "sum");
	cout << "sum: " << *psum << endl;
	FreeLibrary(hInstLib);
}