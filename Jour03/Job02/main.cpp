#include <iostream>
#include "Vector2d.hpp"

int main()
{
    // Création de deux vecteurs
    Vector2d v1(3.0, 4.0);
    Vector2d v2(1.0, 2.0);

    // Affichage des coordonnées des vecteurs
    std::cout << "Vecteur v1: (" << v1.getX() << ", " << v1.getY() << ")" << std::endl;
    std::cout << "Vecteur v2: (" << v2.getX() << ", " << v2.getY() << ")" << std::endl;

    // Addition des vecteurs
    Vector2d v3 = v1 + v2;
    std::cout << "Addition v1 + v2 = (" << v3.getX() << ", " << v3.getY() << ")" << std::endl;

    // Soustraction des vecteurs
    Vector2d v4 = v1 - v2;
    std::cout << "Soustraction v1 - v2 = (" << v4.getX() << ", " << v4.getY() << ")" << std::endl;

    // Calcul de la distance entre v1 et v2
    double dist = v1.distance(v2);
    std::cout << "Distance entre v1 et v2 = " << dist << std::endl;

    // Modifications des coordonnées de v1
    v1.setX(7.0);
    v1.setY(8.0);
    std::cout << "Nouvelles coordonnees de v1: (" << v1.getX() << ", " << v1.getY() << ")" << std::endl;

    return 0;
}
