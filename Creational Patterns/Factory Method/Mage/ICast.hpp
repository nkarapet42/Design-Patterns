#ifndef ICAST_HPP
# define ICAST_HPP

#include <string>

class ICast {
public:
    virtual ~ICast() {}
    virtual std::string getType() const = 0;
};
#endif