// #20 - Palindrome Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool IsPalindromeMatrix(int arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols / 2; j++)
        {
            if (arr[i][j] != arr[i][cols - 1 - j])
            {
                return false;
            }
        }
    }
    return true;
}

int main() 
{
    //int Matrix1[3][3] = { {77,5,12},{22,20,6},{14,3,9} };
    int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
    cout << "\n The following is a 3x3  matrix:\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsPalindromeMatrix(Matrix1, 3, 3))
    {
        cout << "\nYes, it's Palindrome matrix.";
    }
    else
    {
        cout << "\nNo, it is Not Palindrome matrix.";
    }
    system("pause>0");
    return 0;
}

