// #7 - Day Name.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

short ReadYear() {
    short Year;

    cout << "\nPlease enter a year to check? ";
    cin >> Year;

    return Year;
}

short ReadMonth()
{
    short Month;

    cout << "\nPlease enter a month to check? ";
    cin >> Month;

    return Month;
}

short ReadDay()
{
    short day;
    do
    {
        cout << "\nPlease enter a day to check? ";
        cin >> day;
    } while (day < 1 || day > 30);
    return day;
}

string Date(short Day, short Month, short Year)
{
    return to_string(Day) + "/" + to_string(Month) + "/" + to_string(Year);
}

short CalculateDayOrder(short Day, short Month, short Year)
{
    short a = (14 - Month) / 12;
    short y = Year - a;
    short m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;;
}

string DayName(short DayOrder)
{
    string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return arrDayNames[DayOrder];
}

void PrintDayName(short Day, short Month, short Year)
{
    short DayOrder = CalculateDayOrder(Day, Month, Year);
    cout << "\n\n";
    cout << "Date     : " << Date(Day, Month, Year) << endl;
    cout << "Day Order: " << DayOrder << endl;
    cout << "Day Name : " << DayName(DayOrder) << endl;
}

int main() {
    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();
    
    PrintDayName(Day, Month, Year);

    system("pause>0");
    return 0;
}