#include "Commercial.hpp"
#include <iostream>

using namespace std;

Commercial::Commercial(string nom, string prenom, int age, int anneeRecrutement, double chiffreAffaire) : Employe(nom, prenom, age, anneeRecrutement),
                                                                                                          _chiffreAffaire(chiffreAffaire)
{
}

void Commercial::afficher()
{
    Employe::afficher();
    cout << "Chiffre affaire : " << _chiffreAffaire << endl;
}
