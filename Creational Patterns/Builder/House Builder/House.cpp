#include "House.hpp"

House::House(const std::string& material, int floors,
                bool hasSwimmingPool, bool hasGarage)
        : material(material), floors(floors),
            hasSwimmingPool(hasSwimmingPool), hasGarage(hasGarage) {}

void House::display() {
    std::cout << "House with " << floors
            << " floors, built from " << material
            << ", swimming pool: " << (hasSwimmingPool ? "Yes" : "No")
            << ", garage: " << (hasGarage ? "Yes" : "No") << std::endl;
}