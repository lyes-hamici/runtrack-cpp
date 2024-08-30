#include "Box.hpp"

// Implémentation générale de la classe template Box

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

// Implémentation de la spécialisation pour les pointeurs

// Constructeur par défaut
template <typename T>
Box<T*>::Box() : element(nullptr) {}

// Constructeur avec un paramètre pointeur
template <typename T>
Box<T*>::Box(T* ptr) : element(ptr) {}

// Setter
template <typename T>
void Box<T*>::setValue(T* ptr) {
    element = ptr;
}

// Getter
template <typename T>
T* Box<T*>::getValue() const {
    return element;
}

// Méthode pour accéder à l'élément pointé
template <typename T>
T& Box<T*>::getDereferencedValue() const {
    return *element;
}
