#include <iostream>
#include "TV.hpp"
#include "Radio.hpp"
#include "AdvancedRemote.hpp"

// -------------------------------------- ENGLISH --------------------------------------
// Bridge is a structural pattern that decouples an abstraction from its implementation,
// allowing both to vary independently.
//
// In this example:
// - IDevice is the implementation interface (TV, Radio implement it)
// - RemoteControl is the abstraction, AdvancedRemote extends it
// - The remote can work with any device due to the bridge between abstraction and implementation

// -------------------------------------- РУССКИЙ --------------------------------------
// Мост — это структурный паттерн, который отделяет абстракцию от её реализации,
// позволяя изменять их независимо друг от друга.
//
// В этом примере:
// - IDevice — интерфейс реализации (TV, Radio реализуют его)
// - RemoteControl — абстракция, а AdvancedRemote её расширяет
// - Пульт может работать с любым устройством благодаря мосту между абстракцией и реализацией

int main() {
    TV tv;
    AdvancedRemote remote(&tv);

    remote.togglePower();
    std::cout << "Volume: " << tv.getVolume() << std::endl;
    remote.volumeUp();
    std::cout << "Volume after up: " << tv.getVolume() << std::endl;
    remote.mute();
    std::cout << "Volume after mute: " << tv.getVolume() << std::endl;

    return 0;
}
