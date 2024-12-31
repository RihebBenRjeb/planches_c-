//Riheb BEN RJEB CPI2 GRP A
#ifndef VECTEUR3D_H
#define VECTEUR3D_H
#include "Vecteur.h"

class vecteur3d:public Vecteur
{
    public:
        vecteur3d();
        vecteur3d(double x,double y, double z);
        void affiche()const override;
        vecteur3d deplaceX(double dx)const ;
        vecteur3d deplaceY(double dy)const ;
        vecteur3d deplaceZ (double dz)const;
        virtual ~vecteur3d();
    private:
        double z;
};

#endif // VECTEUR3D_H
