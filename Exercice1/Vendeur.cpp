#include "Vendeur.hpp"
#include <iostream>

using namespace std;

Vendeur::Vendeur(string nom, string prenom, int age, int anneeRecrutement, double chiffreAffaire)
    : Commercial(nom, prenom, age, anneeRecrutement, chiffreAffaire)
{
}

double Vendeur::calculerSalaire()
{
    return 400 + _chiffreAffaire * 0.2;
};

void Vendeur::afficher()
{
    cout << "______Vendeur______" << endl;
    Commercial::afficher();
    cout << "Salaire : " << calculerSalaire() << endl;
    cout << "-----------------" << endl;
};
