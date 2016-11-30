#include "Equation.h"
#include <iostream>

int main() {

    Equation a;
    a.setX(16.55 * pow(10,-3));
    a.setY(-2.75);
    a.setZ(0.15);
    a.solve();
    std::cout << "W = " << a.getW() << std::endl;

    informationAlerts(a);

    return 0;
}
