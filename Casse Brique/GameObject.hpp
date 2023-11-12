#pragma once

#include <vector>
#include "Component.hpp"

class GameObject {
public:
    ~GameObject() {
        for (auto& component : components) {
            delete component;
        }
    }

    void addComponent(Component* component) {
        components.push_back(component);
    }

    template <typename T>
    T* getComponent() const {
        for (Component* component : components) {
            if (T* specificComponent = dynamic_cast<T*>(component)) {
                return specificComponent;
            }
        }
        return nullptr;
    }

private:
    std::vector<Component*> components;
};
