#include "ConcreteHouse.hpp"
#include "WoodenHouse.hpp"

// -------------------------------------- ENGLISH --------------------------------------
// Prototype is a creational pattern that lets you copy existing objects without making your code 
// dependent on their classes. It allows objects to be cloned, avoiding the costly process of 
// creating objects from scratch. 

// Example use case: Cloning swords or houses to quickly create duplicates instead of manually 
// constructing each instance. 

// -------------------------------------- РУССКИЙ --------------------------------------
// Прототип — это порождающий паттерн, который позволяет копировать существующие объекты, не делая код 
// зависимым от их классов. Объекты можно клонировать, избегая затратного процесса создания с нуля. 

// Пример использования: Клонирование мечей или домов для быстрого создания копий вместо ручного 
// построения каждого экземпляра.


int main() {
    ConcreteHouse originalConcreteHouse(2, true);
    WoodenHouse originalWoodenHouse(1, true);

    IHouse* clonedConcreteHouse = originalConcreteHouse.clone();
    IHouse* clonedWoodenHouse = originalWoodenHouse.clone();

    clonedConcreteHouse->display();
    clonedWoodenHouse->display();

    delete clonedConcreteHouse;
    delete clonedWoodenHouse;

    return 0;
}
