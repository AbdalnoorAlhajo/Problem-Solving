// #56 - Is Date1 After Date2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{ 
    return  (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true :
            (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false); 
}

bool IsDate1EqualDate2(sDate Date1, sDate Date2) 
{ 
    return  (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false; 
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
    return  (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
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

    if (IsDate1AfterDate2(Date1, Date2))
        cout << "\n Yes, Date1 is After Than Date2 .";
    else
        cout << "\n No, Date1 is not After Than Date2 .";

    system("pause>0");
    return 0;
}
