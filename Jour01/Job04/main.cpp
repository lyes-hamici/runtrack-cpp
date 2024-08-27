#include <iostream>

int main() {
    
    int num1;

    std::cout << "Entrez un nombre : ";
    std::cin >> num1;


    if (num1 % 2 == 0)
    {   
        std::cout << "<-------------------------> " <<std::endl;
        std::cout << "Paire " <<std::endl;
        std::cout << "<-------------------------> " <<std::endl;
    }
    else
    {
        std::cout << "<-------------------------> " <<std::endl;
        std::cout << "Impaire " <<std::endl;
        std::cout << "<-------------------------> " <<std::endl;
    }
    


    return 0;
}