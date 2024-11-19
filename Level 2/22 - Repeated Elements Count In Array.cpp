// #22 - Repeated Elements Count In Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;


int ReadPositiveNumber(string message)
{
    int number;

    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

void ReadArray(int arr[100], int& ArrLength)
{
    ArrLength = ReadPositiveNumber("How many element you wanna enter: ");

    for (int i = 0; i < ArrLength; i++)
    {
        cout << "Element [ " << i + 1 << " ]: ";
        cin >> arr[i];
    }

}

void PrintArray(int arr[100], int& ArrLength)
{
    cout << "\nOriginal Array: ";
    for (int i = 0; i < ArrLength; i++)
    {
        cout << " " << arr[i];
    }
    cout << "\n";
}

int CheckTimesRepeated(int arr[100], int NumberCheck, int ArrLength)
{
    int count = 0;
    for (int i = 0; i < ArrLength; i++)
    {
        if (NumberCheck == arr[i])
            count++;
    }
    return count;
}

int main()
{
    int arr[100];
    int ArrLength;

    ReadArray(arr, ArrLength);

    int CheckNumber = ReadPositiveNumber("Enter a number you wanna check: ");

    PrintArray(arr, ArrLength);

    cout << "\n " << CheckNumber<< " is repeated  "<< CheckTimesRepeated(arr, CheckNumber, ArrLength) << " Time(s) " << endl;

    return 0;
}
