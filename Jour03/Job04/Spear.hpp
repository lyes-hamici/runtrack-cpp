#ifndef SPEAR_HPP
#define SPEAR_HPP

#include "Weapon.hpp"

class Spear : public Weapon
{
private:
    int range;   // Portée
    int power;   // Puissance

public:
    Spear() : range(2), power(2) {}

    void attack(Character& target) const override;
};

#endif // SPEAR_HPP
