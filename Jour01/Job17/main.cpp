#include <iostream>
#include <cstdlib> // Pour std::rand() et std::srand()
#include <ctime>   // Pour std::time()

// Déclaration de l'énumération pour les spécialités
enum Specialite {
    IA,
    Web,
    Logiciel,
    SystemeImmersif,
    Cybersécurite,
    NombreSpecialites // Utilisé pour définir la taille du tableau
};

// Tableau des noms des spécialités
const char* nomsSpecialites[] = {
    "Intelligence Artificielle",
    "Web",
    "Logiciel",
    "Système Immersif",
    "Cybersécurité"
};

// Fonction pour afficher les informations sur une spécialité
void afficherSpecialite(Specialite spec, int* tableauSpecialites) {
    std::cout << nomsSpecialites[spec] << ": "
              << tableauSpecialites[spec] << " places disponibles" << std::endl;
}

int main() {
    // Initialisation du générateur de nombres aléatoires
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Tableau pour stocker le nombre d'étudiants dans chaque spécialité
    int tableauSpecialites[NombreSpecialites];

    // Initialiser le tableau avec des nombres aléatoires entre 12 et 66
    for (int i = 0; i < NombreSpecialites; ++i) {
        tableauSpecialites[i] = std::rand() % 55 + 12; // Entre 12 et 66
    }

    // Parcourir le tableau et afficher les informations sur chaque spécialité
    for (int i = 0; i < NombreSpecialites; ++i) {
        afficherSpecialite(static_cast<Specialite>(i), tableauSpecialites);
    }

    return 0;
}
