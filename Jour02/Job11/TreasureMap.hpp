#ifndef TREASUREMAP_HPP
#define TREASUREMAP_HPP

#include <unordered_set>
#include <string>
#include <iostream>

class TreasureMap {
private:
    std::unordered_set<std::string> emplacementsNourriture; // Unordered set pour les emplacements de nourriture

public:
    // Méthode pour ajouter un emplacement de nourriture
    void ajouterEmplacement(const std::string& emplacement);

    // Méthode pour afficher tous les emplacements de nourriture
    void afficherEmplacements() const;
    
    // Méthode pour vérifier si un emplacement est présent
    bool contientEmplacement(const std::string& emplacement) const;
};

#endif // TREASUREMAP_HPP
