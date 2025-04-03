#include "JapaneseBlackSmith.hpp"
#include "Katana.hpp"
#include "Tedate.hpp"
#include "Gusoku.hpp"

std::unique_ptr<ISword> JapaneseBlacksmith::createSword() const {
    return std::make_unique<Katana>();
}

std::unique_ptr<IShield> JapaneseBlacksmith::createShield() const {
    return std::make_unique<Tedate>();
}

std::unique_ptr<IArmor> JapaneseBlacksmith::createArmor() const {
    return std::make_unique<Gusoku>();
}