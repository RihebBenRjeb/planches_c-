//Riheb BEN RJEB CPI2 GRP A
#ifndef PIECE_H
#define PIECE_H
#include <iostream>
#include <string>
using namespace std;

class Piece {
    public:
        Piece(string couleur, int x, int y);
        virtual void afficher() const = 0;
        virtual void deplacer() = 0;
        virtual ~Piece() {}
        int getX() const;
        int getY() const;
        string getCouleur() const;
    protected:
        string couleur;
        int x, y;
};

#endif

