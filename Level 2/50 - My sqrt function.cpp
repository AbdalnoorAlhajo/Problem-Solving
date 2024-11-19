// #50 - My sqrt function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

float ReadNumber(string message)
{
    float number;

    cout << message;
    cin >> number;

    return number;
}

float GetFrictionPart(float number)
{
    return number - (int)number;
}

int MySqrt(float number)
{
    return pow(number, 0.5);
}

int main()
{
    float number = ReadNumber("Enter a number: ");

    cout << "My Sqrt = " << MySqrt(number) << endl;
    cout << "C++ Sqrt = " << sqrt(number) << endl;

    return 0;
}