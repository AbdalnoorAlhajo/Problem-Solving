// #23 - Circle area around described around an Arbitary triangle

#include <iostream>
#include <math.h>
using namespace std;

void ReadCircleData(float& A, float& B, float& C)
{
    cout << "Enter  A: ";
    cin >> A;

    cout << "Enter  B: ";
    cin >> B;

    cout << "Enter  C: ";
    cin >> C;
}

float CircleAreaAroundArbitaryTriangle(float a, float b, float c)
{
    const float PI = 3.1415926535897932384626433;
    float p, Area , R;

    p = (a + b + c) / 2;
    R = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    Area = PI * pow(R, 2);

    return Area;
}

void PrintResults(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    float A, B, C;
    ReadCircleData(A, B, C);
    PrintResults(CircleAreaAroundArbitaryTriangle(A, B, C));

    return 0;
}
