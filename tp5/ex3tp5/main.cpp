//Riheb BEN RJEB CPI2 GRP A
#include "Point.h"
#include<iostream>
#include<cmath>
using namespace std;
Point::Point(int x,int y):x(x),y(y){}
Point::Point(const Point& p):x(p.x),y(p.y){}
void Point::affiche()const{
    cout<<"("<<x<<","<<y<<")"<<endl;
}
bool comparer(const Point& p1, const Point& p2) {
    return (p1.x == p2.x && p1.y == p2.y);
}
float distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
Point milieu(const Point& p1, const Point& p2) {
    int mx = (p1.x + p2.x) / 2;
    int my = (p1.y + p2.y) / 2;
    return Point(mx, my);
}
int main()
{
    Point p1(1.0,1.0);
    Point p2(2.0,2.0);
    cout<<"les cordonnees de p1 sont : ";
    p1.affiche();
    cout<<endl;
     cout<<"les cordonnees de p2 sont : ";
    p2.affiche();
    cout<<endl;
    if(comparer(p1,p2)){
        cout<<" p1 et p2 sont confendues"<<endl;
    }
    else{
        cout<<"p1 et p2 sont differantes "<<endl;
    }
    cout<<"la distance entre p1 et p2 est :"<<distance(p1,p2)<<endl;
    Point mil=milieu(p1,p2);
    cout<<"les cordonnees de point de milieu de segment forme par p1 et p2 sont :";
    mil.affiche();
    cout<<endl;
    return 0;
}
