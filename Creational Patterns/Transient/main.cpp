#include "TransientHouseBuilder.hpp"

int main() {
    TransientHouseBuilder builder;

    House* house1 = builder.buildHouse("Brick");
    House* house2 = builder.buildHouse("Wood");

    house1->display();
    house2->display();

    std::cout << "Different instances: " << (house1 != house2 ? "Yes" : "No") << std::endl;

    delete house1;
    delete house2;

    return 0;
}
