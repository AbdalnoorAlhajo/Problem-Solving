// #17 - Difference Between Date.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std;

bool IsLeapYear(short Year) {
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

struct sDate
{
    short Year;
    short Month;
    short Day;
};

bool isDate1BeforeDate2(sDate Date1, sDate Date2)
{
    return  (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool isDate1EqualDate2(sDate Date1, sDate Date2)
{
    return  (Date1.Year == Date2.Year && Date1.Month == Date2.Month && Date1.Day == Date2.Day);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month>12)
        return  0;
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short NumberOfDaysFromTheBeginingOfTheYear(sDate Date)
{
    short TotalDays = 0;
    for (int i = 1; i <= Date.Month - 1; i++)
    {
        TotalDays += NumberOfDaysInAMonth(i, Date.Year);
    }
    TotalDays += Date.Day;
    return TotalDays;
}

bool IsLastDayInMonth(sDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
    return (Month == 12);
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

short DifferenceBetweenDate(sDate Date1, sDate Date2)
{
    short DifferecnceDays = 0;

    if (isDate1EqualDate2(Date1, Date2))
    {
        return DifferecnceDays;
    }
    else if (isDate1BeforeDate2(Date1, Date2))
    {
        DifferecnceDays = (Date2.Year - Date1.Year) * 365;
        DifferecnceDays += NumberOfDaysFromTheBeginingOfTheYear(Date2) - NumberOfDaysFromTheBeginingOfTheYear(Date1);
    }
    else
    {
        DifferecnceDays = (Date1.Year - Date2.Year) * 365;
        DifferecnceDays += NumberOfDaysFromTheBeginingOfTheYear(Date1) - NumberOfDaysFromTheBeginingOfTheYear(Date2);
    }
    return DifferecnceDays;
}

int main()
{
    sDate Date1 = ReadFullDate();
    sDate Date2 = ReadFullDate();

    cout << "\nDiffrence is: " << DifferenceBetweenDate(Date1, Date2) << " Day(s).";

    cout << "\nDiffrence (Including End Day) is: " << DifferenceBetweenDate(Date1, Date2) + 1 << " Day(s).";

    system("pause>0");
    return 0;
}
