#include "NorwegianSword.hpp"
#include "JapaneseSword.hpp"

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


int main(){
    JapaneseSword   originalKatana("High-carbon steel");
    NorwegianSword  originalVikingSword("Damascus steel");

    ISword* clonedKatana = originalKatana.clone();
    ISword* clonedVikingSword = originalVikingSword.clone();

    clonedKatana->display();
    clonedVikingSword->display();

    delete clonedKatana;
    delete clonedVikingSword;
}