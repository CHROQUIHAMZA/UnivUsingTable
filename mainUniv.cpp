#include <iostream>
#include "Employe.h"
#include "University.h"

int main() {
    // Créer une université
    University *uni=new University("Université XYZ");

    // Ajouter des employés à l'université
    uni->ajouter("Dupont", "Jean");
    uni->ajouter("Martin", "Sophie");
    uni->ajouter("Durand", "Paul");

    // Afficher les employés de l'université
    std::cout << "Affichage des employés de l'universite : " << std::endl;
    uni->afficher();  // Appel de la méthode pour afficher tous les employés

    // Ajouter plus d'employés
    uni->ajouter("Petit", "Marie");
    uni->ajouter("Legrand", "Pierre");

    // Afficher à nouveau les employés de l'université
    std::cout << "\nApres avoir ajoute plus d'employes : " << std::endl;
    uni->afficher();
    delete uni;


    return 0;
}
