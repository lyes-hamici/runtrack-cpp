#ifndef BOW_HPP
#define BOW_HPP

#include "Weapon.hpp"

class Bow : public Weapon
{
private:
    int range;   // Portée
    int power;   // Puissance

public:
    Bow() : range(4), power(1) {}

    void attack(Character& target) const override;
};

#endif // BOW_HPP
