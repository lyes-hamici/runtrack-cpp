#include <iostream>
#include "Box.hpp"

int main() {
    // Box pour un entier
    int value = 42;
    Box<int> intBox(value);
    std::cout << "Contenu de intBox: " << intBox.getValue() << std::endl;

    // Box pour un pointeur d'entier
    Box<int*> ptrBox(&value);
    std::cout << "Contenu de ptrBox (pointeur): " << ptrBox.getValue() << std::endl;
    std::cout << "Contenu dereference de ptrBox: " << ptrBox.getDereferencedValue() << std::endl;

    // Modifier la valeur par l'intermédiaire du pointeur
    int newValue = 100;
    ptrBox.setValue(&newValue);
    std::cout << "Nouveau contenu dereference de ptrBox: " << ptrBox.getDereferencedValue() << std::endl;

    return 0;
}
