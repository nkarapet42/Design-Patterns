#include "IBlackSmith.hpp"
#include "NorwegianBlackSmith.hpp"
#include "JapaneseBlackSmith.hpp"
#include <iostream>

void createAndDescribeSword(const IBlacksmith& blacksmith) {
    auto sword = blacksmith.createSword();
    std::cout << "Created: " << sword->getType() << std::endl;
}

int main() {
    NorwegianBlacksmith norwegianBlacksmith;
    JapaneseBlacksmith japaneseBlacksmith;

    createAndDescribeSword(norwegianBlacksmith);
    createAndDescribeSword(japaneseBlacksmith);

    return 0;
}