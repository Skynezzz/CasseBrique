#pragma once

#include "PositionComponent.hpp"

class MovingComponent : public Component {
private:
    sf::Vector2f direction;
    float velocity;

public:
    virtual ~MovingComponent() = default;
    MovingComponent(const sf::Vector2f& initialDirection, float initialVelocity)
        : direction(initialDirection), velocity(initialVelocity) {}

    void move(sf::Time deltaTime);
};