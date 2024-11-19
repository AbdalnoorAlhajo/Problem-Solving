// #27 - Print from N to 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintNumbersFromNToOne(int N)
{
    int i = 0;

    do
    {
        cout << N << endl;
        N--;
    } while (0 < N);
}

int main()
{
    int N = ReadNumber();
    PrintNumbersFromNToOne (N);

    return 0;
}

