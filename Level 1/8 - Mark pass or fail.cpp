// #8 - Mark pass or fail.
//

#include <iostream>
using namespace std;

enum enPassFail {Pass = 1, Fail = 2};

int ReadMark() {
    int mark;

    cout << "Enter your grade: ";
    cin >> mark;

    return mark;
}

enPassFail CheckMark(int mark)
{
    if (mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(int mark)
{
    if (CheckMark(mark) == enPassFail::Pass)
        cout << "\n  You passed  \n";
    else 
        cout << "\n  You Failed  \n";
}

int main()
{
    PrintResults(ReadMark());

    return 0;
}
