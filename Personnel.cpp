#include "Personnel.hpp"
#include <iostream>

using namespace std;

void Personnel::ajouterEmploye(Employe *employe)
{
    employes.push_back(employe);
}

void Personnel::show()
{
    for (auto &e : employes)
    {
        e->afficher();
    }
};

void Personnel::salaireMoyen()
{
    double salaires = 0;
    for (auto &e : employes)
    {
        salaires += e->calculerSalaire();
    }

    cout << "Salaire moyen : " << salaires / employes.size() << endl;
};

void Personnel::nombreEmploye()
{

    cout << "Nombre des employes : " << employes.size() << endl;
};
