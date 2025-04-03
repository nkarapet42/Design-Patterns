#ifndef DIRECTOR_HPP
# define DIRECTOR_HPP

#include "IHouseBuilder.hpp"

class Director {
public:
    House* construct(IHouseBuilder& builder);
};

#endif
