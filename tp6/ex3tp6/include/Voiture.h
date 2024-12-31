//Riheb BEN RJEB CPI2 GRP A
#ifndef VOITURE_H
#define VOITURE_H
#include "Vehicule.h"
class Voiture:public Vehicule
{
    public:
        Voiture(int annee,double prix,int place);
        virtual void accelerer()const override;
        void afficher()const override;
    private:
        int place;

};


#endif // VOITURE_H
