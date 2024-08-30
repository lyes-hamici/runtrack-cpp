#include <iostream>
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "drawShape.hpp"

int main() {
    Circle circle;
    Rectangle rectangle;

    drawShape(circle);    // Affiche "Drawing a Circle"
    drawShape(rectangle); // Affiche "Drawing a Rectangle"

    return 0;
}
