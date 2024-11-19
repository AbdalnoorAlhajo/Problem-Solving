// #4 - Has Driever licence
//

#include <iostream>
using namespace std;

struct stInfo {
    int age;
    bool HasDriverLicence;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "How old are you: ";
    cin >> Info.age;

    cout << "Do you have a driver lecence(1 for yes/ 0 for no):  ";
    cin >> Info.HasDriverLicence;

    return Info;
}

bool IsAccepted(stInfo Info) {
    return (Info.age > 21 && Info.HasDriverLicence);
};

void PrintInfo(stInfo Info) {
    if (IsAccepted(Info)) 
    {
        cout << "\n Accepted  \n" << endl;
    }
    else
    {
        cout << "\n Rejected   \n" << endl;
    }
}

int main()
{
    PrintInfo(ReadInfo());


    return 0;
}
