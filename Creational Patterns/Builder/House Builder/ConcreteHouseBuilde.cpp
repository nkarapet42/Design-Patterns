#include "ConcreteHouseBuilde.hpp"


ConcreteHouseBuilder::ConcreteHouseBuilder() { house = new House("Concrete", 2, true, true); }

void ConcreteHouseBuilder::buildMaterial() {
    house->material = "Concrete";
}

void ConcreteHouseBuilder::buildFloors() {
    house->floors = 2;
}

void ConcreteHouseBuilder::buildSwimmingPool() {
    house->hasSwimmingPool = true;
}

void ConcreteHouseBuilder::buildGarage() {
    house->hasGarage = true;
}

House* ConcreteHouseBuilder::getResult() {
    return house;
}