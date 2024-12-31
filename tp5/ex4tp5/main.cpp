//Riheb BEN RJEB CPI2 GRP A
#include "Complexe.h"
#include<iostream>
#include <cmath>
using namespace std;
Complexe::Complexe(double Re,double Img):Re(Re),Img(Img){}
void Complexe::affichage()const{
    cout<<Re<<"+"<<Img<<"i"<<endl;
}
double Complexe::module()const{
    return sqrt(Re * Re + Img* Img );
}
Complexe Complexe::conjugue()const{
    return Complexe(Re,-Img);
}
//somme
Complexe sommeCC(const Complexe& c1,const Complexe& c2){
    return Complexe(c1.Re+c2.Re,c1.Img+c2.Img);
}
Complexe sommeCD(const Complexe& c,double d){
    return Complexe(c.Re+d,c.Img+d);
}
Complexe sommeDC(double d,const Complexe& c){
    return Complexe(c.Re+d,c.Img+d);
}
//differance
Complexe differanceCC(const Complexe& c1,const Complexe& c2){
    return Complexe(c1.Re-c2.Re,c1.Img-c2.Img);
}
Complexe differanceCD(const Complexe& c,double d){
    return Complexe(c.Re-d,c.Img-d);
}
Complexe differanceDC(double d,const Complexe& c){
    return Complexe(c.Re-d,c.Img-d);
}
//produit
Complexe produitCC(const Complexe& c1,const Complexe& c2){
    return Complexe((c1.Re*c2.Re)-(c1.Img*c2.Img),(c1.Re*c2.Img)+(c1.Img*c2.Re));
}
Complexe produitCD(const Complexe& c,double d){
    return Complexe(c.Re*d,c.Img*d);
}
Complexe produitDC(double d,const Complexe& c){
    return Complexe(c.Re*d,c.Img*d);
}
int main()
{
    Complexe c1(1.0,1.0);
    Complexe c2(2.0,2.0);
    cout<<" c1= ";
    c1.affichage();
    cout<<endl;
    cout<<" c2= ";
    c2.affichage();
    cout<<endl;
    cout<<"module c1 est : "<<c1.module()<<endl;
    Complexe c11=c1.conjugue();
    cout<<"le conjugu de c1 est :";
    c11.affichage();
    Complexe s=sommeCC(c1,c2);
    Complexe d=differanceCC(c1,c2);
    Complexe p=produitCC(c1,c2);
    cout<<"la somme de c1 et c2 est :";
    s.affichage();
    cout<<endl;
    cout<<"la differance de c1 et c2 est :";
    d.affichage();
    cout<<endl;
    cout<<"le produit de c1 et c2 est :";
    p.affichage();
    cout<<endl;
    return 0;
}
