// #48 - My Floor.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int MyFloor(float number)
{
    int INTnumber = (int)number;

        if (number >= 0)
            return (int)INTnumber;
        else
            return (int)INTnumber - 1;
}

int main()
{
    float number = ReadNumber("Enter a number: ");

    cout << "My Floor = " << MyFloor(number) << endl;
    cout << "C++ Floor = " << floor(number) << endl;

    return 0;
}

