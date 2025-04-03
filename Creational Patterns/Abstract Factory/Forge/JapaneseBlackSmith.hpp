#ifndef JAPANESEBLACKSMITH_HPP
# define JAPANESEBLACKSMITH_HPP

#include <memory>
#include "IBlackSmith.hpp"

class JapaneseBlacksmith : public IBlacksmith {
public:
    std::unique_ptr<ISword> createSword() const override;
    std::unique_ptr<IShield> createShield() const override;
    std::unique_ptr<IArmor> createArmor() const override;
};

#endif