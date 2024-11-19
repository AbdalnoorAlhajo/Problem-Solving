// #32 - Copy Array In Reverse Order.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
        cout << "Array [ " << i + 1 << " ] = " << arr[i] << "\n";
    }
    cout << endl;
}

void CopyArrayInReverseOrder(int ArrSource[100], int ArrDestination[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        ArrDestination[i] = ArrSource[ArrLength - 1 - i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100];
    int ArrLength;

    FillArrayRandomNumbers(arr, ArrLength);
    cout << "\n Array 1: \n";
    PrintArray(arr, ArrLength);

    CopyArrayInReverseOrder(arr, arr2, ArrLength);
    cout << "\n Array 2: \n";
    PrintArray(arr2, ArrLength);


    return 0;
}