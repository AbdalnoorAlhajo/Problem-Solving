// #6 - Print Full Name.
//

#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "What is your name?\n";
    cin >> Info.FirstName;

    cout << "What is your surname?\n";
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info)
{
    string FullName = "";
    FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}

void PrintFullName(string Fullname)
{
    cout << "Name: " << Fullname << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo()));

    return 0;
}
