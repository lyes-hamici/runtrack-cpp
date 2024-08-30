#ifndef PRINT_HPP
#define PRINT_HPP

#include <iostream>

// Fonction template de base pour un seul argument
template <typename T>
void print(const T& value) {
    std::cout << value << std::endl;
}

// Fonction template variadique pour plusieurs arguments
template <typename T, typename... Args>
void print(const T& first, const Args&... args) {
    std::cout <<first << " , ";
    print(args...); // Appel récursif avec le reste des arguments
}

#endif // PRINT_HPP
