#ifndef IBLACKSMITH_HPP
# define IBLACKSMITH_HPP

#include "ISword.hpp"
#include <memory>

class IBlacksmith {
public:
    virtual ~IBlacksmith() {}
    virtual std::unique_ptr<ISword> createSword() const = 0;
};

#endif