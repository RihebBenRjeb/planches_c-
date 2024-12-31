//Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include <vector>
#include "Pion.h"
#include "Roi.h"

using namespace std;

int main() {
    vector<Piece*> piece;
    piece.push_back(new Pion("Noir", 1, 2));
    piece.push_back(new Pion("Noir", 7, 6));
    piece.push_back(new Roi("Blanc", 3, 5));
    for (Piece* piece : piece) {
        piece->afficher();
    }
    cout << "Les pieces apres deplacement" << endl;
    for (Piece* piece : piece) {
        piece->deplacer();
        piece->afficher();
    }
    for (Piece* piece : piece) {
        delete piece;
    }
    return 0;
}
