//Riheb BEN RJEB CPI2 GRP A
#include "Camion.h"
#include "Vehicule.h"
#include<iostream>
using namespace std;
Camion::Camion(int annee,double prix,double charge):Vehicule(annee,prix),charge(charge){}
void Camion::afficher()const{
    cout<<" le camion de matricule "<<getNumero()<<"TUN"<<getSerie()<<" est cree en "<<getAnnee()<<" son prix est : "<<getPrix()<<"est son charge maximal est "<<charge<<endl;
}
void Camion::accelerer()const{
    cout<<"Je peux atteindre 120km/h"<<endl;
}
