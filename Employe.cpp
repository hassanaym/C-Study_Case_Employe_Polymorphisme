#include <iostream>
#include "Employe.hpp"

Employe::Employe(string nom, string prenom, int age, int anneeRrectrutement) : _nom(nom),
                                                                               _prenom(prenom),
                                                                               _age(age),
                                                                               _anneeRecrutement(anneeRrectrutement){};

void Employe::afficher()
{
    cout << "Nom : " << _nom << endl;
    cout << "Prénom : " << _prenom << endl;
    cout << "Age : " << _age << endl;
    cout << "Annne de recrutement : " << _anneeRecrutement << endl;
};

Employe::~Employe(){};
