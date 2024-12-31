#ifndef TAB_H
#define TAB_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Fonction pour remplir un vector
template <typename T>
vector<T> remplirVector(int SIZE) {
    vector<T> v;
    T x;
    for (int i = 0; i < SIZE; i++) {
        cout << "Donner une valeur pour le vector : " << endl;
        cin >> x;
        v.push_back(x);
    }
    return v;
}

// Fonction pour afficher le contenu d'un vector
template <typename T>
void afficher(const vector<T>& v) {
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Fonction pour afficher le contenu d'un vector dans l'ordre inverse
template <typename T>
void afficherInverse(const vector<T>& v) {
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Fonction pour compter les éléments positifs dans un vector
template <typename T>
int NbrePositifs(const vector<T>& v) {
    int count = 0;
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it > 0) {
            count++;
        }
    }
    return count;
}

// Fonction pour compter les éléments négatifs dans un vector
template <typename T>
int NbreNegatifs(const vector<T>& v) {
    int count = 0;
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it < 0) {
            count++;
        }
    }
    return count;
}

// Fonction pour rechercher une valeur dans un vector
template <typename T>
void recherche(const vector<T>& tab, const T& val) {
    bool test = false;
    for (int i = 0; i < tab.size(); i++) {
        if (tab[i] == val) {
            cout << val << " se trouve dans le vector à la position " << i << endl;
            test = true;
            break;
        }
    }
    if (!test) {
        cout << val << " ne se trouve pas dans le vector" << endl;
    }
}

// Fonction pour calculer le produit de deux vectors (produit scalaire)
template <typename T>
T produitVec(const vector<T>& v1, const vector<T>& v2) {
    T prod = 0;
    for (int i = 0; i < v1.size(); i++) {
        prod += v1[i] * v2[i];
    }
    return prod;
}

// Fonction pour obtenir le min et le max d'un vector
template <typename T>
pair<T, T> min_max(const vector<T>& v1) {
    T mini = v1[0];
    T maxi = v1[0];
    for (int i = 1; i < v1.size(); i++) {
        if (v1[i] > maxi) {
            maxi = v1[i];
        }
        if (v1[i] < mini) {
            mini = v1[i];
        }
    }
    return {mini, maxi};
}

// Fonction pour trier un vector dans l'ordre croissant
template <typename T>
vector<T> trierCroi(vector<T> v) {
    sort(v.begin(), v.end());
    return v;
}

// Fonction pour trier un vector dans l'ordre décroissant
template <typename T>
vector<T> trierDecroissant(vector<T> v) {
    sort(v.begin(), v.end(), greater<T>());
    return v;
}

#endif // TAB_H


