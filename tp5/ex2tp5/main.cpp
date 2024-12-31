//Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include"vecteur3d.h"
using namespace std;

int main()
{
    vecteur3d v1(1,2,3);
    vecteur3d v2(2,3,4);
    cout<<"les cordonnees de v1 sont ";
    v1.affichage();
    cout<<endl;
    vecteur3d v3=vecteur3d::somme(v1,v2);
    cout<<" le vecteur qui est la somme de v1 et v2 est : "<<endl;
    v3.affichage();
    cout<<endl;
    cout<<" le produit cartesien de v1 et v2 est : "<<vecteur3d::produit(v1,v2);
    if(vecteur3d::coincide(v1,v2)){
        cout<<"v1 et v2 se coincident "<<endl;
    }
    else{
        cout<<"v1 et v2 se coincident "<<endl;
    }
    cout<<"la norme de v1 est : "<<v1.norme()<<endl;
    cout<<"la norme de v2 est : "<<v2.norme()<<endl;
    vecteur3d v4=vecteur3d::normaxV(v1,v2);
    cout<<" le vecteur qui a la norme la plus grande est le vecteur qui a les cordonnees suivantes : "<<endl;
    v4.affichage();
    return 0;
}
