// #1- Print Multiplication Table.cpp
//

#include <iostream>
using namespace std;

void PrintTableHeader()
{
    cout << "\n\n\t\t\tMultiplication Table from 1 to 10\t\t\t\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n__________________________________________________________________________________\n";

}

string ColumSperator(int i) 
{
    if (i < 10)
        return "    | ";
    else
        return "   | ";
}

void PrintMultiplicationTable()
{
    PrintTableHeader();

    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << ColumSperator(i);
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main()
{
    PrintMultiplicationTable();


    return 0;
}

