// #15 - Letter pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintLetterPattern(int number)
{
    for (int i = 65; i <= 64 + number; i++)
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
    PrintLetterPattern(ReadPositiveNumber("Enter a positvie number:"));

    return 0;
}
