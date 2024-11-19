// #21 - circle area along the Circumference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

float ReadCircumference()
{
    float L;
    cout << "Enter Circumference L: ";
    cin >> L;

    return L;
}

float CalculateCircleAreaByCircumference(float L)
{
    const float PI = 3.1415926535897932384626433;

    return pow(L, 2) / (4 * PI);
}

void PrintResults(float Area)
{
    cout << "\n Circle Area By Circumference = " << Area << endl;
}

int main()
{
    PrintResults(CalculateCircleAreaByCircumference(ReadCircumference()));

    return 0;
}
