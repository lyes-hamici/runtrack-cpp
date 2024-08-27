#include <iostream>

int main() {
    int n, m;

    // Demander à l'utilisateur d'entrer les deux entiers
    std::cout << "Entrez le premier entier (n): ";
    std::cin >> n;

    std::cout << "Entrez le deuxième entier (m): ";
    std::cin >> m;

    // Afficher les valeurs avant l'échange
    std::cout << "Avant l'échange: n = " << n << ", m = " << m << std::endl;

    // Échanger les valeurs de n et m
    int temp = n;
    n = m;
    m = temp;

    // Afficher les valeurs après l'échange
    std::cout << "Après l'échange: n = " << n << ", m = " << m << std::endl;

    return 0;
}
