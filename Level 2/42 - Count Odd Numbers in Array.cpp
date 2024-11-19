// #42 - Count Odd Numbers in Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void FillArrayRandomNumbers(int arr[100], int& ArrLength)
{
    ArrLength = ReadPositiveNumber("How many element you wanna enter: ");
    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }

}

bool IsOdd(int number)
{
    if (number % 2 == 0)
        return false;
    else
        return true;
}

int CountOddNumbersInArray(int arr[100], int arrLength)
{
    int count = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (IsOdd(arr[i]))
            count++;
    }
    return count;
}

void PrintArray(int arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << arr[i] << " ";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int ArrLength = 0;

    FillArrayRandomNumbers(arr, ArrLength);

    cout << "\nArray: ";
    PrintArray(arr, ArrLength);

    int count = CountOddNumbersInArray(arr, ArrLength);

    cout << "\n\n Odd number = " << count << endl;

    return 0;
}