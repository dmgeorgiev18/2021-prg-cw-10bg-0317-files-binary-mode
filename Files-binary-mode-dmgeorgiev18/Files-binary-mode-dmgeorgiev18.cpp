// Files-binary-mode-dmgeorgiev18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Student-dmgeorgiev.h"
using namespace std;

int main()
{
	fstream file;
	file.open("dmgeorgiev.bin", ios::out | ios::binary | ios::trunc);
	if (file.is_open())
	{
		int a = 65;
		for (size_t i = 0; i < 6; i++)
		{

			file.write((const char*)&i, sizeof(i));
		}

		file.close();
	}
}
