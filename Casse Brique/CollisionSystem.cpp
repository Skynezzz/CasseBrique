#include "CollisionSystem.hpp"

bool CollisionSystem::checkCollision(sf::Shape* hitbox1, sf::Shape* hitbox2) const {
    // Implémenter la logique de détection de collision entre deux hitboxes
    // Retourne true si les hitboxes se chevauchent, sinon false
    return false;  // Placeholder, remplace-le avec la logique réelle
}

void CollisionSystem::handleCollision(GameObject& entity1, GameObject& entity2) {
    // Implémenter la logique de gestion de la collision, par exemple, changer la direction, la vitesse, etc.
}

void CollisionSystem::update(GameObject& gameObject, std::vector<GameObject>& gameObjects) {
    // Parcourir toutes les entités avec le composant de collision
    CollideComponent* collideComponent = gameObject.getComponent<CollideComponent>();
    if (collideComponent == nullptr) {
        // L'entité n'a pas de composant de collision
        return;
    }

    // Vérifier la collision avec les autres entités
    for (auto& otherEntity : gameObjects) {
        if (&gameObject != &otherEntity) {  // Évite de vérifier la collision avec elle-même
            CollideComponent* otherCollideComponent = otherEntity.getComponent<CollideComponent>();
            if (otherCollideComponent != nullptr) {
                // Vérifier la collision entre les deux entités
                if (checkCollision(collideComponent->getHitbox(), otherCollideComponent->getHitbox())) {
                    // Gérer la collision, par exemple, changer la direction, la vitesse, etc.
                    handleCollision(gameObject, otherEntity);
                }
            }
        }
    }
}