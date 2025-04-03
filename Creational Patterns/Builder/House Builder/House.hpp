#ifndef HOUSE_HPP
# define HOUSE_HPP

#include <iostream>
#include <string>

class House {
public:
    std::string material;
    int floors;
    bool hasSwimmingPool;
    bool hasGarage;

    House(const std::string& material, int floors, bool hasSwimmingPool, bool hasGarage);

    void display();
};

#endif
