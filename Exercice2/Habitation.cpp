#include <iostream>
#include "Habitation.hpp"

using namespace std;

Habitation::Habitation(string protrietaire, string adresse, double surface) : _proprietaire(protrietaire),
                                                                              _adresse(adresse),
                                                                              _surface(surface)
{
}

void Habitation::afficher()
{
    cout << "Propietaire : " << _proprietaire << endl;
    cout << "Adresse : " << _adresse << endl;
    cout << "Surface : " << _surface << endl;
}

double Habitation::impot()
{
    return _surface * 10;
}