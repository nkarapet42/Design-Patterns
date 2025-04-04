#ifndef AMERICANSOCKET_HPP
# define AMERICANSOCKET_HPP

#include "IAmericanSocket.hpp"

class AmericanSocket : public IAmericanSocket {
public:
    std::string plugIn() const override;
};

#endif
