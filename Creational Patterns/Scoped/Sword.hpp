#ifndef SWORD_HPP
# define SWORD_HPP

#include <iostream>
#include <string>

class Sword {
private:
    std::string type;

public:
    Sword(const std::string& type);

    void display() const;
};

#endif
