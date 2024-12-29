/*Riheb Ben Rjeb CPI2 grp A*/
#include <iostream>

using namespace std;
void afficher(){
    cout<<"********* CALCULATRICE ******"<<endl;
    cout<<"* 1.Addition               **"<<endl;
    cout<<"* 2.Multiplication         **"<<endl;
    cout<<"* 3.Soustraction           **"<<endl;
    cout<<"* 4.Division               **"<<endl;
    cout<<"* 5.Quitter                **"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"Operation?"<<endl;

}
double calculer(int i,double x,double y){
    double result = 0.0;

    switch (i) {
        case 1: result = x + y;
            break;
        case 2: result = x * y;
            break;
        case 3: result = x - y;
            break;
        case 4:
            if (y != 0) {
                result = x / y;
            } else {
                cout << "Erreur!" << endl;
                result = 0;
            }
            break;
        default:
            cout << "Choix invalide!" << endl;
            result = 0; // Retour par défaut en cas de choix invalide
            break;
    }

    return result;
}

int main()
{
    int i;
    double x,y;
    cout<<"********* CALCULATRICE ******"<<endl;
    cout<<"* 1.Addition               **"<<endl;
    cout<<"* 2.Multiplication         **"<<endl;
    cout<<"* 3.Soustraction           **"<<endl;
    cout<<"* 4.Division               **"<<endl;
    cout<<"* 5.Quitter                **"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"Operation?"<<endl;
    cout<<"donner un entier i "<<endl;
    cin>>i;
    while (i!=5){
        cout<<"donner un reel x "<<endl;
        cin>>x;
        cout<<"donner un reel y "<<endl;
        cin>>y;
        cout<<calculer(i, x, y)<<endl;
        cout<<"donner un entier i "<<endl;
        cin>>i;
    }

}
