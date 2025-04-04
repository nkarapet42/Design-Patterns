#include "ScopedObject.hpp"

void ScopedFunction() {
    std::shared_ptr<ScopedObject> obj = std::make_shared<ScopedObject>();
    std::cout << "In Function\n";
} // obj will be destroyed after scope ending (RAII principe classes + Scoped method)

int main() {
    ScopedFunction();
    std::cout << "Out of function\n";
}