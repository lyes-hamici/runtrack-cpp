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
};

#endif // CHARACTER_HPP
