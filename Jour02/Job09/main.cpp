#include <iostream>

// Fonction pour trouver le plus petit élément d'un tableau en utilisant des pointeurs
int trouverPlusPetit(int* tableau, int taille) {
    int* ptr = tableau; // Pointeur pour parcourir le tableau
    int plusPetit = *ptr; // Initialiser le plus petit élément avec le premier élément du tableau

    // Parcourir le tableau à l'aide du pointeur
    for (int i = 1; i < taille; i++) {
        ptr++; // Avancer le pointeur vers le prochain élément
        if (*ptr < plusPetit) {
            plusPetit = *ptr; // Mettre à jour le plus petit élément si nécessaire
        }
    }

    return plusPetit; // Retourner le plus petit élément trouvé
}

int main() {
    // Exemple d'utilisation de la fonction
    int tableau[] = {12, 5, 7, 3, 9, 1, 8};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    // Appel de la fonction et affichage du résultat
    int plusPetitElement = trouverPlusPetit(tableau, taille);
    std::cout << "Le plus petit élément du tableau est: " << plusPetitElement << std::endl;

    return 0;
}
