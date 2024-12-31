//                                               Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include"tab.h"

using namespace std;
int main() {
    int SIZE;
    cout << "Entrez la taille du vector : ";
    cin >> SIZE;

    // Exemple avec des entiers
    vector<int> v = remplirVector<int>(SIZE);
    afficher(v);
    v = trierCroi(v);
    afficher(v);

    // Exemple avec des doubles
    vector<double> vDouble = remplirVector<double>(SIZE);
    afficher(vDouble);
    vDouble = trierDecroissant(vDouble);
    afficher(vDouble);

    return 0;
}

