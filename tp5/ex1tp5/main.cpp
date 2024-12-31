//Riheb BEN RJEB CPI2 GRP A

#include <iostream>
#include "Etudiant.h"
using namespace std;

int main()
{
    Etudiant e1("Riheb",5);
    Etudiant e2("maryem",5);
    e1.saisie();
    e2.saisie();
    cout<<"les cordonnees du premier etudiant sont "<<endl;
    e1.affichage();
    cout<<"la moyenne du premier etudiant est :"<<e1.moyenne()<<endl;
    cout<<"la moyenne du second etudiant est :"<<e2.moyenne()<<endl;
    if(e1.admis()){
        cout<<" l etudiant(e) e1 est reussi(e)"<<endl;
    }
    else{
        cout<<" l etudiant(e) e1  n est pas reussi(e)"<<endl;
    }
    if(Etudiant::comparer(e1,e2)){
        cout<<"les deux etudiants ont le meme moyen "<<endl;
    }
    else{
        cout<<"les deux etudiants n ont pas le meme moyen "<<endl;
    }
    return 0;
}
