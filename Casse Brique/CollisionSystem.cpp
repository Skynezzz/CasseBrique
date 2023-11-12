#include "CollisionSystem.hpp"

bool CollisionSystem::checkCollision(sf::Shape* hitbox1, sf::Shape* hitbox2) const {
    // Impl�menter la logique de d�tection de collision entre deux hitboxes
    // Retourne true si les hitboxes se chevauchent, sinon false
    return false;  // Placeholder, remplace-le avec la logique r�elle
}

void CollisionSystem::handleCollision(GameObject& entity1, GameObject& entity2) {
    // Impl�menter la logique de gestion de la collision, par exemple, changer la direction, la vitesse, etc.
}

void CollisionSystem::update(GameObject& gameObject, std::vector<GameObject>& gameObjects) {
    // Parcourir toutes les entit�s avec le composant de collision
    CollideComponent* collideComponent = gameObject.getComponent<CollideComponent>();
    if (collideComponent == nullptr) {
        // L'entit� n'a pas de composant de collision
        return;
    }

    // V�rifier la collision avec les autres entit�s
    for (auto& otherEntity : gameObjects) {
        if (&gameObject != &otherEntity) {  // �vite de v�rifier la collision avec elle-m�me
            CollideComponent* otherCollideComponent = otherEntity.getComponent<CollideComponent>();
            if (otherCollideComponent != nullptr) {
                // V�rifier la collision entre les deux entit�s
                if (checkCollision(collideComponent->getHitbox(), otherCollideComponent->getHitbox())) {
                    // G�rer la collision, par exemple, changer la direction, la vitesse, etc.
                    handleCollision(gameObject, otherEntity);
                }
            }
        }
    }
}