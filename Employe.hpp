#ifndef Included_Employe_H
#define Included_Employe_H

#include <string>
using namespace std;

class Employe
{
protected:
    string _nom;
    string _prenom;
    int _age;
    int _anneeRecrutement;

public:
    Employe(string, string, int, int);
    void afficher();
    virtual double calculerSalaire() = 0;
};
#endif