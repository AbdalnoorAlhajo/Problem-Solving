// #16 - Adding one day to date.
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

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month>12)
        return  0;
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : days[Month - 1];
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

sDate IncreaseByOneDayToDate(sDate Date)
{
    if (!IsLastDayInMonth(Date))
    {
        Date.Day++;
        return Date;
    }
    else if (!IsLastMonthInYear(Date.Month))
    {
        Date.Month++;
        Date.Day = 1;
        return Date;
    }
    else
    {
        Date.Year++;
        Date.Month = 1;
        Date.Day = 1;
        return Date;
    }
}

int main()
{
    sDate Date = ReadFullDate();

    Date = IncreaseByOneDayToDate(Date);

    cout << "\n Date After Adding One Day is ";
    printf("%d/%d/%d", Date.Day, Date.Month, Date.Year);

    system("pause>0");
    return 0;
}
