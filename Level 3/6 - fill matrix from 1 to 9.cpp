// #06 - fill matrix from 1 to 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void FillMatrixWithOrderedNumbers(int arr[3][3], short rows, short cols) {
    short num = 0;
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            num++;
            arr[i][j] = num;
        }
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
    FillMatrixWithOrderedNumbers(arr, 3, 3);

    cout << "\n The following is a 3x3 matrix:\n";
    PrintMatrix(arr, 3, 3);

    system("pause>0");
    return 0;
}
