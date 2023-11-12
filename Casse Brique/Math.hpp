#pragma once

#include <SFML/Graphics.hpp>

class Math
{
public:
	sf::Vector2f createVect(float x, float y);
	float getVectorLenth(sf::Vector2f vector);
	sf::Vector2f nomreVector(sf::Vector2f vector);
	float getAngleFromTwoVector(sf::Vector2f vectorOne, sf::Vector2f vectorTwo);

};