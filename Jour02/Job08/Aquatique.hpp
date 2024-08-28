#ifndef AQUATIQUE_HPP
#define AQUATIQUE_HPP

#include <iostream>

class Aquatique {
private:
    double vitesseNage; // Vitesse de nage en m/s

public:
    // Constructeur
    Aquatique(double vitesse = 0.0);

    // Destructeur virtuel pour assurer la destruction correcte des objets dérivés
    virtual ~Aquatique() = default;

    // Méthodes d'accès
    double getVitesseNage() const;
    void setVitesseNage(double vitesse);

    // Méthode virtuelle pure pour la nage
    virtual void nager() const = 0;
};

#endif // AQUATIQUE_HPP
