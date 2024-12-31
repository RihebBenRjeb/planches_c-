//Riheb BEN RJEB CPI2 GRP A
#include "Point.h"
#include<iostream>
#include<cmath>
using namespace std;
Point::Point(double x,double y):x(x),y(y){}
Point::Point(const Point& p):x(p.x),y(p.y){}
double Point::getX() const {
    return x;
}
double Point::getY() const {
    return y;
}
void Point::setX(double x) {
    this->x = x;
}
void Point::setY(double y) {
    this->y = y;
}

void Point::affiche() const {
    std::cout << "(" << x << ", " << y << ")";
}

bool Point::comparer(const Point& p1, const Point& p2) {
    return (p1.x == p2.x && p1.y == p2.y);
}
double Point::distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
Point Point::milieu(const Point& p1, const Point& p2) {
    double mx = (p1.x + p2.x) / 2.0;
    double my = (p1.y + p2.y) / 2.0;
    return Point(mx, my);
}
