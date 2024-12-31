//Riheb BEN RJEB CPI2 GRP A
#ifndef CAMION_H
#define CAMION_H
#include "Vehicule.h"

class Camion:public Vehicule
{
    public:
        Camion(int annee,double prix,double charge);
        virtual void accelerer()const override;
        void afficher()const override;
    private:
        double charge;

};

#endif // CAMION_H
