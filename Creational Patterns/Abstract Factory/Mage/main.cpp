#include "IMageCreator.hpp"
#include "FireMage.hpp"
#include "IceMage.hpp"
#include <iostream>

void createAndDescribeCast(const IMageCreator& mage) {
    auto cast = mage.createCast();
    auto shield = mage.createShieldCast();
    auto zone = mage.createZoneCast();
    std::cout << '\n';
    std::cout << "Spell: [Attack]" << cast->getType() << std::endl;
    std::cout << "Spell: [Defence]" << shield->getType() << std::endl;
    std::cout << "Spell: [Zone]" << zone->getType() << std::endl;
    std::cout << '\n';
}

int main() {
    FireMage    fireMage;
    IceMage     iceMage;

    createAndDescribeCast(fireMage);
    createAndDescribeCast(iceMage);

    return 0;
}