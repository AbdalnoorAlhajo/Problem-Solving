// #04  - Sum of each col.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int RandomNumber(int from, int to) {
    // Function to generate a random number
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

int ColSum(int arr[3][3], short rows, short ColNumber)
{
    int Sum = 0;

    for (short i = 0; i < rows; i++)
        Sum += arr[i][ColNumber];

    return Sum;
}

void PrintEachColSum(int arr[3][3], short rows, short cols) {
    cout << "\nThe the following are the sum of each Column in the matrix:\n";

    for (short i = 0; i < cols; i++)
    {
        cout << "Col " << i + 1 << " = " << ColSum(arr, rows, i) << endl;
    }

}

void PrintMatrix(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    // Seeds the random number generator in C++, called only once
    srand(static_cast<unsigned>(time(NULL)));

    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n The following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    PrintEachColSum(arr, 3, 3);

    return 0;
}
