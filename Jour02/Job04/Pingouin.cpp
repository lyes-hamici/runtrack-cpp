#include "Pingouin.hpp"
#include <algorithm> // Pour std::remove
#include <iostream>

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

// Méthode pour calculer le temps de parcours de la piste
double Pingouin::tempsPourParcourirPiste() const {
    // Distance et vitesses
    double distanceGlisse = 15.0; // mètres
    double distancePlat = 20.0;   // mètres
    double distanceNage = 50.0;   // mètres
    double vitesseGlisse = getVitesseGlisse(); // m/s
    double vitesseMarche = getVitesseMarche(); // m/s
    double vitesseNage = getVitesseNage();     // m/s

    // Calcul des temps pour chaque segment de la piste
    double tempsGlisse = distanceGlisse / vitesseGlisse;
    double tempsPlatMarche = distancePlat / vitesseMarche;
    double tempsNage = distanceNage / vitesseNage;
    double tempsPlatMarcheFinal = distancePlat / vitesseMarche;

    // Temps total
    return tempsGlisse + tempsPlatMarche + tempsNage + tempsPlatMarcheFinal;
}

// Méthode statique pour afficher le temps de parcours de tous les Pingouins
void Pingouin::afficherTempsPiste() {
    for (const auto& p : tousLesPingouins) {
        std::cout << p->nom << " met " << p->tempsPourParcourirPiste() << " secondes pour parcourir la piste." << std::endl;
    }
}
