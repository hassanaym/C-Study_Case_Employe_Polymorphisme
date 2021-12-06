#ifndef Included_Habitation_Professionnelle_H
#define Included_Habitation_Professionnelle_H

#include "Habitation.hpp"
class HabitationProfessionnelle : public Habitation
{
private:
    int _nombreEmploye;
    

public:
    HabitationProfessionnelle(string, string, double);
    void afficher();
    double impot();
};

#endif