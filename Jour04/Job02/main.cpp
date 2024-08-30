#include <iostream>
#include "Box.hpp"

int main() {
    // Box pour un entier
    Box<int> intBox(10);
    std::cout << "Contenu de intBox: " << intBox.getValue() << std::endl;

    // Modifier la valeur
    intBox.setValue(20);
    std::cout << "Contenu de intBox apres modification: " << intBox.getValue() << std::endl;

    // Box pour un double
    Box<double> doubleBox(3.14);
    std::cout << "Contenu de doubleBox: " << doubleBox.getValue() << std::endl;

    // Box pour une chaîne de caractères
    Box<std::string> stringBox("Hello, World!");
    std::cout << "Contenu de stringBox: " << stringBox.getValue() << std::endl;

    return 0;
}
