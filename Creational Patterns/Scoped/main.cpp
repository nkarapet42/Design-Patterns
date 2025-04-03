#include "ScopedBlackSmith.hpp"

int main() {
    ScopedBlackSmith blacksmith;

    Sword* sword1 = blacksmith.forgeSword("Katana");
    Sword* sword2 = blacksmith.forgeSword("Katana");

    sword1->display();
    sword2->display();

    std::cout << "Same instance: " << (sword1 == sword2 ? "Yes" : "No") << std::endl;

    return 0;
}
