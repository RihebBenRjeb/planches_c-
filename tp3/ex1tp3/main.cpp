/*Riheb Ben Rjeb CPI2 Grp A*/
#include <iostream>
#include <vector>

using namespace std;

/*int nbrepositifs(int* tab, int SIZE) {
    int c = 0;
    for (int i = 0; i < SIZE; i++) {
        if (tab[i] > 0) {
            c++;
        }
    }
    return c;
}

void allocationStatique(int* tab, int SIZE) {
    int x;
    for (int i = 0; i < SIZE; i++) {
        cout<<"donner un entier "<<endl;
        cin>>x;
        tab[i] = x;
    }
}

void allocationDynamique(int* tab, int SIZE) {
    int x;
    for (int i = 0; i < SIZE; i++) {
        cout<<"donner un entier "<<endl;
        cin>>x;
        tab[i] = x;
    }
}*/
void remplirVector(vector<int> v, int SIZE) {
    int x;
    for (int i = 0; i < SIZE; i++) {
        cout<<"donner un entier "<<endl;
        cin>>x;
        v.push_back(x);
    }
}

int NbrePositifs(vector<int> v) {
    int count = 0;
    for (auto it=v.begin();it!=v.end();++it) {
        if (*it > 0) {
            count++;
        }
    }
    return count;
}


int main() {
    const int SIZE = 10;
    /*int tab[SIZE];
    int* tab1 = new int[SIZE];
    allocationStatique(tab, SIZE);
    cout<<"le nombre des entiers positifs dans tab est : "<<nbrepositifs(tab,SIZE)<<endl;*/
    /*allocationDynamique(tab1, SIZE);
    cout<<"le nombre des entiers positifs dans tab1 est : "<<nbrepositifs(tab1,SIZE)<<endl;
    delete[] tab1;*/
    vector<int> v;
    remplirVector( v,SIZE);
    cout<<"le nombre des entiers positifs dans le vector est : "<<NbrePositifs(v)<<endl;
    /* on remarque que l'utilisation des vecteurs est une solution idéale en point de vue temps et mémoire */
    return 0;
}

