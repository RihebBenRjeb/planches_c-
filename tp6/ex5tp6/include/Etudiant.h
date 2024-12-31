//Riheb BEN RJEB CPI2 GRP A
#ifndef ETUDIANT_H
#define ETUDIANT_H
#include"Personne.h"
#include<iostream>

class Etudiant:public Personne
{
     public:
        Etudiant(string nom,int age,string sexe,string filiere);
        Etudiant(string nom,int age,string sexe);
        void setFiliere(string filiere);
        virtual void getPersonne()const override;
        string getFiliere()const;
    private:
        string filiere;
};

#endif // ETUDIANT_H
