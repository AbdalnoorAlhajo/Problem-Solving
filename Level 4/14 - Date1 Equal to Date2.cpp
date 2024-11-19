// #14 - Date1 Equal to Date2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

bool isDate1EqualDate2(sDate Date1, sDate Date2)
{
    return  (Date1.Year == Date2.Year && Date1.Month == Date2.Month && Date1.Day == Date2.Day);
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
    sDate Date1 = ReadFullDate();
    sDate Date2 = ReadFullDate();

    if (isDate1EqualDate2(Date1, Date2))
        cout << "\n Yes, Date1 is Equal to Date2 .";
    else
        cout << "\n No, Date1 is not Equal to Date2 .";

    system("pause>0");
    return 0;
}
