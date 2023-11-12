#pragma once

#include "GameObject.hpp"
#include "MovingComponent.hpp"

class MovementSystem {
public:
    void update(GameObject& gameObject, sf::Time deltaTime);
};