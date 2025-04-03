#include "IBlackSmith.hpp"
#include "NorwegianBlackSmith.hpp"
#include "JapaneseBlackSmith.hpp"
#include <iostream>

// -------------------------------------- ENGLISH --------------------------------------
// Abstract Factory is a creational pattern that provides an interface for creating families 
// of related or dependent objects without specifying their concrete classes. It is useful 
// when the system needs to be independent of how its objects are created. 

// Example use case: Game item creation - create weapons and armors of different styles 
// (e.g., medieval, futuristic) without knowing exact types.
// Or
// We have a IMageCreator interface that can create various spells: Cast, ZoneCast, and ShieldCast. 
// FireMage and IceMage implement IMageCreator, providing specific types of spells. 
// This allows the mage to learn different types of spells depending on the factory used, 
// without knowing the exact spell types at compile time.

// -------------------------------------- РУССКИЙ --------------------------------------
// Абстрактная фабрика — это порождающий паттерн, который предоставляет интерфейс для создания 
// семейств взаимосвязанных объектов без указания их конкретных классов. Полезен, когда система 
// должна быть независима от способа создания объектов. 

// Пример использования: Создание игровых предметов — оружие и броня разных стилей 
// (например, средневековый, футуристический), не зная конкретных типов.
// Или
// У нас есть интерфейс IMageCreator, который создаёт различные заклинания: Cast, ZoneCast и ShieldCast. 
// FireMage и IceMage реализуют IMageCreator, предоставляя конкретные типы заклинаний.
// Это позволяет магу изучать разные типы заклинаний в зависимости от используемой фабрики, 
// не зная конкретные типы заклинаний на этапе компиляции.


void createAndDescribeSword(const IBlacksmith& blacksmith) {
    auto sword = blacksmith.createSword();
    auto shield = blacksmith.createShield();
    auto armor = blacksmith.createArmor();
    std::cout << "Created: [Sword] " << sword->getType() << "; [Shield] "<< shield->getType() << "; [Armor] " << armor->getType() <<std::endl;
}

int main() {
    NorwegianBlacksmith norwegianBlacksmith;
    JapaneseBlacksmith japaneseBlacksmith;

    createAndDescribeSword(norwegianBlacksmith);
    createAndDescribeSword(japaneseBlacksmith);

    return 0;
}