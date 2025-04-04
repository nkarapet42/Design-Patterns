#include "AdvancedRemote.hpp"

AdvancedRemote::AdvancedRemote(IDevice* dev) : RemoteControl(dev) {}

void AdvancedRemote::mute() {
    device->setVolume(0);
}