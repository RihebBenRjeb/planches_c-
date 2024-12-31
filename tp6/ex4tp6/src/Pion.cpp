//Riheb BEN RJEB CPI2 GRP A
#include "Pion.h"
#include"Piece.h"
#include<iostream>
using namespace std;
Pion::Pion(string couleur, int x, int y) : Piece(couleur, x, y) {}
void Pion::afficher() const {
    cout << "C est un Pion de couleur " << couleur << " et sa position est  (" << x << ", " << y << ")" << endl;
}
void Pion::deplacer() {
    if (y < 8) {
        y++;
    } else {
        cout << "impossible de deplacer" << endl;
    }
}

