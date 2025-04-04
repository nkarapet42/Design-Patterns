#include "Sword.hpp"


Sword::Sword(const std::string& type) : type(type) {}

void Sword::display() const {
    std::cout << "Forged a " << type << " sword." << std::endl;
}