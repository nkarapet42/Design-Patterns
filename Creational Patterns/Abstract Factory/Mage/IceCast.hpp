#ifndef ICECAST_HPP
# define ICECAST_HPP

#include <string>
#include "ICast.hpp"

class IceCast : public ICast {
public:
    std::string getType() const override;
};

#endif