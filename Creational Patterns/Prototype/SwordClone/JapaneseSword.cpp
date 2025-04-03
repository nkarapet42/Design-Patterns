#include "JapaneseSword.hpp"

JapaneseSword::JapaneseSword(const std::string& material) : material(material) {}

ISword* JapaneseSword::clone() const {
    return new JapaneseSword(*this);
}

void JapaneseSword::display() const {
    std::cout << "Japanese Sword made of " << material << std::endl;
}