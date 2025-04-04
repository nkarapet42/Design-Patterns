#include "TransientObject.hpp"

void TransientFunction() {
    std::unique_ptr<TransientObject> object1 = std::make_unique<TransientObject>();
    std::unique_ptr<TransientObject> object2 = std::make_unique<TransientObject>();
    std::unique_ptr<TransientObject> object3 = std::make_unique<TransientObject>();
    std::cout << "In Function\n";
} // obj will be destroyed after scope ending
// And it will be destroy if you creating a new one in one scope the old one
// will be destroyed and replaced by new one(RAII principe classes + Transient method)

int main() {
    TransientFunction();
    std::cout << "Out of function\n";
}