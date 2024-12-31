//Riheb BEN RJEB CPI2 GRP A
#include <iostream>
#include"tab.h"
#include<vector>
using namespace std;
void positif(int x){
    if(x>=0){
        cout<<x<<endl;
    }
}
void negatif(int x){
    if(x<0){
        cout<<x<<endl;
    }
}
void greaterthan(int x,int seuil){
    if(x>=seuil){
        cout<<x<<endl;
    }
}
void afficherF(const vector<int> &v,void(*aff)(int)){
    for(int val:v){
        aff(val);
    }
}
void afficherS(const vector<int> &v,void(*aff)(int,int)){
    int seuil;
    cout<<"donner le seuil"<<endl;
    cin>>seuil;
    for(int val:v){
        aff(val,seuil);
    }
}
int main()
{
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
    std::cin >> choix;
    switch (choix)
    {
    case 1: afficherF(v,positif);;
    break;
    case 2: afficherF(v,negatif);
    break;
    case 3: afficherS(v,greaterthan);
    default:
        break;
    }
    return 0;
}
