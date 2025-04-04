#ifndef REMOTE_CONTROL_HPP
# define REMOTE_CONTROL_HPP

#include "IDevice.hpp"

class RemoteControl {
protected:
    IDevice* device;
public:
    RemoteControl(IDevice* dev);
    virtual void togglePower();
    virtual void volumeUp();
    virtual void volumeDown();

    virtual ~RemoteControl();
};

#endif
