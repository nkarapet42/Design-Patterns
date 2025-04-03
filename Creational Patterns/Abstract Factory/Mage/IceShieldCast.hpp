#ifndef ICESHIELDCAST_HPP
# define ICESHIELDCAST_HPP

#include <string>
#include "IShieldCast.hpp"

class IceShieldCast : public IShieldCast {
public:
    std::string getType() const override;
};

#endif