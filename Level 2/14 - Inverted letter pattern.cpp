// #14 - Inverted letter pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintInvertedLetterPattern(int number)
{
    for (int i = number + 64; i >= 65; i--)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << char(i);
        }
        cout << "\n";
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("Enter a positvie number:"));

    return 0;
}
