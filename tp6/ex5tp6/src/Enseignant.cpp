//Riheb BEN RJEB CPI2 GRP A
#include "Enseignant.h"
#include"Personne.h"
#include<iostream>
using namespace std;
Enseignant::Enseignant(string nom,int age,string sexe,double charge):Personne(nom,age,sexe),charge(charge){}
Enseignant::Enseignant(string nom,int age,string sexe):Personne(nom,age,sexe),charge(0){}
void Enseignant::setCharge(double charge){
    this->charge=charge;
}
void Enseignant::getPersonne()const{
    cout<<"le enseignant  "<<getNom()<<" a "<<getAge()<<" ans est un(e) : "<<getSexe()<<" et a une charge de "<<charge<<" heures "<<endl;
}
double Enseignant::getCharge()const{
    return charge;

}
