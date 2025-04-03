#include "JapaneseBlackSmith.hpp"
#include "Katana.hpp"

std::unique_ptr<ISword> JapaneseBlacksmith::createSword() const {
    return std::make_unique<Katana>();
}