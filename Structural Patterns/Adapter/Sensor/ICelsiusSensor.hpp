#ifndef CELSIUSSENSOR_HPP
# define CELSIUSSENSOR_HPP

class CelsiusSensor {
public:
    virtual double getTemperature() const = 0;
    virtual ~CelsiusSensor() {}
};

#endif
