#include "Decor.hpp"

// Constructeurs
Decor::Decor() : GameObject(), originalX(0), originalY(0) {}

Decor::Decor(double x, double y) : GameObject(x, y), originalX(x), originalY(y) {}

// Implémentation de la méthode draw
void Decor::draw() const
{
    std::cout << "Drawing decor at position (" << getX() << ", " << getY() << ")" << std::endl;
}

// Implémentation de la méthode update
void Decor::update()
{
    // Rien ne change, la position reste fixe
    std::cout << "Decor position remains at (" << getX() << ", " << getY() << ")" << std::endl;
}

// Surcharge des méthodes setX et setY pour empêcher la modification des coordonnées
void Decor::setX(double x)
{
    GameObject::setX(originalX);  // Remet à la position initiale
}

void Decor::setY(double y)
{
    GameObject::setY(originalY);  // Remet à la position initiale
}
