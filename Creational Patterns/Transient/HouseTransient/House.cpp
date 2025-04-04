#include "House.hpp"


House::House(const std::string& material) : material(material) {}

void House::display() const {
    std::cout << "Built a house with " << material << " walls." << std::endl;
}