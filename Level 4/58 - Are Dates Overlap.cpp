// #58 - Are Dates Overlap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream> 
using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month>12)
        return  0;

    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
    return (Month == 12);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
    return  (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
        Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
            Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

sDate IncreaseDateByOneDay(sDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Month = 1;
            Date.Day = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }
    return Date;
}

bool IsDate1EqualDate2(sDate Date1, sDate Date2)
{
    return  (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
    return  (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

enum enDateCompare { Before = -1, Equal = 0, After = 1 };

enDateCompare CompareDates(sDate Date1, sDate Date2)
{
    if (IsDate1BeforeDate2(Date1, Date2))
        return enDateCompare::Before;

    if (IsDate1EqualDate2(Date1, Date2))
        return enDateCompare::Equal;

    return enDateCompare::After;
}

bool AreDatesOverlap(sDate Date1Starts, sDate Date1Ends, sDate Date2Starts, sDate Date2Ends)
{
    enDateCompare DateComapre = CompareDates(Date1Starts, Date2Starts);

    if (DateComapre == enDateCompare::Equal)
        return true;

    else if (DateComapre == enDateCompare::Before)
    {
        while (!IsDate1EqualDate2(Date1Starts, Date1Ends))
        {
            if (IsDate1EqualDate2(Date1Starts, Date2Starts))
                return true;
            Date1Starts = IncreaseDateByOneDay(Date1Starts);
        }
    }
    else
    {
        while (!IsDate1EqualDate2(Date2Starts, Date2Ends))
        {
            if (IsDate1EqualDate2(Date1Starts, Date2Starts))
                return true;
            Date2Starts = IncreaseDateByOneDay(Date2Starts);1
        }
    }
    return false;
}

short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month;
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a Year? ";
    cin >> Year;
    return Year;
}

sDate ReadFullDate()
{
    sDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

int main()
{
    cout << "\nPeriod 1 Start: ";
    sDate Date1Starts = ReadFullDate();
    cout << "\nPeriod 1 ends: ";
    sDate Date1Ends = ReadFullDate();
    cout << "\nPeriod 2 Start: ";
    sDate Date2Starts = ReadFullDate();
    cout << "\nPeriod 2 ends: ";
    sDate Date2Ends = ReadFullDate();

    if (AreDatesOverlap(Date1Starts, Date1Ends, Date2Starts, Date2Ends))
    {
        cout << "\n\nYes, Dates are Overlap";
    }
    else
    {
        cout << "\n\nNo, Dates are Not Overlap";
    }

    system("pause>0");
    return 0;
}
