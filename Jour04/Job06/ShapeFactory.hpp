#ifndef SHAPEFACTORY_HPP
#define SHAPEFACTORY_HPP

#include "Shape.hpp"
#include <memory>
#include <string>
#include <unordered_map>
#include <functional>

class ShapeFactory {
public:
    // Méthode statique pour enregistrer une fonction de création de forme
    template <typename T>
    static void registerShape(const std::string& shapeType) {
        getRegistry()[shapeType] = []() -> std::unique_ptr<Shape> {
            return std::make_unique<T>();
        };
    }

    // Méthode statique pour créer une forme basée sur un type de chaîne
    static std::unique_ptr<Shape> createShape(const std::string& shapeType) {
        auto it = getRegistry().find(shapeType);
        if (it != getRegistry().end()) {
            return it->second();
        } else {
            return nullptr; // Type inconnu
        }
    }

private:
    // Fonction pour obtenir le registre des types de formes
    static std::unordered_map<std::string, std::function<std::unique_ptr<Shape>()>>& getRegistry() {
        static std::unordered_map<std::string, std::function<std::unique_ptr<Shape>()>> registry;
        return registry;
    }
};

#endif // SHAPEFACTORY_HPP
