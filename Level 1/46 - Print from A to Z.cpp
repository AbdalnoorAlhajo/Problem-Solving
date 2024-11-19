// #46 - Print from A to Z.
//

#include <iostream>
using namespace std;

void PrintFromAToZ() 
{
    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
}

int main()
{
    PrintFromAToZ();

    return 0;
}

