#include "JapaneseSwordBuilde.hpp"

JapaneseSwordBuilde::JapaneseSwordBuilde() { 
    sword = new Sword("Katana Steel", "Bamboo", 80, true);
}

void JapaneseSwordBuilde::buildBlade() {
    sword->bladeMaterial = "High-carbon steel";
}

void JapaneseSwordBuilde::buildHandle() {
    sword->handleMaterial = "Wooden";
}

void JapaneseSwordBuilde::buildLength() {
    sword->length = 90;
}

void JapaneseSwordBuilde::buildEngraving() {
    sword->isEngraved = true;
}

Sword* JapaneseSwordBuilde::getResult() {
    return sword;
}