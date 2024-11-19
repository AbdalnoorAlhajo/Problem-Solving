// #14 - Checking Scalar Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << "\n";
    }
}

bool IsScalarMatrix(int Matrix1[3][3], short Rows, short Cols)
{
    short ScalarNumber = Matrix1[0][0];
    // Check diagonal elements are 1 and rest elements are 0
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            // Check for diagonal element
            if (i == j && Matrix1[i][j] != ScalarNumber)
            {
                return false;
            }
            // Check for rest elements
            else if (i != j && Matrix1[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main() {

    int Matrix1[3][3] = { {9,0,0},{0,9,0},{0,0,9} };

    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsScalarMatrix(Matrix1, 3, 3))
        cout << "\nYES: Matrix is Scalar.";
    else
        cout << "\nNo: Matrix is NOT Scalar.";

    system("pause>0");
    return 0;
}