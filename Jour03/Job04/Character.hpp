#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "GameObject.hpp"
#include <iostream>
#include <string>

class Character : public GameObject
{
private:
    std::string name;
    int healthPoints;

public:
    // Constructeurs
    Character();
    Character(const std::string& name, int healthPoints, double x, double y);

    // Méthodes
    void draw() const override;
    void update() override;

    bool isAlive() const;
    void takeDamage(int damage);  // Nouvelle méthode pour recevoir des dégâts
};


#endif // CHARACTER_HPP
