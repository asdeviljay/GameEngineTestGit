// HelloGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "CWStd.hpp"
#include "CWUTest.hpp"

#define _CRTDBG_MAP_ALLOC

const float PI = 3.141;


float calCircleArea(float t_r) {
	if (t_r > 0) {
		return PI * t_r * t_r;
	}
	else {
		return 0;
	}
}

float calSquareArea(float t_w) {
	// What are valid values
	REQUIRED(t_w >= 0.0f);
	REQUIRED(t_w <= std::sqrtf(std::numeric_limits<float>::max()));

	float area = 0.0f;

	if (t_w > 0.0f)
		area = t_w * t_w;

	PROMISED(area >= 0.0f);
	return area;
}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	CWUTest ut;
	ut.init("Test CalSquareArea function");
	ut.test("calSquareArea(5.0f) == 25.0f", calSquareArea(5.0f) == 25.0f);
	ut.test("calSquareArea(0.0f) == 0.0f", calSquareArea(0.0f) == 0.0f);
	//ut.test("calSquareArea(-1.0f) == 0.0f", calSquareArea(-1.0f) == 0.0f);
	ut.test("This must be fail", 1.0f == 0.0f);
	ut.report();

	//std::cout << calSquareArea(std::sqrtf(std::sqrtf(std::numeric_limits<float>::max()))) << std::endl;
	
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
