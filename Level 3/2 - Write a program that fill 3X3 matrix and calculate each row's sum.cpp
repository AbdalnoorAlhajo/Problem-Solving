// #2. - Write a program that fill 3X3 matrix and calculate each row's sum
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

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

int RowSum(int arr[3][3], short RowNumber, short cols)
{
    int Sum = 0;

    for (short i = 0; i < cols; i++)
        Sum += arr[RowNumber][i];

    return Sum;
}

void PrintEachRowSum(int arr[3][3], short rows, short cols) {
    cout << "\nThe the following are the sum of each row in the matrix:\n";

    for (short i = 0; i < rows; i++)
    {
        cout << "Row " << i + 1 << " = " << RowSum(arr, i, cols) << endl;
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
    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n The following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    PrintEachRowSum(arr, 3, 3);

    return 0;
}
