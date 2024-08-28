
#include "Pingouin.hpp"


int main() {
    // Création d'un objet Pingouin
    Pingouin pingouin("Pingu", 2.5,200); // Un pingouin nommé Pingu qui nage à 2.5 m/s et marche à 200 m/s

    // Afficher la vitesse de nage
    pingouin.nager();

    // Modifier la vitesse de nage
    pingouin.setVitesseNage(3.0);
    
    // Afficher la nouvelle vitesse de nage
    pingouin.nager();

    // Afficher comment il marche
    pingouin.marcher();

    // Se présenter
    pingouin.sePresenter();

    return 0;
}
