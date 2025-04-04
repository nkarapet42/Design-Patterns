#ifndef SOCKETADAPTER_HPP
# define SOCKETADAPTER_HPP

#include "IAmericanSocket.hpp"
#include "EuropeanPlug.hpp"

class SocketAdapter : public IAmericanSocket {
private:
    EuropeanPlug* plug;
public:
    SocketAdapter(EuropeanPlug* p);

    std::string plugIn() const override;
};

#endif
