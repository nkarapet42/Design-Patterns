#include "NorwegianSword.hpp"
#include "JapaneseSword.hpp"

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