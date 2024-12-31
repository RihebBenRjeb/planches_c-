//Riheb BEN RJEB CPI2 GRP A
#ifndef PERSONNE_H
#define PERSONNE_H
#include<iostream>
using namespace std;

class Personne
{
    public:
        Personne(string nom,int age,string sexe);
        string getNom()const;
        int getAge() const;
        string getSexe()const;
        void setNom(string nom);
        void setAge(int age);
        void setSexe(string sexe);
        virtual void getPersonne()const;
    private:
        string nom;
        int age;
        string sexe;
};

#endif // PERSONNE_H
