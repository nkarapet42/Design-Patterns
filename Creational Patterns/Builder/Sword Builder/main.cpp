#include "BlackSmith.hpp"
#include "JapaneseSwordBuilde.hpp"

int main() {
    JapaneseSwordBuilde japanSword;
    BlackSmith          forge;

    Sword*  sword = forge.construct(japanSword);

    sword->display();

    delete sword;
}