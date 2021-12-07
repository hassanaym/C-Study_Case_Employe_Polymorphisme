#include <iostream>
#include "Habitation.cpp"
#include "HabitationIndividuelle.cpp"
#include "HabitationProfessionnelle.cpp"
#include "Impot.cpp"

int main()
{
    Impot impot;
    impot.add(new HabitationIndividuelle("SAOUDI", "OUJDA", 120, 5, 0));
    impot.add(new HabitationProfessionnelle("AHMADI", "SAFI", 80));
    impot.add(new HabitationIndividuelle("SAIDA", "CASA", 45, 2, 1));
    impot.add(new HabitationIndividuelle("FIRDANI", "AGADIR", 90, 7,1));
    impot.show();
    return 0;
}