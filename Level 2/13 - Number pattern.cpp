// #13 - Number pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number;

    do
    {
        cout << message;
        cin >> number;

    } while (number <= 0);

    cout << "Number = " << number << endl << "\n";

    return number;
}

void PrintNumberPattern(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}

int main()
{
    PrintNumberPattern(ReadPositiveNumber("Enter a positvie number:"));

    return 0;
}
