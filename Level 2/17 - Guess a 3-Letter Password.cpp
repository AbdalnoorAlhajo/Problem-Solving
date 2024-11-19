// #17 - Guess a 3-Letter Password.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string ReadPassword()
{
    string password;
    cout << "Enter 3-Letter password(password should be capital), please: ";
    cin >> password;

    return password;
}

bool CheckWordFrom_AAA_To_ZZZ_Pattern(string password)
{
    int trial = 0;
    string word = "";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word = "";
                word = word + char(i) ;
                word = word + char(j);
                word = word + char(k);
                trial++;
                cout << "Trail [ " << trial << " ] " << word << endl;

                if (password == word)
                {
                    cout << "\n Password = " << password << "\n";
                    cout << "\n Found after " << trial << " trail(s)\n";
                    return true;
                }
                
            }
        }
    }
}

int main()
{
    cout << CheckWordFrom_AAA_To_ZZZ_Pattern(ReadPassword()) << endl;
    return 0;
}
