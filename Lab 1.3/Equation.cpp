#include "Equation.h"
#include <iostream>
#include <cmath>
Equation::Equation(){

}

Equation::Equation(double x, double y, double z) :
            X(x), Y(y), Z(z) {

}

void Equation::solve() {
    double x = X;
    double y = Y;
    double z = Z;

    W = sqrt(10(pow(sqrt(x),1/3)+pow(x,y+2)))(pow(asin(z),2)-fabs(x-y));

}

void Equation::setData(double x, double y, double z) {
    X = x;
    Y = y;
    Z = z;
}

void Equation::setX(double X) {
    Equation::X = X;
}

double Equation::getX() const {
    return X;
}


void Equation::setY(double Y) {
    Equation::Y = Y;
}

double Equation::getY() const {
    return Y;
}

void Equation::setZ(double Z) {
    Equation::Z = Z;
}

double Equation::getZ() const {
    return Z;
}

double Equation::getW() const {
    return W;
}

void informationAlerts(Equation val) {
    std::cout << val << std::endl;
}

std::ostream&  operator<<(std::ostream& out, const Equation& obj) {
    std::cout << "X=\t" << obj.getX() << "\nY =\t" << obj.getY() << "\nZ =\t" << obj.getZ() << "\nW =\t" << obj.getW() << std::endl;
    return out;
}
