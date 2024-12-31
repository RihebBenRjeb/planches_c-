//Riheb BEN RJEB CPI2 GRP A
#include "Etudiant.h"
#include <iostream>
int Etudiant::nbrE=0;
Etudiant::Etudiant():matricule(++nbrE),nom(""),nbrNotes(0),tabNotes(nullptr){}
Etudiant::Etudiant(const string & nom,int nbrNotes):matricule(++nbrE),nom(nom),nbrNotes(nbrNotes){
    tabNotes = new float[nbrNotes];
}
//constructeur de recopie
Etudiant::Etudiant(const Etudiant &e) : matricule(e.matricule), nom(e.nom), nbrNotes(e.nbrNotes) {
    tabNotes = new float[nbrNotes];
    for (int i = 0; i < nbrNotes; i++) {
        tabNotes[i] = e.tabNotes[i];
    }
}
//destructeur
Etudiant:: ~Etudiant(){
    delete []tabNotes;
}
int Etudiant::getMatricule() const{
    return matricule;
}
string Etudiant::getNom() const{
    return nom;
}
int Etudiant::getNbrNotes() const{
    return nbrNotes;
}
void Etudiant::setNom(const string& n){
    this->nom=n;
}
void Etudiant::setNbrNotes(int n){
    if (tabNotes) {
        delete[] tabNotes;
    }
     this->nbrNotes=n;
     tabNotes = new float[nbrNotes];
}
void Etudiant::saisie(){
    float note;
    for(int i=0;i<nbrNotes;i++){
        cout<<" donner une note pour l etudiant  "<<nom<<" : ";
        cin>>note;
        tabNotes[i]=note;
        cout<<endl;
    }
}
void Etudiant::affichage() const{
    cout<<"l etudiant "<<nom<<" a une matricule "<<matricule<<" a "<<nbrNotes<<" notes qui sont : "<<endl;
    for(int i=0;i<nbrNotes;i++){
        cout<<tabNotes[i]<<" ";
    }
    cout<<endl;
}
float Etudiant::moyenne() const{
    float moy=0.0;
    for(int i=0;i<nbrNotes;i++){
        moy+=tabNotes[i];
    }
    moy=moy/nbrNotes;
    return moy;
}
 bool Etudiant::admis() const{
     return moyenne() >= 10;
 }
bool Etudiant::comparer(const Etudiant &e1, const Etudiant &e2){
     return(e1.moyenne()==e2.moyenne());
 }


