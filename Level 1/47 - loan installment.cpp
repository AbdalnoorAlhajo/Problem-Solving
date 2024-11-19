// #47 - loan installment.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
    return (float)LoanAmount / MonthlyInstallment;
}


int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount: ");
    float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment:");

    cout << "\n Total Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

    return 0;
}

