// #32 - Power Of M.
//

#include <iostream>
using namespace std;

int ReadNumber()
{  
    int number;
    
    cout << "Enter a number, please :";
    cin >> number;

    return number;
}

int ReadPower()
{
    int Power;

    cout << "Enter a Power, please :";
    cin >> Power;

    return Power;
}

int PowerOfM(int number, int M)
{
    int Sum = 1;

    for (int i = 0; i < M; i++)
    {
        Sum = Sum * number;
    }

    return Sum;
}

int main()
{
    cout << "\n Result = " << PowerOfM(ReadNumber(), ReadPower()) << endl;

    return 0;
}

