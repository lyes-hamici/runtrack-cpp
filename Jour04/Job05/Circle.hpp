#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"
#include <iostream>

class Circle : public Shape {
public:
    // Implémentation de la méthode draw pour Circle
    void draw() const override {
        std::cout << "Drawing a Circle" << std::endl;
    }
};

#endif // CIRCLE_HPP
