#ifndef ISHIELD_HPP
# define ISHIELD_HPP

#include <string>

class IShield {
public:
    virtual ~IShield() {}
    virtual std::string getType() const = 0;
};

#endif