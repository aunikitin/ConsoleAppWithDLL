// DLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DLL.h"
#include <string>

std::string get_group_credentials()
{
	setlocale(LC_ALL, "Russian");
	const std::string group = "РИ-541215";
	const std::string full_name = "Никитин А.Ю.";
	return group + "_" + full_name;
}
