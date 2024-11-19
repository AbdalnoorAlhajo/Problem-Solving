// #36 - Simple Calculator.cpp
//

#include <iostream>
using namespace std;

enum enOperatonType {add = '+', subtract = '-', multiplay = '*', divide = '/' };

enOperatonType ReadOpType ()
{
    char OpType ;
    
    cout << "Enter operation type( +, -, *, / ): ";
    cin >> OpType;

    return (enOperatonType)OpType;

}

int ReadNumber(string message)
{
    int number;

    cout << message << endl;
    cin >> number;

    return number;
}

int Calculator(int number, int number2, enOperatonType op)
{
    switch (op)
    {
    case enOperatonType::add:
        return number + number2;
        break;
    case enOperatonType::subtract:
        return number - number2;
        break;
    case enOperatonType::multiplay:
        return number * number2;
        break;
    case enOperatonType::divide:
        return number / number2;
        break;
    }
}


int main()
{
    int number1 = ReadNumber("Enter first number: ");
    int number2 = ReadNumber("Enter second number: ");
    cout << "Result = " << Calculator(number1, number1, ReadOpType()) << endl;

    return 0;
}

