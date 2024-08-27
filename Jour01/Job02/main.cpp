#include <iostream>

int main() {
    
    double num1, num2, produit;

    std::cout << "Entrez le premier nombre : ";
    std::cin >> num1;

    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> num2;

    produit = num1 * num2;

    // Afficher le produit
    std::cout << "Le produit de " << num1 << " et " << num2 << " est : " << produit << std::endl;

    return 0;
}
