#include <iostream>

// Fonction pour ajouter un élément au tableau
void addElement(int*& tableau, int& tailleActuelle, int nouvelElement) {
    // Allouer un nouveau tableau avec une taille augmentée de 1
    int* nouveauTableau = new int[tailleActuelle + 1];
    
    // Copier les éléments de l'ancien tableau dans le nouveau
    for (int i = 0; i < tailleActuelle; ++i) {
        nouveauTableau[i] = tableau[i];
    }

    // Ajouter le nouvel élément à la fin du nouveau tableau
    nouveauTableau[tailleActuelle] = nouvelElement;
    
    // Libérer la mémoire de l'ancien tableau
    delete[] tableau;
    
    // Mettre à jour le pointeur du tableau pour qu'il pointe vers le nouveau tableau
    tableau = nouveauTableau;
    
    // Augmenter la taille actuelle
    ++tailleActuelle;
}

// Fonction pour afficher les éléments du tableau
void showTable(const int* tableau, int taille) {
    std::cout << "Tableau : ";
    for (int i = 0; i < taille; ++i) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Capacité initiale du tableau
    int capaciteInitiale = 5;
    
    // Création d'un tableau d'entiers vide avec une capacité initiale
    int* tableau = new int[capaciteInitiale];
    int tailleActuelle = 0; // Taille actuelle du tableau (nombre d'éléments)

    // Ajouter plusieurs entiers au tableau
    addElement(tableau, tailleActuelle, 10);
    addElement(tableau, tailleActuelle, 20);
    addElement(tableau, tailleActuelle, 30);
    addElement(tableau, tailleActuelle, 40);
    addElement(tableau, tailleActuelle, 50);

    // Afficher le tableau
    showTable(tableau, tailleActuelle);

    // Libérer la mémoire du tableau avant de terminer
    delete[] tableau;

    return 0;
}
