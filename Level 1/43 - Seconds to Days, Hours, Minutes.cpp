// #43 - Seconds to Days, Hours, Minutes.
//

#include <iostream>
using namespace std;

struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

float ReadPoitiveNumber(string message)
{
    float number;

    do
    {
        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

stTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    stTaskDuration TaskDuration;
    const int SecondsPerDay = 24 * 60 * 60, SecondsPerHour = 60 * 60, SecondsPerMinute = 60;
    int Remainder = 0;

    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;
    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;
    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;
    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(stTaskDuration TaskDuration)
{
    cout << "\n";
    cout << TaskDuration.NumberOfDays << ":"
        << TaskDuration.NumberOfHours << ":"
        << TaskDuration.NumberOfMinutes << ":"
        << TaskDuration.NumberOfSeconds << "\n";
}

int main()
{
    float TotalSeconds = ReadPoitiveNumber("Enter Total Seconds: ");
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

    return 0;
}

