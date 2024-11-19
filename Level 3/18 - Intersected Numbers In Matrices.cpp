// #18 - Intersected Numbers In Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool IsNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols) {
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            if (Matrix1[i][j] == Number) {
                return true;
            }
        }
    }
    return false;
}

void PrintIntersectedNumberInMatrices(int arr[3][3], int arr2[3][3], short rows, short cols)
{
    short Number = arr[0][0];
    for (short i = 0; i < rows; i++) 
    {
        for (short j = 0; j < cols; j++) 
        {
            Number = arr[i][j];
            
            if (IsNumberInMatrix(arr2, Number, rows, cols))
            {
                cout << setw(3) << Number << "   ";
            }
        }
    }
}

int main() {
    // Seeds the random number generator in C++, called only once
    srand(static_cast<unsigned>(time(NULL)));

    int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} }; 
    int Matrix2[3][3] = { {5,80,90},{22,77,1},{10,8,33} };

    cout << "\n The following is a 3x3  matrix:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\n The following is another 3x3  matrix:\n";
    PrintMatrix(Matrix2, 3, 3);

    cout << "\n Intersected Numbers in Matrices are:\n";
    PrintIntersectedNumberInMatrices(Matrix1, Matrix2, 3, 3);

    system("pause>0");
    return 0;
}
