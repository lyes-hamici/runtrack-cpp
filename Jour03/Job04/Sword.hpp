#ifndef SWORD_HPP
#define SWORD_HPP

#include "Weapon.hpp"

class Sword : public Weapon
{
private:
    int range;   // Portée
    int power;   // Puissance

public:
    Sword() : range(1), power(4) {}

    void attack(Character& target) const override;
};

#endif // SWORD_HPP
