#include "ConcreteHouse.hpp"
#include "WoodenHouse.hpp"

int main() {
    ConcreteHouse originalConcreteHouse(2, true);
    WoodenHouse originalWoodenHouse(1, true);

    IHouse* clonedConcreteHouse = originalConcreteHouse.clone();
    IHouse* clonedWoodenHouse = originalWoodenHouse.clone();

    clonedConcreteHouse->display();
    clonedWoodenHouse->display();

    delete clonedConcreteHouse;
    delete clonedWoodenHouse;

    return 0;
}
