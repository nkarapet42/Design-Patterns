#ifndef FIRECAST_HPP
# define FIRECAST_HPP

#include <string>
#include "ICast.hpp"

class FireCast : public ICast {
public:
    std::string getType() const override;
};

#endif