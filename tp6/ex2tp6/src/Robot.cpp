//Riheb BEN RJEB CPI2 GRP A
#include "Point.h"
#include<iostream>
#include<cmath>
#include"Robot.h"
using namespace std;
Robot::Robot(string nom,double x,double y,double portee,bool statut):nom(nom),position(Point(x,y)),portee(portee),statut(statut){}
string Robot::getNom()const{
    return nom;
}
Point Robot::getPosition()const{
    return position;
}
double Robot::getPortee()const{
    return portee;
}
bool Robot::getStatut()const{
    return statut;
}
void Robot::afficher()const{
    cout<<"le nom de robot est : "<<nom<<" sa portee est : "<<portee<<" son statu est : "<<statut<<" et sa position est : ";
    position.affiche();
    cout<<endl;
}
void Robot::setStatut(bool statut){
    this->statut=statut;
}
Robot* Robot::deplace(double dx, double dy)const {
    return new Robot(nom, dx, dy, portee, statut);
}



