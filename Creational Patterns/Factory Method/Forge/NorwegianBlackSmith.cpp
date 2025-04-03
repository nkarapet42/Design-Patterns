#include "NorwegianBlackSmith.hpp"
#include "VikingSword.hpp"

std::unique_ptr<ISword> NorwegianBlacksmith::createSword() const {
    return std::make_unique<VikingSword>();
}