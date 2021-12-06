#include "Habitation.hpp"
#include "Impot.hpp"

void Impot::add(Habitation &h)
{
    habitations.push_back(h);
};

void Impot::show()
{
    for (auto &h : habitations)
    {
        h->afficher();
    }
};