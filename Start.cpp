#include "Personnel.hpp"
#include "Representant.hpp"
#include "Vendeur.hpp"
#include "Producteur.hpp"
#include <iostream>
using namespace std;

int main()
{
    Personnel personnel;
    personnel.ajouterEmploye(new Representant("DAHBI", "Ali", 32, 2019, 36900));
    personnel.ajouterEmploye(new Producteur("SAMSAR", "Yahya", 41, 2019));
    personnel.ajouterEmploye(new Vendeur("TWJI", "SALAH", 51, 1992, 43765));
    personnel.ajouterEmploye(new Representant("FIKRI", "Mohhamed", 29, 2016, 6900));
    personnel.ajouterEmploye(new Representant("FANNANE", "Imane", 28, 2020, 7829));
    personnel.ajouterEmploye(new Representant("NASSIRI", "Oumaima", 24, 2021, 21900));
    personnel.ajouterEmploye(new Producteur("KOMIRA", "Jalila", 41, 2019));
    return 0;

    personnel.show();
    personnel.salaireMoyen();
    personnel.nombreEmploye();
}