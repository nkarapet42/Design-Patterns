#ifndef SCOPED_BLACKSMITH_HPP
# define SCOPED_BLACKSMITH_HPP

#include "Sword.hpp"

class ScopedBlackSmith {
private:
    Sword* sword;

public:
    ScopedBlackSmith();
    ~ScopedBlackSmith();

    Sword* forgeSword(const std::string& type);
};

#endif
