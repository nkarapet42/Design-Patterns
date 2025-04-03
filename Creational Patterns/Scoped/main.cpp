#include "ScopedBlackSmith.hpp"

// -------------------------------------- ENGLISH --------------------------------------
// Scoped is a concept often used in dependency injection. It ensures an object is created 
// and used within a specific scope (e.g., a request or transaction) and is disposed of when 
// the scope ends. 

// Example use case: Creating a blacksmith who forges swords in a session. Each session uses 
// the same blacksmith instance, reducing overhead. 

// -------------------------------------- РУССКИЙ --------------------------------------
// Scoped — концепция, часто используемая в DI (внедрении зависимостей). Объект создаётся и используется 
// в определённой области (например, запрос или транзакция) и уничтожается при завершении области. 

// Пример использования: Создание кузнеца, который кует мечи в рамках одной сессии. Каждая сессия 
// использует один и тот же экземпляр кузнеца, снижая нагрузку.


int main() {
    ScopedBlackSmith blacksmith;

    Sword* sword1 = blacksmith.forgeSword("Katana");
    Sword* sword2 = blacksmith.forgeSword("Katana");

    sword1->display();
    sword2->display();

    std::cout << "Same instance: " << (sword1 == sword2 ? "Yes" : "No") << std::endl;

    return 0;
}
