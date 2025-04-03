#include "NorwegianSword.hpp"

NorwegianSword::NorwegianSword(const std::string& material) : material(material) {}

ISword* NorwegianSword::clone() const {
    return new NorwegianSword(*this);
}

void NorwegianSword::display() const {
    std::cout << "Norwegian Sword made of " << material << std::endl;
}