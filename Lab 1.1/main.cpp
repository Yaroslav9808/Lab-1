#include <iostream>
#include "Polygon.h"

int main() {
    Polygon a;
    a.setA(6);
    a.setN(7);
    a.calculateRadius();

    std::cout << a;
    return 0;
}