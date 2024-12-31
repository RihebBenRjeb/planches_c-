//Riheb BEN RJEB CPI2 GRP A
#ifndef ROI_H
#define ROI_H
#include "Piece.h"
#include<iostream>
class Roi : public Piece {
public:
    Roi(string couleur, int x, int y);
    void afficher() const override;
    void deplacer() override;
};

#endif

