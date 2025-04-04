#ifndef IAMERICANSOCKET_HPP
# define IAMERICANSOCKET_HPP

#include <string>

class IAmericanSocket {
public:
    virtual std::string plugIn() const = 0;
    virtual ~IAmericanSocket() {}
};

#endif
