// #39 - Remainder.cpp
//

#include <iostream>
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

float CalculateRemainder(float CashPaid, float TotalBill)
{
    return CashPaid - TotalBill;
}

int main()
{
    float CashPaid = ReadPoitiveNumber("Enter cash that you paid, please: ");
    float TotalBill = ReadPoitiveNumber("Enter the total bill, please: ");

    cout << "Remainder = " << CalculateRemainder(CashPaid, TotalBill) << endl;

    return 0;
}

