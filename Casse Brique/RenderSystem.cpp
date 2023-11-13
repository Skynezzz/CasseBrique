#include "RenderSystem.hpp"

RenderSystem::RenderSystem(sf::RenderWindow& window) : window(window) {}

void RenderSystem::render(GameObject& gameObject) {
    // Obtient le composant viewable de l'entit�
    PositionComponent* positionComponent = gameObject.getComponent<PositionComponent>();
    if (positionComponent != nullptr) {
        // Dessine la forme associ�e au composant viewable
        window.draw(positionComponent->getShape());
    }

}