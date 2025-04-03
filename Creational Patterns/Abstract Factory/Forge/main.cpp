#include "IBlackSmith.hpp"
#include "NorwegianBlackSmith.hpp"
#include "JapaneseBlackSmith.hpp"
#include <iostream>

void createAndDescribeSword(const IBlacksmith& blacksmith) {
    auto sword = blacksmith.createSword();
    auto shield = blacksmith.createShield();
    auto armor = blacksmith.createArmor();
    std::cout << "Created: [Sword] " << sword->getType() << "; [Shield] "<< shield->getType() << "; [Armor] " << armor->getType() <<std::endl;
}

int main() {
    NorwegianBlacksmith norwegianBlacksmith;
    JapaneseBlacksmith japaneseBlacksmith;

    createAndDescribeSword(norwegianBlacksmith);
    createAndDescribeSword(japaneseBlacksmith);

    return 0;
}