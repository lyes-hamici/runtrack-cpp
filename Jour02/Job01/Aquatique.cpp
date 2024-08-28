#include "Aquatique.hpp"

// Constructeur
Aquatique::Aquatique(double vitesse) : vitesseNage(vitesse) {}


double Aquatique::getVitesseNage() const {
    return vitesseNage;
}


void Aquatique::setVitesseNage(double vitesse) {
    vitesseNage = vitesse;
}

// Méthode pour simuler la nage
void Aquatique::nager() const {
    std::cout << "Je nage a une vitesse de " << vitesseNage << " m/s." << std::endl;
}
