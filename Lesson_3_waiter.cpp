#include <stdio.h>
#include <windows.h>
#include <iostream>



void main(int argc, char *argv[])
{	
	DWORD cchCurDir = MAX_PATH;	
	char currentDirectory[MAX_PATH];
	GetCurrentDirectoryA(cchCurDir, currentDirectory);
	std::cout << currentDirectory;

	const TCHAR* VariableName = TEXT("MY_ENV_VAR");
	TCHAR tcPath[MAX_PATH];
	GetEnvironmentVariable(VariableName, tcPath, MAX_PATH);
	//how to out to console?
	
	std::cin.get();
	
}

