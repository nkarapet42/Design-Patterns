#ifndef RADIO_HPP
#define RADIO_HPP

#include <iostream>
#include "IDevice.hpp"

class Radio : public IDevice {
private:
    int volume;
public:
    Radio();

    void turnOn() override;
    
    void turnOff() override;
    
    void setVolume(int vol) override;

    int getVolume() const override;
};

#endif
