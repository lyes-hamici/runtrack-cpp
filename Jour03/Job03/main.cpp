#include <iostream>
#include "Character.hpp"

int main()
{
    Character hero("Aba", 10, 5, 5);

    hero.draw();

    // Mise à jour du personnage et affichage de son état
    for (int i = 0; i < 105; ++i) {  // Cycle pour tester la réduction des HP jusqu'à la mort
        hero.update();
        if (!hero.isAlive()) {
            break;  // Si le héros est mort, on sort de la boucle
        }
    }

    return 0;
}
