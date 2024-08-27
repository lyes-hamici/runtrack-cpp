#include <iostream>
#include <cmath> // Pour utiliser la fonction pow()

int main() {
    int N;

    // Demander à l'utilisateur de taper un entier N
    std::cout << "Entrez un entier N : ";
    std::cin >> N;

    // Vérifier que N est au moins 5 pour avoir une somme valide
    if (N < 5) {
        std::cout << "N doit être au moins 5 pour calculer la somme des cubes de 5 à N." << std::endl;
        return 1; // Quitter le programme avec une erreur
    }

    // Calculer la somme des cubes des entiers de 5 à N
    int somme = 0;
    for (int i = 5; i <= N; ++i) {
        somme += std::pow(i, 3); // Calculer le cube de i et l'ajouter à la somme
    }

    // Afficher le résultat
    std::cout << "La somme des cubes des entiers de 5 à " << N << " est: " << somme << std::endl;

    return 0;
}
