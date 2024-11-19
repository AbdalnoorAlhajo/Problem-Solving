// #63, 64 - Read, Print Data String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <string>
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

string ReadDate()
{
    string Date;
    cout << "Please enter date dd/mm/yyyy? ";
    getline(cin >> ws, Date);
    return Date;
}

stDate StringToDate(string StringDate)
{
    stDate Date;
    Date.Day = stoi(StringDate.substr(0,2));
    Date.Month = stoi(StringDate.substr(3, 2));
    Date.Year = stoi(StringDate.substr(6, 4));

    return Date;
}

string DataToString(stDate Date)
{
    return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

int main()
{
    string s1 = ReadDate();

    stDate Date = StringToDate(s1);

    cout << "\nDay: " << Date.Day;
    cout << "\nMonth: " << Date.Month;
    cout << "\nYear: " << Date.Year;

    cout << "\n\nYou Entered: " << DataToString(Date);

    system("pause>0");
    return 0;
}

