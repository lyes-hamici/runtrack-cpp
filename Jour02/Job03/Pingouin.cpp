#include "Pingouin.hpp"
#include <algorithm> // Pour std::remove

// Initialisation du vecteur statique
std::vector<std::shared_ptr<Pingouin>> Pingouin::tousLesPingouins;

// Constructeur
Pingouin::Pingouin(const std::string& nom, double vitesseNage, double vitesseMarche, double vitesseGlisse)
    : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom(nom), vitesseGlisse(vitesseGlisse) {
    ajouterAuVecteur();
}

// Constructeur de copie
Pingouin::Pingouin(const Pingouin& autre)
    : Aquatique(autre.getVitesseNage()), Terrestre(autre.getVitesseMarche()), 
      nom(autre.nom), vitesseGlisse(autre.vitesseGlisse) {
    ajouterAuVecteur();
}

// Opérateur d'affectation
Pingouin& Pingouin::operator=(const Pingouin& autre) {
    if (this != &autre) {
        retirerDuVecteur(); // Retirer l'ancien objet du vecteur
        Aquatique::setVitesseNage(autre.getVitesseNage());
        Terrestre::setVitesseMarche(autre.getVitesseMarche());
        nom = autre.nom;
        vitesseGlisse = autre.vitesseGlisse;
        ajouterAuVecteur(); // Ajouter le nouvel objet au vecteur
    }
    return *this;
}

// Destructeur
Pingouin::~Pingouin() {
    retirerDuVecteur();
}

// Méthode pour ajouter ce Pingouin au vecteur statique
void Pingouin::ajouterAuVecteur() {
    tousLesPingouins.push_back(std::shared_ptr<Pingouin>(this));
}

// Méthode pour retirer ce Pingouin du vecteur statique
void Pingouin::retirerDuVecteur() {
    auto it = std::remove_if(tousLesPingouins.begin(), tousLesPingouins.end(),
        [this](const std::shared_ptr<Pingouin>& ptr) {
            return ptr.get() == this;
        });
    tousLesPingouins.erase(it, tousLesPingouins.end());
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
