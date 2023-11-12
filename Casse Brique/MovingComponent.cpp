#include "MovingComponent.hpp"

void MovingComponent::move(sf::Time deltaTime) {
    position.x += direction.x * velocity * deltaTime.asSeconds();
    position.y += direction.y * velocity * deltaTime.asSeconds();
}