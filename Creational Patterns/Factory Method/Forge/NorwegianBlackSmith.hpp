#ifndef NORWEGIANBLACKSMITH_HPP
# define NORWEGIANBLACKSMITH_HPP

#include <memory>
#include "ISword.hpp"
#include "IBlackSmith.hpp"

class NorwegianBlacksmith : public IBlacksmith {
public:
    std::unique_ptr<ISword> createSword() const override;
};

#endif