#ifndef TV_HPP
#define TV_HPP

#include <iostream>
#include "IDevice.hpp"

class TV : public IDevice {
private:
    int volume;
public:
    TV();

    void turnOn() override;

    void turnOff() override;

    void setVolume(int vol) override;

    int getVolume() const override;
};

#endif
