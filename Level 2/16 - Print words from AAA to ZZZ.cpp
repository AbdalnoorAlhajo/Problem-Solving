// #16 - Print words from AAA to ZZZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void PrintAllWordsFrom_AAA_To_ZZZ_Pattern()
{
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                cout<<char(i)<< char(j) << char(k) << "\n";
            }
        }
    }
}

int main()
{
    PrintAllWordsFrom_AAA_To_ZZZ_Pattern();
    return 0;
}
