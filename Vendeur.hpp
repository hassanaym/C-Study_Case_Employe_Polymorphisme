#ifndef Included_Vendeur_H
#define Included_Vendeur_H

#include "Commercial.hpp"

class Vendeur : public Commercial
{
public:
    Vendeur(string, string, int, int, double);
    double calculerSalaire() override;
    void afficher();
};

#endif