// #14 - Swap numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2)
{
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter Second number: ";
    cin >> num2;
}

void SwapTwoNumbers(int& num1, int& num2)
{
    int Temp;

    Temp = num1;
    num1 = num2;
    num2 = Temp;
}

void PrintResults(int num1, int num2)
{
    cout << "\n Number one = " << num1 << endl;
    cout << " Number second = " << num2 << endl;
}

int main()
{
    int num1, num2;

    ReadNumbers(num1, num2);

    PrintResults(num1, num2);
    SwapTwoNumbers(num1, num2);
    PrintResults(num1, num2);


    return 0;

}
