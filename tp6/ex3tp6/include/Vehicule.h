//Riheb BEN RJEB CPI2 GRP A
#ifndef VEHICULE_H
#define VEHICULE_H


class Vehicule
{
    public:
        Vehicule(int annee,double prix);
        virtual void accelerer()const;
        virtual void afficher() const;
        int getAnnee()const;
        double getPrix()const;
        int getNumero()const;
        int getSerie()const;
    private:
        int annee;
        double prix;
        static int nbr;
        int numero;
        static int nbrs;
        int serie;

};

#endif // VEHICULE_H
