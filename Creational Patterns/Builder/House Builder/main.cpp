#include <iostream>
#include "ConcreteHouseBuilde.hpp"
#include "Director.hpp"

// -------------------------------------- ENGLISH --------------------------------------
// Builder is a creational pattern that separates the construction of a complex object from 
// its representation, allowing the same construction process to create different representations. 
// It is useful for creating objects with many optional parameters or complex structures. 

// Example use case 1 (House): 
// Building a house step by step, allowing different configurations such as floor count, 
// garage presence, and roof type.

// Example use case 2 (Sword): 
// Constructing a sword step by step by setting parameters such as blade, handle, length, and engraving.
// The builder pattern allows flexibility in creating swords with unique properties and details.

// -------------------------------------- РУССКИЙ --------------------------------------
// Строитель — это порождающий паттерн, который отделяет построение сложного объекта от его представления, 
// позволяя использовать один и тот же процесс построения для различных представлений. Полезен для создания 
// объектов с множеством опциональных параметров или сложной структурой. 

// Пример использования 1 (Дом):
// Построение дома поэтапно с различными конфигурациями, такими как количество этажей, 
// наличие гаража и тип крыши.

// Пример использования 2 (Меч): 
// Построение меча поэтапно, задавая параметры, такие как клинок, рукоять, длина и гравировка.
// Паттерн строитель позволяет гибко создавать мечи с уникальными свойствами и деталями.

int main() {
    ConcreteHouseBuilder    builder;
    Director                director;

    House* house = director.construct(builder);
    
    house->display();

    delete house;
}
