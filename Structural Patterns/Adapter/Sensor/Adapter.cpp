#include "Adapter.hpp"

FahrenheitToCelsiusAdapter::FahrenheitToCelsiusAdapter(FahrenheitSensor* sensor)
: fahrenheitSensor(sensor) {}

double FahrenheitToCelsiusAdapter::getTemperature() const {
    double f = fahrenheitSensor->getFahrenheit();
    return (f - 32.0) * 5.0 / 9.0;
}