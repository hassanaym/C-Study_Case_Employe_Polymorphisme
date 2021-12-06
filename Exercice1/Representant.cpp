#include <iostream>
#include "Representant.hpp"
using namespace std;

Representant::Representant(string nom, string prenom, int age, int anneeRecrutement, double chiffreAffaire)
    : Commercial(nom, prenom, age, anneeRecrutement, chiffreAffaire)
{
}

double Representant::calculerSalaire()
{
    return 800 + _chiffreAffaire * 0.2;
};

void Representant::afficher()
{
    cout << "______Representant______" << endl;
    Commercial::afficher();
    cout << "Salaire : " << calculerSalaire() << endl;
    cout << "-----------------" << endl;
}