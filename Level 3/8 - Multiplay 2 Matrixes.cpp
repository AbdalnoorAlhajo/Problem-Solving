// #08 - Multiplay 2 Matrixes.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void MultiplyMatrix(int MatrixResult[3][3], int Matrix1[3][3], int Matrix2[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            MatrixResult[i][j] = Matrix1[i][j] * Matrix2[i][j];
        }
    }
}

int main() {
    // Seeds the random number generator in C++, called only once
    srand(static_cast<unsigned>(time(NULL)));

    int MatrixResult[3][3], Matrix1[3][3], Matrix2[3][3];

    cout << "\n The following is a 3x3 random matrix:\n";
    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    PrintMatrix(Matrix1, 3, 3);

    cout << "\n The following is a 3x3 random matrix:\n";
    FillMatrixWithRandomNumbers(Matrix2, 3, 3);
    PrintMatrix(Matrix2, 3, 3);

    cout << "\n The following is a multiplucation of the 3x3 upper matrixes:\n";
    MultiplyMatrix(MatrixResult,Matrix1,Matrix2, 3, 3);
    PrintMatrix(MatrixResult, 3, 3);

    system("pause>0");
    return 0;
}
