//Riheb BEN RJEB CPI2 GRP A
#include "Etudiant.h"
#include"Personne.h"
#include<iostream>
using namespace std;
Etudiant::Etudiant(string nom,int age,string sexe,string filiere):Personne(nom,age,sexe),filiere(filiere){}
Etudiant::Etudiant(string nom,int age,string sexe):Personne(nom,age,sexe),filiere(""){}
void Etudiant::getPersonne()const{
    cout<<"le etudinat  "<<getNom()<<" a "<<getAge()<<" ans est un(e) : "<<getSexe()<<" sa/son filiere est  "<<filiere<<endl;
}
void Etudiant::setFiliere(string filiere){
    this->filiere=filiere;
}
string  Etudiant::getFiliere()const{
    return filiere;
}

