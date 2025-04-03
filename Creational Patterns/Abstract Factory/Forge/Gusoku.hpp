#ifndef GUSOKU_HPP
# define GUSOKU_HPP

#include <string>
#include "IArmor.hpp"

class Gusoku : public IArmor {
public:
    std::string getType() const override;
};

#endif