// DLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DLL.h"
#include <string>

std::string get_group_credentials()
{
	setlocale(LC_ALL, "Russian");
	const std::string group = "��-541215";
	const std::string full_name = "������� �.�.";
	return group + "_" + full_name;
}
