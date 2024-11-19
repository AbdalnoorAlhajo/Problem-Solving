// #42 - Task Duration in seconds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMintues, NumberOfSeconds;
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

stTaskDuration ReadTaskDuration()
{
    stTaskDuration TaskDuration;

    TaskDuration.NumberOfDays = ReadPoitiveNumber("Enter the number of days: ");
    TaskDuration.NumberOfHours = ReadPoitiveNumber("Enter the number of Hours: ");
    TaskDuration.NumberOfMintues = ReadPoitiveNumber("Enter the number of Mintues: ");
    TaskDuration.NumberOfSeconds = ReadPoitiveNumber("Enter the number of Seconds: ");

    return TaskDuration;
}

int TaskDurationInSeconds(stTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMintues * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

int main()
{
    cout << "\n Total seconds for the task = " << TaskDurationInSeconds(ReadTaskDuration()) << endl;

    return 0;
}

