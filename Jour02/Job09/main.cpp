#include "Pingouin.hpp"
#include <iostream>

int main() {
    {
        // Création de quelques objets Pingouin , aurez vous toutes les réference ?
        auto p1 = std::make_shared<Pingouin>("Pingu", 2.5, 1.0, 5.0);
        auto p2 = std::make_shared<Pingouin>("Kowalski", 3.0, 5.0, 4.5);
        auto p3 = std::make_shared<Pingouin>("Rico", 3.5, 1.2, 3.5);
        auto p4 = std::make_shared<Pingouin>("Soldat", 5.0, 1.2, 6.5);
        auto p5 = std::make_shared<Pingouin>("Commandant", 6.0, 1.2, 2.5);
        auto p6 = std::make_shared<Pingouin>("Sifli", 2.0, 0.5, 2.0);

        // Ajouter des entrées au journal
        p1->ajouterEntreeJournal("2024-08-28", "Noot , Noot ! Noot , Noot !");
        p1->ajouterEntreeJournal("2024-08-29", "Noot , Noot , Noot , Noot ! Noot , Noot , Noot , Noot ?!?!?!");

        // Afficher le journal
        p1->afficherJournal();

        // Modifier une entrée du journal
        p1->modifierEntreeJournal("2024-08-29", "Noot Noot Noot , Noot !");
        p1->afficherJournal();

        // Supprimer une entrée du journal
        p1->supprimerEntreeJournal("2024-08-28");
        p1->afficherJournal();

    }

    

    // Ici, tous les Pingouins sont sortis du scope, donc supprimés

    std::cout << "Pingouins après la sortie du scope :" << std::endl;
    Pingouin::afficherTempsPiste();

    return 0;
}
