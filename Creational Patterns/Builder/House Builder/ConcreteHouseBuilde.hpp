#ifndef CONCRETEHOUSEBUILDER_HPP
# define CONCRETEHOUSEBUILDER_HPP

#include "IHouseBuilder.hpp"

class ConcreteHouseBuilder : public IHouseBuilder {
private:
    House* house;

public:
    ConcreteHouseBuilder();

    void buildMaterial() override;

    void buildFloors() override;

    void buildSwimmingPool() override;

    void buildGarage() override;

    House* getResult() override;
};

#endif
