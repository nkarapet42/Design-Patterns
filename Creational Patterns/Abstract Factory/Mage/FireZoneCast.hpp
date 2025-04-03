#ifndef FIREZONECAST_HPP
# define FIREZONECAST_HPP

#include <string>
#include "IZoneCast.hpp"

class FireZoneCast : public IZoneCast {
public:
    std::string getType() const override;
};

#endif