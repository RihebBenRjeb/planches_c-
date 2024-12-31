//Riheb BEN RJEB CPI2 GRP A

#ifndef VECTEUR3D_H
#define VECTEUR3D_H
#include <iostream>
#include <cmath>

class vecteur3d
{
    public:
        //constructeur
        vecteur3d(float x=0,float y=0,float z=0);
        void affichage()const;
        static vecteur3d somme(const vecteur3d& v1,const vecteur3d& v2);
        static float produit(const vecteur3d &v1,const vecteur3d &v2) ;
        static bool coincide(const vecteur3d& v1,const vecteur3d &v2) ;
        float norme()const;
        static vecteur3d normaxV(const vecteur3d &v1,const vecteur3d &v2) ;
        static vecteur3d* normaxA(const vecteur3d &v1,const vecteur3d &v2) ;
        static vecteur3d& normaxR(const vecteur3d &v1,const vecteur3d &v2) ;
    private:
        float x;
        float y;
        float z;
};

#endif // VECTEUR3D_H
