#ifndef DECOR_HPP
#define DECOR_HPP

#include "GameObject.hpp"
#include <iostream>

class Decor : public GameObject
{
private:
    double originalX;
    double originalY;

public:
    // Constructeurs
    Decor();
    Decor(double x, double y);

    // Méthodes
    void draw() const override;
    void update() override;

    // Surcharge des méthodes de Vector2d pour empêcher la modification des coordonnées
    void setX(double x) override;
    void setY(double y) override;
};

#endif // DECOR_HPP
