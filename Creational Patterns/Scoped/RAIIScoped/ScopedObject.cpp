#include "ScopedObject.hpp"

ScopedObject::ScopedObject() { std::cout << "ScopedObject created\n"; }
ScopedObject::~ScopedObject() { std::cout << "ScopedObject destroyed\n"; }
