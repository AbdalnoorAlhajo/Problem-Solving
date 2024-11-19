// #9 - Year Calendar.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintMonthCaleder(short Month, short Year)
{
    short FirstDayInMonth = DayOfWeekOrder(1, Month, Year);

    printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str());

    cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

    short i;
    for (i = 0; i < FirstDayInMonth; i++)
    {
        cout << "     ";
    };

    for (short j = 1; j <= NumberOfDaysInAMonth(Month, Year); j++)
    {
        printf("%5d", j);

        if (++i == 7)
        {
            i = 0;
            cout << "\n";
        }

    }
    cout << "\n  ----------------------------------\n";
}

void PrintYearCalendar(short Year)
{
    printf("\n  _________________________________\n\n");
    printf("           Calendar - %d\n", Year); 
    printf("  _________________________________\n");

    for (short i = 1; i <= 12; i++)
    {
        PrintMonthCaleder(i, Year);
    }
}

int main()
{
    short Year = ReadYear();

    PrintYearCalendar(Year);

    system("pause>0");
    return 0;
}
