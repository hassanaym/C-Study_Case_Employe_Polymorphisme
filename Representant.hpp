#ifndef Included_Representant_H
#define Included_Representant_H

#include "Commercial.hpp"

class Representant : public Commercial
{
public:
    Representant(string, string, int, int, double);
    double calculerSalaire();
    void afficher();
};

#endif