// #5 - Print Digits in a Reversed Order.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintDigitsInReversedOrder(int number)
{
    int digit;

    while (number > 0)
    {
        digit = number % 10;

        cout << digit << endl;

        number = number / 10;
    }

}

int main()
{
    PrintDigitsInReversedOrder(ReadPositiveNumber("Please Enter a positive number: "));

    return 0;
}

