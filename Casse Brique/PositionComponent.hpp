#pragma once

#include "Component.hpp"
#include <SFML/Graphics.hpp>

class PositionComponent : public Component {
public:
    PositionComponent();

    inline sf::Shape* getShape() const { return shape; };

protected:
    sf::Vector2f position;
    sf::Vector2f size;
    sf::Shape* shape;
};
