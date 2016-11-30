#include <cmath>
#include "Polygon.h"


int Polygon::getA() const {
    return a;
}

void Polygon::setA(int a) {
    Polygon::a = a;
}

int Polygon::getN() const {
    return n;
}

void Polygon::setN(int n) {
    Polygon::n = n;
}

double Polygon::getR() const {
    return R;
}

void Polygon::calculateRadius() {
    R = 0.5 * a / sin(M_PI / n);
}

Polygon::Polygon(int a, int n) : a(a), n(n) {}

Polygon::Polygon() {}

std::ostream &operator<<(std::ostream &os, const Polygon &polygon) {
    os << "a: " << polygon.a << " n: " << polygon.n << " R: " << polygon.R;
    return os;
}
