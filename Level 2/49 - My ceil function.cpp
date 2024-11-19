// #49 - My ceil function.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int MyCeil(float number)
{
    int INTnumber = (int)number;
    float FrictionPart = GetFrictionPart(number);

    if (abs(FrictionPart) > 0)
    {
        if (number >= 0)
            return (int)INTnumber + 1;
        else
            return (int)INTnumber;
    }
    else
        return number;
}

int main()
{
    float number = ReadNumber("Enter a number: ");

    cout << "My Ceil = " << MyCeil(number) << endl;
    cout << "C++ Ceil = " << ceil(number) << endl;

    return 0;
}

