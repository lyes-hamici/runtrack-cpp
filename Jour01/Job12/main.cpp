#include <iostream>

// Fonction pour doubler chaque élément du tableau et retourner la somme des éléments doublés
int doubleArray(int* tableau, int taille) {
    int somme = 0; // Variable pour stocker la somme des éléments doublés

    // Parcourir le tableau et doubler chaque élément
    for (int i = 0; i < taille; i++) {
        *(tableau + i) *= 2; // Doubler l'élément en utilisant des pointeurs
        somme += *(tableau + i); // Ajouter l'élément doublé à la somme
    }

    return somme; // Retourner la somme des éléments doublés
}

// Fonction pour afficher les éléments du tableau
void printArray(int* tableau, int taille) {
    std::cout << "Tableau après doublage : ";
    for (int i = 0; i < taille; i++) {
        std::cout << *(tableau + i) << " "; // Afficher chaque élément du tableau en utilisant des pointeurs
    }
    std::cout << std::endl;
}

int main() {
    // Exemple d'utilisation des fonctions
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    // Appel de la fonction pour doubler les éléments et obtenir la somme
    int somme = doubleArray(tableau, taille);

    // Afficher la somme des éléments doublés
    std::cout << "La somme des éléments doublés est : " << somme << std::endl;

    // Appel de la fonction pour afficher les éléments doublés
    printArray(tableau, taille);

    return 0;
}
