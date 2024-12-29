//Riheb Ben Rjeb CPI2 grp A
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
using namespace std;


int alea(int premier, int dernier, mt19937& gener) {
    uniform_int_distribution<> dist(premier, dernier);
    return dist(gener);
}


void dessinerPartieSuperieure(int hauteurCone, vector<string>& cone) {
    for (int i = 0; i < hauteurCone; ++i) {
        int espacesAvant = hauteurCone - i - 1;
        int etoiles = 2 * i + 1;
        string ligne(espacesAvant, ' ');
        ligne += string(etoiles, '*');
        cone.push_back(ligne);
    }
}


void dessinerPartieInferieure(int hauteurTronc, int largeurTronc, int hauteurCone, vector<string>& tronc) {
    int espacesAvantTronc = hauteurCone - largeurTronc / 2 - 1;
    for (int i = 0; i < hauteurTronc; ++i) {
        string ligne(espacesAvantTronc, ' ');
        ligne += string(largeurTronc, '|');
        tronc.push_back(ligne);
    }
}


void ajouterBoules(int nombreBoules, vector<string>& cone, mt19937& gener) {
    for (int i = 0; i < nombreBoules; ++i) {
        while (true) {
            int ligne = alea(0, cone.size() - 1, gener);
            int colonne = alea(0, cone[ligne].size() - 1, gener);
            if (cone[ligne][colonne] == '*') {
                cone[ligne][colonne] = 'O';
                break;
            }
        }
    }
}


void dessinerSapin(int hauteurCone, int hauteurTronc, int largeurTronc, int nombreBoules) {
    mt19937 gener(static_cast<unsigned int>(time(0)));

    vector<string> cone;
    vector<string> tronc;


    dessinerPartieSuperieure(hauteurCone, cone);
    dessinerPartieInferieure(hauteurTronc, largeurTronc, hauteurCone, tronc);
    ajouterBoules(nombreBoules, cone, gener);
    for (const auto& ligne : cone) {
        cout << ligne << endl;
    }
    for (const auto& ligne : tronc) {
        cout << ligne << endl;
    }
}

int main() {
    int hauteurCone = 6;
    int hauteurTronc = 2;
    int largeurTronc = 3;
    int nombreBoules = 4;
    dessinerSapin(hauteurCone, hauteurTronc, largeurTronc, nombreBoules);

    return 0;
}
