// #22 - Fibonacci With Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

using namespace std;

void PrintFibonacciSeriesWithRecursion(int number, short Prev2 = 1, short Prev1 = 0)
{
    if (Prev1 == 0)
        cout << Prev1 << "    ";
    if (number > 0)
    {
        cout << Prev1 + Prev2 << "   ";
        PrintFibonacciSeriesWithRecursion(number - 1, Prev1, Prev1 + Prev2);
    }

    
}

int main()
{
    PrintFibonacciSeriesWithRecursion(10);


    system("pause>0");
    return 0;
}
