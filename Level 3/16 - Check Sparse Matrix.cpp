// #16 - Check Sparse Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdio>

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

short CountNumberInMatrix(int arr[3][3], int CountNumber, short rows, short cols)
{
    short count = 0;

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (CountNumber == arr[i][j])
            {
                count++;
            }
        }
    }
    return count;
}

bool IsSparseMatrix(int arr[3][3], short rows, short cols)
{
    short MatrixSize = rows * cols;
    return (CountNumberInMatrix(arr,0,rows,cols)>(MatrixSize/2));
}

int main() {
    // Seeds the random number generator in C++, called only once
    srand(static_cast<unsigned>(time(NULL)));

    int Matrix1[3][3] = { {0,0,12},{9,9,1},{0,0,9} };

    cout << "\n The following is a 3x3 matrix:\n";
    PrintMatrix(Matrix1, 3, 3);


    if (IsSparseMatrix(Matrix1, 3, 3))
    {
        cout << "\nYes, Matrix is Sparse.";
    }
    else
    {
        cout << "\nNo, Matrix is NOT Sparse.";
    }

    system("pause>0");
    return 0;
}
