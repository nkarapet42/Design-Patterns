#include "IceMage.hpp"
#include "IceCast.hpp"

std::unique_ptr<ICast> IceMage::createCast() const {
    return std::make_unique<IceCast>();
}