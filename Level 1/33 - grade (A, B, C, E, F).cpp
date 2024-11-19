// # 33 - grade ( A, B, C, E, F ).
//

#include <iostream>
using namespace std;

int ReadNumberBetween(int From, int To)
{
    int grade;

    do {
        cout << "Please Enter a grade between 0 to 100: ";
        cin >> grade;
    } while (From > grade || To < grade);

    return grade;
}

char GetGradeChar(int number)
{
    if (number >= 90)
        return 'A';
    else if (number >= 80)
        return 'B';
    else if (number >= 70)
        return 'C';
    else if (number >= 60)
        return 'D';
    else if (number >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    cout << "Grade Letter = " << GetGradeChar(ReadNumberBetween(0, 100)) << endl;

    return 0;
}
