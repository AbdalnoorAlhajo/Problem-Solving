// #26 - Print Numbers form 1 to N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadNumber()
{
    int number;

    cout << "Enter a number, please: ";
    cin >> number;

    return number;
}

void PrintNumbersFromOneToN(int N)
{
    int i = 0;

    do
    {
        i++;
        cout << i << endl;
    } while (i < N);
}

int main()
{
    int N = ReadNumber();
    PrintNumbersFromOneToN(N);

    return 0;
}

