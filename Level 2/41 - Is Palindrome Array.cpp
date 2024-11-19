// #41 - Is Palindrome Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void FillArrayWithNumbers(int arr[100], int& ArrLength)
{
    ArrLength = ReadPositiveNumber("How many element you wanna enter: ");
    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = ReadPositiveNumber("Enter element: ");
    }

}

bool IsPalindromeArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] != arr[arrLength - i - 1])
            return false;
    }
    return true;
}

void PrintArray(int arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[100];
    int ArrLength = 0;

    FillArrayWithNumbers(arr, ArrLength);

    cout << "\nArray: ";
    PrintArray(arr, ArrLength);

    if (IsPalindromeArray(arr, ArrLength))
    {
        cout << "\n\n It is a palindrome Array\n";
    }
    else 
        cout << "\n\n It is not a palindrome Array\n";

    cout << endl;

    return 0;
}