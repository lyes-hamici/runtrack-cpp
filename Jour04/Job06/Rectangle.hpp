#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"
#include <iostream>

class Rectangle : public Shape {
public:
    // Implémentation de la méthode draw pour Rectangle
    void draw() const override {
        std::cout << "Drawing a Rectangle" << std::endl;
    }
};

#endif // RECTANGLE_HPP
