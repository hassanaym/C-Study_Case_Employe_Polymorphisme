#include <iostream>
#include "Producteur.hpp"
using namespace std;

Producteur::Producteur(string nom, string prenom, int age, int anneeRecrutement)
    : Employe(nom, prenom, age, anneeRecrutement)
{
}

double Producteur::calculerSalaire()
{
    return _nombreUnite * 5;
}

void Producteur::afficher()
{
    Employe::afficher();
    cout << "Nombre unites : " << _nombreUnite << endl;
    cout << "Salaire : " << calculerSalaire() << endl;
}