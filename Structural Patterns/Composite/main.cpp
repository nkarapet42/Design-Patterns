#include <iostream>
#include "Circle.hpp"
#include "Square.hpp"
#include "Triangle.hpp"
#include "GraphicGroup.hpp"


#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define PURPLE  "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"
// -------------------------------------- ENGLISH --------------------------------------
// Composite is a structural pattern that lets you compose objects into tree structures
// and work with them as if they were individual objects.
//
// In this example:
// - IGraphic is the base interface
// - Circle, Square and Triangle are leaf components
// - GraphicGroup is a composite that can hold multiple graphics (including other groups)

// -------------------------------------- РУССКИЙ --------------------------------------
// Компоновщик — это структурный паттерн, который позволяет объединять объекты в древовидную структуру
// и работать с ними как с единым целым.
//
// В этом примере:
// - IGraphic — базовый интерфейс
// - Circle, Square и Triangle — конечные элементы
// - GraphicGroup — составной компонент, может содержать другие графические объекты или группы

int main() {

    Circle      circle1;
    Square      square1;
    Triangle    triangle1;
    GraphicGroup rootGroup;
    
    std::cout << std::string(GREEN) + "Added Circle,Square and Triangle to rootGroup\n" + std::string(RESET);
    
    rootGroup.add(&circle1);
    rootGroup.add(&square1);
    rootGroup.add(&triangle1);
    
    std::cout << std::string(YELLOW) + "Draw rootGroup\n" + std::string(RESET);
    rootGroup.draw();
    std::cout << std::string(PURPLE) + "Draw End\n" + std::string(RESET);
    
    Circle      circle2;
    Square      square2;
    Triangle    triangle2;
    GraphicGroup subGroup1;
    
    std::cout << std::string(GREEN) + "Added Circle,Square and Triangle to subGroup1\n" + std::string(RESET);
    subGroup1.add(&circle2);
    subGroup1.add(&square2);
    subGroup1.add(&triangle2);
    
    std::cout << std::string(GREEN) + "Added subGroup1 to rootGroup\n" + std::string(RESET);
    rootGroup.add(&subGroup1);
    
    std::cout << std::string(YELLOW) + "Draw rootGroup\n" + std::string(RESET);
    rootGroup.draw();
    std::cout << std::string(PURPLE) + "Draw End\n" + std::string(RESET);
    
    Circle      circle3;
    Square      square3;
    Triangle    triangle3;
    GraphicGroup subGroup2;
    
    std::cout << std::string(GREEN) + "Added Circle,Square and Triangle to subGroup2\n" + std::string(RESET);
    subGroup2.add(&circle3);
    subGroup2.add(&square3);
    subGroup2.add(&triangle3);
    
    std::cout << std::string(GREEN) + "Added subGroup2 to rootGroup\n" + std::string(RESET);
    rootGroup.add(&subGroup2);
    
    std::cout << std::string(YELLOW) + "Draw rootGroup\n" + std::string(RESET);
    rootGroup.draw();
    std::cout << std::string(PURPLE) + "Draw End\n" + std::string(RESET);
    
    return 0;
}
