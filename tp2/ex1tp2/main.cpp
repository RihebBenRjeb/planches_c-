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
    //avec une autre m�thode en utilisant les floats
    float *pf=new float;
    cout<<"donner la valeur de float : "<<endl;
    cin>>*pf;
    cout<<"la valeur de float est : "<<*pf<<" et sa valeur d'adresse est : "<<pf<<endl;
    //pour lib�rer la m�moire on utilise:
    delete pt,pf;
    //pour v�rifier :
    cout<<"la valeur de float est : "<<*pf<<" et sa valeur d'adresse est : "<<pf<<endl;
    //mais cela affiche encore les valeurs donc on veut :
    delete pt;
    pt = nullptr; // Pr�venir un double delete ou un acc�s invalide
    delete pf;
    pf = nullptr;
    //v�rifier
    cout<<"la valeur de float est : "<<*pf<<" et sa valeur d'adresse est : "<<pf<<endl;
    return 0;
}
