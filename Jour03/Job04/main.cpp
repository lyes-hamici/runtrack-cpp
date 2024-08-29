#include <iostream>
#include "Character.hpp"
#include "Bow.hpp"
#include "Spear.hpp"
#include "Sword.hpp"

int main()
{
    Character enemy("Enemy", 50, 10, 10);

    Bow bow;
    Spear spear;
    Sword sword;

    std::cout << "Enemy initial HP: " << 50 << std::endl;

    // Attaque avec chaque arme
    bow.attack(enemy);
    spear.attack(enemy);
    sword.attack(enemy);

    return 0;
}
