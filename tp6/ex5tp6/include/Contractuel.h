//Riheb BEN RJEB CPI2 GRP A
#ifndef CONTRACTUEL_H
#define CONTRACTUEL_H
#include "Personne.h"
#include "Enseignant.h"
#include "Etudiant.h"
#include<iostream>
using namespace std;
class Contractuel:public Etudiant, public Enseignant
{
    public:
        Contractuel(string nom,int age,string sexe,string filiere,double charge);
        void getPersonne()const override;
};

#endif // CONTRACTUEL_H
