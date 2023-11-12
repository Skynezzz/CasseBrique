#pragma once

#include "PositionComponent.hpp"

class CollideComponent : public PositionComponent {
private:
    sf::Shape* hitbox;

public:
    inline sf::Shape* getHitbox() const { return hitbox; };
};
