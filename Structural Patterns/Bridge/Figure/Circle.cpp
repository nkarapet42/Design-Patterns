#include "Circle.hpp"

Circle::Circle(const IRenderer& r, float rad) : AShape(r), radius(rad) {}

std::string Circle::draw() const {
    return renderer.renderCircle(radius);
}