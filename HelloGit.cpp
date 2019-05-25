// HelloGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRTDBG_MAP_ALLOC  

#include "pch.h"
#include <iostream>
#include <chrono>

using milli = std::chrono::milliseconds;

const int g_n = 500;
float TestData[g_n][g_n][g_n];

void cloumn_ordered() {
	for (int k = 0; k < g_n; k++)
		for (int j = 0; j < g_n; j++)
			for (int i = 0; i < g_n; i++)
				TestData[i][j][k] = 0.0f;
}

void row_ordered() {
	for (int i = 0; i < g_n; i++)
		for (int j = 0; j < g_n; j++)
			for (int k = 0; k < g_n; k++)
				TestData[i][j][k] = 0.0f;
}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	std::chrono::high_resolution_clock::time_point start, end;

	start = std::chrono::high_resolution_clock::now();
	//cloumn_ordered();
	end = std::chrono::high_resolution_clock::now();

	std::cout << "Call cloumn_ordered Function : " << std::chrono::duration_cast<milli>(end - start).count() << " millisecs";

	std::cout << std::endl;

	start = std::chrono::high_resolution_clock::now();
	//row_ordered();
	end = std::chrono::high_resolution_clock::now();

	std::cout << "Call row_ordered Function : " << std::chrono::duration_cast<milli>(end - start).count() << " millisecs";
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
