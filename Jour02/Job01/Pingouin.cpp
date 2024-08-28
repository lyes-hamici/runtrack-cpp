#include "Pingouin.hpp"

// Constructeur
Pingouin::Pingouin(const std::string& nom, double vitesseNage, double vitesseMarche)
    : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom(nom) {}

// Implémentation de la méthode nage
void Pingouin::nager() const {
    std::cout << nom << " nage a une vitesse de " << getVitesseNage() << " m/s." << std::endl;
}

// Implémentation de la méthode marcher
void Pingouin::marcher() const {
    std::cout << nom << " marche a une vitesse de " << getVitesseMarche() << " m/s." << std::endl;
}

// Méthode pour se présenter
void Pingouin::sePresenter() const {
    std::cout << "Noot Noot ! " << nom
              <<  std::endl;
}
