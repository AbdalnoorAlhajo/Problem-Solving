// #19 - Min, Max in Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

using namespace std;

void PrintMatrix(int arr[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            printf(" %0*d   ", 2, arr[i][j]);
        }
        cout << "\n";
    }
}

int MaxNumberInMatrix(int arr[3][3], short rows, short cols)
{
    int Max = arr[0][0];
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (Max < arr[i][j])
                Max = arr[i][j];
        }
    }
    return Max;
}

int MinNumberInMatrix(int arr[3][3], short rows, short cols)
{
    int Min = arr[0][0];
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (Min > arr[i][j])
                Min = arr[i][j];
        }
    }
    return Min;
}

int main() {
    // Seeds the random number generator in C++, called only once
    srand(static_cast<unsigned>(time(NULL)));

    int Matrix1[3][3] = { {77,5,12},{22,20,6},{14,3,9} };

    cout << "\n The following is a 3x3  matrix:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\n Min Number in Matrix: " << MinNumberInMatrix(Matrix1, 3, 3) << endl;
    cout << "\n Max Number in Matrix: " << MaxNumberInMatrix(Matrix1, 3, 3) << endl;
    

    system("pause>0");
    return 0;
}
