#include "University.h"
#include "Employe.h"
#include <iostream>
University::University(std::string nom):nomUniv(nom),nbrEmplye(0)
{
}

bool University::ajouter(std::string nomEmp, std::string prenomEmp)
{
    if (this->nbrEmplye >= MAX) return false;
    this->listEmp[this->nbrEmplye] = Employe(this->nbrEmplye, nomEmp, prenomEmp);
    this->nbrEmplye++;
     return true;
}

void University::afficher() const
{
    if (!this->nbrEmplye) {
        std::cout << "l'universite n\'a aucun employe " << std::endl;
        return;
    }
    std::cout << "La liste d'Emplyes :" << std::endl;
    for (int i = 0; i < this->nbrEmplye; i++)
        this->listEmp[i].afficher();
}
