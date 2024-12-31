//Riheb BEN RJEB CPI2 GRP A
#include "Personne.h"
#include<iostream>
using namespace std;
Personne::Personne(string nom,int age,string sexe):nom(nom),age(age),sexe(sexe){}
string Personne::getNom()const{
    return nom;
}
int Personne::getAge() const{
    return age;
}
string Personne::getSexe()const{
    return sexe;
}
void Personne::setNom(string nom){
    this->nom=nom;
}
void Personne::setAge(int age){
    this->age=age;
}
void Personne::setSexe(string sexe){
    this->sexe=sexe;
}
void Personne::getPersonne()const{
    cout<<"la personne "<<nom<<" a "<<age<<" ans est un(e) : "<<sexe<<endl;
}
