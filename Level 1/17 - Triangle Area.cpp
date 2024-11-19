// #17 - Triangle Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

void ReadNumbers(float& A, float& H)
{
    cout << "Enter Triangle base A: ";
    cin >> A;

    cout << "Enter Triangle high h: ";
    cin >> H;
}

float CalculateTriangleArea(float A, float H)
{
    return (A / 2) * H;
}

void PrintResults(float Area)
{
    cout << "\n Triangle Area = " << Area << endl;
}


int main()
{
    float A, B;
    ReadNumbers(A, B);

    PrintResults(CalculateTriangleArea(A, B));
}
