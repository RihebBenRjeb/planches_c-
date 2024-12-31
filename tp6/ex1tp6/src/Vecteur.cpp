//Riheb BEN RJEB CPI2 GRP A
#include "Vecteur.h"
#include <iostream>
using namespace std;
Vecteur::Vecteur() : x(0), y(0) {}
Vecteur::Vecteur(double x, double y):x(x),y(y){}
Vecteur::~Vecteur() {}

void Vecteur::affiche()const{
    cout<<"("<<x<<","<<y<<")"<<endl;
}
double Vecteur::getX() const {
    return x;
}

double Vecteur::getY() const {
    return y;
}
Vecteur Vecteur::deplaceX(double dx)const{
    return Vecteur(x+dx,y);
}
Vecteur Vecteur::deplaceY(double dy)const{
    return Vecteur(x,y+dy);
}



