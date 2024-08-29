#include "Spear.hpp"
#include <iostream>

void Spear::attack(Character& target) const
{
    std::cout << "Attacking with Spear, dealing " << power << " damage." << std::endl;
    target.takeDamage(power);
}
