#include <iostream>
#include "Ship.h"

int main() {
    Ship ship("Name", "Displacement", 45);

    std::cout << ship << std::endl;

    Ship *ship1;
    ship1 = new Ship;
    ship1->setName("Name1");
    ship1->setDisplacement(124);
    ship1->setType("Displacement1");

    std::cout << *ship1 << std::endl;

    return 0;
}