﻿// задача 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
		int a;
		cout << "a=?" << endl;
		cin >> a;

		int a1 = (a / 10000) % 10;
		int a3 = (a / 100) % 10;
		int a5 = (a / 1) % 10;
		int sum = a1 + a3 + a5;
		cout << "Sum:" << sum << endl;
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
