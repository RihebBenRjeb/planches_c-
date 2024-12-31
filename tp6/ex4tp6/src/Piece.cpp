//Riheb BEN RJEB CPI2 GRP A
#include "Piece.h"
#include<iostream>
using namespace std;
Piece::Piece(string couleur, int x, int y) : couleur(couleur), x(x), y(y) {}
int Piece::getX() const {
    return x;
}
int Piece::getY() const {
    return y;
}
string Piece::getCouleur() const {
    return couleur;
}

