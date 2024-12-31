//Riheb BEN RJEB CPI2 GRP A
#ifndef PION_H
#define PION_H
#include "Piece.h"
#include<iostream>

class Pion : public Piece {
public:
    Pion(string couleur, int x, int y);
    void afficher() const override;
    void deplacer() override;
};

#endif

