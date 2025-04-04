#ifndef IDEVICE_HPP
# define IDEVICE_HPP

class IDevice {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void setVolume(int volume) = 0;
    virtual int getVolume() const = 0;
    virtual ~IDevice() {}
};

#endif
