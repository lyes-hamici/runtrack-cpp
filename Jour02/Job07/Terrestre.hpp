#ifndef TERRESTRE_HPP
#define TERRESTRE_HPP

#include <iostream>

class Terrestre {
private:
    double vitesseMarche; // Vitesse de marche en m/s

public:
    // Constructeur
    Terrestre(double vitesse = 0.0);

    // Destructeur virtuel pour assurer la destruction correcte des objets dérivés
    virtual ~Terrestre() = default;

    // Méthodes d'accès
    double getVitesseMarche() const;
    void setVitesseMarche(double vitesse);

    // Méthode virtuelle pure pour la marche
    virtual void marcher() const = 0;
};

#endif // TERRESTRE_HPP
