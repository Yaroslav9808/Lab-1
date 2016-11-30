#include "Ship.h"

Ship::Ship(const std::string &Name, const std::string &Type, int Displacement) : Name(Name), Type(Type),
                                                                                 Displacement(Displacement) {}

Ship::Ship() {}

const std::string &Ship::getName() const {
    return Name;
}

void Ship::setName(const std::string &Name) {
    Ship::Name = Name;
}

const std::string &Ship::getType() const {
    return Type;
}

void Ship::setType(const std::string &Type) {
    Ship::Type = Type;
}

int Ship::getDisplacement() const {
    return Displacement;
}

void Ship::setDisplacement(int Displacement) {
    Ship::Displacement = Displacement;
}

std::ostream &operator<<(std::ostream &os, const Ship &ship) {
    os << "\nName: " << ship.Name << "\nType: " << ship.Type << "\nDisplacement: " << ship.Displacement;
    return os;
}

Ship::~Ship() {

}
