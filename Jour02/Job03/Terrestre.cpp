#include "Terrestre.hpp"

// Constructeur
Terrestre::Terrestre(double vitesse) : vitesseMarche(vitesse) {}


double Terrestre::getVitesseMarche() const {
    return vitesseMarche;
}


void Terrestre::setVitesseMarche(double vitesse) {
    vitesseMarche = vitesse;
}

// Méthode pour simuler la nage
void Terrestre::marcher() const {
    std::cout << "Je marche a une vitesse de " << vitesseMarche << " m/s." << std::endl;
}
