// #12 - Max of two numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2)
{
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
}

int MaxOfTwoNumbers(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

void PrintResults(int max)
{
    cout << "\n  The maximum number is " << max << endl;
}
int main()
{
    int num1, num2;

    ReadNumbers(num1, num2);
    PrintResults(MaxOfTwoNumbers(num1, num2));

    return 0;
}
