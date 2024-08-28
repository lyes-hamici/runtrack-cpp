#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include <string>
#include <vector>
#include <map>
#include <set>
#include <memory>
#include <unordered_map>  // Pour std::unordered_map

class Pingouin : public Aquatique, public Terrestre {
private:
    std::string nom;
    double vitesseGlisse; // Vitesse de glisse en m/s

    // Map pour stocker les compétences et leurs niveaux
    std::map<std::string, int> competences;
    // Set de weak_ptr pour stocker les amis
    std::set<std::weak_ptr<Pingouin>, std::owner_less<std::weak_ptr<Pingouin>>> amis;
    // Unordered_map pour le journal des événements
    std::unordered_map<std::string, std::string> journal;

    // Méthode pour ajouter ce Pingouin au vecteur statique
    void ajouterAuVecteur();
    // Méthode pour retirer ce Pingouin du vecteur statique
    void retirerDuVecteur();

public:
    // Constructeur
    Pingouin(const std::string& nom, double vitesseNage, double vitesseMarche, double vitesseGlisse);

    // Constructeur de copie
    Pingouin(const Pingouin& autre);

    // Opérateur d'affectation
    Pingouin& operator=(const Pingouin& autre);

    // Destructeur
    ~Pingouin() override;

    // Implémentations des méthodes virtuelles
    void nager() const override;
    void marcher() const override;

    // Méthode pour se présenter
    void sePresenter() const;

    // Méthodes d'accès et de modification pour la vitesse de glisse
    double getVitesseGlisse() const;
    void setVitesseGlisse(double vitesse);

    // Méthode pour calculer le temps de parcours de la piste
    double tempsPourParcourirPiste() const;

    // Méthode statique pour afficher le temps de parcours de tous les Pingouins
    static void afficherTempsPiste();

    // Vecteur statique pour stocker tous les Pingouins instanciés
    static std::vector<std::shared_ptr<Pingouin>> tousLesPingouins;

    // Liste statique pour stocker les lieux de rencontre
    static std::vector<std::string> lieuxDeRencontre;

    // Méthodes pour gérer les lieux de rencontre
    static void ajouterLieu(const std::string& lieu);
    static void retirerLieu(const std::string& lieu);
    static void afficherLieux();

    // Méthodes pour gérer les compétences
    void ajouterCompetence(const std::string& competence, int niveau);
    void modifierCompetence(const std::string& competence, int nouveauNiveau);
    void supprimerCompetence(const std::string& competence);
    void listerCompetences() const;

    // Méthodes pour gérer les amis
    void ajouterAmi(const std::shared_ptr<Pingouin>& ami);
    void retirerAmi(const std::shared_ptr<Pingouin>& ami);
    void afficherAmis() const;

    // Méthodes pour gérer le journal
    void ajouterEntreeJournal(const std::string& date, const std::string& description);
    void modifierEntreeJournal(const std::string& date, const std::string& description);
    void supprimerEntreeJournal(const std::string& date);
    void afficherJournal() const;
};

#endif // PINGOUIN_HPP
