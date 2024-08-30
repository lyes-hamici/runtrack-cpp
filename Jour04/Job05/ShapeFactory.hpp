#ifndef SHAPEFACTORY_HPP
#define SHAPEFACTORY_HPP

#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <string>
#include <memory>

class ShapeFactory {
public:
    // Méthode statique pour créer des objets Shape en fonction du type fourni
    static std::unique_ptr<Shape> createShape(const std::string& shapeType) {
        if (shapeType == "Circle") {
            return std::make_unique<Circle>();
        } else if (shapeType == "Rectangle") {
            return std::make_unique<Rectangle>();
        } else {
            return nullptr; // Type inconnu
        }
    }
};

#endif // SHAPEFACTORY_HPP
