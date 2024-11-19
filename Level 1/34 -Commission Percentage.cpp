// # 34 - Commission Percentage.cpp

#include <iostream>
using namespace std;

float ReadTotalSales()
{
    float TotalSales = 0;

    cout << "Please Enter Total Sales: ";
    cin >> TotalSales;

    return TotalSales;
}

float GetComissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else
        return 0.00;
}

float CalculateTotalComission(float TotalSales)
{
    return GetComissionPercentage(TotalSales) * TotalSales;
}

int main()
{
    float TotalSales = ReadTotalSales();

    cout << "\n Comission Percentage = " << GetComissionPercentage(TotalSales) << endl;
    cout << "\n TotalComission = " << CalculateTotalComission(TotalSales) << endl;

    return 0;
}

