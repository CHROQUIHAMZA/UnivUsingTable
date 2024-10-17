#pragma once
#include<string>
class Employe
{
private:
	int id;
	std::string nom;
	std::string prenom;
	
public :
	Employe();
	Employe(int id ,std::string nom, std::string prenom );
	void afficher() const;
	~Employe();



};

