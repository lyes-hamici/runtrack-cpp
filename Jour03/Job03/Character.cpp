#include "Character.hpp"

// Constructeurs
Character::Character() : GameObject(), name("Unknown"), healthPoints(100) {}

Character::Character(const std::string& name, int healthPoints, double x, double y)
    : GameObject(x, y), name(name), healthPoints(healthPoints) {}

// Implémentation de la méthode draw
void Character::draw() const
{
    std::cout << "Drawing character " << name << " at position (" << getX() << ", " << getY() << ")" 
              << " with " << healthPoints << " HP" << std::endl;
}

// Implémentation de la méthode update
void Character::update()
{
    // Exemple de logique d'update : on pourrait diminuer les points de vie
    if (healthPoints > 0) {
        healthPoints -= 1;  // Simulation d'un dommage
    }

    std::cout << "Character " << name << " updated to " << healthPoints << " HP" << std::endl;
}

// Vérifie si le personnage est encore en vie
bool Character::isAlive() const
{
    if (healthPoints > 0) {
        return true;
    } else {
        std::cout << "You are dead womp womp" << std::endl;
        return false;
    }
}
