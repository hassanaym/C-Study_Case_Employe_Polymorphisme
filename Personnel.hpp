#ifndef Included_Personnel_H
#define Included_Personnel_H

#include <vector>
#include "Employe.hpp"

class Personnel
{
private:
    vector<Employe *> employes;

public:
    void ajouterEmploye(Employe *);
    void show();
    void salaireMoyen();
    void nombreEmploye();
};

#endif