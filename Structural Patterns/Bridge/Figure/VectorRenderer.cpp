#include "VectorRenderer.hpp"

std::string VectorRenderer::renderCircle(float radius) const {
    return "Drawing a vector circle of radius " + std::to_string(radius);
}

std::string VectorRenderer::renderSquare(float size) const {
    return "Drawing a vector square of size " + std::to_string(size);
}