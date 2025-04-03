#ifndef ICast_HPP
# define ICast_HPP

#include <string>

class ICast {
public:
    virtual ~ICast() {}
    virtual std::string getType() const = 0;
};
#endif