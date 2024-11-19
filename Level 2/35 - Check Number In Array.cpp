// #35 - Check Number In Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintArray(int arr[100], int ArrLength)
{
    cout << "\nArray Filled with random number: \n";
    for (int i = 0; i < ArrLength; i++)
    {
        cout << "Array [ " << i << " ] = " << arr[i] << "\n";
    }
    cout << endl;
}

short IndexOfNumberInArray(int arr[100], int ArrLength, int SearchNumber)
{
    int i;
    for (i = 0; i < ArrLength; i++)
    {
        if (SearchNumber == arr[i])
            return i;
    }
    return -1; // Not found
}

bool IsNumberFoundInArray(int arr[100], int ArrLength, int SearchNumber)
{
    return (IndexOfNumberInArray(arr, ArrLength, SearchNumber) != -1);
}

void PrintResults(int arr[100], int ArrLength, int SearchNumber)
{
    bool IsFound = IsNumberFoundInArray(arr, ArrLength, SearchNumber);
    cout << "\n Number you searched for: " << SearchNumber << endl;

    if (!IsFound)
    {
        cout << "Number Not found:-(" << endl;
    }
    else
    {
        cout << "Number is found:-)" << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100];
    int ArrLength, SearchNumber;

    FillArrayRandomNumbers(arr, ArrLength);
    cout << "\n Array : \n";
    PrintArray(arr, ArrLength);

    SearchNumber = ReadPositiveNumber("Enter the number you wanna search: ");

    PrintResults(arr, ArrLength, SearchNumber);
    return 0;
}