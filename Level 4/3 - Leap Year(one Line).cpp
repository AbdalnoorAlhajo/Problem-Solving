// #3 - Leap Year(one Line).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

bool IsLeapYear(short Year) {
    // Leap year if perfectly divisible by 400
    // Not a leap year if divisible by 100 but not divisible by 400
    // Leap year if not divisible by 100 but divisible by 4
    // All other years are not leap years

    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short ReadYear() {
    short Year;
    cout << "\nPlease enter a year to check? ";
    cin >> Year;
    return Year;
}

int main() {
    short Year = ReadYear();
    if (IsLeapYear(Year))
        cout << "\nYes, Year [" << Year << "] is a leap year.\n";
    else
        cout << "\nNo, Year [" << Year << "] is NOT a leap year.\n";
    return 0;
}
