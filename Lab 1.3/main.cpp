#include <iostream>
#include <cmath>
#include "CEquation.h"
#include "Helper.h"

using namespace std;

int main()
{
    CEquation *equation = new CEquation (16.55*pow(10,-3),-2.75,0.15);

    cout << Equation (*equation) << endl;
    return 0;
}
