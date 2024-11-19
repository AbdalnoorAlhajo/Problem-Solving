// #44 - Print Day number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, thu = 6, Fir = 7 };

float ReadNumberInRange(string message)
{
    float number;

    do
    {
        cout << message << endl;
        cin >> number;

    } while (number < 1 && number > 7 );

    return number;
}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange("Enter a number between one to seven to show day: ");

}

void GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::Mon:
		cout << "Monday\n";
		break;
	case enDayOfWeek::Tue:
		cout << "Tuesday\n";
		break;
	case enDayOfWeek::Wed:
		cout << "Wendsday\n";
		break;
	case enDayOfWeek::thu:
		cout << "Thursday\n";
		break;
	case enDayOfWeek::Fir:
		cout << "Friday\n";
		break;
	case enDayOfWeek::Sat:
		cout << "Saturday\n";
		break;
	case enDayOfWeek::Sun:
		cout << "Sunday\n";
		break;
	default:
		cout << "Not a week day\n";
		break;
	}
}

int main()
{
	GetDayOfWeek(ReadDayOfWeek());

	return 0;
}

