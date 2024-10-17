#include "Employe.h"
#include<iostream>

Employe::Employe():id(0),nom(""),prenom("")
{

}
Employe::Employe(int id,std::string nom, std::string prenom):id(id),nom(nom),prenom(prenom)
{
}

void Employe::afficher() const
{
	std::cout << "Id : " << this->id << std::endl;
	std::cout << "FullName : " << this->nom <<" "<< this->prenom << std::endl;
}

Employe::~Employe()
{

}
