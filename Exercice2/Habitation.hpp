#ifndef Included_Habitation_H
#define Included_Habitation_H

#include <string>
using namespace std;
class Habitation
{
protected:
    string _proprietaire;
    string _adresse;
    double _surface;

public:
    Habitation(string, string, double);
    double impot();
    void afficher();
};
#endif