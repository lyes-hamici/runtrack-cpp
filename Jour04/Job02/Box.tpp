#include "Box.hpp"

// Constructeur par défaut
template <typename T>
Box<T>::Box() : element(T()) {}

// Constructeur avec un paramètre
template <typename T>
Box<T>::Box(const T& value) : element(value) {}

// Setter
template <typename T>
void Box<T>::setValue(const T& value) {
    element = value;
}

// Getter
template <typename T>
T Box<T>::getValue() const {
    return element;
}
