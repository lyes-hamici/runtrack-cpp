#include <iostream>

// Fonction constexpr pour calculer le N-ième terme de la suite de Fibonacci
constexpr int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Fonction pour vérifier si le nombre de bits à 1 dans un entier est pair
bool hasEvenNumberOfOnes(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1; // Ajouter 1 au compteur si le bit le moins significatif est 1
        n >>= 1;        // Décaler les bits vers la droite
    }
    return (count % 2 == 0); // Retourner vrai si le nombre de bits à 1 est pair
}

int main() {
    // Afficher les dix premiers termes de la suite de Fibonacci
    std::cout << "Les dix premiers termes de la suite de Fibonacci sont:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;

    // Test de la fonction hasEvenNumberOfOnes
    unsigned int nombre;
    std::cout << "Entrez un entier non signé sur 32 bits: ";
    std::cin >> nombre;

    if (hasEvenNumberOfOnes(nombre)) {
        std::cout << "Le nombre de bits à 1 est pair." << std::endl;
    } else {
        std::cout << "Le nombre de bits à 1 est impair." << std::endl;
    }

    return 0;
}
