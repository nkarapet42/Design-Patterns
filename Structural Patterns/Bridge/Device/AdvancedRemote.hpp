#ifndef ADVANCED_REMOTE_HPP
# define ADVANCED_REMOTE_HPP

#include "RemoteControl.hpp"

class AdvancedRemote : public RemoteControl {
public:
    AdvancedRemote(IDevice* dev);

    void mute();
};

#endif
