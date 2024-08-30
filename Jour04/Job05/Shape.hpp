#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
public:
    virtual ~Shape() = default;

    // Méthode virtuelle pure pour dessiner la forme
    virtual void draw() const = 0;
};

#endif // SHAPE_HPP
