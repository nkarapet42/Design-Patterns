#include "Square.hpp"

Square::Square(const IRenderer& r, float s) : AShape(r), size(s) {}

std::string Square::draw() const {
    return renderer.renderSquare(size);
}