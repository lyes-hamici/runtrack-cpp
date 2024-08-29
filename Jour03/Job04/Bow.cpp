#include "Bow.hpp"
#include <iostream>

void Bow::attack(Character& target) const
{
    std::cout << "Attacking with Bow, dealing " << power << " damage." << std::endl;
    target.takeDamage(power);
}
