#include <iostream>

// Fonction pour trouver le plus petit élément dans un tableau de pointeurs d'entiers
int trouverPlusPetit(int** tableau, int taille) {
    int* plusPetit = tableau[0]; // Initialiser le plus petit élément avec le premier élément pointé

    // Parcourir le tableau de pointeurs
    for (int i = 1; i < taille; i++) {
        if (*tableau[i] < *plusPetit) {
            plusPetit = tableau[i]; // Mettre à jour le plus petit élément si nécessaire
        }
    }

    return *plusPetit; // Retourner la valeur du plus petit élément trouvé
}

int main() {
    // Exemple d'utilisation de la fonction
    int a = 12, b = 5, c = 7, d = 3, e = 9, f = 1, g = 8;
    int* tableau[] = {&a, &b, &c, &d, &e, &f, &g};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    // Appel de la fonction et affichage du résultat
    int plusPetitElement = trouverPlusPetit(tableau, taille);
    std::cout << "Le plus petit élément du tableau est: " << plusPetitElement << std::endl;

    return 0;
}
