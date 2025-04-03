#ifndef JAPANESEBLACKSMITH_HPP
# define JAPANESEBLACKSMITH_HPP

#include <memory>
#include "ISword.hpp"
#include "IBlackSmith.hpp"

class JapaneseBlacksmith : public IBlacksmith {
public:
    std::unique_ptr<ISword> createSword() const override;
};

#endif