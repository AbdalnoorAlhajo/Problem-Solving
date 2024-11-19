// #17 - Checking Existing in Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool IsNumberInMatrix(int arr[3][3], int Number, short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (Number == arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
}


int main() {
    // Seeds the random number generator in C++, called only once
    srand(static_cast<unsigned>(time(NULL)));

    int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} }, Number;

    cout << "\n The following is a 3x3 matrix:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nEnter a number to count in Matrix: ";
    cin >> Number;

    if (IsNumberInMatrix(Matrix1, Number, 3, 3))
    {
        cout << "\nYes, Number Exist.";
    }
    else
    {
        cout << "\nNo, Number NOT Exist.";
    }

    system("pause>0");
    return 0;
}
