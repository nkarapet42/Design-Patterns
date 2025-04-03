#include "WoodenHouse.hpp"


WoodenHouse::WoodenHouse(int floors, bool hasFireplace) : floors(floors), hasFireplace(hasFireplace) {}

IHouse* WoodenHouse::clone() const {
    return new WoodenHouse(*this);
}

void WoodenHouse::display() const {
    std::cout << "Wooden House with " << floors << " floors, fireplace: " << (hasFireplace ? "Yes" : "No") << std::endl;
}