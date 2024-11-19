// #11 - Date from date order in a year.
//

#include <iostream>
#include <string>
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

struct sDate
{
    short year;
    short month;
    short day;
};

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
        TotalDays += NumberOfDaysInAMonth(i, Year);
    }
    return TotalDays + Day;
}

sDate DateFromOrder(short DayFromBegingOfTheYear, short Year)
{
    sDate Date;
    
    Date.year = Year;
    Date.month = 1;

    short MonthDays = 0;

    while (DayFromBegingOfTheYear != 0)
    {
        MonthDays = NumberOfDaysInAMonth(Date.month, Year);

        if (DayFromBegingOfTheYear > MonthDays)
        {
            DayFromBegingOfTheYear -= MonthDays;
            Date.month++;
        }
        else
        {
            Date.day = DayFromBegingOfTheYear;
            DayFromBegingOfTheYear = 0;
        }
    }
    return Date;

}

int main()
{
    short day   = ReadDay();
    short month = ReadMonth();
    short year  = ReadYear();

    short DaysFromBeginingOfTheYear = NumberOfDaysInAMonthFromBeginingOfTheYear(day, month, year);

    cout << "\n\n Number of Days from begining of the year: " << DaysFromBeginingOfTheYear << endl;

    sDate Date = DateFromOrder(DaysFromBeginingOfTheYear, year);

    cout << "\nDate for[" << DaysFromBeginingOfTheYear << "] using function is :" 
        << to_string(Date.day) + "/" + to_string(Date.month) + "/" + to_string(Date.year);

    system("pause>0");

    return 0;
}
