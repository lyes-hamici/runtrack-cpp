#include <iostream>
#include "ShapeFactory.hpp"
#include "drawShape.hpp"

int main() {
    // Créer un cercle
    std::unique_ptr<Shape> circle = ShapeFactory::createShape("Circle");
    if (circle) {
        drawShape(*circle); // Affiche "Drawing a Circle"
    } else {
        std::cout << "Type de forme inconnu" << std::endl;
    }

    // Créer un rectangle
    std::unique_ptr<Shape> rectangle = ShapeFactory::createShape("Rectangle");
    if (rectangle) {
        drawShape(*rectangle); // Affiche "Drawing a Rectangle"
    } else {
        std::cout << "Type de forme inconnu" << std::endl;
    }

    // Tester un type inconnu
    std::unique_ptr<Shape> unknown = ShapeFactory::createShape("Triangle");
    if (unknown) {
        drawShape(*unknown);
    } else {
        std::cout << "Type de forme inconnu" << std::endl;
    }

    return 0;
}
