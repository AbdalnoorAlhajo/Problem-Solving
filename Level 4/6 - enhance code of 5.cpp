// #6 - enhance code of 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

short ReadMonth()
{
    short Month;

    cout << "\nPlease enter a month to check? ";
    cin >> Month;

    return Month;
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month > 12 || Month < 1)
    {
        return 0;
    }

    int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

int main() {
    short Year = ReadYear();
    short Month = ReadMonth();

    cout << "\nNumber of Days in Month [" << Year << "] is " << NumberOfDaysInAMonth(Month, Year);

    system("pause>0");
    return 0;
}