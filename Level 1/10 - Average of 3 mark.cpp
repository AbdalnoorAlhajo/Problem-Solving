// #10 - Average of 3 mark.
//

#include <iostream>
using namespace std;

void ReadNumbers(int& mark1, int& mark2, int& mark3)
{
    cout << "Enter first mark: ";
    cin >> mark1;

    cout << "Enter second mark: ";
    cin >> mark2;

    cout << "Enter third mark: ";
    cin >> mark3;
}

int SumOf3marks(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

float CalculateAverage(int mark1, int mark2, int mark3)
{
    return (float)SumOf3marks(mark1 , mark2 , mark3) / 3;
}

void PrintNumbers(float Average)
{
    cout << "Average = " << Average << endl;
}

int main()
{
    int mark1, mark2, mark3;

    ReadNumbers(mark1, mark2, mark3);
    PrintNumbers(CalculateAverage(mark1, mark2, mark3));


    return 0;
}

