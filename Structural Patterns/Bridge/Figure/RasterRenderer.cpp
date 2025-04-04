#include "RasterRenderer.hpp"

std::string RasterRenderer::renderCircle(float radius) const {
    return "Rasterizing a circle of radius " + std::to_string(radius);
}

std::string RasterRenderer::renderSquare(float size) const {
    return "Rasterizing a square of size " + std::to_string(size);
}