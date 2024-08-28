#include "Pingouin.hpp"

int main() {
    // Création d'un objet Pingouin
    Pingouin pingouin("Pingu", 2.5, 1.0, 5.0); // Un pingouin nommé Pingu qui nage à 2.5 m/s et glisse à 5.0 m/s

    // Afficher la vitesse de nage
    pingouin.nager();

    // Modifier la vitesse de nage
    pingouin.setVitesseNage(3.0);
    
    // Afficher la nouvelle vitesse de nage
    pingouin.nager();

    // Afficher comment il marche
    pingouin.marcher();

    // Afficher la vitesse de glisse
    std::cout << "Vitesse de glisse : " << pingouin.getVitesseGlisse() << " m/s." << std::endl;

    // Modifier la vitesse de glisse
    pingouin.setVitesseGlisse(6.0);
    
    // Afficher la nouvelle vitesse de glisse
    std::cout << "Nouvelle vitesse de glisse : " << pingouin.getVitesseGlisse() << " m/s." << std::endl;

    // Se présenter
    pingouin.sePresenter();

    // Test du constructeur de copie
    Pingouin copiePingouin(pingouin);
    copiePingouin.sePresenter();
    std::cout << "Vitesse de glisse de la copie : " << copiePingouin.getVitesseGlisse() << " m/s." << std::endl;

    return 0;
}
