#ifndef IBLACKSMITH_HPP
# define IBLACKSMITH_HPP

#include "ISword.hpp"
#include "IShield.hpp"
#include "IArmor.hpp"
#include <memory>

class IBlacksmith {
public:
    virtual ~IBlacksmith() {}
    virtual std::unique_ptr<ISword> createSword() const = 0;
    virtual std::unique_ptr<IShield> createShield() const = 0;
    virtual std::unique_ptr<IArmor> createArmor() const = 0;
};

#endif