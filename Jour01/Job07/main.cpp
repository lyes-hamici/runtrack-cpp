#include <iostream>

int main() {
    int nombre, nombreInverse = 0;

    // Demander à l'utilisateur d'entrer un nombre
    std::cout << "Entrez un nombre: ";
    std::cin >> nombre;

    // Inverser le nombre
    while (nombre != 0) {
        int dernierChiffre = nombre % 10;       // Extraire le dernier chiffre
        nombreInverse = nombreInverse * 10 + dernierChiffre; // Ajouter ce chiffre à la position correcte
        nombre /= 10;                          // Retirer le dernier chiffre du nombre original
    }

    // Afficher le nombre inversé
    std::cout << "Le nombre inversé est: " << nombreInverse << std::endl;

    return 0;
}
