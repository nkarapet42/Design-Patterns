#include "IMageCreator.hpp"
#include "FireMage.hpp"
#include "IceMage.hpp"
#include <iostream>

void createAndDescribeCast(const IMageCreator& mage) {
    auto cast = mage.createCast();
    std::cout << "Spell: " << cast->getType() << std::endl;
}

int main() {
    FireMage    fireMage;
    IceMage     iceMage;


    createAndDescribeCast(fireMage);
    createAndDescribeCast(iceMage);

    return 0;
}