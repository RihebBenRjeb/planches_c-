//Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include "Cercle.h"
#include "Point.h"
using namespace std;

int main()
{
    double rayon=1.0;
    Point centre(10,10);
    Cercle c1(rayon,centre);
    c1.afficher();
    cout<<"le perimetre de cercle c1 est : "<<c1.perimetre()<<endl;
    cout<<"la surface de cercle c1 est : "<<c1.surface()<<endl;
    c1.setRayon(c1.getRayon()*2);
    cout<<"le cercle apres doublement de rayon : ";
    c1.afficher();
    cout<<"le perimetre de cercle est : "<<c1.perimetre()<<endl;
    cout<<"la surface de cercle est : "<<c1.surface()<<endl;
    c1.translation(-10,-10);
    cout<<" c1 apres chagement de centre a l origine ";
    c1.afficher();
    Point p1(1, 1);
    Point p2(3, 3);
    Cercle c2(2.0,Point(0,0));
    if (Cercle::equals(c1,c2)){
        cout<<" les deux cercles se coincidents "<<endl;
    }
    else{

        cout<<" les deux cercles se se coincidents pas "<<endl;
    }
    if(Cercle::appartenance(c1,p1)){
        cout<<"p1 appartient au c1"<<endl;
    }
    else{
        cout<<"p1 n appartient pas au c1"<<endl;
    }
    if(Cercle::appartenance(c1,p2)){
        cout<<"p2 appartient au c1"<<endl;
    }
    else{
        cout<<"p2 n appartient pas au c1"<<endl;
    }
    return 0;
}
