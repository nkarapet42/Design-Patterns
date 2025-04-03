#include <iostream>
#include "ConcreteHouseBuilde.hpp"
#include "Director.hpp"

int main() {
    ConcreteHouseBuilder    builder;
    Director                director;

    House* house = director.construct(builder);
    
    house->display();

    delete house;
}
