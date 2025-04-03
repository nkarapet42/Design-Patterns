#include "IceMage.hpp"
#include "IceCast.hpp"
#include "IceZoneCast.hpp"
#include "IceShieldCast.hpp"

std::unique_ptr<ICast> IceMage::createCast() const {
    return std::make_unique<IceCast>();
}

std::unique_ptr<IShieldCast> IceMage::createShieldCast() const {
    return std::make_unique<IceShieldCast>();
}

std::unique_ptr<IZoneCast> IceMage::createZoneCast() const {
    return std::make_unique<IceZoneCast>();
}