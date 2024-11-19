// #13 - Max of three numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2, int& num3)
{
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;
}

int MaxOfTwoNumbers(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
            return num1;
        else
            return num3;
    }
    else
    {
        if (num2 > num3)
            return num2;
        else
            return num3;
    }
        
}

void PrintResults(int max)
{
    cout << "\n  The maximum number is " << max << endl;
}

int main()
{
    int num1, num2, num3;

    ReadNumbers(num1, num2, num3);
    PrintResults(MaxOfTwoNumbers(num1, num2, num3));

    return 0;
}
