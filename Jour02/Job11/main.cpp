#include "TreasureMap.hpp"

int main() {
    TreasureMap carteDesTresors;

    // Ajouter des emplacements de nourriture
    carteDesTresors.ajouterEmplacement("Banquise Nord");
    carteDesTresors.ajouterEmplacement("Chambre d'Andy");
    carteDesTresors.ajouterEmplacement("Zoo de madagascar");

    // Afficher les emplacements de nourriture
    carteDesTresors.afficherEmplacements();

    // Vérifier si un emplacement est présent
    std::string emplacementAChercher = "Banquise Nord";
    if (carteDesTresors.contientEmplacement(emplacementAChercher)) {
        std::cout << emplacementAChercher << " est present sur la carte." << std::endl;
    } else {
        std::cout << emplacementAChercher << " n'est pas present sur la carte." << std::endl;
    }

    return 0;
}
