#include <iostream>

int main() {
    int nombre; // Variable pour stocker chaque entier saisi
    double somme = 0; // Variable pour stocker la somme des entiers saisis

    // Demander à l'utilisateur de saisir cinq entiers
    for (int i = 0; i < 5; i++) {
        std::cout << "Entrez un entier (" << i + 1 << "/5): ";
        std::cin >> nombre;
        somme += nombre; // Ajouter l'entier saisi à la somme
    }

    // Calculer la moyenne en divisant la somme par 5
    double moyenne = somme / 5;

    // Afficher la moyenne
    std::cout << "La moyenne des cinq entiers est: " << moyenne << std::endl;

    return 0;
}
