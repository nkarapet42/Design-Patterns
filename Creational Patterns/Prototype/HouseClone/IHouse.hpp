#ifndef IHOUSE_HPP
# define IHOUSE_HPP

#include <iostream>
#include <string>

class IHouse {
public:
    virtual ~IHouse() {}
    virtual IHouse* clone() const = 0;
    virtual void display() const = 0;
};

#endif
