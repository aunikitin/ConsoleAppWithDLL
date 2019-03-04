// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <windows.h>
#include <iostream>
#include <string>

typedef std::string(__cdecl *MYPROC)();

int main()
{
	const HINSTANCE hinst_lib = LoadLibrary(L"DLL.dll");
	if(hinst_lib != nullptr)
	{
		const auto proc_add = MYPROC(GetProcAddress(hinst_lib, "get_group_credentials"));
		
		if(proc_add != nullptr)
		{
			const std::string test = (*proc_add)();
			std::cout << test;
			std::cin.get();
		}

		FreeLibrary(hinst_lib);
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
