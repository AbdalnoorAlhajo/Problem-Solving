// #1 - Number To Text.

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber()
{
    int number;

    do
    {
        cout << "please, enter a positive number: ";
        cin >> number;
    } while (number < 0);

    return number;
}

string NumberToText(int Number)
{
    if (Number == 0)
    {
        return "";
    }

    else if (Number >= 1 && Number <= 19)
    {
        string arr [] = { "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
            "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
            "Sixteen", "Seventeen", "Eighteen", "Nineteen" };

        return arr[Number - 1];
    }

    else if (Number >= 20 && Number <= 99)
    {
        string arr[] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty"
                        , "Seventy", "Eighty", "Ninety" };
    
        return arr[(Number / 10) - 2] + " " + NumberToText(Number % 10);
    }   

    else if (Number >= 100 && Number <= 999)
    {
        return NumberToText(Number / 100) + " hundred " + NumberToText(Number % 100);
    }

    else if (Number >= 1000 && Number <= 999999)
    {
        return NumberToText(Number / 1000) + " thousand " + NumberToText(Number % 1000);
    }

    else if (Number >= 1000000 && Number <= 999999999)
    {
        return NumberToText(Number/ 1000000) + " million " + NumberToText(Number % 1000000);
    }
                                            
    else
    {
        return NumberToText(Number / 1000000000) + " billion  " + NumberToText(Number % 1000000000);
    }

}


int main()
{
    cout << NumberToText(ReadPositiveNumber());
    system("pause>0");

    return 0;
}
