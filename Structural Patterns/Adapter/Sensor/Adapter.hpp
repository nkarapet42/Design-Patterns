#ifndef ADAPTER_HPP
# define ADAPTER_HPP

#include "ICelsiusSensor.hpp"
#include "FahrenheitSensor.hpp"

class FahrenheitToCelsiusAdapter : public CelsiusSensor {
private:
    FahrenheitSensor* fahrenheitSensor;
public:
    FahrenheitToCelsiusAdapter(FahrenheitSensor* sensor);

    double getTemperature() const override;
};

#endif
