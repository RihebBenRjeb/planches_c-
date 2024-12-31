//Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include"tab.h"
#include<vector>
#include <functional>
using namespace std;
void afficherF(const vector<int>& v, const function<void(int)>& aff) {
    for (int val : v) {
        aff(val);
    }
    cout << endl;
}

void afficherS(const vector<int>& v, const function<void(int, int)>& aff) {
    int seuil;
    cout << "Donner le seuil : ";
    cin >> seuil;
    for (int val : v) {
        aff(val, seuil);
    }
    cout << endl;
}

int main() {
    int SIZE;
    cout << "Entrez la taille du vector : ";
    cin >> SIZE;
    vector<int> v = remplirVector<int>(SIZE);
    afficher(v);
    cout<<"** choisir une fonction en tapant le numéro      **"<<endl;
    cout<<"  1* Afficher les valeurs positifs dans le vector *"<<endl;
    cout<<"  2* Afficher les valeurs negatifs dans le vector *"<<endl;
    cout<<"  3* Afficher les valeurs supérieur a un seuil    *"<<endl;
    int choix;
    cin >> choix;
    switch (choix) {
        case 1:
            afficherF(v, [](int x) {
                if (x >= 0) cout << x << " ";
            });
            break;

        case 2:
            afficherF(v, [](int x) {
                if (x < 0) cout << x << " ";
            });
            break;

        case 3:
            afficherS(v, [](int x, int seuil) {
                if (x >= seuil) cout << x << " ";
            });
            break;

        default:
            cout << "Choix invalide" << endl;
            break;
    }

    return 0;
}

