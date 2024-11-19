// #29 - Coun small and upper letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string ReadString() {
    string S1;
    cout << "Please Enter a String?\n";
    getline(cin, S1);
    return S1;
}

void CountLetters(string S1, short& SmallL, short& UpperL)
{
    for (int i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i]))
        {
            UpperL++;
        }
        else if (islower(S1[i]))
        {
            SmallL++;
        }
    }
}

int main() {
    string S1 = ReadString();
    short SmallL = 0, UpperL = 0;

    CountLetters(S1,SmallL,UpperL);
    
    cout << "\nString Length: " << S1.length();
    cout << "\nUpper Letter count: " << UpperL;
    cout << "\nSmall Letter count: " << SmallL;

    system("pause>0");
}
