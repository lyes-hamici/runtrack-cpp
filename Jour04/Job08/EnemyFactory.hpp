#ifndef ENEMYFACTORY_HPP
#define ENEMYFACTORY_HPP

#include "Enemy.hpp"
#include "Goblin.hpp"
#include "Ogre.hpp"
#include "Dragon.hpp"
#include <map>
#include <functional>
#include <memory>
#include <string>

class EnemyFactory {
public:
    EnemyFactory() {
        // Initialisation de la map avec les types d'ennemis et leurs fonctions créatrices
        factoryMap["Goblin"] = []() -> std::unique_ptr<Enemy> {
            return std::make_unique<Goblin>();
        };
        factoryMap["Ogre"] = []() -> std::unique_ptr<Enemy> {
            return std::make_unique<Ogre>();
        };
        factoryMap["Dragon"] = []() -> std::unique_ptr<Enemy> {
            return std::make_unique<Dragon>();
        };
    }

    // Méthode pour créer un ennemi basé sur une clé de type
    std::unique_ptr<Enemy> createEnemy(const std::string& type) const {
        auto it = factoryMap.find(type);
        if (it != factoryMap.end()) {
            return it->second(); // Appel de la fonction créatrice
        } else {
            return nullptr; // Type inconnu
        }
    }

private:
    std::map<std::string, std::function<std::unique_ptr<Enemy>()>> factoryMap;
};

#endif // ENEMYFACTORY_HPP
