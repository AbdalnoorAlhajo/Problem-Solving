// #46 - My abs function.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

float MyABS(float number)
{
    if (number < 0)
        return number * -1;
    else
        return number;
}

int main()
{
    int number = ReadNumber("Enter a number: ");

    cout << "My abs = " << MyABS(number) << endl;
    cout << "C++ abs = " << abs(number) << endl;

    return 0;
}

