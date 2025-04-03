#ifndef HOUSE_HPP
# define HOUSE_HPP

#include <iostream>
#include <string>

class House {
private:
    std::string material;

public:
    House(const std::string& material);

    void display() const;
};

#endif
