#include "Director.hpp"

House* Director::construct(IHouseBuilder& builder) {
    builder.buildMaterial();
    builder.buildFloors();
    builder.buildSwimmingPool();
    builder.buildGarage();
    return builder.getResult();
}