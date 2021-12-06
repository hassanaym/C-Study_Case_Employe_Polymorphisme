#include <iostream>
#include "HabitationProfessionnelle.hpp"

HabitationProfessionnelle::HabitationProfessionnelle(string proprietaire, string adresse, double surface) : Habitation(proprietaire, adresse, surface){};
void HabitationProfessionnelle::afficher()
{
    cout << "____Habitation individuelle____" << endl;
    Habitation::afficher();
    cout << "Nombre de employes : " << _nombreEmploye << endl;
    cout << "Impot : " << impot() << endl;
};

double HabitationProfessionnelle::impot()
{
    return Habitation::impot() + _nombreEmploye * 60;
};