#include "SocketAdapter.hpp"


SocketAdapter::SocketAdapter(EuropeanPlug* p) : plug(p) {}

std::string SocketAdapter::plugIn() const {
    return plug->connect() + " [Adapter converts to 110V flat pin]";
}