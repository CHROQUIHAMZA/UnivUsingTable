#pragma once
#include<string>
#include"Employe.h"
#define MAX 50
class University
{
private :
	std::string nomUniv;
	Employe listEmp[MAX];
	 int nbrEmplye;
public:
	University(std::string nom);
	bool ajouter(std::string nomEmp, std::string prenomEmp);
	void afficher() const;


	
	
};

