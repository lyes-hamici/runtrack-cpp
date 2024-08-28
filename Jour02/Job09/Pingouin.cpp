#include "Pingouin.hpp"
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <iterator>

// Initialisation des vecteurs statiques
std::vector<std::shared_ptr<Pingouin>> Pingouin::tousLesPingouins;
std::vector<std::string> Pingouin::lieuxDeRencontre;

// Constructeur
Pingouin::Pingouin(const std::string& nom, double vitesseNage, double vitesseMarche, double vitesseGlisse)
    : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom(nom), vitesseGlisse(vitesseGlisse) {
    ajouterAuVecteur();
}

// Constructeur de copie
Pingouin::Pingouin(const Pingouin& autre)
    : Aquatique(autre.getVitesseNage()), Terrestre(autre.getVitesseMarche()), 
      nom(autre.nom), vitesseGlisse(autre.vitesseGlisse), competences(autre.competences), amis(autre.amis), journal(autre.journal) {
    ajouterAuVecteur();
}

// Opérateur d'affectation
Pingouin& Pingouin::operator=(const Pingouin& autre) {
    if (this != &autre) {
        retirerDuVecteur();
        Aquatique::setVitesseNage(autre.getVitesseNage());
        Terrestre::setVitesseMarche(autre.getVitesseMarche());
        nom = autre.nom;
        vitesseGlisse = autre.vitesseGlisse;
        competences = autre.competences;
        amis = autre.amis;
        journal = autre.journal;
        ajouterAuVecteur();
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
    std::sort(tousLesPingouins.begin(), tousLesPingouins.end(),
        [](const std::shared_ptr<Pingouin>& a, const std::shared_ptr<Pingouin>& b) {
            return a->tempsPourParcourirPiste() < b->tempsPourParcourirPiste();
        });

    for (const auto& p : tousLesPingouins) {
        std::cout << p->nom << " met " << p->tempsPourParcourirPiste() << " secondes pour parcourir la piste." << std::endl;
    }
}

// Méthode pour ajouter un lieu de rencontre
void Pingouin::ajouterLieu(const std::string& lieu) {
    if (std::find(lieuxDeRencontre.begin(), lieuxDeRencontre.end(), lieu) == lieuxDeRencontre.end()) {
        lieuxDeRencontre.push_back(lieu);
    } else {
        std::cout << "Le lieu \"" << lieu << "\" est déjà présent." << std::endl;
    }
}

// Méthode pour retirer un lieu de rencontre
void Pingouin::retirerLieu(const std::string& lieu) {
    auto it = std::remove(lieuxDeRencontre.begin(), lieuxDeRencontre.end(), lieu);
    if (it != lieuxDeRencontre.end()) {
        lieuxDeRencontre.erase(it, lieuxDeRencontre.end());
    } else {
        std::cout << "Le lieu \"" << lieu << "\" n'est pas dans la liste." << std::endl;
    }
}

// Méthode pour afficher tous les lieux de rencontre
void Pingouin::afficherLieux() {
    if (lieuxDeRencontre.empty()) {
        std::cout << "Aucun lieu de rencontre enregistré." << std::endl;
    } else {
        std::cout << "Lieux de rencontre :" << std::endl;
        for (const auto& lieu : lieuxDeRencontre) {
            std::cout << "- " << lieu << std::endl;
        }
    }
}

// Méthode pour ajouter une compétence
void Pingouin::ajouterCompetence(const std::string& competence, int niveau) {
    competences[competence] = niveau;
}

// Méthode pour modifier le niveau d'une compétence
void Pingouin::modifierCompetence(const std::string& competence, int nouveauNiveau) {
    auto it = competences.find(competence);
    if (it != competences.end()) {
        it->second = nouveauNiveau;
    } else {
        std::cout << "La compétence \"" << competence << "\" n'existe pas." << std::endl;
    }
}

// Méthode pour supprimer une compétence
void Pingouin::supprimerCompetence(const std::string& competence) {
    auto it = competences.find(competence);
    if (it != competences.end()) {
        competences.erase(it);
    } else {
        std::cout << "La compétence \"" << competence << "\" n'existe pas." << std::endl;
    }
}

// Méthode pour lister toutes les compétences
void Pingouin::listerCompetences() const {
    if (competences.empty()) {
        std::cout << "Aucune compétence enregistrée." << std::endl;
    } else {
        std::cout << "Compétences de " << nom << ":" << std::endl;
        for (const auto& pair : competences) {
            std::cout << "- " << pair.first << ": Niveau " << pair.second << std::endl;
        }
    }
}

// Méthode pour ajouter un ami
void Pingouin::ajouterAmi(const std::shared_ptr<Pingouin>& ami) {
    if (ami) {
        amis.insert(ami);
    }
}

// Méthode pour retirer un ami
void Pingouin::retirerAmi(const std::shared_ptr<Pingouin>& ami) {
    if (ami) {
        amis.erase(ami);
    }
}

// Méthode pour afficher les amis
void Pingouin::afficherAmis() const {
    std::cout << "Amis de " << nom << ":" << std::endl;
    for (const auto& weakAmi : amis) {
        if (auto ami = weakAmi.lock()) { // Convertit std::weak_ptr en std::shared_ptr
            std::cout << "- " << ami->nom << std::endl;
        }
    }
}

// Méthode pour ajouter une entrée au journal
void Pingouin::ajouterEntreeJournal(const std::string& date, const std::string& description) {
    journal[date] = description;
}

// Méthode pour modifier une entrée du journal
void Pingouin::modifierEntreeJournal(const std::string& date, const std::string& description) {
    auto it = journal.find(date);
    if (it != journal.end()) {
        it->second = description;
    } else {
        std::cout << "Aucune entrée pour la date \"" << date << "\"." << std::endl;
    }
}

// Méthode pour supprimer une entrée du journal
void Pingouin::supprimerEntreeJournal(const std::string& date) {
    auto it = journal.find(date);
    if (it != journal.end()) {
        journal.erase(it);
    } else {
        std::cout << "Aucune entrée pour la date \"" << date << "\"." << std::endl;
    }
}

// Méthode pour afficher le journal
void Pingouin::afficherJournal() const {
    if (journal.empty()) {
        std::cout << "Aucune entrée dans le journal." << std::endl;
    } else {
        std::cout << "Journal de " << nom << ":" << std::endl;
        for (const auto& entry : journal) {
            std::cout << entry.first << ": " << entry.second << std::endl;
        }
    }
}
