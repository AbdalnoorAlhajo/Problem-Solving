// #19 - Circle Diameter
//

#include <iostream>
#include <math.h>
using namespace std;

float ReadDiameter()
{
    float D;
    cout << "Enter Circle Diameter D: ";
    cin >> D;

    return D;
}

float CalculateCircleAreaByDiameter(float D)
{
    const float PI = 3.1415926535897932384626433;

    return(PI * pow(D, 2)) / 4;
}

void PrintResults(float Area)
{
    cout << "\n Circle Area By Diameter = " << Area << endl;
}

int main()
{
    PrintResults(CalculateCircleAreaByDiameter(ReadDiameter()));

    return 0;
}
