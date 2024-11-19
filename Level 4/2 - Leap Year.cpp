// #2 - Leap Year.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool IsLeapYear(int Number)
{
    if (Number % 400 == 0)
    {
        return true;
    }
    else if (Number % 4 == 0 && Number % 100 != 0)
    {
        return true;
    }
    return false;
}

short ReadYear() {
    short Year;
    cout << "\nPlease enter a year to check? ";
    cin >> Year;
    return Year;
}

int main() 
{
    short Year = ReadYear();
    if (IsLeapYear(Year))
        cout << "\nYes, Year [" << Year << "] is a leap year.\n";
    else
        cout << "\nNo, Year [" << Year << "] is NOT a leap year.\n";
    return 0;
}