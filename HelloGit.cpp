// HelloGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	const unsigned int A_SIZE = 10;
	int a[A_SIZE] = { -1, 1, -1, 1, -1, 1, -1, 1, -1, 1 };

	int *p_start = a;
	int *p_cursor = p_start;
	int *p_end = a + A_SIZE;

	int sum = 0;
	float avg = 0;
	int min = INT_MAX;
	int max = INT_MIN;

	while (p_cursor < p_end) {
		min = (min > *p_cursor) ? *p_cursor : min;
		max = (max < *p_cursor) ? *p_cursor : max;
		sum += *p_cursor;
		p_cursor += 1;
	}
	avg = static_cast<float>(sum) / static_cast<float>(A_SIZE);

	std::cout << "Sum = " << sum << std::endl;
	std::cout << "Average = " << avg << std::endl;
	std::cout << "Minimum = " << min << std::endl;
	std::cout << "Maximum = " << max << std::endl;
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
