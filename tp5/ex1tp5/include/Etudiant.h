//Riheb BEN RJEB CPI2 GRP A
#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>
#include <iostream>
using namespace std ;
class Etudiant
{
    public:
        Etudiant();
        Etudiant(const string & ,int nbrNotes);
        //constructeur de recopie
        Etudiant(const Etudiant& e);
        ~Etudiant();
        int getMatricule() const;
        string getNom() const;
        void setNom(const string& n);
        int getNbrNotes() const;
        void setNbrNotes(int n);
        void saisie(); //saisie des note de l etudiant
        void affichage() const; //afficher tous les données
        float moyenne() const;
        bool admis() const;
        static bool comparer(const Etudiant &e1, const Etudiant &e2);
    private:
        static int nbrE;
        int matricule;
        string nom;
        int nbrNotes;
        float* tabNotes;
};

#endif // ETUDIANT_H
