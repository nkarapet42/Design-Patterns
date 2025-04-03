#ifndef ICEZONECAST_HPP
# define ICEZONECAST_HPP

#include <string>
#include "IZoneCast.hpp"

class IceZoneCast : public IZoneCast {
public:
    std::string getType() const override;
};

#endif