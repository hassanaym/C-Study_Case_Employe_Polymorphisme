#include <string>
#include <vector>
#include "Habitation.hpp"

class Impot
{
private:
    vector<Habitation *> habitations;

public:
    void add(Habitation *);
    void show();
};