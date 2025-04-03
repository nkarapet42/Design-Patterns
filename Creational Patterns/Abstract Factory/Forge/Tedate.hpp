#ifndef TEDATE_HPP
# define TEDATE_HPP

#include <string>
#include "IShield.hpp"

class Tedate : public IShield {
public:
    std::string getType() const override;
};

#endif