#include "IMageCreator.hpp"
#include "FireMage.hpp"
#include "IceMage.hpp"
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

void createAndDescribeCast(const IMageCreator& mage) {
    auto cast = mage.createCast();
    auto shield = mage.createShieldCast();
    auto zone = mage.createZoneCast();
    std::cout << '\n';
    std::cout << "Spell: [Attack]" << cast->getType() << std::endl;
    std::cout << "Spell: [Defence]" << shield->getType() << std::endl;
    std::cout << "Spell: [Zone]" << zone->getType() << std::endl;
    std::cout << '\n';
}

int main() {
    FireMage    fireMage;
    IceMage     iceMage;

    createAndDescribeCast(fireMage);
    createAndDescribeCast(iceMage);

    return 0;
}