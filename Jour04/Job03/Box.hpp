#ifndef BOX_HPP
#define BOX_HPP

// Déclaration générale de la classe template Box
template <typename T>
class Box {
public:
    // Constructeur par défaut
    Box();

    // Constructeur avec un paramètre pour initialiser l'élément
    Box(const T& value);

    // Setter pour modifier l'élément
    void setValue(const T& value);

    // Getter pour accéder à l'élément
    T getValue() const;

private:
    T element; // Élément de type T
};

// Spécialisation de la classe template Box pour les pointeurs
template <typename T>
class Box<T*> {
public:
    // Constructeur par défaut
    Box();

    // Constructeur avec un paramètre pour initialiser le pointeur
    Box(T* ptr);

    // Setter pour modifier le pointeur
    void setValue(T* ptr);

    // Getter pour accéder au pointeur
    T* getValue() const;

    // Méthode pour accéder à l'élément pointé
    T& getDereferencedValue() const;

private:
    T* element; // Pointeur de type T*
};

// Inclusion de la définition des méthodes template
#include "Box.tpp"

#endif // BOX_HPP
