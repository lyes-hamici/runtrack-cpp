#include "TreasureMap.hpp"

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
