#include <iostream>
#include "Circle.hpp"
#include "Square.hpp"
#include "RasterRenderer.hpp"
#include "VectorRenderer.hpp"

// -------------------------------------- ENGLISH --------------------------------------
// Bridge pattern example with shapes and renderers.
// Shapes (abstractions) delegate the rendering logic to renderer implementations.
// This allows us to mix and match different shapes with different renderers.

// -------------------------------------- РУССКИЙ --------------------------------------
// Пример паттерна Мост с фигурами и рендерерами.
// Фигуры (абстракции) делегируют логику отрисовки реализациям рендереров.
// Это позволяет комбинировать различные фигуры с разными способами отрисовки.

int main() {

    RasterRenderer raster;
    VectorRenderer vector;

    Circle rasterCircle(raster, 5);
    Circle vectorCircle(vector, 5);

    Square rasterSquare(raster, 10);
    Square vectorSquare(vector, 10);

    std::cout << rasterCircle.draw() << std::endl;
    std::cout << vectorCircle.draw() << std::endl;
    std::cout << rasterSquare.draw() << std::endl;
    std::cout << vectorSquare.draw() << std::endl;

    return 0;
}
