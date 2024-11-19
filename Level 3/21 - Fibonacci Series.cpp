// #21 - Fibonacci Series.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

using namespace std;

void PrintFibonacciSeries(int number)
{
    int Prev2 = 0, Prev1 = 1, FebNumber = 0;

    cout << Prev2 << "  ";
    cout << Prev1 << "  ";

    for (short i = 2; i <= number; i++)
    {
        FebNumber = Prev2 + Prev1;
        cout << FebNumber << "  ";
        Prev2 = Prev1;
        Prev1 = FebNumber;
    }
}

int main()
{
    PrintFibonacciSeries(10);


    system("pause>0");
    return 0;
}
