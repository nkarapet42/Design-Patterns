#include <iostream>
#include "Adapter.hpp"

// -------------------------------------- ENGLISH --------------------------------------
// Adapter is a structural pattern that allows objects with incompatible interfaces to work together.
// It wraps one interface (FahrenheitSensor) with another interface (CelsiusSensor) that the client expects.

// In this example:
// - The old system measures temperature in Fahrenheit.
// - The new system expects Celsius.
// - We use an Adapter to convert Fahrenheit to Celsius on-the-fly.

// -------------------------------------- РУССКИЙ --------------------------------------
// Адаптер — это структурный паттерн, позволяющий объектам с несовместимыми интерфейсами работать вместе.
// Он оборачивает один интерфейс (FahrenheitSensor) другим интерфейсом (CelsiusSensor), который ожидает клиент.

// В этом примере:
// - Старая система измеряет температуру в Фаренгейтах.
// - Новая система ожидает температуру в Цельсиях.
// - Мы используем адаптер для автоматического преобразования Фаренгейтов в Цельсии.

int main() {

    FahrenheitSensor* oldSensor = new FahrenheitSensor();
    CelsiusSensor* adapter = new FahrenheitToCelsiusAdapter(oldSensor);

    std::cout << "Temperature in Celsius: " << adapter->getTemperature() << std::endl;

    delete adapter;
    delete oldSensor;

    return 0;
}
