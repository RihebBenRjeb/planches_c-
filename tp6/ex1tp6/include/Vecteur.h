//Riheb BEN RJEB CPI2 GRP A
#ifndef VECTEUR_H
#define VECTEUR_H


class Vecteur
{
    public:
        Vecteur();
        Vecteur(double x,double y) ;
        double getX() const;
        double getY() const;
        virtual void affiche()const;
        Vecteur deplaceX(double dx) const;
        Vecteur deplaceY(double dy) const;
        virtual ~Vecteur();

    private:
        double x,y;
};

#endif // VECTEUR_H
