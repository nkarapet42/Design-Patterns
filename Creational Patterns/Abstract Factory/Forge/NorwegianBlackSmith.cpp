#include "NorwegianBlackSmith.hpp"
#include "VikingSword.hpp"
#include "VikingShield.hpp"
#include "Hauberk.hpp"

std::unique_ptr<ISword> NorwegianBlacksmith::createSword() const {
    return std::make_unique<VikingSword>();
}

std::unique_ptr<IShield> NorwegianBlacksmith::createShield() const {
    return std::make_unique<VikingShield>();
}

std::unique_ptr<IArmor> NorwegianBlacksmith::createArmor() const {
    return std::make_unique<Hauberk>();
}