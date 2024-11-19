// #18 - Circle Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

float ReadRadious()
{
    float r;
    cout << "Enter Circle radious: ";
    cin >> r;

    return r;
}

float CalculateCircleArea(float radious)
{
    const float PI = 3.1415926535897932384626433;

    return PI * pow(radious, 2);
}

void PrintResults(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    PrintResults(CalculateCircleArea(ReadRadious()));

    return 0;
}
