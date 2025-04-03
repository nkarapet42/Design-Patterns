#ifndef BLACKSMITH_HPP
# define BLACKSMITH_HPP

#include "ISwordBuilder.hpp"

class BlackSmith {
public:
    Sword* construct(ISwordBuilder& builder);
};

#endif
