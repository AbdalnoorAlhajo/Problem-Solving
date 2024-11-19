// #20 - Increase Date Problems.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool IsLastDayInMonth(stDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
    return (Month == 12);
}

stDate IncreaseDateByOneDay(stDate Date)
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

stDate IncreaseDateByXDays(stDate Date, short Days)
{
    for (short i = 1; i <= Days; i++)
    {
        Date = IncreaseDateByOneDay(Date);
    }

    return Date;
}

stDate IncreaseDateByOneWeek(stDate Date)
{
    for (short i = 1; i <= 7; i++)
    {
        Date = IncreaseDateByOneDay(Date);
    }

    return Date;
}

stDate IncreaseDateByXWeeks(stDate Date, short Weeks)
{
    for (short i = 1; i <= Weeks; i++)
    {
        Date = IncreaseDateByOneWeek(Date);
    }
    return Date;
}

stDate IncreaseDateByOneMonth(stDate Date)
{
    if (!IsLastMonthInYear(Date.Month))
    {
        Date.Month++;
    }
    else
    {
        Date.Year++;
        Date.Month = 1;
    }
    
    //last check day in date should not exceed max days in the current month
    // example if date is 31/1/2022 increasing one month should not be 31 / 2 / 2022, it should
    // be 28/2/2022 
    short NumberOfDaysInCurrentMonth =NumberOfDaysInAMonth(Date.Month, Date.Year);

    if (Date.Day > NumberOfDaysInCurrentMonth)
    {
        Date.Day = NumberOfDaysInCurrentMonth;
    }
    return Date;
}

stDate IncreaseDateByXMonths(stDate Date, short Months)
{
    for (short i = 1; i <= Months; i++)
    {
        Date = IncreaseDateByOneMonth(Date);
    }
    return Date;
}

stDate IncreaseDateByOneYear(stDate Date)
{
    Date.Year++;
    return Date;
}

stDate IncreaseDateByXYears(stDate Date, short Years)
{
    for (short i = 1; i <= Years; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }
    return Date;
}

stDate IncreaseDateByXYearsFaster(stDate Date, short Years)
{
    Date.Year += Years;
    return Date;
}

stDate IncreaseDateByOneDecade(stDate Date)
{
    Date.Year += 10;
    return Date;
}

stDate IncreaseDateByXDecades(stDate Date, short Decades)
{
    for (short i = 1; i <= Decades * 10; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }
    return Date;
}

stDate IncreaseDateByXDecadesFaster(stDate Date, short Decades)
{
    Date.Year += (Decades * 10);
    return Date;
}

stDate IncreaseDateByOneCentury(stDate Date)
{
    Date.Year += 100;
    return Date;
}

stDate IncreaseDateByOneMillennium(stDate Date)
{
    Date.Year += 1000;
    return Date;
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

int main()
{
    stDate Date1 = ReadFullDate();
    cout << "\nDate After: \n";
    Date1 = IncreaseDateByOneDay(Date1);
    cout << "\n01-Adding one day is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXDays(Date1, 10);
    cout << "\n02-Adding 10 days is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByOneWeek(Date1);
    cout << "\n03-Adding one week is: "<< Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXWeeks(Date1, 10);
    cout << "\n04-Adding 10 weeks is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByOneMonth(Date1);
    cout << "\n05-Adding one month is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXMonths(Date1, 5);
    cout << "\n06-Adding 5 months is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByOneYear(Date1);
    cout << "\n07-Adding one year is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXYears(Date1, 10);
    cout << "\n08-Adding 10 Years is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXYearsFaster(Date1, 10);
    cout << "\n09-Adding 10 Years (faster) is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByOneDecade(Date1);
    cout << "\n10-Adding one Decade is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXDecades(Date1, 10);
    cout << "\n11-Adding 10 Decades is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByXDecadesFaster(Date1, 10);
    cout << "\n12-Adding 10 Decade (faster) is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByOneCentury(Date1);
    cout << "\n13-Adding One Century is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    Date1 = IncreaseDateByOneMillennium(Date1);
    cout << "\n14-Adding One Millennium is: " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year;

    system("pause>0");
    return 0;
}