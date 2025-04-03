#ifndef SWORD_HPP
# define SWORD_HPP

#include <iostream>
#include <string>

class Sword {
private:
    std::string bladeMaterial;
    std::string handleMaterial;
    int         length;
    bool        isEngraved;

public:
    Sword(const std::string& bladeMaterial, const std::string& handleMaterial,
            int length, bool isEngraved);

    void display();
};

#endif
