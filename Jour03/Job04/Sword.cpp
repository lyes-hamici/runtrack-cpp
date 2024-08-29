#include "Sword.hpp"
#include <iostream>

void Sword::attack(Character& target) const
{
    std::cout << "Attacking with Sword, dealing " << power << " damage." << std::endl;
    target.takeDamage(power);
}
