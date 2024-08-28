#include "TreasureMap.hpp"

int main() {
    TreasureMap carteDesTresors;

    // Ajouter des emplacements de nourriture
    carteDesTresors.ajouterEmplacement("Banquise Nord");
    carteDesTresors.ajouterEmplacement("Océan Austral");
    carteDesTresors.ajouterEmplacement("Grotte de Glace");
    carteDesTresors.ajouterEmplacement("Zoo de Madagascar");  
    carteDesTresors.ajouterEmplacement("Chambre d'Andy");    

    // Afficher les emplacements de nourriture
    carteDesTresors.afficherEmplacements();

    // Se rendre à des lieux de meetup et essayer de trouver un poisson
    carteDesTresors.seRendreAuLieuDeMeetup("Banquise Nord");
    carteDesTresors.seRendreAuLieuDeMeetup("Zoo de Madagascar");  
    carteDesTresors.seRendreAuLieuDeMeetup("Chambre d'Andy");     

    return 0;
}
