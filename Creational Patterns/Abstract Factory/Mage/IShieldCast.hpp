#ifndef ISHIELDCAST_HPP
# define ISHIELDCAST_HPP

#include <string>

class IShieldCast {
public:
    virtual ~IShieldCast() {}
    virtual std::string getType() const = 0;
};

#endif