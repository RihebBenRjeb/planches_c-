//Riheb BEN RJEB CPI2 GRP A
#include "Roi.h"
#include "Piece.h"
#include<iostream>
using namespace std;
Roi::Roi(string couleur, int x, int y) : Piece(couleur, x, y) {}

void Roi::afficher() const {
    cout << "C est un Roi de couleur  " << couleur << " et sa position (" << x << ", " << y << ")" << endl;
}

void Roi::deplacer() {
    if (x < 8 && y < 8) {
        x++;
        y++;
    } else {
        cout << "Impossible de deplacer" << endl;
    }
}

