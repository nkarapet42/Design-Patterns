#include "TV.hpp"

TV::TV() : volume(10) {}

void TV::turnOn() {
    std::cout << "TV is ON\n";
}

void TV::turnOff() {
    std::cout << "TV is OFF\n";
}

void TV::setVolume(int vol) {
    volume = vol;
}

int TV::getVolume() const {
    return volume;
}