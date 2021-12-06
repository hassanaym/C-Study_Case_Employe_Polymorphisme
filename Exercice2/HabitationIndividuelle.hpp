#ifndef Included_Habitation_Individuelle_H
#define Included_Habitation_Individuelle_H

#include "Habitation.hpp"
class HabitationIndividuelle : public Habitation
{
private:
    int _nombrePiece;
    bool _piscine;

public:
    HabitationIndividuelle(string, string, double);
    void afficher();
    double impot();
};

#endif