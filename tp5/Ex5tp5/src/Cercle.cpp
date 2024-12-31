//Riheb BEN RJEB CPI2 GRP A
#include "Cercle.h"
#include <iostream>
#include"Point.h"
#include <cmath>
using namespace std;
Cercle::Cercle(double rayon,const Point& centre):rayon(rayon),centre(centre){}
/*Cercle::Cercle(double rayon, double x, double y) : rayon(rayon), centre(Point(x, y))*/
void Cercle::afficher()const{
    cout<<" le rayon du cercle est "<<rayon<<" et son centre est : ";
    centre.affiche();
    cout<<endl;
}
double Cercle::getRayon() const {
    return rayon;
}

void Cercle::setRayon(double rayon) {
    this->rayon = rayon;
}

Point Cercle::getCentre() const {
    return centre;
}

void Cercle::translation(double dx,double dy){
    centre.setX(centre.getX() + dx);
    centre.setY(centre.getY() + dy);
}
double Cercle::surface()const{
    return 3.14 * rayon * rayon;

}
double Cercle::perimetre() const {
    return 2 * 3.14 * rayon;
}
bool Cercle::equals(const Cercle& c1, const Cercle& c2) {
    return c1.rayon == c2.rayon && Point::comparer(c1.centre, c2.centre);
}

bool Cercle::appartenance(const Cercle& c, const Point& p) {
    return Point::distance(c.centre, p) <= c.rayon;
}






