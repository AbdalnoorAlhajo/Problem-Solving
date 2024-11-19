// #01 - Write a program to fill 3X3 matrix with random numbers
//

#include <iostream>
#include <iomanip> // this library stored the std::setw

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void Fill3X3ArrayWithRandomNumbers(int Matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            Matrix[i][j] = RandomNumber(1,150);
    }
}

void Print3X3Array(int Matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<setw(5) << Matrix[i][j];
        }
        cout << "\n";
    }
    
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[3][3];

    Fill3X3ArrayWithRandomNumbers(arr);
    Print3X3Array(arr);

    return 0;
}

