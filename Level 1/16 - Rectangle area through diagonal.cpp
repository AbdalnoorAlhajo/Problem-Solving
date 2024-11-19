// #16 - Rectangle area through diagonal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

void ReadNumbers(float& a, float& d)
{
    cout << "Enter rectangle width a: ";
    cin >> a;

    cout << "Enter rectangle diagonal d: ";
    cin >> d;
}

float CalculateRectangleAreaBySideAndDiagonal(float a, float d)
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

void PrintResults(float Area)
{
    cout << "\n Rectangle Area = " << Area << endl;
}


int main()
{
    float a, d;
    ReadNumbers(a, d);

    PrintResults(CalculateRectangleAreaBySideAndDiagonal(a, d));
}
