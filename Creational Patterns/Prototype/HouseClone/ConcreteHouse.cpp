#include "ConcreteHouse.hpp"


ConcreteHouse::ConcreteHouse(int floors, bool hasGarage) : floors(floors), hasGarage(hasGarage) {}

IHouse* ConcreteHouse::clone() const {
    return new ConcreteHouse(*this);
}

void ConcreteHouse::display() const {
    std::cout << "Concrete House with " << floors << " floors, garage: " << (hasGarage ? "Yes" : "No") << std::endl;
}