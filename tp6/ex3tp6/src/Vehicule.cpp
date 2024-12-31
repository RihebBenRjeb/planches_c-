//Riheb BEN RJEB CPI2 GRP A
#include "Vehicule.h"
#include<iostream>
using namespace std;
int Vehicule::nbr=1;
int Vehicule::nbrs=1;
Vehicule::Vehicule(int annee,double prix):annee(annee),prix(prix){
    numero = nbr++;
    if (nbr > 1000)
    {
        nbr = 1;
        nbrs++;
    }
    serie = nbrs;
}
void Vehicule::afficher() const{
    cout<<" le vheicule de matricule "<<numero<<"TUN"<<serie<<" est cree en "<<annee<<" son prix est : "<<prix<<endl;

}
int Vehicule::getAnnee()const{
    return annee;
}
double Vehicule::getPrix()const{
    return prix;
}
int Vehicule::getNumero()const{
    return numero;
}
int Vehicule::getSerie()const{
    return serie;
}
void Vehicule::accelerer() const {
    cout << "Methode de acceleration non define" << endl;
}
