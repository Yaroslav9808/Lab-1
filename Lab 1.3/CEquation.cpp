#include <iostream>
#include <cmath>
#include "CEquation.h"

CEquation::CEquation () {
}

CEquation::CEquation (double x, double y, double z)
    :x(x), y(y), z(z) {
    }

CEquation::CEquation (CEquation &equation)
    :x(equation.x),y(equation.y),z(equation.z) {
    }
