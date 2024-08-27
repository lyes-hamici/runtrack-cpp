#include <iostream>

int main() {
    double prixHTParKilo; // Prix HT par kilo de carottes
    double nombreDeKilos; // Nombre de kilos de carottes
    double tauxTVA;       // Taux de TVA en pourcentage

    // Demander à l'utilisateur d'entrer le prix HT par kilo
    std::cout << "Entrez le prix HT d'un kilo de carottes: ";
    std::cin >> prixHTParKilo;

    // Demander à l'utilisateur d'entrer le nombre de kilos
    std::cout << "Entrez le nombre de kilos de carottes: ";
    std::cin >> nombreDeKilos;

    // Demander à l'utilisateur d'entrer le taux de TVA
    std::cout << "Entrez le taux de TVA (en %): ";
    std::cin >> tauxTVA;

    // Calculer le prix total HT
    double prixTotalHT = prixHTParKilo * nombreDeKilos;

    // Calculer le montant de la TVA
    double montantTVA = prixTotalHT * (tauxTVA / 100);

    // Calculer le prix TTC
    double prixTTC = prixTotalHT + montantTVA;

    // Afficher le prix TTC
    std::cout << "Le prix TTC pour " << nombreDeKilos << " kilos de carottes est: " << prixTTC << " euros" << std::endl;

    return 0;
}
