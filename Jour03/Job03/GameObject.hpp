#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include "Vector2d.hpp"

class GameObject : public Vector2d
{
public:
    // Constructeurs
    GameObject();
    GameObject(double x, double y);

    // Destructeur virtuel
    virtual ~GameObject() = default;

    // Méthodes virtuelles pures
    virtual void draw() const = 0;
    virtual void update() = 0;
};

#endif // GAMEOBJECT_HPP
