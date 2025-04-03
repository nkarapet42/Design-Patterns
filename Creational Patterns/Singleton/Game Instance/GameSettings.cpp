#include "GameSettings.hpp"

GameSettings* GameSettings::instance = nullptr;

GameSettings::GameSettings() : volume(50), difficulty(1), musicEnabled(true) {}

GameSettings* GameSettings::getInstance() {
    if (!instance)
        instance = new GameSettings();
    return instance;
}

void GameSettings::setVolume(int v) {
    volume = v;
}

void GameSettings::setDifficulty(int d) {
    difficulty = d;
}

void GameSettings::setMusicEnabled(bool enabled) {
    musicEnabled = enabled;
}

void GameSettings::displaySettings() const {
    std::cout << "Volume: " << volume 
              << "\nDifficulty: " << difficulty 
              << "\nMusic Enabled: " << (musicEnabled ? "Yes" : "No")
              << std::endl;
}
