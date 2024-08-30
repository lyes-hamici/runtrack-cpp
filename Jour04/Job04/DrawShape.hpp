#ifndef DRAWSHAPE_HPP
#define DRAWSHAPE_HPP

// Fonction template qui appelle la méthode draw de n'importe quelle classe dérivée de Shape
template <typename T>
void drawShape(const T& shape) {
    shape.draw();
}

#endif // DRAWSHAPE_HPP
