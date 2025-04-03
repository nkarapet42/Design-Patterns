#include "FireMage.hpp"
#include "FireCast.hpp"

std::unique_ptr<ICast> FireMage::createCast() const {
    return std::make_unique<FireCast>();
}