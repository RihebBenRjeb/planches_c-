//Riheb BEN RJEB CPI2 GRP A
#ifndef CERCLE_H
#define CERCLE_H
#include"Point.h"

class Cercle
{
    public:
        Cercle(double rayon=2.0,const Point& centre=Point());
        /*Cercle(double rayon=2.0,double x,double y);*/
        void afficher() const;
        double getRayon()const;
        Point getCentre()const;
        void setRayon(double r);
        void translation(double dx, double dy);
        double surface()const;
        double perimetre()const;
        static bool equals(const Cercle& c1,const Cercle& c2);
         static bool appartenance(const Cercle& c, const Point& p);

    private:
        Point centre;
        double rayon;
};

#endif // CERCLE_H
