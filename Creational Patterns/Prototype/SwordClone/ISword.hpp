#ifndef ISWORD_HPP
# define ISWORD_HPP

#include <iostream>
#include <string>

class ISword {
public:
    virtual ~ISword() {}
    virtual ISword* clone() const = 0;
    virtual void display() const = 0;
};

#endif
