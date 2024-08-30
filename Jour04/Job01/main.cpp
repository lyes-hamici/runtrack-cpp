#include <iostream>

template <typename T>
T myMax(T a, T b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    // Exemple avec des entiers
    int a = 10;
    int b = 20;
    std::cout << "Le plus grand est: " << myMax(a, b) << std::endl;

    // Exemple avec des flottants
    double x = 10.5;
    double y = 7.3;
    std::cout << "Le plus grand est: " << myMax(x, y) << std::endl;

    // Exemple avec des chaînes de caractères
    std::string str1 = "Hello";
    std::string str2 = "World";
    std::cout << "Le plus grand est: " << myMax(str1, str2) << std::endl;

    return 0;
}
