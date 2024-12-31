//Riheb BEN RJEB CPI2 GRP A
#include "Voiture.h"
#include "Vehicule.h"
#include<iostream>
using namespace std;
Voiture::Voiture(int annee,double prix,int place):Vehicule(annee,prix),place(place){}
void Voiture::afficher()const{
    cout<<" la voiture de matricule "<<getNumero()<<"TUN"<<getSerie()<<" est cree en "<<getAnnee()<<" son prix est : "<<getPrix()<<"est son nombre de personne maximal  est "<<place<<endl;
}
void Voiture::accelerer()const{
    cout<<"Je peux atteindre 200km/h"<<endl;
}
