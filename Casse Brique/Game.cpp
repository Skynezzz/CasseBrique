#include "game.hpp"

Game::Game() : window(sf::VideoMode(800, 600), "KasBrik") {
    oEvent;
    // Initialiser le joueur et les autres entit�s
    // ...

    // Ajouter des composants aux entit�s
    // ...

    // Ajouter les entit�s au vecteur gameObjects
    // ...
}

Game::~Game()
{
}

void Game::run()
{
    while (window.isOpen())
    {
        deltaTime = clock.restart();

        processEvents();

        update();

        render();

        frameLimiter();
    }
}

void Game::processEvents()
{
}

void Game::update()
{
}

void Game::render()
{
}

void Game::frameLimiter()
{
    timeElapsed = clock.getElapsedTime();
    if (timeElapsed < timePerFrame)
    {
        sf::sleep(timePerFrame - timeElapsed);
    }
}