#include "Competition.hpp"

int main() {
    Competition competition;

    // Ajouter des temps de compétition
    competition.ajouterTemps("Pingu", 12.5);
    competition.ajouterTemps("Soldat", 8.3);
    competition.ajouterTemps("Sifli", 15.7);
    competition.ajouterTemps("Sifli", 8.3); // Les doublons sont permis, même pour les noms

    // Afficher les temps triés avec les noms
    competition.afficherTemps();

    return 0;
}
