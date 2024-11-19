// #40 - Total bill after service and Tax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

float ReadPoitiveNumber(string message)
{
    float number;

    do
    {
        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

float CalculateTotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}

int main()
{
    float TotalBill = ReadPoitiveNumber("Enter the total bill, please: ");

    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After Service And Tax: " << CalculateTotalBillAfterServiceAndTax(TotalBill) << endl;

    return 0;
}

