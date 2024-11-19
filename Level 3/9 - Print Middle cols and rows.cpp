// #09 - Print Middle cols and rows.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int RandomNumber(int from, int to) {
    // Function to generate a random number
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            printf(" %0*d   ", 2, arr[i][j]);
        }
        cout << "\n";
    }
}

void PrintMiddleCol(int arr[3][3], short rows, short cols)
{
    short MiddleCol = cols / 2;

        for (short j = 0; j < rows; j++) {
            printf(" %0*d   ", 2, arr[j][MiddleCol]);
        }
        cout << "\n";
}

void PrintMiddleRow(int arr[3][3], short rows, short cols)
{
    short MiddleRow = rows / 2;

    for (short j = 0; j < cols; j++) {
        printf(" %0*d   ", 2, arr[MiddleRow][j]);
    }
    cout << "\n";
}

int main() {
    // Seeds the random number generator in C++, called only once
    srand(static_cast<unsigned>(time(NULL)));

    int Matrix1[3][3];

    cout << "\n The following is a 3x3 random matrix:\n";
    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMiddle col of Matrix: \n";
    PrintMiddleCol(Matrix1, 3, 3);

    cout << "\nMiddle row of Matrix: \n";
    PrintMiddleRow(Matrix1, 3, 3);


    system("pause>0");
    return 0;
}
