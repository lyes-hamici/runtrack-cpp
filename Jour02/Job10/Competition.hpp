#ifndef COMPETITION_HPP
#define COMPETITION_HPP

#include <iostream>
#include <map>
#include <string>

class Competition {
private:
    std::multimap<double, std::string> tempsDeCompetition; // Multimap associant le temps à un nom

public:
    // Méthode pour ajouter un temps de compétition avec le nom du pingouin
    void ajouterTemps(const std::string& nom, double temps);

    // Méthode pour afficher les temps de compétition triés avec les noms
    void afficherTemps() const;
};

#endif // COMPETITION_HPP
