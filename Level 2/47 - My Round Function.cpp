// #47 - My Round Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int MyRound(float number)
{
    int INTnumber = (int)number;
    float FrictionPart = GetFrictionPart(number);

    if (abs(FrictionPart) >= 0.5)
    {
        if (number >= 0)
            return (int)++INTnumber;
        else
            return (int)--INTnumber;
    }
    else
        return (int)INTnumber;
}

int main()
{
    float number = ReadNumber("Enter a number: ");

    cout << "My Round = " << MyRound(number) << endl;
    cout << "C++ Round = " << round(number) << endl;

    return 0;
}

