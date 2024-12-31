//Riheb BEN RJEB CPI2 GRP A
#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include"Personne.h"
#include<iostream>
using namespace std;
class Enseignant:public Personne
{
    public:
        Enseignant(string nom,int age,string sexe,double charge);
        Enseignant(string nom,int age,string sexe);
        void setCharge(double charge);
        virtual void getPersonne()const override;
        double getCharge()const ;
    private:
        double charge;
};

#endif // ENSEIGNANT_H
