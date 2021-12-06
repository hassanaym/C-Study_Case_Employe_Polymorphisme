#ifndef Included_Commercial_H
#define Included_Commercial_H

#include "Employe.cpp"

class Commercial : public Employe
{
protected:
    double _chiffreAffaire;

public:
    Commercial(string, string, int, int, double);
    virtual void afficher();
};

#endif
