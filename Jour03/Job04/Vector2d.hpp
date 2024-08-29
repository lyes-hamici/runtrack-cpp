#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

#include <iostream>
#include <cmath>

class Vector2d
{
private:
    double x;
    double y;

public:
    // Constructeurs
    Vector2d();
    Vector2d(double x, double y);

    // Accesseurs
    double getX() const;
    double getY() const;

    // Mutateurs
    virtual void setX(double x);  // Marqué comme virtuel
    virtual void setY(double y);  // Marqué comme virtuel

    // Opérateurs
    Vector2d operator+(const Vector2d& other) const;
    Vector2d operator-(const Vector2d& other) const;

    // Méthode pour calculer la distance euclidienne
    double distance(const Vector2d& other) const;
};

#endif // VECTOR2D_HPP
