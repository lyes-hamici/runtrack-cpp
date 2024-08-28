#include "Competition.hpp"

// Ajouter un temps de compétition avec le nom du pingouin
void Competition::ajouterTemps(const std::string& nom, double temps) {
    tempsDeCompetition.insert(std::make_pair(temps, nom));
}

// Afficher les temps de compétition triés avec les noms
void Competition::afficherTemps() const {
    std::cout << "Temps de competition trier : " << std::endl;
    for (const auto& pair : tempsDeCompetition) {
        std::cout << pair.second << " a terminer en " << pair.first << " secondes" << std::endl;
    }
}
