// #4 -Print Days, Hours, Mintues, Seconds  for certin years.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

struct stYearInfo
{
    short Days;
    int Hours;
    int Mintues;
    int Seconds;
};

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

void CalculateYearInfo(stYearInfo& YearInfo)
{
    YearInfo.Hours = YearInfo.Days * 24;
    YearInfo.Mintues = YearInfo.Hours * 60;
    YearInfo.Seconds = YearInfo.Mintues * 60;
}

void PrintYearInfo(short Year)
{
    stYearInfo YearInfo;

    if (IsLeapYear(Year))
        YearInfo.Days = 366;
    else
        YearInfo.Days = 365;

    CalculateYearInfo(YearInfo);

    cout << "\n\n";
    cout << "Number of days     in year [" << Year << "] is " << YearInfo.Days << endl;
    cout << "Number of Hours    in year [" << Year << "] is " << YearInfo.Hours << endl;
    cout << "Number of Mintues  in year [" << Year << "] is " << YearInfo.Mintues << endl;
    cout << "Number of Seconds  in year [" << Year << "] is " << YearInfo.Seconds << endl;
}

int main() {
    short Year = ReadYear();

    PrintYearInfo(Year);
    system("pause>0");
    return 0;
}
