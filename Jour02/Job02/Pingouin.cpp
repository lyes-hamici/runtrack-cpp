#include "Pingouin.hpp"

// Constructeur
Pingouin::Pingouin(const std::string& nom, double vitesseNage, double vitesseMarche, double vitesseGlisse)
    : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom(nom), vitesseGlisse(vitesseGlisse) {}

// Constructeur de copie
Pingouin::Pingouin(const Pingouin& autre)
    : Aquatique(autre.getVitesseNage()), Terrestre(autre.getVitesseMarche()), 
      nom(autre.nom), vitesseGlisse(autre.vitesseGlisse) {}

// Opérateur d'affectation
Pingouin& Pingouin::operator=(const Pingouin& autre) {
    if (this != &autre) {
        Aquatique::setVitesseNage(autre.getVitesseNage());
        Terrestre::setVitesseMarche(autre.getVitesseMarche());
        nom = autre.nom;
        vitesseGlisse = autre.vitesseGlisse;
    }
    return *this;
}

// Implémentation de la méthode nager
void Pingouin::nager() const {
    std::cout << nom << " nage a une vitesse de " << getVitesseNage() << " m/s." << std::endl;
}

// Implémentation de la méthode marcher
void Pingouin::marcher() const {
    std::cout << nom << " marche a une vitesse de " << getVitesseMarche() << " m/s." << std::endl;
}

// Méthode pour se présenter
void Pingouin::sePresenter() const {
    std::cout << "Noot Noot ! Je suis " << nom << "." << std::endl;
}

// Méthodes d'accès et de modification pour la vitesse de glisse
double Pingouin::getVitesseGlisse() const {
    return vitesseGlisse;
}

void Pingouin::setVitesseGlisse(double vitesse) {
    vitesseGlisse = vitesse;
}
