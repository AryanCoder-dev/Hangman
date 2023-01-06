#include "../include/Game.h"
#include <stdio.h>

void Game::run()
{
    mainMenu();
}

void Game::setPlayerLives(int arg)
{
    playerLives = arg;
}

int Game::getPlayerLives()
{
    return playerLives;
}

void Game::mainMenu()
{
    
}