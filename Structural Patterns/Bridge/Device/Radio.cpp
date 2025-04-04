#include "Radio.hpp"

Radio::Radio() : volume(5) {}

void Radio::turnOn() {
    std::cout << "Radio is ON\n";
}

void Radio::turnOff() {
    std::cout << "Radio is OFF\n";
}

void Radio::setVolume(int vol) {
    volume = vol;
}

int Radio::getVolume() const {
    return volume;
}