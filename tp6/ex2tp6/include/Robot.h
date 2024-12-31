//Riheb BEN RJEB CPI2 GRP A
#ifndef ROBOT_H
#define ROBOT_H
#include<iostream>
#include "point.h"
using namespace std;
class Robot
{
    public:
        Robot(string nom,double x,double y,double portee,bool statut);
        string getNom()const;
        double getPortee()const;
        bool getStatut()const;
        Point getPosition()const;
        void setStatut(bool statut);
        virtual Robot* deplace(double dx,double dy)const;
        void afficher()const;
    private:
       string nom;
       Point position;
       double portee;
       bool statut;
};

#endif // ROBOT_H
