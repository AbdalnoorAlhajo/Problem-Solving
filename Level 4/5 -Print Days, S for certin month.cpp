// #5 -Print Days,Hours, Mintues, Seconds for certin month
//


#include<iostream>
using namespace std;

bool IsLeapYear(short Year) {
    // Leap year if perfectly divisible by 400
    // Not a leap year if divisible by 100 but not divisible by 400
    // Leap year if not divisible by 100 but divisible by 4
    // All other years are not leap years

    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);

}

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

short NumberOfDaysInAMonth(short Month,short Year)
{
    if (Month > 12 || Month < 1)
    {
        return 0;
    }

    if (Month == 2)
    {
        return IsLeapYear(Year) ? 29 : 28;
    }

    short arr31Days[7] = {1, 3, 5, 7, 8, 10, 12};

    for (short i = 1; i <= 7; i++)
    {
        if (arr31Days[i - 1] == Month)
            return 31;
    }

    return 30;
}

short NumberOfHoursInAMonth(short Month,short Year)
{
    return NumberOfDaysInAMonth(Month, Year) * 24;
}
                           
int NumberOfMinutesInAMonth(short Month,short Year)
{
    return NumberOfHoursInAMonth(Month, Year) * 60;
}
                           
int NumberOfSecondsInAMonth(short Month,short Year)
{
    return NumberOfMinutesInAMonth(Month, Year) * 60;
}

int main() {
    short Year = ReadYear();
    short Month = ReadMonth();

    cout << "\nNumber of Days    in Month [" << Year << "] is " << NumberOfDaysInAMonth(Month, Year);
    cout << "\nNumber of Hours   in Month [" << Year << "] is " << NumberOfHoursInAMonth(Month, Year);
    cout << "\nNumber of Minutes in Month [" << Year << "] is " << NumberOfMinutesInAMonth(Month, Year);
    cout << "\nNumber of Seconds in Month [" << Year << "] is " << NumberOfSecondsInAMonth(Month, Year);

    system("pause>0");
    return 0;
}