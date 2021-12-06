#include <iostream>
#include "HabitationIndividuelle.hpp"

HabitationIndividuelle::HabitationIndividuelle(string proprietaire, string adresse, double surface) : Habitation(proprietaire, adresse, surface){};
void HabitationIndividuelle::afficher()
{
    cout << "____Habitation individuelle____" << endl;
    Habitation::afficher();
    cout << "Nombre de pieces : " << _nombrePiece << endl;
    string piscine = _piscine ? "OUI" : "NON";
    cout << "Piscine : " << piscine << endl;
    cout << "Impot : " << impot() << endl;
};

double HabitationIndividuelle::impot()
{
    return Habitation::impot() + _nombrePiece * 100 + _piscine * 400;
};