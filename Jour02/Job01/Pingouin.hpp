#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include <string>
#include <iostream>

class Pingouin : public Aquatique, public Terrestre {
private:
    std::string nom;

public:
    // Constructeur
    Pingouin(const std::string& nom, double vitesseNage, double vitesseMarche);

    // Implémentations des méthodes virtuelles
    void nager() const override;
    void marcher() const override;

    // Méthode pour se présenter
    void sePresenter() const;
};

#endif // PINGOUIN_HPP
