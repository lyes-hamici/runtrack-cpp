#include <iostream>

// Fonction pour vérifier si le nombre de bits à 1 est pair
bool hasEvenNumberOfOnes(unsigned int n) {
    // Variable pour compter les bits à 1
    int count = 0;

    // Compter les bits à 1
    while (n) {
        count ^= 1; // Toggle le compteur de bits (0 à 1 ou 1 à 0)
        n &= (n - 1); // Réduire le nombre en supprimant le bit le plus à droite
    }

    // Si count est 0, alors le nombre de bits à 1 est pair
    // Si count est 1, alors le nombre de bits à 1 est impair
    return !count; // retourne vrai si count est 0, faux sinon
}

int main() {
    unsigned int nombre;

    // Demander à l'utilisateur de saisir un nombre
    std::cout << "Entrez un entier non signé sur 32 bits: ";
    std::cin >> nombre;

    // Appeler la fonction et afficher le résultat
    if (hasEvenNumberOfOnes(nombre)) {
        std::cout << "Le nombre de bits à 1 est pair." << std::endl;
    } else {
        std::cout << "Le nombre de bits à 1 est impair." << std::endl;
    }

    return 0;
}
