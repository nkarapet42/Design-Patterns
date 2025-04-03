#ifndef GAMESETTINGS_HPP
# define GAMESETTINGS_HPP

#include <iostream>

class GameSettings {
private:
    static GameSettings*    instance;
    int                     volume;
    int                     difficulty;
    bool                    musicEnabled;

    GameSettings();

public:
    static GameSettings* getInstance();

    void setVolume(int v);
    void setDifficulty(int d);  
    void setMusicEnabled(bool enabled);

    void displaySettings() const;

    GameSettings(const GameSettings&) = delete;
    GameSettings& operator=(const GameSettings&) = delete;
};

#endif
