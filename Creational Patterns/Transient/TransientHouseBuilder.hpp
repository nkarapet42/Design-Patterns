#ifndef TRANSIENT_HOUSE_BUILDER_HPP
# define TRANSIENT_HOUSE_BUILDER_HPP

#include "House.hpp"

class TransientHouseBuilder {
public:
    House* buildHouse(const std::string& material);
};

#endif
