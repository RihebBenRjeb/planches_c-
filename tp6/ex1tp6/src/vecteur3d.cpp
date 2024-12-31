//Riheb BEN RJEB CPI2 GRP A
#include "vecteur3d.h"
#include "Vecteur.h"
#include <iostream>
using namespace std;
vecteur3d::vecteur3d():Vecteur(),z(0){}
vecteur3d::vecteur3d(double x , double y ,double z):Vecteur(x,y),z(z){}
vecteur3d::~vecteur3d() {}
void vecteur3d::affiche()const{
    cout<<"("<<getX()<<","<<getY()<<","<<z<<")"<<endl;
}
vecteur3d vecteur3d::deplaceX(double dx)const{
    return vecteur3d(getX()+dx,getY(),z);
}
vecteur3d vecteur3d::deplaceY(double dy)const{
    return vecteur3d(getX(),getY()+dy,z);
}
vecteur3d vecteur3d::deplaceZ(double dz)const{
    return vecteur3d(getX(),getY(),z+dz);
}

