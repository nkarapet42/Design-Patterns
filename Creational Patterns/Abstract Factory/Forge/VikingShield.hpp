#ifndef VIKINGSHIELD_HPP
# define VIKINGSHIELD_HPP

#include <string>
#include "IShield.hpp"

class VikingShield : public IShield {
public:
    std::string getType() const override;
};

#endif