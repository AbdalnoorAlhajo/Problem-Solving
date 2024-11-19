// #10 - Sum of Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int SumOfMatrix(int arr[3][3], short rows, short cols)
{
    int Sum = 0;

    for (short i = 0; i < rows; i++) 
    {
        for (short j = 0; j < cols; j++) 
        {
            Sum += arr[i][j];
        }
    }
    return Sum;
}


int main() {
    // Seeds the random number generator in C++, called only once
    srand(static_cast<unsigned>(time(NULL)));

    int Matrix1[3][3];

    cout << "\n The following is a 3x3 random matrix:\n";
    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    PrintMatrix(Matrix1, 3, 3);

    cout << "Sum Of Matrix = " << SumOfMatrix(Matrix1, 3, 3) << endl;

    system("pause>0");
    return 0;
}
