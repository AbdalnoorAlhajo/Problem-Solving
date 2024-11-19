// #7 - Reverse Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    cout << "Number = " << number << endl;

    return number;
}

int ReversedNumber(int number)
{
    int digit, ReversedNumber = 0;

    while (number > 0)
    {
        digit = number % 10;
        number = number / 10;

        ReversedNumber = ReversedNumber * 10 + digit;

    }

    return ReversedNumber;
}

int main()
{
    int number = ReadPositiveNumber("Please Enter a positive number: ");

    cout << "\n Reversed number = " << ReversedNumber(number) << endl;

    return 0;
}

