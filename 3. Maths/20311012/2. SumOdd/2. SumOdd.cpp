﻿#include <iostream>
using namespace std;
int main()
{
    // Декларираме целочислена променлива
    int a;

    // Въвеждаме стойност от клавиатурата
    cout << "a=?" << endl;
    cin >> a; // 12345

    // Отцепване на цифрите
    int a1 = (a / 10000) % 10; // 1
    int a3 = (a / 100) % 10; // 3
    int a5 = (a / 1) % 10; // 5
    int sum = a1 + a3 + a5;

    // Отпечатваме резултата
    cout << sum << endl;

    return 0;
}