// #10 -Number of days from begining.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool IsLeapYear(short Year) {
    // Leap year if perfectly divisible by 400
    // Not a leap year if divisible by 100 but not divisible by 400
    // Leap year if not divisible by 100 but divisible by 4
    // All other years are not leap years

    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short ReadMonth() {
    short Month;
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear() {
    short Year;
    cout << "\nPlease enter a year? ";
    cin >> Year;
    return Year;
}

short ReadDay() {
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2; 

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string MonthShortName(short MonthNumber) {
    string Months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    return Months[MonthNumber - 1];
}

string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return arrDayNames[DayOfWeekOrder];
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

short NumberOfDaysInAMonthFromBeginingOfTheYear(short Day, short Month, short Year)
{
    short TotalDays = 0;
    for (short i = 1; i < Month; i++)
    {
        TotalDays += NumberOfDaysInAMonth(i,Year);
    }
    return TotalDays + Day;
}

int main()
{
    short DaysFromBeginingOfTheYear = NumberOfDaysInAMonthFromBeginingOfTheYear(ReadDay(), ReadMonth(), ReadYear());

    cout << "\n\n Number of Days from begining of the year: " << DaysFromBeginingOfTheYear << endl;

    system("pause>0");
    return 0;
}
