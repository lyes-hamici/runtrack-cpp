#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include <string>

class Pingouin : public Aquatique, public Terrestre {
private:
    std::string nom;
    double vitesseGlisse; // Vitesse de glisse en m/s

public:
    // Constructeur
    Pingouin(const std::string& nom, double vitesseNage, double vitesseMarche, double vitesseGlisse);

    // Constructeur de copie
    Pingouin(const Pingouin& autre);

    // Opérateur d'affectation
    Pingouin& operator=(const Pingouin& autre);

    // Destructeur
    ~Pingouin() override = default;

    // Implémentations des méthodes virtuelles
    void nager() const override;
    void marcher() const override;

    // Méthode pour se présenter
    void sePresenter() const;

    // Méthodes d'accès et de modification pour la vitesse de glisse
    double getVitesseGlisse() const;
    void setVitesseGlisse(double vitesse);
};

#endif // PINGOUIN_HPP
