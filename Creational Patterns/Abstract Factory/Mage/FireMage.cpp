#include "FireMage.hpp"
#include "FireCast.hpp"
#include "FireShieldCast.hpp"
#include "FireZoneCast.hpp"

std::unique_ptr<ICast> FireMage::createCast() const {
    return std::make_unique<FireCast>();
}

std::unique_ptr<IShieldCast> FireMage::createShieldCast() const {
    return std::make_unique<FireShieldCast>();
}

std::unique_ptr<IZoneCast> FireMage::createZoneCast() const {
    return std::make_unique<FireZoneCast>();
}