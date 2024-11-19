// #48- Monthly Loan Installment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{
    float number = 0;

    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

float TotalMonths(float LoanAmount, float HowManyMonths )
{
    return (float)LoanAmount / HowManyMonths;
}


int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount: ");
    float HowManyMonths = ReadPositiveNumber("How Many Months:");

    cout << "\n You have to pay in every month = " << TotalMonths(LoanAmount, HowManyMonths) << endl;

    return 0;
}

