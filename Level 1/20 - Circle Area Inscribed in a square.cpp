// #20 - Circle Area Inscribed in a square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

float ReadSquareSide()
{
    float A;
    cout << "Enter Square side A: ";
    cin >> A;

    return A;
}

float CalculateCircleAreaInscribedInSquare(float A)
{
    const float PI = 3.1415926535897932384626433;

    return(PI * pow(A, 2)) / 4;
}

void PrintResults(float Area)
{
    cout << "\n Circle Area Inscribed in a square = " << Area << endl;
}

int main()
{
    PrintResults(CalculateCircleAreaInscribedInSquare(ReadSquareSide()));

    return 0;
}
