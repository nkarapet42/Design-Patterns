#include "TransientHouseBuilder.hpp"

House* TransientHouseBuilder::buildHouse(const std::string& material) {
    return new House(material);
}