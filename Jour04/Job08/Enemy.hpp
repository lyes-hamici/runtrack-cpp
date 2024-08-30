#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <memory>

class Enemy {
public:
    virtual ~Enemy() = default;

    // Méthode virtuelle pure pour l'attaque
    virtual void attack() const = 0;
};

#endif // ENEMY_HPP
