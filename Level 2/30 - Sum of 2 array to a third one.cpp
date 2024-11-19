// #30 - Sum of 2 array to a third one.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    
    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }

}

void PrintArray(int arr[100], int ArrLength)
{
    cout << " \n";
    for (int i = 0; i < ArrLength; i++)
    {
        cout << "Array [ " << i + 1 << " ] = " << arr[i] << "\n";
    }
    cout << endl;
}

void CopyArray(int arr1[100], int arr2[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        arr2[i] = arr1[i];
    }
}

void SumOfTwoArray(int arr1[100], int arr2[100], int arr3[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arr3[100];
    int ArrLength = ReadPositiveNumber("Enter the length of array: ");

    FillArrayRandomNumbers(arr, ArrLength);
    cout << "\n Array 1: \n";
    PrintArray(arr, ArrLength);

    FillArrayRandomNumbers(arr2, ArrLength);
    cout << "\n Array 2: \n";
    PrintArray(arr2, ArrLength);

    cout << "\n Sum of Array1 + Array2: \n";
    SumOfTwoArray(arr, arr2, arr3, ArrLength);
    PrintArray(arr3, ArrLength);

    return 0;
}