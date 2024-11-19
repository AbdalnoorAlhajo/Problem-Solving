// #4 - Print Perfect Numbers form 1 To N.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool IsPerfectNumber(int number)
{
    int sum = 0, i;
    for (i = 1; i <= round(number / 2); i++)
    {
        if (number % i == 0)
            sum += i;
    }

    return (sum == number);
}

void PrintPerfectNumberFormOneToN(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (IsPerfectNumber(i) == true)
            cout << i << " is a perfect number\n";
    }

}

int main()
{
    int number = ReadPositiveNumber("Enter a positive number: ");

    PrintPerfectNumberFormOneToN(number);

    return 0;
}
