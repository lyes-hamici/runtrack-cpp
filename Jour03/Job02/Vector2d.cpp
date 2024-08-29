#include "Vector2d.hpp"

// Constructeurs
Vector2d::Vector2d() : x(0), y(0) {}

Vector2d::Vector2d(double x, double y) : x(x), y(y) {}

// Accesseurs
double Vector2d::getX() const
{
    return x;
}

double Vector2d::getY() const
{
    return y;
}

// Mutateurs
void Vector2d::setX(double x)
{
    this->x = x;
}

void Vector2d::setY(double y)
{
    this->y = y;
}

// Surcharge de l'opérateur +
Vector2d Vector2d::operator+(const Vector2d& other) const
{
    return Vector2d(this->x + other.x, this->y + other.y);
}

// Surcharge de l'opérateur -
Vector2d Vector2d::operator-(const Vector2d& other) const
{
    return Vector2d(this->x - other.x, this->y - other.y);
}

// Méthode pour calculer la distance euclidienne entre deux vecteurs
double Vector2d::distance(const Vector2d& other) const
{
    double dx = this->x - other.x;
    double dy = this->y - other.y;
    return std::sqrt(dx * dx + dy * dy);
}
