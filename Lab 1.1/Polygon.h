#ifndef POLYGON_POLYGON_H
#define POLYGON_POLYGON_H

#include <ostream>

class Polygon {
private:
    int a; // Сторона
    int n; // Количество сторон
    double R; // Радиус

public:
    Polygon();
    Polygon(int a, int n);

    int getA() const;
    void setA(int a);

    int getN() const;
    void setN(int n);

    double getR() const;

    void calculateRadius();

    friend std::ostream &operator<<(std::ostream &os, const Polygon &polygon);
};


#endif //POLYGON_POLYGON_H
