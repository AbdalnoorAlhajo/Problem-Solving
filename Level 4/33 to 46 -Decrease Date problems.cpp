// #33 to 46 -Decrease Date problems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 

using namespace std;

struct stDate
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
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

stDate ReadFullDate()
{
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

stDate DecreaseDateByOneDay(stDate Date)
{
    if (Date.Day == 1)
    {
        if (Date.Month == 1)
        {
            Date.Month = 12;
            Date.Day = 31;
            Date.Year--;
        }
        else
        {
            Date.Month--;
            Date.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
        }
    }
    else
    {
        Date.Day--;
    }
    return Date;
}

stDate DecreaseDateByXDays(stDate Date, short Days)
{
    for (short i = 1; i <= Days; i++)
    {
        Date = DecreaseDateByOneDay(Date);
    }
    return Date;
}

stDate DecreaseDateByOneWeek(stDate Date)
{
    for (short i = 1; i <= 7; i++)
    {
        Date = DecreaseDateByOneDay(Date);
    }
    return Date;
}

stDate DecreaseDateeByXWeeks(stDate Date, short Weeks)
{
    for (short i = 1; i <= Weeks; i++)
    {
        Date = DecreaseDateByOneWeek(Date);
    }
    return Date;
}

stDate DecreaseDateByOneMonth(stDate Date)
{
    if (Date.Month == 1)
    {
        Date.Month = 12;
        Date.Year--;
    }
    else
    {
        Date.Month--;
    }

    short NumberOfDaysInTheCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

    if (Date.Day > NumberOfDaysInTheCurrentMonth)
    {
        Date.Day = NumberOfDaysInTheCurrentMonth;
    }
    return Date;
}

stDate DecreaseDateByXMonths(stDate Date, short Months)
{
    for (short i = 1; i <= Months; i++)
    {
        Date = DecreaseDateByOneMonth(Date);
    }
    return Date;
}

stDate DecreaseDateByOneYear(stDate Date)
{
    Date.Year--;
    return Date;
}

stDate DecreaseDateByXYears(stDate Date, short Years)
{
    for (short i = 1; i <= Years; i++)
    {
        Date = DecreaseDateByOneYear(Date);
    }
    return Date;
}

stDate DecreaseDateByXYearsFaster(stDate Date, short Years)
{
    Date.Year -= Years;
    return Date;
}

stDate DecreaseDateByOneDecade(stDate Date)
{
    Date.Year -= 10;
    return Date;
}

stDate DecreaseDateByXDecades(stDate Date, short Decades)
{
    for (short i = 1; i <= Decades; i++)
    {
        Date = DecreaseDateByOneDecade(Date);
    }
    return Date;
}

stDate DecreaseDateByXDecadesFaster(stDate Date, short Decades)
{
    Date.Year -= (Decades * 10);
    return Date;
}

stDate DecreaseDateByOneCentury(stDate Date)
{
    Date.Year -= 100;
    return Date;
}

stDate DecreaseDateByOneMillennium(stDate Date)
{
    Date.Year -= 1000;
    return Date;
}

int main()
{
    stDate Date1 = ReadFullDate();
    cout << "\nDate Before: \n";

    Date1 = DecreaseDateByOneDay(Date1);
    cout << "\n01-Subtracting one day is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXDays(Date1, 10);
    cout << "\n02-Subtracting 10 days is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByOneWeek(Date1);
    cout << "\n03-Subtracting one week is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateeByXWeeks(Date1, 10);
    cout << "\n04-Subtracting 10 weeks is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByOneMonth(Date1);
    cout << "\n05-Subtracting one month is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXMonths(Date1, 5);
    cout << "\n06-Subtracting 5 months is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByOneYear(Date1);
    cout << "\n07-Subtracting one year is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXYears(Date1, 10);
    cout << "\n08-Subtracting 10 Years is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXYearsFaster(Date1, 10);
    cout << "\n09-Subtracting 10 Years (faster) is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByOneDecade(Date1);
    cout << "\n10-Subtracting one Decade is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXDecades(Date1, 10);
    cout << "\n11-Subtracting 10 Decades is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByXDecadesFaster(Date1, 10);
    cout << "\n12-Subtracting 10 Decade (faster) is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByOneCentury(Date1);
    cout << "\n13-Subtracting One Century is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = DecreaseDateByOneMillennium(Date1);
    cout << "\n14-Subtracting One Millennium is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    system("pause>0");
    return 0;
}