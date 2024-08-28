#include "TreasureMap.hpp"

// Initialisation de la unordered_map statique avec les nouveaux lieux
std::unordered_map<std::string, std::string> TreasureMap::lieuxDeMeetup = {
    {"Banquise Nord", "Recif Glacer"},
    {"Océan Austral", "Falaise de Glace"},
    {"Grotte de Glace", "Lac Glacer"},
    {"Zoo de Madagascar", "Lagon Bleu"},  
    {"Chambre d'Andy", "Coffre a jouer"} 
};

// Ajouter un emplacement de nourriture au unordered_set
void TreasureMap::ajouterEmplacement(const std::string& emplacement) {
    emplacementsNourriture.insert(emplacement);
}

// Afficher tous les emplacements de nourriture
void TreasureMap::afficherEmplacements() const {
    std::cout << "Emplacements de nourriture disponibles : " << std::endl;
    for (const auto& emplacement : emplacementsNourriture) {
        std::cout << "- " << emplacement << std::endl;
    }
}

// Vérifier si un emplacement est présent dans le set
bool TreasureMap::contientEmplacement(const std::string& emplacement) const {
    return emplacementsNourriture.find(emplacement) != emplacementsNourriture.end();
}

// Se rendre à un lieu de meetup et essayer de trouver un poisson
void TreasureMap::seRendreAuLieuDeMeetup(const std::string& lieuDeMeetup) const {
    auto it = lieuxDeMeetup.find(lieuDeMeetup);
    if (it != lieuxDeMeetup.end()) {
        std::cout << "Vous vous rendez a " << lieuDeMeetup << ", pres de " << it->second << "." << std::endl;
        
        // Générer une chance de trouver un poisson (50% de chance)
        std::srand(std::time(0)); // Initialiser la graine du générateur aléatoire
        int chance = std::rand() % 2; // Génère un nombre entre 0 et 1
        
        if (chance == 1) {
            std::cout << "Vous avez trouver un poisson a " << it->second << "!" << std::endl;
        } else {
            std::cout << "Pas de poisson trouver cette fois-ci a " << it->second << "." << std::endl;
        }
    } else {
        std::cout << "Lieu de meetup non trouvé : " << lieuDeMeetup << std::endl;
    }
}
