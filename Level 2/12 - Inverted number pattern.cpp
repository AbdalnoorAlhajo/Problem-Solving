// #12 - Inverted number pattern.
//

#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number;

    do
    {
        cout << message;
        cin >> number;

    } while (number <= 0);

    cout << "Number = " << number << endl << "\n";

    return number;
}

void PrintInvertedNumberPattern(int number)
{
    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << i;
        }
        cout << "\n";
    }
}

int main()
{
    PrintInvertedNumberPattern(ReadPositiveNumber("Enter a positvie number:"));

    return 0;
}
