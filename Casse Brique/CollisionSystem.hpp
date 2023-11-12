#pragma once

#include "GameObject.hpp"
#include "CollideComponent.hpp"

class CollisionSystem {
public:
    void update(GameObject& gameObject, std::vector<GameObject>& gameObjects);

private:
    bool checkCollision(sf::Shape* hitbox1, sf::Shape* hitbox2) const;
    void handleCollision(GameObject& entity1, GameObject& entity2);
};