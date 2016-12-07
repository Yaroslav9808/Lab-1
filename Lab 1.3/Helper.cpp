#include <cmath>
#include "CEquation.h"
#include "Helper.h"

double Equation (CEquation &equation) {
    return  sqrt(10.0*(pow(sqrt(equation.x),1.0/3.0)+pow(equation.x,equation.y+2.0)))*(pow(asin(equation.z),2)-fabs(equation.x-equation.y));
    }
