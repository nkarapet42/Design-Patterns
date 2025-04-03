#include "GameSettings.hpp"

void display() {
    GameSettings::getInstance()->displaySettings();
}

int main() {
    GameSettings::getInstance()->setVolume(75);
    GameSettings::getInstance()->setDifficulty(3);
    GameSettings::getInstance()->setMusicEnabled(false);

    display();
}
