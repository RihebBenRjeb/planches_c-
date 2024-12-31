//Riheb BEN RJEB CPI2 GRP A
#include "Contractuel.h"
#include "Personne.h"
#include "Enseignant.h"
#include "Etudiant.h"
#include<iostream>
using namespace std;
Contractuel::Contractuel(string nom,int age,string sexe,string filiere,double charge):Etudiant(nom, age, sexe, filiere), Enseignant(nom, age, sexe, charge){}
void Contractuel::getPersonne()const{
    cout<<"le contractuel  "<<Etudiant::getNom()<<" a "<<Enseignant::getAge()<<" ans est un(e) : "<<Etudiant::getSexe()<<" et a une charge de "<<Enseignant::getCharge()<<" heures et sa/son filiere est "<<Etudiant::getFiliere()<<endl;
}
