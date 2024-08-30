#ifndef DRAGON_HPP
#define DRAGON_HPP

#include "Enemy.hpp"

class Dragon : public Enemy {
public:
    void attack() const override {
        std::cout << "Dragon attacks with fire breath!" << std::endl;
    }
};

#endif // DRAGON_HPP
