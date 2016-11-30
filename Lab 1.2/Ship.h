#ifndef SHIP_SHIP_H
#define SHIP_SHIP_H

#include <iostream>

class Ship {
private:
    std::string Name;
    std::string Type;
    int Displacement;
public:
    Ship(const std::string &Name, const std::string &Type, int Displacement);
    Ship();

    const std::string &getName() const;
    void setName(const std::string &Name);

    const std::string &getType() const;
    void setType(const std::string &Type);

    int getDisplacement() const;
    void setDisplacement(int Displacement);

    friend std::ostream &operator<<(std::ostream &os, const Ship &ship);

    virtual ~Ship();
};


#endif //SHIP_SHIP_H
