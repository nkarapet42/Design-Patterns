#ifndef IHOUSEBUILDER_HPP
# define IHOUSEBUILDER_HPP

#include "House.hpp"

class IHouseBuilder {
public:
    virtual ~IHouseBuilder() = default;
    virtual void buildMaterial() = 0;
    virtual void buildFloors() = 0;
    virtual void buildSwimmingPool() = 0;
    virtual void buildGarage() = 0;
    virtual House* getResult() = 0;
};

#endif
