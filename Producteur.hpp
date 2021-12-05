#ifndef Included_Producteur_H
#define Included_Producteur_H

#include "Employe.hpp"

class Producteur : public Employe
{
private:
    int _nombreUnite;

public:
    Producteur(string, string, int, int);
    double calculerSalaire() override;
    void afficher();
};

#endif