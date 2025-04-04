#include "ScopedBlackSmith.hpp"

ScopedBlackSmith::ScopedBlackSmith() : sword(nullptr) {}

ScopedBlackSmith::~ScopedBlackSmith() {
    delete sword;
}

Sword* ScopedBlackSmith::forgeSword(const std::string& type) {
    if (!sword) {
        sword = new Sword(type);
    }
    return sword;
}