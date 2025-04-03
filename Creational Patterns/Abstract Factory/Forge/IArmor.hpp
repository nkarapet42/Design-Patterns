#ifndef IARMOR_HPP
# define IARMOR_HPP

#include <string>

class IArmor {
public:
    virtual ~IArmor() {}
    virtual std::string getType() const = 0;
};

#endif