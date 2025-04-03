#include "BlackSmith.hpp"
#include "JapaneseSwordBuilde.hpp"

// -------------------------------------- ENGLISH --------------------------------------
// Builder is a creational pattern that separates the construction of a complex object from 
// its representation, allowing the same construction process to create different representations. 
// It is useful for creating objects with many optional parameters or complex structures. 

// Example use case: Building a house step by step, allowing different configurations such as 
// floor count, garage presence, and roof type.

// -------------------------------------- РУССКИЙ --------------------------------------
// Строитель — это порождающий паттерн, который отделяет построение сложного объекта от его представления, 
// позволяя использовать один и тот же процесс построения для различных представлений. Полезен для создания 
// объектов с множеством опциональных параметров или сложной структурой. 

// Пример использования: Построение дома поэтапно с различными конфигурациями, такими как количество этажей, 
// наличие гаража и тип крыши.


int main() {
    JapaneseSwordBuilde japanSword;
    BlackSmith          forge;

    Sword*  sword = forge.construct(japanSword);

    sword->display();

    delete sword;
}