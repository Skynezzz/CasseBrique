#pragma once

#include <SFML/Graphics.hpp>
#include "GameObject.hpp"
#include "MovementSystem.hpp"
#include "CollisionSystem.hpp"

class Game
{
public:
    Game();
    ~Game();

    void run();

private:
    sf::RenderWindow window;
    std::vector<GameObject> gameObjects;
    MovementSystem movementSystem;
    CollisionSystem collisionSystem;

    const int FPS = 165;
    const sf::Time timePerFrame = sf::seconds(1.0f / FPS);
    sf::Clock clock;
    sf::Event oEvent;
    sf::Time deltaTime;
    sf::Time timeElapsed;

    void processEvents();
    void update();
    void render();
    void frameLimiter();

};