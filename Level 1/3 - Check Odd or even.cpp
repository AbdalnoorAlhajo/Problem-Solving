// #3 - Check Odd or even.
//

#include <iostream>
using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;

    return number;
}

enNumberType CheckNumberType(int number) {
    if (number % 2 == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;

}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "\n  Number is even  \n";
    else 
        cout << "\n  Number is odd  \n";
}

int main()
{

    PrintNumberType(CheckNumberType(ReadNumber()));

    return 0;
}
