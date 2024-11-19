// #36 - Add Array Element Simi Dynamic.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool DoYouWannaAddMore()
{
    bool Answer;

    cout << "Do you wanna add more(Enter 0 for No/ 1 for yes)? ";
    cin >> Answer;
    cout << "\n";
    return Answer;
}

void AddArrayElement(int number, int arr[100], int& ArrLength)
{
    ArrLength++;
    arr[ArrLength - 1] = number;
}

void InputUserNumbersInArray(int arr[100], int& ArrLength)
{
    bool Answer;

    do
    {
        AddArrayElement(ReadPositiveNumber("Enter positive number, please: "), arr, ArrLength);
        cout << "\n";
        Answer = DoYouWannaAddMore();

    } while (Answer);
}

void PrintArray(int arr[100], int ArrLength)
{
    cout << "\n Array: ";
    for (int i = 0; i < ArrLength; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[100];
    int ArrLength = 0;

    InputUserNumbersInArray(arr, ArrLength);

    cout << "Array Length = " << ArrLength << endl;

    PrintArray(arr, ArrLength);

    return 0;
}
