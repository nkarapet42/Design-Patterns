#include "IBlackSmith.hpp"
#include "NorwegianBlackSmith.hpp"
#include "JapaneseBlackSmith.hpp"
#include <iostream>

// -------------------------------------- ENGLISH --------------------------------------
// Factory Method is a creational pattern that provides an interface for creating objects in 
// a superclass but allows subclasses to alter the type of objects that will be created. 
// It promotes loose coupling by eliminating the need for the base class to know the exact class 
// of objects it must create.

// Example use case: Creating different types of swords (e.g., Japanese, Norwegian) based on 
// cultural style without modifying the base Blacksmith class.
// Or
// We have a base IMageCreator class that studies spells through a createCast() method. 
// FireMage and IceMage inherit from IMageCreator and define their own spells.
// When Mage learns a spell, the specific subclass determines the type of spell being learned 
// without the base IMageCreator class knowing the details. 

// -------------------------------------- РУССКИЙ --------------------------------------
// Фабричный метод — это порождающий паттерн, который предоставляет интерфейс для создания объектов 
// в базовом классе, но позволяет подклассам изменять тип создаваемых объектов. Понижает связанность, 
// устраняя необходимость знать базовому классу о конкретных типах объектов. 

// Пример использования: Создание различных типов мечей (например, японских, норвежских) в зависимости 
// от стиля, не изменяя базовый класс Кузнец.
// Или
// У нас есть базовый класс IMageCreator, который изучает заклинания через метод createCast().
// FireMage и IceMage наследуются от IMageCreator и определяют свои собственные заклинания.
// Когда Mage изучает заклинание, конкретный подкласс определяет его тип, не раскрывая детали базовому классу IMageCreator.


void createAndDescribeSword(const IBlacksmith& blacksmith) {
    auto sword = blacksmith.createSword();
    std::cout << "Created: " << sword->getType() << std::endl;
}

int main() {
    NorwegianBlacksmith norwegianBlacksmith;
    JapaneseBlacksmith japaneseBlacksmith;

    createAndDescribeSword(norwegianBlacksmith);
    createAndDescribeSword(japaneseBlacksmith);

    return 0;
}