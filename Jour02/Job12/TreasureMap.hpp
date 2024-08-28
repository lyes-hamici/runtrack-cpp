#ifndef TREASUREMAP_HPP
#define TREASUREMAP_HPP

#include <unordered_set>
#include <unordered_map>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class TreasureMap {
private:
    std::unordered_set<std::string> emplacementsNourriture; // Unordered set pour les emplacements de nourriture

    // Une unordered_map statique pour associer des lieux de meetup à des lieux de pêche
    static std::unordered_map<std::string, std::string> lieuxDeMeetup;

public:
    // Méthode pour ajouter un emplacement de nourriture
    void ajouterEmplacement(const std::string& emplacement);

    // Méthode pour afficher tous les emplacements de nourriture
    void afficherEmplacements() const;
    
    // Méthode pour vérifier si un emplacement est présent
    bool contientEmplacement(const std::string& emplacement) const;

    // Méthode pour se rendre à un lieu de meetup et essayer de trouver un poisson
    void seRendreAuLieuDeMeetup(const std::string& lieuDeMeetup) const;
};

#endif // TREASUREMAP_HPP
