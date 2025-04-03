#include "Sword.hpp"


Sword::Sword(const std::string& bladeMaterial, const std::string& handleMaterial,
                int length, bool isEngraved)
            : bladeMaterial(bladeMaterial), handleMaterial(handleMaterial),
                length(length), isEngraved(isEngraved) {}

void Sword::display() {
    std::cout << "Sword created with blade: " << bladeMaterial
        << ", handle: " << handleMaterial 
        << ", length: " << length
        << " cm, engraved: " << (isEngraved ? "Yes" : "No") << std::endl;
}