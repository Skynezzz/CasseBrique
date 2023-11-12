#include "MovementSystem.hpp"

void MovementSystem::update(GameObject& gameObject, sf::Time deltaTime) {
    if (MovingComponent* movingComponent = gameObject.getComponent<MovingComponent>()) {
        movingComponent->move(deltaTime);
    }
}
