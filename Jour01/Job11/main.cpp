#include <iostream>

// Fonction pour échanger les valeurs de deux entiers en utilisant des références
void swapValues(int& a, int& b) {
    int temp = a; // Stocker la valeur de 'a' dans une variable temporaire
    a = b;        // Copier la valeur de 'b' dans 'a'
    b = temp;     // Copier la valeur temporaire (ancienne valeur de 'a') dans 'b'
}

int main() {
    // Exemple d'utilisation de la fonction swapValues
    int x = 10;
    int y = 20;

    std::cout << "Avant l'échange : x = " << x << ", y = " << y << std::endl;

    // Appel de la fonction pour échanger les valeurs de x et y
    swapValues(x, y);

    std::cout << "Après l'échange : x = " << x << ", y = " << y << std::endl;

    return 0;
}
