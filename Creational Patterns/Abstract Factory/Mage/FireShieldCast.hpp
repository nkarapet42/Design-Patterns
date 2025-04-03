#ifndef FIRESHIELDCAST_HPP
# define FIRESHIELDCAST_HPP

#include <string>
#include "IShieldCast.hpp"

class FireShieldCast : public IShieldCast {
public:
    std::string getType() const override;
};

#endif