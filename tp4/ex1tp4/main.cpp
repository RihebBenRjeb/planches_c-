//                               Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include <vector>
#include"tab.h"
using namespace std;

//permuter deux valeurs d'un vector
template <typename T>
void echanger(vector<T>& v, int i, int j) {
    T aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

// tri par selection
template <typename T>
vector<T> trieSelection(vector<T>& v) {
    for (int i = 0; i < v.size() - 1; i++) {
        int mini = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] < v[mini]) {
                mini = j;
            }
        }
        echanger(v, i, mini);
    }
    return v;
}

int main() {
    int SIZE;
    cout << "Entrez la taille du vector : ";
    cin >> SIZE;
    vector<int> v = remplirVector<int>(SIZE);
    afficher(v);
    cout<<"le vector apres tri par selection est : "<<endl;
    vector<int> v1=trieSelection(v);
    afficher(v1);
    return 0;
}

