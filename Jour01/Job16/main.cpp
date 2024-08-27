#include <iostream>
#include <cstring> // Pour la fonction strcmp()

// Fonction pour trier un tableau de chaînes de caractères en utilisant le tri par insertion
void MySortString(char* tableau[], int taille) {
    // On commence à partir du deuxième élément (index 1)
    for (int i = 1; i < taille; ++i) {
        // Sélectionner l'élément à insérer
        char* temp = tableau[i];
        int j = i - 1;

        // Déplacer les éléments du tableau qui sont plus grands que temp vers une position plus élevée
        while (j >= 0 && strcmp(tableau[j], temp) > 0) {
            tableau[j + 1] = tableau[j];
            --j;
        }

        // Placer temp à la bonne position
        tableau[j + 1] = temp;
    }
}

// Fonction pour afficher le tableau de chaînes de caractères
void printArray(char* tableau[], int taille) {
    std::cout << "Tableau trié : " << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << tableau[i] << std::endl;
    }
}

int main() {
    // Exemple d'utilisation de la fonction MySortString
    const int taille = 5;
    char* tableau[taille] = {
        const_cast<char*>("Banane"),
        const_cast<char*>("Pomme"),
        const_cast<char*>("Abricot"),
        const_cast<char*>("Cerise"),
        const_cast<char*>("Date")
    };

    std::cout << "Tableau avant le tri : " << std::endl;
    printArray(tableau, taille);

    // Appeler la fonction pour trier le tableau
    MySortString(tableau, taille);

    // Afficher le tableau trié
    printArray(tableau, taille);

    return 0;
}
