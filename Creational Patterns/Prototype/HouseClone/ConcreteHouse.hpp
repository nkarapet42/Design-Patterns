#ifndef CONCRETE_HOUSE_HPP
# define CONCRETE_HOUSE_HPP

#include "IHouse.hpp"

class ConcreteHouse : public IHouse {
private:
    int floors;
    bool hasGarage;

public:
    ConcreteHouse(int floors, bool hasGarage);

    IHouse* clone() const override;

    void display() const override;
};

#endif
