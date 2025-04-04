#include "RemoteControl.hpp"

RemoteControl::RemoteControl(IDevice* dev) : device(dev) {}
RemoteControl::~RemoteControl() {}

void RemoteControl::togglePower() {
    static bool isOn = false;
    isOn = !isOn;
    if (isOn) device->turnOn();
    else device->turnOff();
}

void RemoteControl::volumeUp() {
    int vol = device->getVolume();
    device->setVolume(vol + 1);
}

void RemoteControl::volumeDown() {
    int vol = device->getVolume();
    device->setVolume(vol - 1);
}
