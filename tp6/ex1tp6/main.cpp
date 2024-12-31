//Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include"Vecteur.h"
#include"vecteur3d.h"
using namespace std;

int main()
{
    Vecteur v(1.0,1.0);
    cout<<" le vecteur v: ";
    v.affiche();
    cout<< "le vecteur v apres un dx=2.0 :";
    Vecteur v1=v.deplaceX(2.0);
    v1.affiche();
    cout<< "le vecteur v apres un dy=2.0 :";
    Vecteur v2=v1.deplaceY(2.0);
    v2.affiche();
    /*cout<< "le vecteur v apres un  dx=2.0 et un dy=1.0 :";
    Vecteur v2 = v1.deplaceY(1.0);
    v2.affiche();*/
    vecteur3d* v3=new vecteur3d(1.0,1.0,1.0);
    cout<<" le vecteur 3d v3 est : ";
    v3->affiche();
    v3=new vecteur3d(v3->deplaceX(1.0));
    v3=new vecteur3d(v3->deplaceY(2.0));
    v3=new vecteur3d(v3->deplaceZ(3.0));
    cout<<" le vecteur 3d apres un dx dy et dz ";
    v3->affiche();
    delete v3;
    return 0;
}
