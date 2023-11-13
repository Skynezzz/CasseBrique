#pragma once

#include "GameObject.hpp"
#include "PositionComponent.hpp"

class RenderSystem {
public:
    RenderSystem(sf::RenderWindow& window);
    void render(GameObject& gameObject);

private:
    sf::RenderWindow& window;
};