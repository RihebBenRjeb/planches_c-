//Riheb BEN RJEB CPI2 GRP A
#ifndef COMPLEXE_H
#define COMPLEXE_H
#include <cmath>
class Complexe
{
    public:
        Complexe(double Re=0.0,double Img=0.0);
        void affichage()const;
        double module() const;
        Complexe conjugue() const;
        //somme
        friend Complexe sommeCC(const Complexe& c1,const Complexe& c2);
        friend Complexe sommeCD(const Complexe& c,double d);
        friend Complexe sommeDC(double d,const Complexe& c);
        //differance
        friend Complexe differanceCC(const Complexe& c1,const Complexe& c2);
        friend Complexe differanceCD(const Complexe& c,double d);
        friend Complexe differanceDC(double d,const Complexe& c);
        //produit
        friend Complexe produitCC(const Complexe& c1,const Complexe& c2);
        friend Complexe produitCD(const Complexe& c,double d);
        friend Complexe produitDC(double d,const Complexe& c);
    private:
        double Re,Img;
};

#endif // COMPLEXE_H
