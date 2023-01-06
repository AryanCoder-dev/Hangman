#pragma once

class Game
{
private:
    int playerLives = 7;

    void mainMenu();
public:
    void run();
    void setPlayerLives(int arg);
    int getPlayerLives();
};