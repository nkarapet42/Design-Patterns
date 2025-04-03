#ifndef HAUBERK_HPP
# define HAUBERK_HPP

#include <string>
#include "IArmor.hpp"

class Hauberk : public IArmor {
public:
    std::string getType() const override;
};

#endif