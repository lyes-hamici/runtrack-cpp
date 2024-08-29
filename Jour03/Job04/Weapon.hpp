#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Character.hpp"

class Weapon
{
public:
    virtual ~Weapon() = default;

    // Méthode virtuelle pure pour attaquer un personnage
    virtual void attack(Character& target) const = 0;
};

#endif // WEAPON_HPP
