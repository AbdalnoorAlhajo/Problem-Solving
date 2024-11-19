// #22 - Circle Area Inscribed in an Isosceles Triangle
//

#include <iostream>
#include <math.h>
using namespace std;

void ReadTriangleData(float& A, float& B)
{
    cout << "Enter Triangle side A: ";
    cin >> A;

    cout << "Enter Triangle side B: ";
    cin >> B;
}

float CircleAreaByIsoscelesTriangle(float A, float B)
{
    const float PI = 3.1415926535897932384626433;

    return PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
}

void PrintResults(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    float A, B;
    ReadTriangleData(A, B);
    PrintResults(CircleAreaByIsoscelesTriangle(A, B));

    return 0;
}
