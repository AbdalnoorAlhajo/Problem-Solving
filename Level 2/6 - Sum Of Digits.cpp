// #6 - Sum Of Digits.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int SumOfDigits(int number)
{
    int digit, sum = 0;

    while (number > 0)
    {
        digit = number % 10;

        sum = sum + digit;

        number = number / 10;
    }

    return sum;

}

void PrintResults(int result)
{
    cout << "\n The sum of digits = " << result << endl;
}

int main()
{
    PrintResults(SumOfDigits(ReadPositiveNumber("Please Enter a positive number: ")));

    return 0;
}

