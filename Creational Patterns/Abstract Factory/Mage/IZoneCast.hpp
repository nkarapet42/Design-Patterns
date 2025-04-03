#ifndef IZONECAST_HPP
# define IZONECAST_HPP

#include <string>

class IZoneCast {
public:
    virtual ~IZoneCast() {}
    virtual std::string getType() const = 0;
};

#endif