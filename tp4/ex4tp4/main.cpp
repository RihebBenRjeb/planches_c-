
#include <iostream>
using namespace std;
struct produit{
    string type;
    double pht;
    bool solde;
};
produit creer(){
    produit p;
    string type;
    double pht;
    bool solde;
    cout<<" donner le type de produit : ";
    cin>>type;
    cout<<endl;
    cout<<" donner le prix hors taxe de produit : ";
    cin>>pht;
    cout<<endl;
    cout<<" indiquer s'il est soldé ou non  : ";
    cin>>solde;
    cout<<endl;
    p.type=type;
    p.pht=pht;
    p.solde=solde;
    return p;
}
double solder(produit p ,bool taux=0.2){
    if(p.solde==true){
        return p.pht*taux;
    }
    else return 0.0;
}
double taxer(produit p,double taxe=0.19){
    if(p.type=="luxe"){
        return 0.25;
    }
    else return taxe;
}
double calculerPrixFinal(produit p){
    double prix=0.0;
    prix=p.pht+(taxer(p)*p.pht)-solder(p);
    return prix;
}
int main()
{
    produit p=creer();
    cout<<" le prix final est: "<<calculerPrixFinal( p)<<endl;
    return 0;
}
