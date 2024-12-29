#include <iostream>

using namespace std;

int main()
{
    int *p,x;
    float *t,y;
    //allocation statique avec les pointeurs
    cout << "donner un entier" << endl;
    cin>>x;
    p=&x;
    cout<<"la valeur entiere est : "<<*p<<" et sa valeur d'adresse est : "<<p<<endl;
    cout << "donner un reel" << endl;
    cin>>y;
    t=&y;
    cout<<"la valeur de ce reel  est : "<<*t<<" et la valeur de son adresse est: "<<t<<endl;
    //allocation dynamique
    int *pt=new int(x);
    cout<<"la valeur entiere est : "<<*pt<<" et sa valeur d'adresse est : "<<pt<<endl;
    //avec une autre méthode en utilisant les floats
    float *pf=new float;
    cout<<"donner la valeur de float : "<<endl;
    cin>>*pf;
    cout<<"la valeur de float est : "<<*pf<<" et sa valeur d'adresse est : "<<pf<<endl;
    //pour libérer la mémoire on utilise:
    delete pt,pf;
    //pour vérifier :
    cout<<"la valeur de float est : "<<*pf<<" et sa valeur d'adresse est : "<<pf<<endl;
    //mais cela affiche encore les valeurs donc on veut :
    delete pt;
    pt = nullptr; // Prévenir un double delete ou un accès invalide
    delete pf;
    pf = nullptr;
    //vérifier
    cout<<"la valeur de float est : "<<*pf<<" et sa valeur d'adresse est : "<<pf<<endl;
    return 0;
}
