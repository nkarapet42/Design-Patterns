#include "TransientHouseBuilder.hpp"

// -------------------------------------- ENGLISH --------------------------------------
// Transient is a concept often used in dependency injection. It ensures a new instance of 
// an object is created every time it is requested. Ideal for short-lived objects. 

// Example use case: Creating a sword or house where each call produces a new instance 
// with unique properties.

// -------------------------------------- РУССКИЙ --------------------------------------
// Transient — концепция, часто используемая в DI (внедрении зависимостей). Объект создаётся 
// заново при каждом запросе. Идеально подходит для короткоживущих объектов. 

// Пример использования: Создание меча или дома, где каждый вызов создаёт новый экземпляр 
// с уникальными свойствами.


int main() {
    TransientHouseBuilder builder;

    House* house1 = builder.buildHouse("Brick");
    House* house2 = builder.buildHouse("Wood");

    house1->display();
    house2->display();

    std::cout << "Different instances: " << (house1 != house2 ? "Yes" : "No") << std::endl;

    delete house1;
    delete house2;

    return 0;
}
