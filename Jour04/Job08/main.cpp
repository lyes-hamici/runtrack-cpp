#include <iostream>
#include "EnemyFactory.hpp"

int main() {
    EnemyFactory factory;

    // Créer un Goblin
    auto goblin = factory.createEnemy("Goblin");
    if (goblin) {
        goblin->attack(); // Affiche : Goblin attacks with a dagger!
    } else {
        std::cout << "Unknown enemy type" << std::endl;
    }

    // Créer un Ogre
    auto ogre = factory.createEnemy("Ogre");
    if (ogre) {
        ogre->attack(); // Affiche : Ogre attacks with a club!
    } else {
        std::cout << "Unknown enemy type" << std::endl;
    }

    // Créer un Dragon
    auto dragon = factory.createEnemy("Dragon");
    if (dragon) {
        dragon->attack(); // Affiche : Dragon attacks with fire breath!
    } else {
        std::cout << "Unknown enemy type" << std::endl;
    }

    // Tester un type inconnu
    auto unknown = factory.createEnemy("Axolot");
    if (unknown) {
        unknown->attack();
    } else {
        std::cout << "Unknown enemy type" << std::endl; // Affiche : Unknown enemy type
    }

    return 0;
}
